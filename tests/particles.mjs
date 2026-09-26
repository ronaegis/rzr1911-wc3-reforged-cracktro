import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';

export async function checkParticles(page) {
  const original = await readFile('decompile/wgsl/shader_02_0x17FF60.wgsl', 'utf8');
  const optimized = await readFile('web/shaders/particles.wgsl', 'utf8');
  const { instance: { exports: wasm } } = await WebAssembly.instantiate(await readFile('web/cracktro.wasm'));
  const cases = [];
  for (const time of [0, 5, 15, 25, 30, 35, 40, 50, 60, 67]) {
    wasm.fill_uniforms(time, 1024, 576);
    cases.push(Array.from(new Uint32Array(wasm.memory.buffer, wasm.uniforms(), 256)));
  }
  // Exercise active-count boundaries, including reused buffers shrinking to zero.
  for (const count of [128, 64, 2, 1, 0]) {
    wasm.fill_uniforms(30, 1024, 576);
    new Float32Array(wasm.memory.buffer, wasm.uniforms(), 256)[207] = count;
    cases.push(Array.from(new Uint32Array(wasm.memory.buffer, wasm.uniforms(), 256)));
  }
  const differences = await page.evaluate(async ({ original, optimized, cases }) => {
    const adapter = await navigator.gpu.requestAdapter();
    const device = await adapter.requestDevice();
    device.pushErrorScope('validation');
    const uniform = device.createBuffer({ size: 1024, usage: GPUBufferUsage.UNIFORM | GPUBufferUsage.COPY_DST });
    const readback = device.createBuffer({ size: 8192, usage: GPUBufferUsage.COPY_DST | GPUBufferUsage.MAP_READ });
    const variants = await Promise.all([original, optimized].map(async (code) => {
      const pipeline = await device.createComputePipelineAsync({ layout: 'auto', compute: { module: device.createShaderModule({ code }), entryPoint: 'main' } });
      const output = device.createBuffer({ size: 4096, usage: GPUBufferUsage.STORAGE | GPUBufferUsage.COPY_SRC });
      const group = device.createBindGroup({ layout: pipeline.getBindGroupLayout(0), entries: [
        { binding: 0, resource: { buffer: output } }, { binding: 8, resource: { buffer: uniform } },
      ] });
      return { pipeline, output, group };
    }));
    const differences = [];
    for (const values of cases) {
      device.queue.writeBuffer(uniform, 0, new Uint32Array(values));
      const encoder = device.createCommandEncoder();
      for (const [index, variant] of variants.entries()) {
        const pass = encoder.beginComputePass();
        pass.setPipeline(variant.pipeline); pass.setBindGroup(0, variant.group);
        pass.dispatchWorkgroups(index === 0 ? 32 : 2); pass.end();
        encoder.copyBufferToBuffer(variant.output, 0, readback, index * 4096, 4096);
      }
      device.queue.submit([encoder.finish()]);
      await readback.mapAsync(GPUMapMode.READ);
      const words = new Uint32Array(readback.getMappedRange());
      let different = 0;
      for (let i = 0; i < 1024; i++) if (words[i] !== words[i + 1024]) different++;
      differences.push(different);
      readback.unmap();
    }
    const error = await device.popErrorScope();
    device.destroy();
    if (error) throw new Error(error.message);
    return differences;
  }, { original, optimized, cases });
  assert.deepEqual(differences, cases.map(() => 0), 'Optimized particles differ from recovered shader');
  console.log(`PASS: ${cases.length} particle cases match the recovered shader bit for bit`);
}
