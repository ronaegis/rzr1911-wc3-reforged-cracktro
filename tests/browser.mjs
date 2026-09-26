import assert from 'node:assert/strict';
import { createServer } from 'node:http';
import { readFile, mkdir } from 'node:fs/promises';
import { resolve, extname } from 'node:path';
import { chromium } from 'playwright';
import { PNG } from 'pngjs';
import { checkParticles } from './particles.mjs';

const root = resolve(process.env.TEST_WEB_ROOT || 'web');
const server = createServer(async (req, res) => {
  try {
    const path = resolve(root, '.' + new URL(req.url, 'http://localhost').pathname.replace(/\/$/, '/index.html'));
    if (!path.startsWith(root + '\\') && !path.startsWith(root + '/')) throw new Error('path');
    const bytes = await readFile(path);
    res.setHeader('Content-Type', { '.js': 'text/javascript', '.wasm': 'application/wasm', '.html': 'text/html' }[extname(path)] || 'application/octet-stream');
    res.end(bytes);
  } catch { res.writeHead(404).end(); }
});
await new Promise((done) => server.listen(0, '127.0.0.1', done));
const url = `http://127.0.0.1:${server.address().port}`;
const browser = await chromium.launch({ channel: process.env.BROWSER_CHANNEL || (process.platform === 'win32' ? 'msedge' : 'chromium'), headless: true, args: ['--enable-unsafe-webgpu'] });
await mkdir('out/verification', { recursive: true });
try {
  const page = await browser.newPage({ viewport: { width: 1024, height: 576 } });
  const errors = [];
  page.on('pageerror', (error) => errors.push(error.message));
  page.on('console', (message) => { if (message.type() === 'error' || message.text().includes('Error while')) errors.push(message.text()); });
  await page.addInitScript(() => {
    window.testTime = 0;
    performance.now = () => window.testTime;
    window.audioStarts = [];
    const original = AudioBufferSourceNode.prototype.start;
    AudioBufferSourceNode.prototype.start = function (...args) {
      const samples = this.buffer.getChannelData(0);
      let energy = 0;
      for (let i = 0; i < Math.min(samples.length, 44100); i++) energy += Math.abs(samples[i]);
      window.audioStarts.push({ offset: args[1], energy, duration: this.buffer.duration });
      return original.apply(this, args);
    };
  });
  await page.goto(url);
  await checkParticles(page);
  await page.waitForFunction(() => !document.querySelector('#start').disabled || /error|invalid|unavailable/i.test(document.querySelector('#status').textContent), null, { timeout: 60000 });
  assert.equal(await page.locator('#start').textContent(), 'Start demo');
  await page.evaluate(() => { window.testTime = 12000; });
  assert.equal(await page.locator('#replay').isDisabled(), true);
  assert.equal(await page.evaluate(() => window.audioStarts.length), 0);
  await page.locator('#start').click();
  await page.waitForFunction(() => document.querySelector('#start-screen').hidden, null, { timeout: 60000 });
  const initialSound = await page.evaluate(() => window.audioStarts.at(-1));
  assert.equal(initialSound.offset, 0, 'Start must play music from the beginning');
  assert(initialSound.energy > 1, 'Start must produce non-silent music');
  assert.equal(await page.locator('#sound').textContent(), 'Mute');
  assert.equal(await page.locator('#controls').isVisible(), false);
  assert.equal(await page.locator('#status').isVisible(), false);
  await page.mouse.move(10, 10);
  assert.equal(await page.locator('#controls').isVisible(), true);
  assert.equal(await page.locator('#status').isVisible(), true);
  await page.waitForFunction(() => document.querySelector('#controls').hidden, null, { timeout: 7000 });
  assert.equal(await page.locator('#status').isVisible(), false);
  await page.mouse.move(20, 20);
  assert.equal(await page.locator('#controls').isVisible(), true);
  assert.equal(await page.locator('#status').isVisible(), true);
  await page.locator('#sound').click();
  await page.evaluate(() => { window.testTime = 0; });
  await page.locator('#replay').click();
  assert.equal(await page.locator('#replay').isDisabled(), false, await page.locator('#status').textContent());
  let previous;
  for (const time of [0.1, 5, 15, 25, 30, 35, 40, 45, 50, 55, 60, 65]) {
    await page.evaluate((time) => { window.testTime = time * 1000; }, time);
    await page.waitForFunction((time) => document.querySelector('#status').textContent.includes(`${time.toFixed(2)} /`), time, { timeout: 60000 });
    await page.locator('#controls').evaluate((e) => { e.style.visibility = 'hidden'; });
    await page.locator('#status').evaluate((e) => { e.style.visibility = 'hidden'; });
    const bytes = await page.screenshot({ path: `out/verification/frame-${time}.png` });
    const png = PNG.sync.read(bytes);
    let lit = 0;
    for (let i = 0; i < png.data.length; i += 4) if (Math.max(png.data[i], png.data[i + 1], png.data[i + 2]) > 15) lit++;
    assert(lit > 50, `Black frame at ${time}s (${lit} lit pixels)`);
    if (previous) assert(!bytes.equals(previous), `Frozen frame at ${time}s`);
    previous = bytes;
    console.log(`${time}s: ${lit} lit pixels`);
    await page.locator('#controls').evaluate((e) => { e.style.visibility = ''; });
    await page.locator('#status').evaluate((e) => { e.style.visibility = ''; });
  }
  await page.setViewportSize({ width: 480, height: 640 });
  await page.mouse.move(30, 30);
  assert.deepEqual(await page.locator('canvas').evaluate((canvas) => ({
    width: canvas.width, height: canvas.height,
    displayWidth: canvas.clientWidth, displayHeight: canvas.clientHeight,
  })), { width: 1024, height: 576, displayWidth: 480, displayHeight: 640 });
  for (const width of [512, 2048, 1024]) {
    await page.locator('#resolution').selectOption(String(width));
    await page.evaluate(() => { window.testTime += 100; });
    await page.waitForFunction(() => document.querySelector('#status').textContent.includes(`${(window.testTime / 1000).toFixed(2)} /`));
    assert.deepEqual(await page.locator('canvas').evaluate((canvas) => [canvas.width, canvas.height, canvas.clientWidth, canvas.clientHeight]),
      [width, width * 9 / 16, 480, 640]);
  }
  await page.evaluate(() => { window.testTime = 80000; });
  await page.waitForFunction(() => document.querySelector('#status').textContent.includes('Finished'));
  await page.locator('#replay').click();
  await page.waitForFunction(() => document.querySelector('#status').textContent.includes('0.00 /'));
  await page.evaluate(() => { window.testTime += 5000; });
  await page.locator('#sound').click();
  await page.waitForFunction(() => document.querySelector('#sound').textContent === 'Mute', { timeout: 60000 });
  const sound = await page.evaluate(() => window.audioStarts.at(-1));
  assert.equal(sound.duration, 67);
  assert(sound.energy > 1, 'WASM music output was silent');
  assert(Math.abs(sound.offset - 5) < 0.1, `Audio offset ${sound.offset} was not synchronized`);
  await page.locator('#replay').click();
  assert.equal(await page.evaluate(() => window.audioStarts.at(-1).offset), 0);
  await page.locator('#sound').click();
  assert.equal(await page.locator('#sound').textContent(), 'Enable sound');
  assert.deepEqual(errors, []);
  await page.close();

  const broken = await browser.newPage();
  await broken.route('**/buffers/b0.bin', (route) => route.fulfill({ status: 200, body: Buffer.alloc(32768) }));
  await broken.goto(url);
  await broken.waitForFunction(() => document.querySelector('#status').textContent.includes('expected 131072 bytes'));
  await broken.close();
  const unsupported = await browser.newPage();
  await unsupported.addInitScript(() => Object.defineProperty(navigator, 'gpu', { value: undefined }));
  await unsupported.goto(url);
  await unsupported.waitForFunction(() => document.querySelector('#status').textContent.includes('WebGPU is unavailable'));
  await unsupported.close();
  console.log('PASS: timeline, nonblack changing frames, resize, end/replay, synchronized non-silent music, asset errors, unsupported browser');
} finally {
  await browser.close();
  await new Promise((done) => server.close(done));
}
