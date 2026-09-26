import { test } from 'node:test';
import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';
import { BUFFER_ELEMENTS, loadAsciiAssets, asciiSource } from '../web/assets.js';
const fetchBytes = async (url) => new Uint8Array(await readFile(new URL('../web/' + url, import.meta.url))).buffer;

test('complete original fonts, palette and all text pages are present', async () => {
  const assets = await loadAsciiAssets(fetchBytes);
  assert.equal(assets.bytes.length, Object.values(BUFFER_ELEMENTS).reduce((sum, n) => sum + n * 4, 0));
  const font = new Uint32Array(await fetchBytes('./buffers/b0.bin'));
  assert(font.slice(219 * 128, 220 * 128).every((pixel) => pixel === 1), 'full block glyph was truncated');
  const palette = new Float32Array(await fetchBytes('./buffers/b10.bin'));
  assert(palette[45] > 0.9 && palette[46] > 0.9 && palette[47] > 0.9, 'white palette entry was truncated');
  const alternate = new Uint32Array(await fetchBytes('./buffers/b12.bin'));
  // The original has three distinct descriptors holding identical font bytes.
  assert.equal(alternate.length, 32768);
  assert(alternate.slice(65 * 128, 66 * 128).some((pixel) => pixel === 1));
  const source = asciiSource(await readFile(new URL('../web/shaders/ascii.wgsl', import.meta.url), 'utf8'), assets.offsets);
  assert.equal((source.match(/var<storage/g) || []).length, 1);
  assert(!/T\d+_\.member/.test(source));
});

test('reject old quarter-sized assets before issuing GPU work', async () => {
  await assert.rejects(loadAsciiAssets(async (url) => (await fetchBytes(url)).slice(0, 16)), /expected .* received 16/);
});
