// Counts from FUN_140001534's buffer descriptors, in 32-bit elements.
export const BUFFER_ELEMENTS = {
  b0: 32768, b1: 354960, b2: 51120, b3: 342720, b4: 354960,
  b5: 354960, b6: 96000, b10: 48, b12: 32768,
};

export async function loadAsciiAssets(fetchBytes) {
  const blocks = await Promise.all(Object.entries(BUFFER_ELEMENTS).map(async ([name, count]) => {
    const bytes = new Uint8Array(await fetchBytes(`./buffers/${name}.bin`));
    if (bytes.byteLength !== count * 4) {
      throw new Error(`${name}: expected ${count * 4} bytes, received ${bytes.byteLength}. Re-extract the original buffers.`);
    }
    return { name, bytes };
  }));
  const offsets = {};
  const bytes = new Uint8Array(blocks.reduce((sum, block) => sum + block.bytes.length, 0));
  let offset = 0;
  for (const block of blocks) {
    offsets[block.name] = offset / 4;
    bytes.set(block.bytes, offset);
    offset += block.bytes.length;
  }
  return { bytes, offsets };
}

export function asciiSource(code, offsets) {
  // D3D typed SRVs become slices of one storage buffer. This preserves the
  // recovered shader operations and works with WebGPU's default limits.
  const names = ['b0', 'b1', 'b2', 'b3', 'b4', 'b5', 'b6', 'b6', 'b6', 'b6', 'b10', 'b12'];
  code = code.replace(/@group\(0\) @binding\(\d+\)\s*var<storage, read> T\d+_: T\d+SSBO;/g, '');
  code = code.replace(/T(\d+)_\.member\[([^\[\]]+)\]/g, (_, binding, index) => {
    const name = names[Number(binding)];
    return `read_asset(${offsets[name]}u, ${BUFFER_ELEMENTS[name]}u, ${index})`;
  });
  if (/T\d+_\.member/.test(code)) throw new Error("Unmapped ASCII buffer access");
  return `@group(0) @binding(0) var<storage, read> assets: T0SSBO;
fn read_asset(offset: u32, count: u32, index: u32) -> u32 {
  // D3D returns zero outside each SRV, including the shorter third layer.
  if (index >= count) { return 0u; }
  return assets.member[offset + index];
}
${code}`;
}
