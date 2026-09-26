import { cp, mkdir, access, rm } from 'node:fs/promises';
import { fileURLToPath } from 'node:url';

const root = new URL('../', import.meta.url);
const files = [
  'index.html', 'player.js', 'assets.js', 'presentation.js', 'cracktro.wasm',
  'buffers', 'shaders', 'engine/pkg/engine.js', 'engine/pkg/engine_bg.wasm',
];
// Check the build before copying anything; npm run build produces engine/pkg.
for (const file of files) await access(new URL(`web/${file}`, root));
// This fixed, repository-local directory is generated output only.
const output = new URL('dist/', root);
if (new URL('../', output).href !== root.href) throw new Error('Invalid output directory');
await rm(output, { recursive: true, force: true });
for (const file of files) {
  const destination = new URL(`dist/${file}`, root);
  await mkdir(new URL('.', destination), { recursive: true });
  await cp(new URL(`web/${file}`, root), destination, { recursive: true });
}
console.log(`Static site ready: ${fileURLToPath(new URL('dist/', root))}`);
