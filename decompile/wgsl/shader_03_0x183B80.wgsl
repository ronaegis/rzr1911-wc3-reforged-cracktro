struct CB0UBOUBO {
    member: array<vec4<f32>, 64>,
}

@group(0) @binding(0) 
var T0_: texture_2d<f32>;
@group(0) @binding(8) 
var<uniform> CB0UBO: CB0UBOUBO;
@group(0) @binding(16) 
var S0_: sampler;
var<private> TEXCOORD_1_1: vec2<f32>;
var<private> SV_Target: vec4<f32>;

fn main_1() {
    let _e15: f32 = TEXCOORD_1_1[0u];
    let _e17: f32 = TEXCOORD_1_1[1u];
    let _e20: vec4<f32> = CB0UBO.member[63u];
    let _e34: vec4<f32> = textureSample(T0_, S0_, vec2<f32>(select(_e15, (1f - _e15), ((_e15 > 0.5f) && (_e20.x > 0.5f))), select(_e17, (1f - _e17), ((_e17 < 0.5f) && (_e20.y > 0.5f)))));
    SV_Target[0u] = _e34.x;
    SV_Target[1u] = _e34.y;
    SV_Target[2u] = _e34.z;
    SV_Target[3u] = _e34.w;
    return;
}

@fragment 
fn main(@location(0) TEXCOORD_1_: vec2<f32>) -> @location(0) vec4<f32> {
    TEXCOORD_1_1 = TEXCOORD_1_;
    main_1();
    let _e3: vec4<f32> = SV_Target;
    return _e3;
}
