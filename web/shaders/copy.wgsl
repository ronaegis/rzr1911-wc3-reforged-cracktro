@group(0) @binding(0) 
var T0_: texture_2d<f32>;
@group(0) @binding(19) 
var S0_: sampler;
var<private> TEXCOORD_1_1: vec2<f32>;
var<private> SV_Target: vec4<f32>;

fn main_1() {
    let _e10: f32 = TEXCOORD_1_1[0u];
    let _e12: f32 = TEXCOORD_1_1[1u];
    let _e14: vec4<f32> = textureSampleLevel(T0_, S0_, vec2<f32>(_e10, _e12), 0f);
    SV_Target[0u] = _e14.x;
    SV_Target[1u] = _e14.y;
    SV_Target[2u] = _e14.z;
    SV_Target[3u] = _e14.w;
    return;
}

@fragment 
fn main(@location(0) TEXCOORD_1_: vec2<f32>) -> @location(0) vec4<f32> {
    TEXCOORD_1_1 = TEXCOORD_1_;
    main_1();
    let _e3: vec4<f32> = SV_Target;
    return _e3;
}
