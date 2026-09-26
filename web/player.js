import { loadAsciiAssets, asciiSource } from "./assets.js";
import { createPresentation } from "./presentation.js";

const status = document.querySelector("#status");
const canvas = document.querySelector("#view");
const soundButton = document.querySelector("#sound");
const replayButton = document.querySelector("#replay");
const startButton = document.querySelector("#start");
const startScreen = document.querySelector("#start-screen");
const resolutionSelect = document.querySelector("#resolution");
resolutionSelect.addEventListener("change", () => {
  canvas.width = Number(resolutionSelect.value);
  canvas.height = canvas.width * 9 / 16;
});
const DURATION = 67;

async function fetchBytes(url) {
  const response = await fetch(url);
  if (!response.ok) throw new Error(`${url}: HTTP ${response.status}`);
  return response.arrayBuffer();
}

async function shader(device, url, transform = (code) => code) {
  const code = transform(new TextDecoder().decode(await fetchBytes(url)));
  const module = device.createShaderModule({ code, label: url });
  const info = await module.getCompilationInfo();
  const errors = info.messages.filter((m) => m.type === "error");
  if (errors.length) throw new Error(errors.map((m) => `${url}:${m.lineNum}: ${m.message}`).join("\n"));
  return module;
}

async function main() {
  if (!navigator.gpu) throw new Error("WebGPU is unavailable. Open this page on localhost or HTTPS in a WebGPU-enabled browser.");
  const adapter = await navigator.gpu.requestAdapter();
  if (!adapter) throw new Error("No WebGPU adapter is available.");
  const device = await adapter.requestDevice();
  let stopped = false;
  function gpuFailure(message) {
    stopped = true;
    status.textContent = message;
  }
  device.addEventListener("uncapturederror", (event) => gpuFailure(event.error.message));
  device.lost.then((info) => gpuFailure(`Graphics device lost: ${info.message}. Reload to restart.`));
  const context = canvas.getContext("webgpu");
  const format = navigator.gpu.getPreferredCanvasFormat();
  context.configure({ device, format, alphaMode: "opaque" });

  const [frameModule, assets] = await Promise.all([
    fetchBytes("./cracktro.wasm").then((bytes) => WebAssembly.instantiate(bytes)),
    loadAsciiAssets(fetchBytes),
  ]);
  const wasm = frameModule.instance.exports;
  const [vs, fs] = await Promise.all([
    shader(device, "./shaders/quad.wgsl"),
    shader(device, "./shaders/ascii.wgsl", (code) => asciiSource(code, assets.offsets)),
  ]);
  const pipeline = await device.createRenderPipelineAsync({
    layout: "auto",
    vertex: { module: vs, entryPoint: "main" },
    fragment: { module: fs, entryPoint: "main", targets: [{ format: 'rgba16float', blend: {
      // Constructor blend mode 2: source alpha / inverse source alpha.
      color: { srcFactor: "src-alpha", dstFactor: "one-minus-src-alpha", operation: "add" },
      alpha: { srcFactor: "one", dstFactor: "zero", operation: "add" },
    } }] },
    primitive: { topology: "triangle-list", cullMode: "none" },
  });
  const uniform = device.createBuffer({ size: 1024, usage: GPUBufferUsage.UNIFORM | GPUBufferUsage.COPY_DST });
  const storage = device.createBuffer({ size: assets.bytes.byteLength, usage: GPUBufferUsage.STORAGE | GPUBufferUsage.COPY_DST });
  device.queue.writeBuffer(storage, 0, assets.bytes);
  const bindGroup = device.createBindGroup({
    layout: pipeline.getBindGroupLayout(0),
    entries: [
      { binding: 0, resource: { buffer: storage } },
      { binding: 24, resource: { buffer: uniform } },
    ],
  });
  const presentation = await createPresentation(device, uniform, pipeline, bindGroup, shader, fetchBytes, format);

  // Wait for a user gesture, then start both clocks after music is ready.
  let started = false;
  let epoch = performance.now();
  let audio, audioBuffer, source;
  let audioLoading, audioError = "";
  let audioOffset = 0, audioStart = 0;
  const wallTime = () => Math.min(DURATION, (performance.now() - epoch) / 1000);
  const position = () => !started ? 0 : source && audio.state === "running"
    ? Math.min(DURATION, audioOffset + audio.currentTime - audioStart) : wallTime();

  function stopAudio() {
    if (source) { source.stop(); source.disconnect(); source = null; }
  }
  function startAudio(offset) {
    stopAudio();
    if (offset >= DURATION) return;
    source = audio.createBufferSource();
    source.buffer = audioBuffer;
    source.connect(audio.destination);
    audioOffset = offset;
    audioStart = audio.currentTime;
    source.start(audioStart, offset);
  }
  async function loadAudio() {
    const { default: init, Engine } = await import("./engine/pkg/engine.js");
    await init();
    const engine = new Engine();
    try {
      const rate = engine.sample_rate();
      const buffer = audio.createBuffer(2, DURATION * rate, rate);
      const left = buffer.getChannelData(0), right = buffer.getChannelData(1);
      for (let offset = 0; offset < left.length; offset += rate) {
        const pcm = engine.render(Math.min(rate, left.length - offset));
        for (let i = 0; i < pcm.length / 2; i++) {
          left[offset + i] = pcm[i * 2];
          right[offset + i] = pcm[i * 2 + 1];
        }
        // Keep animation and input responsive while the WASM mixer decodes.
        await new Promise((resolve) => setTimeout(resolve, 0));
      }
      return buffer;
    } finally { engine.free(); }
  }
  startButton.disabled = false;
  startButton.textContent = "Start demo";
  status.textContent = "Ready · Music starts with the demo";
  startButton.addEventListener("click", async () => {
    startButton.disabled = true;
    startButton.textContent = "Loading music…";
    try {
      audio ??= new AudioContext();
      await audio.resume();
      audioLoading ??= loadAudio();
      audioBuffer = await audioLoading;
      if (audio.state !== "running") throw new Error("Audio is suspended; click Start demo again.");
      epoch = performance.now();
      startAudio(0);
      started = true;
      startScreen.hidden = true;
      soundButton.disabled = false;
      soundButton.textContent = "Mute";
      replayButton.disabled = false;
      nextFrame();
    } catch (err) {
      audioLoading = null;
      status.textContent = `Music unavailable: ${err.message}`;
      startButton.textContent = "Start demo";
      startButton.disabled = false;
    }
  });
  soundButton.addEventListener("click", async () => {
    if (source) {
      const time = position();
      stopAudio();
      epoch = performance.now() - time * 1000;
      soundButton.textContent = "Enable sound";
      return;
    }
    soundButton.disabled = true;
    soundButton.textContent = "Loading music…";
    try {
      audio ??= new AudioContext();
      await audio.resume();
      audioLoading ??= loadAudio();
      audioBuffer = await audioLoading;
      if (audio.state !== "running") throw new Error("Audio is suspended; click Enable sound again.");
      const time = position();
      startAudio(time);
      soundButton.textContent = time < DURATION ? "Mute" : "Enable sound";
      audioError = "";
    } catch (err) {
      audioLoading = null;
      audioError = `Music unavailable: ${err.message}`;
      soundButton.textContent = "Enable sound";
    } finally { soundButton.disabled = false; }
  });
  replayButton.addEventListener("click", () => {
    epoch = performance.now();
    if (source) startAudio(0);
  });
  const nextFrame = () => requestAnimationFrame(() => {
    draw().catch((err) => gpuFailure(err.message || String(err)));
  });

  let framesInFlight = 0;
  async function draw() {
    if (stopped) return;
    // Keep CPU and GPU work overlapping, with bounded queue latency.
    if (framesInFlight >= 2) { nextFrame(); return; }
    const time = position();
    // User-selected internal resolution; CSS stretches it to the viewport.
    const width = canvas.width;
    const height = canvas.height;
    wasm.fill_uniforms(time, width, height);
    device.queue.writeBuffer(uniform, 0, new Uint8Array(wasm.memory.buffer, wasm.uniforms(), 1024));
    const encoder = device.createCommandEncoder();
    presentation.render(encoder, context.getCurrentTexture().createView(), width, height,
      new Float32Array(wasm.memory.buffer, wasm.uniforms(), 256));
    device.queue.submit([encoder.finish()]);
    status.textContent = audioError || `RZR D Cracktro 03 · ${time.toFixed(2)} / 67s${time >= DURATION ? " · Finished" : ""}`;
    framesInFlight++;
    device.queue.onSubmittedWorkDone().then(
      () => { framesInFlight--; },
      (err) => gpuFailure(err.message || String(err)),
    );
    nextFrame();
  }
}

main().catch((err) => { status.textContent = err.message || String(err); });
