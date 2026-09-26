"""Prepare the recovered shaders for WebGPU without replacing their effects.

Most shaders already have WGSL exports. DXC + spv2wgsl are needed only for
shader_11 and shader_13, whose typed buffers blocked the original export.
All generated WGSL is checked in; this is an optional regeneration step.
"""
from pathlib import Path
import argparse
import re
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'web/shaders'
COPY = {2: 'particles', 3: 'mirror-final', 4: 'composite', 6: 'geometry-fragment',
        7: 'blur-final', 8: 'feedback', 9: 'mirror-scene', 10: 'blur-scene', 15: 'copy'}


def flatten_sums(source):
    """Lift nested float expressions into lets, retaining evaluation order.

    The unrolled 17x17 filters exceed Tint's parser recursion limit. Moving
    subexpressions into locals avoids that limit without regrouping sums.
    """
    result, serial = [], 0
    for line in source.splitlines():
        if len(line) > 1000 and ' = ' in line:
            indent = line[:len(line) - len(line.lstrip())]
            pending = []
            while True:
                stack, choice = [], None
                for i, char in enumerate(line):
                    if char == '(':
                        stack.append(i)
                    elif char == ')':
                        start = stack.pop()
                        fragment = line[start:i + 1]
                        if len(fragment) > 300 and (start == 0 or not re.match(r'[\w]', line[start - 1])):
                            choice = (start, i + 1, fragment)
                            break
                if choice is None:
                    break
                start, end, expression = choice
                temp = f'split_{serial}'
                serial += 1
                pending.append(f'{indent}let {temp}: f32 = {expression};')
                line = line[:start] + temp + line[end:]
            result.extend(pending)
        result.append(line)
    return '\n'.join(result) + '\n'


def share_particle_simulation(source):
    """Run each time slice once, retaining the sequential collision solver.

    Every original lane simulated the entire particle set but wrote only its
    own particle. The lane's low seven ID bits affect only the output index.
    Two invocations now simulate the two time slices and write all particles.
    """
    for name in ('local', 'local_1', 'local_2'):
        declaration = f'    var {name}: array<u32, 512>;'
        assert source.count(declaration) == 1
        source = f'var<workgroup> {name}: array<u32, 512>;\n' + source.replace(declaration, '')
    # Keep the particle being updated in registers throughout the inner loop.
    # Later pairs still see each preceding update in exactly the same order.
    source = source.replace('                                phi_330_ = _e255;', '''                                let current = _e254 * 4u;
                                var current_y = local[current | 1u];
                                var current_z = local[current | 2u];
                                phi_330_ = _e255;''')
    source = source.replace('let _e267: u32 = local[(_e262 | 1u)];', 'let _e267: u32 = current_y;')
    source = source.replace('let _e270: u32 = local[(_e262 | 2u)];', 'let _e270: u32 = current_z;')
    source = source.replace('local[(_e262 | 1u)] =', 'current_y =')
    source = source.replace('local[(_e262 | 2u)] =', 'current_z =')
    end_loop = '''                                        break if (_e343 == _e80);
                                    }
                                }'''
    assert source.count(end_loop) == 1
    source = source.replace(end_loop, end_loop + '''
                                local[current | 1u] = current_y;
                                local[current | 2u] = current_z;''')
    source = source.replace('let _e62: u32 = global[0u];', '''let _e62: u32 = global[0u] * 128u;
    for (var particle = 0u; particle < 128u; particle++) {
        let offset = (_e62 + particle) * 4u;
        U0_.member[offset] = 0u;
        U0_.member[offset + 1u] = 0u;
        U0_.member[offset + 2u] = 0u;
        U0_.member[offset + 3u] = 0u;
    }''')
    start = '            let _e387: u32 = (_e82 << bitcast<u32>(2u));'
    assert source.count(start) == 1
    source = source.replace(start, '''            for (var particle = 0u; particle < _e80; particle++) {
            let _e82 = particle;
            let _e62 = global[0u] * 128u + particle;
''' + start)
    end = '            U0_.member[((_e62 * 4u) + 3u)] = _e446;'
    assert source.count(end) == 1
    source = source.replace(end, end + '\n            }')
    return source.replace('@workgroup_size(8, 1, 1)', '@workgroup_size(1, 1, 1)')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--dxc', required=True, type=Path)
    parser.add_argument('--spv2wgsl', required=True, type=Path)
    args = parser.parse_args()
    for number, name in COPY.items():
        original = next((ROOT / 'decompile/wgsl').glob(f'shader_{number:02d}_*.wgsl'))
        source = original.read_text()
        if name == 'particles':
            source = share_particle_simulation(source)
        # Targets have one mip. Explicit LOD preserves the sampling and allows
        # the nonuniform control flow of the recovered DXBC in WebGPU.
        source = re.sub(r'textureSample\(([^;]+)\);', r'textureSampleLevel(\1, 0.0);', source)
        if name in ('blur-scene', 'blur-final', 'feedback'):
            source = flatten_sums(source)
        (OUT / f'{name}.wgsl').write_text(source)

    with tempfile.TemporaryDirectory() as temp:
        for original, stage, name, scalar in [
            ('shader_11_0x3F78F0', 'ps', 'scene', 'uint'),
            ('shader_13_0x5AF460', 'vs', 'geometry', 'int'),
        ]:
            source = (ROOT / f'decompile/hlsl/{original}.hlsl').read_text()
            # The D3D SRV is R32_UINT/SINT: Load(i).x reads ONE scalar, not a
            # uint4 stride. The unused lanes can be zero in the wrapper.
            source = source.replace(f'Buffer<{scalar}4> T0 : register(t0);',
                f'StructuredBuffer<{scalar}> T0 : register(t0);\n'
                f'{scalar}4 loadT0(uint index) {{ return {scalar}4(T0[index], 0, 0, 0); }}')
            source = source.replace('T0.Load(', 'loadT0(')
            # These two decompiler float temporaries hold boolean flags.
            # Their only consumers test asuint(flag) == 0. A finite nonzero
            # value preserves the branch and avoids invalid NaN WGSL literals.
            if name == 'scene':
                assert source.count('asfloat(4294967295u)') == 2
                source = source.replace('asfloat(4294967295u)', 'asfloat(1065353216u)')
            source = re.sub(r'cbuffer SPIRV_Cross_VertexInfo\s*\{.*?\};', '', source, flags=re.S)
            source = source.replace('SPIRV_Cross_BaseVertex', '0').replace('SPIRV_Cross_BaseInstance', '0')
            hlsl, spv = Path(temp) / f'{name}.hlsl', Path(temp) / f'{name}.spv'
            hlsl.write_text(source)
            subprocess.run([str(args.dxc.resolve()), '-spirv', '-T', stage + '_6_0', '-E', 'main',
                            '-fvk-s-shift', '16', '0', '-Fo', str(spv), str(hlsl)], check=True)
            target = OUT / f'{name}.wgsl'
            subprocess.run([str(args.spv2wgsl.resolve()), str(spv), str(target)], check=True)
            if name == 'geometry':
                target.write_text(target.read_text().replace('@location(1) member_1:', '@location(1) @interpolate(flat) member_1:'))


if __name__ == '__main__':
    main()
