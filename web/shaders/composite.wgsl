struct CB0UBOUBO {
    member: array<vec4<f32>, 61>,
}

@group(0) @binding(0) 
var T0_: texture_2d<f32>;
@group(0) @binding(1) 
var T1_: texture_2d<f32>;
@group(0) @binding(8) 
var<uniform> CB0UBO: CB0UBOUBO;
@group(0) @binding(16) 
var S0_: sampler;
var<private> TEXCOORD_1_1: vec2<f32>;
var<private> SV_Target: vec4<f32>;

fn main_1() {
    var phi_609_: u32;
    var phi_608_: u32;
    var phi_230_: u32;
    var phi_259_: f32;
    var phi_603_: u32;
    var phi_602_: u32;
    var phi_241_: u32;
    var phi_277_: f32;
    var phi_605_: u32;
    var phi_604_: u32;
    var phi_372_: u32;
    var phi_387_: f32;
    var phi_607_: u32;
    var phi_606_: u32;
    var phi_465_: u32;
    var phi_486_: f32;
    var phi_518_: f32;
    var phi_520_: f32;
    var phi_522_: f32;
    var phi_358_: f32;
    var phi_360_: f32;
    var phi_362_: f32;

    let _e63: f32 = TEXCOORD_1_1[0u];
    let _e65: f32 = TEXCOORD_1_1[1u];
    let _e68: vec4<f32> = CB0UBO.member[44u];
    let _e73: vec4<f32> = CB0UBO.member[60u];
    let _e75: u32 = u32(_e73.y);
    let _e78: vec4<f32> = CB0UBO.member[44u];
    let _e84: vec4<f32> = CB0UBO.member[41u];
    let _e86: bool = (_e84.y > 0.5f);
    let _e88: bool = (_e84.z > 0.5f);
    let _e89: bool = (_e75 != 0u);
    let _e90: bool = (_e75 == 0u);
    if (u32(_e78.x) == 0u) {
        let _e92: vec4<f32> = textureSampleLevel(T0_, S0_, vec2<f32>(_e63, _e65), 0.0);
        let _e98: u32 = select(0u, bitcast<u32>(_e92.x), _e86);
        let _e100: u32 = select(0u, bitcast<u32>(_e92.y), _e86);
        let _e102: u32 = select(0u, bitcast<u32>(_e92.z), _e86);
        let _e104: vec4<f32> = textureSampleLevel(T1_, S0_, vec2<f32>(_e63, _e65), 0.0);
        let _e110: u32 = select(0u, bitcast<u32>(_e104.x), _e88);
        let _e112: u32 = select(0u, bitcast<u32>(_e104.y), _e88);
        let _e114: u32 = select(0u, bitcast<u32>(_e104.z), _e88);
        if _e90 {
            phi_609_ = 0u;
            if _e88 {
                phi_609_ = bitcast<u32>(_e104.w);
            }
            let _e120: u32 = phi_609_;
            phi_230_ = _e120;
        } else {
            phi_608_ = 0u;
            if _e86 {
                phi_608_ = bitcast<u32>(_e92.w);
            }
            let _e123: u32 = phi_608_;
            phi_230_ = _e123;
        }
        let _e125: u32 = phi_230_;
        let _e127: f32 = bitcast<f32>(select(_e110, _e98, _e89));
        let _e129: f32 = bitcast<f32>(select(_e112, _e100, _e89));
        let _e131: f32 = bitcast<f32>(select(_e114, _e102, _e89));
        let _e132: f32 = bitcast<f32>(_e125);
        phi_259_ = 0f;
        if (_e132 > 0.01f) {
            phi_259_ = select(_e132, 0f, (dot(vec3<f32>(_e127, _e129, _e131), vec3<f32>(0.2126f, 0.7152f, 0.0722f)) <= 0.01f));
        }
        let _e140: f32 = phi_259_;
        let _e141: f32 = bitcast<f32>(select(_e98, _e110, _e89));
        let _e145: f32 = bitcast<f32>(select(_e100, _e112, _e89));
        let _e149: f32 = bitcast<f32>(select(_e102, _e114, _e89));
        phi_358_ = ((_e140 * (_e127 - _e141)) + _e141);
        phi_360_ = ((_e140 * (_e129 - _e145)) + _e145);
        phi_362_ = ((_e140 * (_e131 - _e149)) + _e149);
    } else {
        let _e155: vec4<f32> = CB0UBO.member[0u];
        let _e158: f32 = ceil((_e155.x * 11f));
        let _e159: f32 = (_e155.x * 5f);
        let _e160: f32 = (_e159 + 127.3f);
        let _e167: f32 = (fract((sin(dot(vec2<f32>(_e159, _e160), vec2<f32>(127.1f, 311.7f))) * 43758.547f)) + -0.5f);
        let _e174: f32 = (fract((sin(dot(vec2<f32>(_e159, _e160), vec2<f32>(269.5f, 183.3f))) * 43758.547f)) + -0.5f);
        let _e175: f32 = (_e158 * 0.01f);
        let _e183: f32 = fract((sin(dot(vec2<f32>((_e175 + _e63), (_e175 + _e65)), vec2<f32>(127.1f, 311.7f))) * 43758.547f));
        let _e190: f32 = ((select(0f, (_e167 * 0.0006f), (max(_e167, (-0f - _e167)) > 0.15f)) * _e183) + _e63);
        let _e197: f32 = ((select(0f, (_e174 * 0.0006f), (max((-0f - _e174), _e174) > 0.15f)) * _e183) + _e65);
        let _e198: f32 = (_e159 + 17f);
        let _e199: f32 = floor(_e198);
        let _e200: f32 = fract(_e198);
        let _e203: f32 = fract((sin(_e199) * 43758.547f));
        let _e204: f32 = (_e159 + 37f);
        let _e205: f32 = floor(_e204);
        let _e206: f32 = fract(_e204);
        let _e209: f32 = fract((sin(_e205) * 43758.547f));
        let _e210: f32 = (_e159 + 71f);
        let _e211: f32 = floor(_e210);
        let _e212: f32 = fract(_e210);
        let _e215: f32 = fract((sin(_e211) * 43758.547f));
        let _e235: f32 = ((select(0f, 1f, ((((((((_e200 * _e200) * _e200) * ((((_e200 * 6f) + -15f) * _e200) + 10f)) * (fract((sin((_e199 + 1f)) * 43758.547f)) - _e203)) + _e203) * 2f) + -1f) > 0.7f)) * _e68.w) + _e190);
        let _e237: vec4<f32> = textureSampleLevel(T0_, S0_, vec2<f32>(_e235, _e197), 0.0);
        let _e243: u32 = select(0u, bitcast<u32>(_e237.x), _e86);
        let _e245: u32 = select(0u, bitcast<u32>(_e237.y), _e86);
        let _e247: u32 = select(0u, bitcast<u32>(_e237.z), _e86);
        let _e249: vec4<f32> = textureSampleLevel(T1_, S0_, vec2<f32>(_e235, _e197), 0.0);
        let _e255: u32 = select(0u, bitcast<u32>(_e249.x), _e88);
        let _e257: u32 = select(0u, bitcast<u32>(_e249.y), _e88);
        let _e259: u32 = select(0u, bitcast<u32>(_e249.z), _e88);
        if _e90 {
            phi_603_ = 0u;
            if _e88 {
                phi_603_ = bitcast<u32>(_e249.w);
            }
            let _e266: u32 = phi_603_;
            phi_241_ = _e266;
        } else {
            phi_602_ = 0u;
            if _e86 {
                phi_602_ = bitcast<u32>(_e237.w);
            }
            let _e269: u32 = phi_602_;
            phi_241_ = _e269;
        }
        let _e271: u32 = phi_241_;
        let _e273: f32 = bitcast<f32>(select(_e255, _e243, _e89));
        let _e275: f32 = bitcast<f32>(select(_e257, _e245, _e89));
        let _e276: f32 = bitcast<f32>(_e271);
        let _e278: f32 = bitcast<f32>(select(_e259, _e247, _e89));
        phi_277_ = 0f;
        if (_e276 > 0.01f) {
            phi_277_ = select(_e276, 0f, (dot(vec3<f32>(_e273, _e275, _e278), vec3<f32>(0.2126f, 0.7152f, 0.0722f)) <= 0.01f));
        }
        let _e285: f32 = phi_277_;
        let _e286: f32 = bitcast<f32>(select(_e243, _e255, _e89));
        let _e291: f32 = min(max(((_e285 * (_e273 - _e286)) + _e286), 0f), 1f);
        let _e292: f32 = bitcast<f32>(select(_e245, _e257, _e89));
        let _e298: f32 = bitcast<f32>(select(_e247, _e259, _e89));
        let _e314: f32 = (1f - exp2((log2(((1f - _e291) - ((dot(vec3<f32>(_e291, min(max(((_e285 * (_e275 - _e292)) + _e292), 0f), 1f), min(max(((_e285 * (_e278 - _e298)) + _e298), 0f), 1f)), vec3<f32>(0.2126f, 0.7152f, 0.0722f)) - _e291) * 0.05f))) * 0.6666667f)));
        let _e334: f32 = ((select(0f, 1f, ((((((((_e206 * _e206) * _e206) * ((((_e206 * 6f) + -15f) * _e206) + 10f)) * (fract((sin((_e205 + 1f)) * 43758.547f)) - _e209)) + _e209) * 2f) + -1f) > 0.7f)) * _e68.w) + _e190);
        let _e336: vec4<f32> = textureSampleLevel(T0_, S0_, vec2<f32>(_e334, _e197), 0.0);
        let _e342: u32 = select(0u, bitcast<u32>(_e336.x), _e86);
        let _e344: u32 = select(0u, bitcast<u32>(_e336.y), _e86);
        let _e346: u32 = select(0u, bitcast<u32>(_e336.z), _e86);
        let _e348: vec4<f32> = textureSampleLevel(T1_, S0_, vec2<f32>(_e334, _e197), 0.0);
        let _e354: u32 = select(0u, bitcast<u32>(_e348.x), _e88);
        let _e356: u32 = select(0u, bitcast<u32>(_e348.y), _e88);
        let _e358: u32 = select(0u, bitcast<u32>(_e348.z), _e88);
        if _e90 {
            phi_605_ = 0u;
            if _e88 {
                phi_605_ = bitcast<u32>(_e348.w);
            }
            let _e364: u32 = phi_605_;
            phi_372_ = _e364;
        } else {
            phi_604_ = 0u;
            if _e86 {
                phi_604_ = bitcast<u32>(_e336.w);
            }
            let _e367: u32 = phi_604_;
            phi_372_ = _e367;
        }
        let _e369: u32 = phi_372_;
        let _e371: f32 = bitcast<f32>(select(_e354, _e342, _e89));
        let _e373: f32 = bitcast<f32>(select(_e356, _e344, _e89));
        let _e375: f32 = bitcast<f32>(select(_e358, _e346, _e89));
        let _e376: f32 = bitcast<f32>(_e369);
        phi_387_ = 0f;
        if (_e376 > 0.01f) {
            phi_387_ = select(_e376, 0f, (dot(vec3<f32>(_e371, _e373, _e375), vec3<f32>(0.2126f, 0.7152f, 0.0722f)) <= 0.01f));
        }
        let _e384: f32 = phi_387_;
        let _e385: f32 = bitcast<f32>(select(_e344, _e356, _e89));
        let _e390: f32 = min(max(((_e384 * (_e373 - _e385)) + _e385), 0f), 1f);
        let _e391: f32 = bitcast<f32>(select(_e342, _e354, _e89));
        let _e397: f32 = bitcast<f32>(select(_e346, _e358, _e89));
        let _e413: f32 = (1f - exp2((log2(((1f - _e390) - ((dot(vec3<f32>(min(max(((_e384 * (_e371 - _e391)) + _e391), 0f), 1f), _e390, min(max(((_e384 * (_e375 - _e397)) + _e397), 0f), 1f)), vec3<f32>(0.2126f, 0.7152f, 0.0722f)) - _e390) * 0.05f))) * 0.71428573f)));
        let _e433: f32 = ((select(0f, 1f, ((((((((_e212 * _e212) * _e212) * ((((_e212 * 6f) + -15f) * _e212) + 10f)) * (fract((sin((_e211 + 1f)) * 43758.547f)) - _e215)) + _e215) * 2f) + -1f) > 0.7f)) * _e68.w) + _e197);
        let _e435: vec4<f32> = textureSampleLevel(T0_, S0_, vec2<f32>(_e190, _e433), 0.0);
        let _e441: u32 = select(0u, bitcast<u32>(_e435.x), _e86);
        let _e443: u32 = select(0u, bitcast<u32>(_e435.y), _e86);
        let _e445: u32 = select(0u, bitcast<u32>(_e435.z), _e86);
        let _e447: vec4<f32> = textureSampleLevel(T1_, S0_, vec2<f32>(_e190, _e433), 0.0);
        let _e453: u32 = select(0u, bitcast<u32>(_e447.x), _e88);
        let _e455: u32 = select(0u, bitcast<u32>(_e447.y), _e88);
        let _e457: u32 = select(0u, bitcast<u32>(_e447.z), _e88);
        if _e90 {
            phi_607_ = 0u;
            if _e88 {
                phi_607_ = bitcast<u32>(_e447.w);
            }
            let _e460: u32 = phi_607_;
            phi_465_ = _e460;
        } else {
            phi_606_ = 0u;
            if _e86 {
                phi_606_ = bitcast<u32>(_e435.w);
            }
            let _e463: u32 = phi_606_;
            phi_465_ = _e463;
        }
        let _e465: u32 = phi_465_;
        let _e467: f32 = bitcast<f32>(select(_e441, _e453, _e89));
        let _e469: f32 = bitcast<f32>(select(_e443, _e455, _e89));
        let _e471: f32 = bitcast<f32>(select(_e445, _e457, _e89));
        let _e473: f32 = bitcast<f32>(select(_e453, _e441, _e89));
        let _e475: f32 = bitcast<f32>(select(_e455, _e443, _e89));
        let _e477: f32 = bitcast<f32>(select(_e457, _e445, _e89));
        let _e478: f32 = bitcast<f32>(_e465);
        phi_486_ = 0f;
        if (_e478 > 0.01f) {
            phi_486_ = select(_e478, 0f, (dot(vec3<f32>(_e473, _e475, _e477), vec3<f32>(0.2126f, 0.7152f, 0.0722f)) <= 0.01f));
        }
        let _e486: f32 = phi_486_;
        let _e491: f32 = min(max(((_e486 * (_e477 - _e471)) + _e471), 0f), 1f);
        let _e512: f32 = (1f - exp2((log2(((1f - _e491) - ((dot(vec3<f32>(min(max(((_e486 * (_e473 - _e467)) + _e467), 0f), 1f), min(max(((_e486 * (_e475 - _e469)) + _e469), 0f), 1f), _e491), vec3<f32>(0.2126f, 0.7152f, 0.0722f)) - _e491) * 0.05f))) * 0.6666667f)));
        let _e515: vec4<f32> = CB0UBO.member[44u];
        phi_518_ = _e512;
        phi_520_ = _e314;
        phi_522_ = _e413;
        if (u32(_e515.y) == 0u) {
        } else {
            let _e521: vec4<f32> = CB0UBO.member[1u];
            let _e527: f32 = ((cos(((_e197 * 1.1635528f) * _e521.y)) * 0.075f) + 0.925f);
            phi_518_ = (_e527 * _e512);
            phi_520_ = (_e527 * _e314);
            phi_522_ = (_e527 * _e413);
        }
        let _e532: f32 = phi_518_;
        let _e534: f32 = phi_520_;
        let _e536: f32 = phi_522_;
        let _e539: vec4<f32> = CB0UBO.member[0u];
        let _e543: f32 = (fract((_e539.x * 15.915507f)) + -0.5f);
        let _e549: vec4<f32> = CB0UBO.member[45u];
        let _e553: f32 = (((exp2(((_e543 * _e543) * -14.42695f)) * 0.04f) * _e549.x) + 0.96f);
        let _e555: f32 = ((_e190 + -0.5f) * 2f);
        let _e557: f32 = ((_e197 + -0.5f) * 2f);
        let _e570: f32 = ((((fract((sin((_e158 + 13.7f)) * 43758.547f)) * 0.120000005f) + 0.28f) * (1f - (dot(vec2<f32>(_e555, _e557), vec2<f32>(_e555, _e557)) * 0.294f))) + 0.6f);
        let _e582: f32 = ((fract((sin(dot(vec2<f32>(((_e190 * 1000f) + _e158), ((_e197 * 1000f) + _e158)), vec2<f32>(12.9898f, 78.233f))) * 43758.547f)) * 0.2f) + 1f);
        phi_358_ = ((((_e534 * _e68.z) * _e553) * _e570) * _e582);
        phi_360_ = ((((_e536 * _e68.z) * _e553) * _e570) * _e582);
        phi_362_ = ((((_e532 * _e68.z) * _e553) * _e570) * _e582);
    }
    let _e596: f32 = phi_358_;
    let _e598: f32 = phi_360_;
    let _e600: f32 = phi_362_;
    SV_Target[0u] = _e596;
    SV_Target[1u] = _e598;
    SV_Target[2u] = _e600;
    SV_Target[3u] = 1f;
    return;
}

@fragment 
fn main(@location(0) TEXCOORD_1_: vec2<f32>) -> @location(0) vec4<f32> {
    TEXCOORD_1_1 = TEXCOORD_1_;
    main_1();
    let _e3: vec4<f32> = SV_Target;
    return _e3;
}
