# Credits and provenance

Original production: **RZR D Cracktro 03 — Warcraft III: Reforged**,
Razor 1911 demo division.

- Code: **Anat & Dubmood**
- Graphics: **GOTO80**
- Music: **zabutom**, XM module “where do I start?”

Credits follow the release's `file_id.diz`; that file gives the date
2026-09-08. The original release archive is hosted on
[scene.org](https://files.scene.org/get/demos/groups/razor_1911/windows/rzr_d_cracktro_03-warcraft3_reforged.zip).

The `decompile/` directory contains extracted data and generated shader/C
translations. `web/buffers/` contains the original font, text and palette
data. `web/native/` and the browser renderer adapt the recovered routines
and pass sequence for WebAssembly/WebGPU; they are not original source files.
The obsolete hand-written panel renderer is not part of the current player.

The music player uses the **xmrs** and **xmrsplayer** Rust crates with
**wasm-bindgen**. Shader preparation uses **DXC**, **Naga**, and the included
SPIR-V-to-WGSL utility; C recovery used **Ghidra**. Dependency versions are
recorded in the npm and Cargo lockfiles.

Original code, artwork and music belong to their respective creators.
This repository does not assign a new license to those materials. No
repository-wide license has been selected; third-party components retain
their own licenses.
