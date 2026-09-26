// Run tests/browser.mjs first to capture the matching 1024x576 browser frames.
import { readFile, writeFile, mkdir } from 'node:fs/promises';
import { execFileSync } from 'node:child_process';
import { PNG } from 'pngjs';

const executable = process.argv[2] || 'out/native-reference.exe';
const { instance: { exports: wasm } } = await WebAssembly.instantiate(await readFile('web/cracktro.wasm'));
await mkdir('out/verification', { recursive: true });
const results = [];
for (const time of [5, 30, 40]) {
  const prefix = `out/verification/native-${time}`;
  wasm.fill_uniforms(time, 1024, 576);
  await writeFile(`${prefix}.bin`, new Uint8Array(wasm.memory.buffer, wasm.uniforms(), 1024));
  execFileSync(executable, [`${prefix}.bin`, `${prefix}.rgba`, '1024', '576'], { stdio: 'inherit' });
  const native = new PNG({ width: 1024, height: 576 });
  native.data = await readFile(`${prefix}.rgba`);
  await writeFile(`${prefix}.png`, PNG.sync.write(native));
  const browser = PNG.sync.read(await readFile(`out/verification/frame-${time}.png`));
  if (browser.width !== 1024 || browser.height !== 576) throw new Error('Browser capture dimensions differ');
  let sum = 0, large = 0;
  for (let i = 0; i < native.data.length; i++) {
    if (i % 4 === 3) continue;
    const delta = Math.abs(native.data[i] - browser.data[i]);
    sum += delta;
    if (delta > 8) large++;
  }
  const channels = 1024 * 576 * 3;
  results.push({ time, meanAbsoluteChannelError: sum / channels, fractionOver8: large / channels });
}
console.table(results);
await writeFile('out/verification/native-comparison.json', JSON.stringify(results, null, 2) + '\n');


