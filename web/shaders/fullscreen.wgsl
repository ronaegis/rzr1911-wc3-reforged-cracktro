// Fullscreen vertex shader_01, with the original Direct3D UV orientation.
struct FullscreenOutput {
  @builtin(position) position: vec4<f32>,
  @location(0) uv: vec2<f32>,
}
@vertex fn main(@builtin(vertex_index) index: u32) -> FullscreenOutput {
  let uv = vec2<f32>(f32((index << 1u) & 2u), f32(index & 2u));
  return FullscreenOutput(vec4<f32>(uv.x * 2.0 - 1.0, 1.0 - uv.y * 2.0, 0.0, 1.0), uv);
}

// shader_14 is the final presentation vertex shader. Unlike shader_01,
// it derives UV from clip position, flipping Y on the final copy.
@vertex fn present(@builtin(vertex_index) index: u32) -> FullscreenOutput {
  let uv = vec2<f32>(f32((index << 1u) & 2u), f32(index & 2u));
  return FullscreenOutput(vec4<f32>(uv.x * 2.0 - 1.0, 1.0 - uv.y * 2.0, 0.0, 1.0), vec2<f32>(uv.x, 1.0 - uv.y));
}
