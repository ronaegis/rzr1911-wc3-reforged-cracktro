"""Extract the ASCII pass's typed buffers from the unpacked release.

The constructor's lengths count 32-bit elements, NOT bytes. Text cells
contain three elements; each font pixel occupies one element.
Offsets are file offsets in cracktro.unpacked.exe (the .data RVA is +0x2000).
"""
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
BUFFERS = {
    "b0": (0x37B7C0, 32768),
    "b1": (0x25520, 354960),
    "b2": (0x317E00, 51120),
    "b3": (0x45C320, 342720),
    "b4": (0x1BD020, 354960),
    "b5": (0x5BD700, 354960),
    "b6": (0x3FE720, 96000),
    "b10": (0x25460, 48),
    "b12": (0x718140, 32768),
    "geometry-font": (0x3D7550, 32768),
}


def main():
    data = (ROOT / "original/unpacked/cracktro.unpacked.exe").read_bytes()
    for name, (offset, count) in BUFFERS.items():
        block = data[offset:offset + count * 4]
        if len(block) != count * 4:
            raise ValueError(f"Truncated executable at {name}")
        (ROOT / f"web/buffers/{name}.bin").write_bytes(block)
        print(f"{name}: {count} elements, {len(block)} bytes")


if __name__ == "__main__":
    main()
