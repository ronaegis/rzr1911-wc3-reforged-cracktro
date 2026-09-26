# Recovered rendering sequence

`FUN_140001534` is too large for the original Ghidra decompile, but its
disassembly specifies the complete pass list. The registrations at
`0x140016f1e` through `0x1400170bc` order the passes as follows:

| Pass | Original shader | Input | Output |
|---|---|---|---|
| Particle update | 02 compute | Sync uniforms | 256 float4 particle records |
| Scene | 11 fragment, fullscreen vertex | Particle records | Scene texture |
| Glyph geometry | 13 vertex, 06 fragment | Scene texture, font | Geometry texture + depth |
| Scene mirror | 09 | Geometry | Mirrored scene |
| ASCII | 12 vertex, 05 fragment | Fonts, text pages, palette | ASCII layer |
| Scene blur | 10 | Mirrored scene | Blurred scene |
| Composite | 04 | Blurred scene, ASCII | Combined layers |
| Decay/distortion | 08 | Combined layers | Filtered layers |
| Final blur | 07 | Filtered layers | Blurred layers |
| Final mirror | 03 | Blurred layers | Final render target |
| Present | 14 vertex, 15 fragment | Final render target | Canvas |

The final vertex shader flips Y, unlike the other fullscreen shaders. Both
glyph and ASCII draws use constructor blend mode 2 (source alpha / inverse
source alpha for RGB, source alpha replacing destination alpha). Glyph
geometry also uses a depth buffer. Intermediate textures
use `rgba16float` to retain shader values above 1 until presentation.

The geometry vertex shader rejects instance rows >= 96; the browser omits
those dead instances and draws `256 * 96 * 128` instances instead. When
SCENE_ONE is disabled in the composite shader, the unused scene and geometry
draws, particle updates, scene mirror and scene blur are skipped. Particle
positions are computed from absolute time, so resuming does not need previous
frames. There is no substitute panel
renderer: all effects come from the recovered shader operations.

The original ASCII buffers are scalar R32 typed SRVs. Three scalars form a
text cell; three floats form a palette entry. Constructor lengths count
scalars. `assets.js` packs these buffers into a single WebGPU storage binding
and inserts per-buffer bounds checks to retain D3D's zero-valued out-of-range
reads. Bindings 6–9 share the same text data. The three original font
descriptors have distinct addresses but contain identical bytes.

`analysis/prepare_web_shaders.py` reproduces the browser adaptations. The
previous conversion of shaders 11/13 failed on typed texture buffers and
NaN-valued boolean temporaries. Scalar storage loads and finite flag values
preserve their semantics. The very long unrolled filter expressions are
split into local expressions without changing addition order. Single-mip
texture samples use LOD 0 so nonuniform DXBC branches pass WGSL validation.

The WASM frame module retains the original sync interpolation, camera
direction magnitude, field of view and matrix layout. Its matrix product
uses the original row-major ordering; the integer frame counter is written
as integer bits. Only matrix fields consumed by these shaders are populated.

The browser executes translated WGSL, not DXBC directly. A Windows offscreen
reference in `tools/native-reference/main.cpp` executes the original DXBC
from the unpacked executable with the same WASM uniforms and extracted assets.
Build it from the repository root with Clang and the Windows SDK:

```powershell
clang++ tools/native-reference/main.cpp -O2 -ld3d11 -o out/native-reference.exe
npm run test:browser
node tools/native-reference/compare.mjs
```

The comparison writes native PNGs and a JSON report under `out/verification`.
An earlier comparison at 640×360 sampled 5, 30 and 40 seconds with mean absolute RGB channel
errors of 0.15, 2.44 and 0.77 respectively on the 0–255 scale. These are close
but not pixel-identical. This checks shader translation against a reconstructed
pass chain; it does not independently validate the WASM camera/sync code or
every render state against the complete original executable. GPU precision
and the XM mixer may also differ from the original runtime. The comparison
script now uses the default 1024×576 rendering resolution.

## Performance investigation

The player permits at most two submitted frames in flight. Previously it
waited for GPU completion before requesting the next animation frame, which
serialized submission and could miss display refresh opportunities.

With the local server running, `node tools/profile-browser.mjs` measures 20
frames at 30 seconds using GPU timestamp queries (development only). Two
headless Edge runs on the NVIDIA Ampere adapter at 1024×576 measured roughly
7.5–8.3 ms for particle compute, 2.5–2.7 ms for glyph geometry, 1.9 ms for
ASCII, and 1.1 ms for the scene. These are pass timings, not measured FPS or
a native/browser speed ratio. The original executable has not been timed
under identical conditions.

The initial translated compute shader had three 512-element private arrays per
invocation and nested particle-pair loops. Glyph geometry initially invoked its vertex
shader 18,874,368 times per visible frame. Neither workload shrinks with the
canvas resolution. Lower resolution primarily reduces fragment processing;
it cannot remove those fixed costs. Further optimization should target these
passes and verify the resulting images against the original bytecode.

### Implemented optimizations

The particle simulation now runs once for each of its two time slices instead
of repeating the full collision solver for every output particle. Each of two
single-invocation workgroups uses 6 KB of shared memory and writes all 128
output slots. The currently updated particle stays in registers during the
inner loop; collision ordering and arithmetic are unchanged. This reduced the
measured particle pass from about 7.5 ms to 5.5–6.0 ms at 30 seconds on the
same adapter. This is a pass-level improvement, not an overall FPS guarantee.

Glyph quads use indices `[0, 1, 2, 2, 1, 5]`, allowing reuse of the two
duplicate vertices while retaining the original vertex IDs and triangles.
Scene-only passes are skipped whenever their output is unused by compositing.

`npm run test:browser` compares all 256 particle records against the unmodified
recovered shader across 15 time/count cases, including counts 0 and 128 and
shrinking reused buffers. All records matched bit for bit locally. Twelve
full-frame captures across the timeline also matched pre-optimization captures
pixel for pixel. Glyph-selection caching was investigated but not retained
because it did not show a measurable benefit.

