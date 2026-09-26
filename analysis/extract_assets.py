"""Extract DXBC shaders, the XM module, and reflection from the unpacked cracktro."""
from __future__ import annotations

import ctypes
import struct
from ctypes import wintypes
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
EXE = ROOT / "original" / "unpacked" / "cracktro.unpacked.exe"
OUT = ROOT / "decompile"
SHADERS = OUT / "shaders"
ASSETS = OUT / "assets"

D3D_DISASM_ENABLE_DEFAULT_VALUE_PRINTS = 0x1


class ID3DBlob(ctypes.Structure):
    pass


def disassemble(blob: bytes) -> str:
    d3dc = ctypes.WinDLL(r"C:\Windows\System32\d3dcompiler_47.dll")
    d3dc.D3DDisassemble.argtypes = [
        ctypes.c_void_p,
        ctypes.c_size_t,
        ctypes.c_uint,
        ctypes.c_char_p,
        ctypes.POINTER(ctypes.c_void_p),
    ]
    d3dc.D3DDisassemble.restype = ctypes.c_long
    buf = ctypes.create_string_buffer(blob)
    out = ctypes.c_void_p()
    hr = d3dc.D3DDisassemble(
        ctypes.cast(buf, ctypes.c_void_p),
        len(blob),
        D3D_DISASM_ENABLE_DEFAULT_VALUE_PRINTS,
        None,
        ctypes.byref(out),
    )
    if hr < 0 or not out.value:
        return f"; D3DDisassemble failed hr=0x{hr & 0xFFFFFFFF:08X} size={len(blob)}\n"
    vtbl = ctypes.cast(out, ctypes.POINTER(ctypes.c_void_p))[0]
    # IUnknown: QI, AddRef, Release, GetBufferPointer, GetBufferSize
    get_ptr = ctypes.cast(ctypes.cast(vtbl, ctypes.POINTER(ctypes.c_void_p))[3], ctypes.CFUNCTYPE(ctypes.c_void_p, ctypes.c_void_p))
    get_size = ctypes.cast(ctypes.cast(vtbl, ctypes.POINTER(ctypes.c_void_p))[4], ctypes.CFUNCTYPE(ctypes.c_size_t, ctypes.c_void_p))
    release = ctypes.cast(ctypes.cast(vtbl, ctypes.POINTER(ctypes.c_void_p))[2], ctypes.CFUNCTYPE(ctypes.c_ulong, ctypes.c_void_p))
    ptr = get_ptr(out)
    size = get_size(out)
    text = ctypes.string_at(ptr, size).decode("utf-8", "replace")
    release(out)
    return text


def iter_dxbc(data: bytes):
    start = 0
    while True:
        i = data.find(b"DXBC", start)
        if i < 0:
            return
        if i + 32 > len(data):
            return
        version, size, chunks = struct.unpack_from("<III", data, i + 20)
        if version == 1 and 32 <= size <= len(data) - i and 1 <= chunks <= 64:
            yield i, size, data[i : i + size]
            start = i + size
        else:
            start = i + 4


def chunk_map(blob: bytes) -> dict[bytes, bytes]:
    chunks = struct.unpack_from("<I", blob, 28)[0]
    out = {}
    for n in range(chunks):
        off = struct.unpack_from("<I", blob, 32 + n * 4)[0]
        fourcc = blob[off : off + 4]
        size = struct.unpack_from("<I", blob, off + 4)[0]
        out[fourcc] = blob[off + 8 : off + 8 + size]
    return out


def cstr(buf: bytes, off: int) -> str:
    end = buf.find(b"\x00", off)
    return buf[off:end].decode("latin1", "replace")


def parse_rdef(rdef: bytes) -> dict:
    """Best-effort RDEF parser for SM5 constant buffers and bindings."""
    if len(rdef) < 32:
        return {"error": "short"}
    cb_count, cb_off, res_count, res_off, _maj, _min, _flags, compiler_off = struct.unpack_from(
        "<IIIIIIII", rdef, 0
    )
    compiler = cstr(rdef, compiler_off) if compiler_off < len(rdef) else ""
    buffers = []
    for i in range(cb_count):
        base = cb_off + i * 24
        name_off, var_count, var_off, size, flags, typ = struct.unpack_from("<IIIIII", rdef, base)
        variables = []
        for v in range(var_count):
            vb = var_off + v * 40
            if vb + 24 > len(rdef):
                break
            vname_off, vstart, vsize, vflags, vtype_off, _def = struct.unpack_from("<IIIIII", rdef, vb)
            variables.append(
                {
                    "name": cstr(rdef, vname_off),
                    "offset": vstart,
                    "size": vsize,
                }
            )
        buffers.append(
            {
                "name": cstr(rdef, name_off),
                "size": size,
                "type": typ,
                "variables": variables,
            }
        )
    resources = []
    for i in range(res_count):
        base = res_off + i * 32
        if base + 16 > len(rdef):
            break
        name_off, _type, ret, dim, num, bind, bind_count, flags = struct.unpack_from("<IIIIIIII", rdef, base)
        resources.append(
            {
                "name": cstr(rdef, name_off),
                "type": _type,
                "bind": bind,
                "count": bind_count,
            }
        )
    return {"compiler": compiler, "buffers": buffers, "resources": resources}


