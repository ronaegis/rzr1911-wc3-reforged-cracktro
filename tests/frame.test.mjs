import { test } from 'node:test';
import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';

async function frame() {
  const { instance } = await WebAssembly.instantiate(await readFile(new URL('../web/cracktro.wasm', import.meta.url)));
  const e = instance.exports;
  return { e, at(time, width = 1920, height = 1080) { e.fill_uniforms(time, width, height); return new Float32Array(e.memory.buffer, e.uniforms(), 256).slice(); } };
}

test('WASM camera and all sync values remain finite across the entire intro', async () => {
  const { at } = await frame();
  for (let t = 0; t <= 67; t += 0.125) {
    const u = at(t);
    assert(u.every(Number.isFinite), `Nonfinite uniform at ${t}`);
    assert.equal(u[0], t);
    assert(Math.abs(u[3] - 16 / 9) < 1e-6);
  }
});

test('frame counter is an integer and roll composes after view', async () => {
  const { at } = await frame();
  at(0);
  const u = at(30);
  assert.equal(new Uint32Array(u.buffer)[1], 1);
  // At 30s the original camera is (0,0,-16), direction (0,0,25).
  assert(Math.abs(u[22] + 400) < 0.001);
  const r = at(3.15);
  const angle = r[159] * Math.PI / 180;
  const x = r[152], y = r[153];
  // Row-major view * roll: translation must rotate with the camera roll.
  assert(Math.abs(r[20] - (-x * Math.cos(angle) - y * Math.sin(angle))) < 1e-4);
  assert(Math.abs(r[21] - (-x * Math.sin(angle) + y * Math.cos(angle))) < 1e-4);
});

test('sync pages change and replay resets elapsed time', async () => {
  const { at } = await frame();
  const early = at(30), late = at(50);
  assert.notEqual(early[246], late[246]);
  const restart = at(0);
  assert.equal(restart[2], 0);
  assert.equal(restart[246], 0);
});
