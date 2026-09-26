// Pass order and resource connections recovered from FUN_140001534,
// 0x140016f1e..0x1400170bc. The ASCII pipeline is supplied by player.js.
export async function createPresentation(device, uniform, asciiPipeline, asciiGroup, shader, fetchBytes, canvasFormat) {
  const format = 'rgba16float';
  const names = ['fullscreen', 'particles', 'scene', 'geometry', 'geometry-fragment', 'mirror-scene', 'blur-scene', 'composite', 'feedback', 'blur-final', 'mirror-final', 'copy'];
  const modules = Object.fromEntries(await Promise.all(names.map(async (name) => [name, await shader(device, `./shaders/${name}.wgsl`)])));
  const sampler = device.createSampler({ magFilter: 'linear', minFilter: 'linear', addressModeU: 'clamp-to-edge', addressModeV: 'clamp-to-edge' });
  const particles = device.createBuffer({ size: 256 * 16, usage: GPUBufferUsage.STORAGE });
  // Vertices 3 and 4 duplicate 2 and 1 in the recovered quad shader.
  const quadIndices = device.createBuffer({ size: 12, usage: GPUBufferUsage.INDEX | GPUBufferUsage.COPY_DST });
  device.queue.writeBuffer(quadIndices, 0, new Uint16Array([0, 1, 2, 2, 1, 5]));
  const fontBytes = await fetchBytes('./buffers/geometry-font.bin');
  if (fontBytes.byteLength !== 32768 * 4) throw new Error('Invalid geometry font size');
  const font = device.createBuffer({ size: fontBytes.byteLength, usage: GPUBufferUsage.STORAGE | GPUBufferUsage.COPY_DST });
  device.queue.writeBuffer(font, 0, fontBytes);
  const pipelines = {};
  await Promise.all(names.filter((name) => !['fullscreen', 'particles', 'geometry-fragment'].includes(name)).map(async (name) => {
    const geometry = name === 'geometry';
    pipelines[name] = await device.createRenderPipelineAsync({
      label: name, layout: 'auto',
      vertex: { module: geometry ? modules.geometry : modules.fullscreen, entryPoint: name === 'copy' ? 'present' : 'main' },
      fragment: { module: geometry ? modules['geometry-fragment'] : modules[name], entryPoint: 'main', targets: [{
        format: name === 'copy' ? canvasFormat : format,
        ...(geometry ? { blend: {
          color: { srcFactor: 'src-alpha', dstFactor: 'one-minus-src-alpha', operation: 'add' },
          alpha: { srcFactor: 'one', dstFactor: 'zero', operation: 'add' },
        } } : {}),
      }] },
      primitive: { topology: 'triangle-list', cullMode: 'none' },
      ...(geometry ? { depthStencil: { format: 'depth32float', depthWriteEnabled: true, depthCompare: 'less-equal' } } : {}),
    });
  }));
  const compute = await device.createComputePipelineAsync({ layout: 'auto', compute: { module: modules.particles, entryPoint: 'main' } });
  const entry = (binding, resource) => ({ binding, resource });
  const u = entry(8, { buffer: uniform });
  const bind = (pipeline, entries) => device.createBindGroup({ layout: pipeline.getBindGroupLayout(0), entries });
  const computeGroup = bind(compute, [entry(0, { buffer: particles }), u]);
  const sceneGroup = bind(pipelines.scene, [entry(0, { buffer: particles }), u]);
  let size = '', textures = [], views, groups, depth;
  const targets = ['scene', 'geometry', 'mirror-scene', 'ascii', 'blur-scene', 'composite', 'feedback', 'blur-final', 'mirror-final'];
  const inputs = { 'mirror-scene': ['geometry'], 'blur-scene': ['mirror-scene'], composite: ['blur-scene', 'ascii'], feedback: ['composite'], 'blur-final': ['feedback'], 'mirror-final': ['blur-final'], copy: ['mirror-final'] };
  function resize(width, height) {
    if (size === `${width}x${height}`) return;
    for (const texture of textures) texture.destroy();
    size = `${width}x${height}`;
    textures = [];
    views = {};
    for (const name of targets) {
      const texture = device.createTexture({ label: name, size: [width, height], format, usage: GPUTextureUsage.RENDER_ATTACHMENT | GPUTextureUsage.TEXTURE_BINDING });
      textures.push(texture);
      views[name] = texture.createView();
    }
    const depthTexture = device.createTexture({ size: [width, height], format: 'depth32float', usage: GPUTextureUsage.RENDER_ATTACHMENT });
    textures.push(depthTexture);
    depth = depthTexture.createView();
    groups = {};
    groups.geometry = bind(pipelines.geometry, [entry(0, { buffer: font }), entry(4, views.scene), u, entry(16, sampler)]);
    for (const [name, sources] of Object.entries(inputs)) {
      const entries = sources.map((source, i) => entry(i, views[source]));
      if (name !== 'copy') entries.push(u);
      entries.push(entry(name === 'copy' ? 19 : 16, sampler));
      groups[name] = bind(pipelines[name], entries);
    }
  }
  return {
    render(encoder, output, width, height, uniforms) {
      resize(width, height);
      function pass(name, pipeline, group, vertices = 3, instances = 1, withDepth = false) {
        const render = encoder.beginRenderPass({
          label: name,
          colorAttachments: [{ view: name === 'copy' ? output : views[name], clearValue: { r: 0, g: 0, b: 0, a: 1 }, loadOp: 'clear', storeOp: 'store' }],
          ...(withDepth ? { depthStencilAttachment: { view: depth, depthClearValue: 1, depthLoadOp: 'clear', depthStoreOp: 'store' } } : {}),
        });
        if (instances) {
          render.setPipeline(pipeline); render.setBindGroup(0, group);
          if (withDepth) {
            render.setIndexBuffer(quadIndices, 'uint16'); render.drawIndexed(6, instances);
          } else { render.draw(vertices, instances); }
        }
        render.end();
      }
      const sceneVisible = uniforms[165] > 0.5;
      if (sceneVisible) {
        const computePass = encoder.beginComputePass({ label: 'particles' });
        computePass.setPipeline(compute); computePass.setBindGroup(0, computeGroup); computePass.dispatchWorkgroups(2); computePass.end();
      }
      pass('scene', pipelines.scene, sceneGroup, 3, sceneVisible ? 1 : 0);
      // shader_13 rejects every row >= 96; omit those dead instances.
      pass('geometry', pipelines.geometry, groups.geometry, 6, sceneVisible ? 256 * 96 * 128 : 0, true);
      pass('mirror-scene', pipelines['mirror-scene'], groups['mirror-scene'], 3, sceneVisible ? 1 : 0);
      pass('ascii', asciiPipeline, asciiGroup, 6, 10);
      for (const name of ['blur-scene', 'composite', 'feedback', 'blur-final', 'mirror-final', 'copy']) {
        pass(name, pipelines[name], groups[name], 3, name === 'blur-scene' && !sceneVisible ? 0 : 1);
      }
    },
  };
}
