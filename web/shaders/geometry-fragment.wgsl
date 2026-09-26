var<private> TEXCOORD_1_1: vec2<f32>;
var<private> TEXCOORD_2_1: vec4<f32>;
var<private> SV_Target: vec4<f32>;

fn main_1() {
    let _e8: f32 = TEXCOORD_2_1[0u];
    let _e10: f32 = TEXCOORD_2_1[1u];
    let _e12: f32 = TEXCOORD_2_1[2u];
    let _e14: f32 = TEXCOORD_2_1[3u];
    SV_Target[0u] = _e8;
    SV_Target[1u] = _e10;
    SV_Target[2u] = _e12;
    SV_Target[3u] = _e14;
    return;
}

@fragment 
fn main(@location(0) TEXCOORD_1_: vec2<f32>, @location(1) @interpolate(flat) TEXCOORD_2_: vec4<f32>) -> @location(0) vec4<f32> {
    TEXCOORD_1_1 = TEXCOORD_1_;
    TEXCOORD_2_1 = TEXCOORD_2_;
    main_1();
    let _e5: vec4<f32> = SV_Target;
    return _e5;
}
