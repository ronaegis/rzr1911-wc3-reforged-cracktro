import { execFileSync } from 'node:child_process';
import { existsSync } from 'node:fs';
import { fileURLToPath } from 'node:url';

const cwd = fileURLToPath(new URL('.', import.meta.url));
const windowsClang = 'C:/Program Files/LLVM/bin/clang.exe';
const clang = process.env.CLANG || (process.platform === 'win32' && existsSync(windowsClang) ? windowsClang : 'clang');
execFileSync(clang, [
  '--target=wasm32', '-O2', '-fno-builtin', '-nostdlib', 'native/decompiled_frame.c',
  '-Wl,--no-entry', '-Wl,--export=fill_uniforms', '-Wl,--export=uniforms',
  '-Wl,--export=FUN_14001c744', '-Wl,--export-memory', '-o', 'cracktro.wasm',
], { cwd, stdio: 'inherit' });
execFileSync(process.platform === 'win32' ? 'wasm-pack.exe' : 'wasm-pack', [
  'build', 'engine', '--target', 'web', '--release', '--out-dir', 'pkg', '--locked',
], { cwd, stdio: 'inherit' });