def shader_model(blob: bytes) -> str:
    chunks = chunk_map(blob)
    for key in (b"SHEX", b"SHDR"):
        if key in chunks:
            ver = struct.unpack_from("<I", chunks[key], 0)[0]
            major = (ver >> 4) & 0xF
            minor = ver & 0xF
            kind = {0xFFFF: "ps", 0xFFFE: "vs", 0: "ps"}.get(ver >> 16, f"k{(ver >> 16) & 0xFFFF:04x}")
            # SM5 version word: high bits encode type
            prog = (ver >> 16) & 0xFFFF
            names = {0: "ps", 1: "vs", 2: "gs", 3: "hs", 4: "ds", 5: "cs"}
            # Actually for SM4+ the version token is: type in bits 16-31? 
            # D3D10_SB_TOKENIZED_PROGRAM_TYPE is in bits 16..31? Let's print raw too.
            return f"ver=0x{ver:08X} type={names.get(prog, prog)} {major}.{minor}"
    return "unknown"


def extract_xm(data: bytes) -> bytes:
    sig = b"Extended Module: "
    i = data.find(sig)
    if i < 0:
        raise SystemExit("XM not found")
    # header size at offset 60
    header_size = struct.unpack_from("<I", data, i + 60)[0]
    # song length, restart, channels, patterns, instruments follow
    song_len, restart, channels, patterns, instruments = struct.unpack_from("<HHHHI", data, i + 64)
    # After header: patterns then instruments. Walk them.
    pos = i + 60 + header_size
    for _ in range(patterns):
        if pos + 9 > len(data):
            break
        pat_header = struct.unpack_from("<I", data, pos)[0]
        pat_rows = struct.unpack_from("<H", data, pos + 5)[0]
        packed = struct.unpack_from("<H", data, pos + 7)[0]
        pos += pat_header + packed
    for _ in range(instruments):
        if pos + 4 > len(data):
            break
        inst_size = struct.unpack_from("<I", data, pos)[0]
        # sample header count is at offset 27 of the original XM spec when size>=29,
        # but instrument header can be larger. Number of samples is uint16 at offset 27
        # only if we are looking at the standard header. Use the declared size.
        if inst_size < 29 or pos + inst_size > len(data):
            break
        num_samples = struct.unpack_from("<H", data, pos + 27)[0]
        pos += inst_size
        if num_samples == 0:
            continue
        # sample headers are 40 bytes each in standard XM
        sample_sizes = []
        for _s in range(num_samples):
            if pos + 40 > len(data):
                break
            sample_sizes.append(struct.unpack_from("<I", data, pos)[0])
            pos += 40
        for sz in sample_sizes:
            pos += sz
    end = pos
    return data[i:end], {
        "offset": i,
        "end": end,
        "song_len": song_len,
        "restart": restart,
        "channels": channels,
        "patterns": patterns,
        "instruments": instruments,
        "name": data[i + 17 : i + 37].split(b"\x00")[0].decode("latin1", "replace"),
        "tracker": data[i + 38 : i + 58].split(b"\x00")[0].decode("latin1", "replace"),
    }


def main() -> None:
    data = EXE.read_bytes()
    SHADERS.mkdir(parents=True, exist_ok=True)
    ASSETS.mkdir(parents=True, exist_ok=True)
    report = []
    seen = set()
    n = 0
    for off, size, blob in iter_dxbc(data):
        if blob in seen:
            continue
        seen.add(blob)
        n += 1
        chunks = chunk_map(blob)
        meta = parse_rdef(chunks.get(b"RDEF", b"")) if b"RDEF" in chunks else {}
        model = shader_model(blob)
        # entry name from disassembly first line later
        stem = f"shader_{n:02d}_0x{off:X}"
        (SHADERS / f"{stem}.dxbc").write_bytes(blob)
        asm = disassemble(blob)
        (SHADERS / f"{stem}.asm").write_text(asm, encoding="utf-8")
        first = ""
        for line in asm.splitlines():
            if line.startswith("//"):
                continue
            if line.strip():
                first = line.strip()
                break
        binds = []
        for b in meta.get("buffers", []):
            binds.append(f"cb {b['name']} size={b['size']} vars={len(b['variables'])}")
        for r in meta.get("resources", []):
            binds.append(f"res {r['name']} type={r['type']} bind={r['bind']} count={r['count']}")
        report.append(f"{stem} size={size} {model} entry='{first}'")
        for line in binds:
            report.append("   " + line)
        if meta.get("buffers"):
            lines = [f"// {stem}", ""]
            for b in meta["buffers"]:
                lines.append(f"cbuffer {b['name']} // size {b['size']}")
                for v in b["variables"]:
                    lines.append(f"  +{v['offset']:4d} {v['size']:4d} {v['name']}")
                lines.append("")
            (SHADERS / f"{stem}.rdef.txt").write_text("\n".join(lines), encoding="utf-8")
        print(report[-1 - len(binds) if binds else -1])

    xm, info = extract_xm(data)
    (ASSETS / "music.xm").write_bytes(xm)
    report.append("")
    report.append(
        f"XM name={info['name']!r} tracker={info['tracker']!r} "
        f"off=0x{info['offset']:X}-0x{info['end']:X} len={len(xm)} "
        f"patterns={info['patterns']} instruments={info['instruments']} channels={info['channels']} song_len={info['song_len']}"
    )
    (OUT / "assets_report.txt").write_text("\n".join(report) + "\n", encoding="utf-8")
    print("XM", info)
    print("shaders", n)


if __name__ == "__main__":
    main()
