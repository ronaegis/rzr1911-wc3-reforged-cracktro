struct U0SSBO {
    member: array<u32>,
}

struct CB0UBOUBO {
    member: array<vec4<f32>, 56>,
}

@group(0) @binding(0) 
var<storage, read_write> U0_: U0SSBO;
@group(0) @binding(8) 
var<uniform> CB0UBO: CB0UBOUBO;
var<private> global: vec3<u32>;

fn main_1() {
    var local: array<u32, 512>;
    var local_1: array<u32, 512>;
    var local_2: array<u32, 512>;
    var phi_130_: u32;
    var phi_461_: f32;
    var phi_272_: u32;
    var phi_326_: u32;
    var phi_330_: u32;
    var phi_420_: u32;

    let _e62: u32 = global[0u];
    let _e65: vec4<f32> = CB0UBO.member[54u];
    let _e70: vec4<f32> = CB0UBO.member[55u];
    let _e76: vec4<f32> = CB0UBO.member[51u];
    let _e80: u32 = min(max(u32(_e76.w), 0u), 128u);
    if (_e62 > 255u) {
    } else {
        let _e82: u32 = (_e62 & 127u);
        if (bitcast<i32>(_e82) < bitcast<i32>(_e80)) {
            let _e92: vec4<f32> = CB0UBO.member[0u];
            let _e94: f32 = (_e92.x - (f32((_e62 >> bitcast<u32>(7u))) * 0.020833334f));
            let _e96: f32 = (_e65.z - _e65.y);
            let _e97: f32 = (_e70.x - _e65.w);
            let _e98: f32 = (_e70.z - _e70.y);
            let _e102: f32 = sqrt(dot(vec3<f32>(_e96, _e97, _e98), vec3<f32>(_e96, _e97, _e98)));
            let _e103: f32 = max(_e102, 0.000001f);
            let _e104: f32 = (_e96 / _e103);
            let _e105: f32 = (_e97 / _e103);
            let _e106: f32 = (_e98 / _e103);
            let _e109: bool = (max(_e106, (-0f - _e106)) > 0.99f);
            let _e110: f32 = select(0f, 1f, _e109);
            let _e111: f32 = select(1f, 0f, _e109);
            let _e114: f32 = ((_e111 * _e105) - (_e110 * _e106));
            let _e116: f32 = (-0f - (_e104 * _e111));
            let _e117: f32 = (_e110 * _e104);
            let _e121: f32 = inverseSqrt(dot(vec3<f32>(_e114, _e116, _e117), vec3<f32>(_e114, _e116, _e117)));
            let _e122: f32 = (_e114 * _e121);
            let _e123: f32 = (_e121 * _e116);
            let _e124: f32 = (_e117 * _e121);
            if (bitcast<i32>(_e80) > bitcast<i32>(0u)) {
                phi_130_ = 0u;
                loop {
                    let _e129: u32 = phi_130_;
                    let _e130: u32 = (_e129 * 2178947571u);
                    let _e131: u32 = (_e130 + 1294319014u);
                    let _e138: u32 = (((_e131 >> bitcast<u32>(((_e131 >> bitcast<u32>(28u)) + 4u))) ^ _e131) * 277803737u);
                    let _e143: u32 = (_e130 + 1940690790u);
                    let _e150: u32 = (((_e143 >> bitcast<u32>(((_e143 >> bitcast<u32>(28u)) + 4u))) ^ _e143) * 277803737u);
                    let _e155: u32 = (_e130 + 1931166464u);
                    let _e162: u32 = (((_e155 >> bitcast<u32>(((_e155 >> bitcast<u32>(28u)) + 4u))) ^ _e155) * 277803737u);
                    let _e167: f32 = (f32(((_e162 >> bitcast<u32>(22u)) ^ _e162)) * 0.00000000023283064f);
                    let _e171: u32 = select(select(1050253722u, 1041865114u, (_e167 < 0.98f)), 1033476506u, (_e167 < 0.66f));
                    let _e173: u32 = (_e129 << bitcast<u32>(2u));
                    local_2[_e173] = _e171;
                    let _e175: f32 = bitcast<f32>(_e171);
                    let _e176: bool = (_e175 >= 0.3f);
                    let _e178: u32 = ((_e129 * 3206271439u) + 1967749970u);
                    let _e185: u32 = (((_e178 >> bitcast<u32>(((_e178 >> bitcast<u32>(28u)) + 4u))) ^ _e178) * 277803737u);
                    let _e189: f32 = f32(((_e185 >> bitcast<u32>(22u)) ^ _e185));
                    if (_e175 > 0.075f) {
                        phi_461_ = select(((_e189 * 0.00000000003259629f) + 0.009999998f), ((_e189 * 0.000000000055879353f) + 0.13f), (_e175 < 0.3f));
                    } else {
                        phi_461_ = ((_e189 * 0.000000000069849196f) + 0.25f);
                    }
                    let _e200: f32 = phi_461_;
                    continue;
                    continuing {
                        let _e202: f32 = select(0.18f, 0.1f, _e176);
                        let _e205: f32 = (select(1.516f, 0.3f, _e176) * _e94);
                        let _e208: f32 = (sin(((f32(((_e138 >> bitcast<u32>(22u)) ^ _e138)) * 0.0000000014629181f) + _e205)) * _e202);
                        let _e212: f32 = (cos(((f32(((_e150 >> bitcast<u32>(22u)) ^ _e150)) * 0.0000000014629181f) + _e205)) * _e202);
                        local_1[_e173] = bitcast<u32>(_e208);
                        let _e215: u32 = (_e173 | 1u);
                        local_1[_e215] = bitcast<u32>(_e212);
                        local[_e173] = bitcast<u32>(((1f - fract(((f32(_e129) / f32(_e80)) - (max(_e200, 0.02f) * _e94)))) * _e102));
                        local[_e215] = bitcast<u32>(_e208);
                        local[(_e173 | 2u)] = bitcast<u32>(_e212);
                        local[(_e173 | 3u)] = bitcast<u32>((_e175 * 2.2f));
                        let _e237: u32 = (_e129 + 1u);
                        phi_130_ = _e237;
                        break if (_e237 == _e80);
                    }
                }
            }
            let _e241: vec4<f32> = CB0UBO.member[0u];
            let _e244: u32 = min(bitcast<u32>(_e241.y), 0u);
            if (bitcast<i32>(_e244) < bitcast<i32>(8u)) {
                phi_272_ = _e244;
                loop {
                    let _e249: u32 = phi_272_;
                    let _e252: bool = (bitcast<i32>(_e244) < bitcast<i32>(_e80));
                    if _e252 {
                        phi_326_ = _e244;
                        loop {
                            let _e254: u32 = phi_326_;
                            let _e255: u32 = (_e254 + 1u);
                            if (bitcast<i32>(_e255) < bitcast<i32>(_e80)) {
                                phi_330_ = _e255;
                                loop {
                                    let _e260: u32 = phi_330_;
                                    let _e262: u32 = (_e254 << bitcast<u32>(2u));
                                    let _e264: u32 = local[_e262];
                                    let _e267: u32 = local[(_e262 | 1u)];
                                    let _e270: u32 = local[(_e262 | 2u)];
                                    let _e272: u32 = (_e260 << bitcast<u32>(2u));
                                    let _e274: u32 = local[_e272];
                                    let _e277: u32 = local[(_e272 | 1u)];
                                    let _e280: u32 = local[(_e272 | 2u)];
                                    let _e283: f32 = (bitcast<f32>(_e264) - bitcast<f32>(_e274));
                                    let _e284: f32 = bitcast<f32>(_e267);
                                    let _e286: f32 = (_e284 - bitcast<f32>(_e277));
                                    let _e287: f32 = bitcast<f32>(_e270);
                                    let _e289: f32 = (_e287 - bitcast<f32>(_e280));
                                    let _e292: u32 = local[(_e262 | 3u)];
                                    let _e295: u32 = local[(_e272 | 3u)];
                                    let _e298: f32 = (bitcast<f32>(_e295) + bitcast<f32>(_e292));
                                    let _e301: f32 = dot(vec3<f32>(_e283, _e286, _e289), vec3<f32>(_e283, _e286, _e289));
                                    if ((_e301 > 0.00000001f) && (_e301 < (_e298 * _e298))) {
                                        let _e306: f32 = sqrt(_e301);
                                        let _e309: f32 = (((_e298 / _e306) + -1f) * 0.065f);
                                        let _e310: f32 = (_e286 / _e306);
                                        let _e311: f32 = (_e289 / _e306);
                                        let _e313: u32 = local_2[_e262];
                                        let _e314: f32 = bitcast<f32>(_e313);
                                        let _e316: f32 = ((_e314 * _e314) * _e314);
                                        let _e318: u32 = local_2[_e272];
                                        let _e319: f32 = bitcast<f32>(_e318);
                                        let _e321: f32 = ((_e319 * _e319) * _e319);
                                        let _e322: f32 = (_e321 + _e316);
                                        let _e324: f32 = ((_e321 * _e309) / _e322);
                                        local[(_e262 | 1u)] = bitcast<u32>((_e284 + (_e324 * _e310)));
                                        local[(_e262 | 2u)] = bitcast<u32>((_e287 + (_e324 * _e311)));
                                        let _e332: f32 = ((_e316 * _e309) / _e322);
                                        let _e333: u32 = local[(_e272 | 2u)];
                                        let _e335: u32 = local[(_e272 | 1u)];
                                        local[(_e272 | 1u)] = bitcast<u32>((bitcast<f32>(_e335) - (_e332 * _e310)));
                                        local[(_e272 | 2u)] = bitcast<u32>((bitcast<f32>(_e333) - (_e332 * _e311)));
                                    }
                                    continue;
                                    continuing {
                                        let _e343: u32 = (_e260 + 1u);
                                        phi_330_ = _e343;
                                        break if (_e343 == _e80);
                                    }
                                }
                            }
                            continue;
                            continuing {
                                phi_326_ = _e255;
                                break if (_e255 == _e80);
                            }
                        }
                        if _e252 {
                            phi_420_ = _e244;
                            loop {
                                let _e347: u32 = phi_420_;
                                let _e349: u32 = (_e347 << bitcast<u32>(2u));
                                let _e352: u32 = local[(_e349 | 2u)];
                                let _e354: u32 = local_1[_e349];
                                let _e356: u32 = (_e349 | 1u);
                                let _e358: u32 = local[_e356];
                                let _e359: f32 = bitcast<f32>(_e358);
                                let _e362: f32 = (((bitcast<f32>(_e354) - _e359) * 0.086f) + _e359);
                                local[_e356] = bitcast<u32>(_e362);
                                let _e365: u32 = local_1[_e356];
                                let _e367: f32 = bitcast<f32>(_e352);
                                let _e370: f32 = (((bitcast<f32>(_e365) - _e367) * 0.086f) + _e367);
                                local[(_e349 | 2u)] = bitcast<u32>(_e370);
                                let _e375: f32 = sqrt(dot(vec2<f32>(_e362, _e370), vec2<f32>(_e362, _e370)));
                                if (_e375 > 0.75f) {
                                    let _e377: f32 = (0.75f / _e375);
                                    local[_e356] = bitcast<u32>((_e362 * _e377));
                                    local[(_e349 | 2u)] = bitcast<u32>((_e370 * _e377));
                                }
                                continue;
                                continuing {
                                    let _e382: u32 = (_e347 + 1u);
                                    phi_420_ = _e382;
                                    break if (_e382 == _e80);
                                }
                            }
                        }
                    }
                    continue;
                    continuing {
                        let _e384: u32 = (_e249 + 1u);
                        phi_272_ = _e384;
                        break if (_e384 == 8u);
                    }
                }
            }
            let _e387: u32 = (_e82 << bitcast<u32>(2u));
            let _e389: u32 = local[_e387];
            let _e390: f32 = bitcast<f32>(_e389);
            let _e393: u32 = local[(_e387 | 1u)];
            let _e394: f32 = bitcast<f32>(_e393);
            let _e397: u32 = local[(_e387 | 2u)];
            let _e398: f32 = bitcast<f32>(_e397);
            let _e410: u32 = (_e62 << bitcast<u32>(2u));
            U0_.member[(_e62 * 4u)] = bitcast<u32>(((((_e390 * _e104) + _e65.y) + (_e394 * _e122)) + (_e398 * ((_e123 * _e106) - (_e124 * _e105)))));
            U0_.member[((_e62 * 4u) + 1u)] = bitcast<u32>(((((_e390 * _e105) + _e65.w) + (_e394 * _e123)) + (_e398 * ((_e124 * _e104) - (_e122 * _e106)))));
            U0_.member[((_e62 * 4u) + 2u)] = bitcast<u32>(((((_e390 * _e106) + _e70.y) + (_e394 * _e124)) + (_e398 * ((_e122 * _e105) - (_e123 * _e104)))));
            let _e446: u32 = local[(_e387 | 3u)];
            U0_.member[((_e62 * 4u) + 3u)] = _e446;
        } else {
            let _e453: u32 = (_e62 << bitcast<u32>(2u));
            U0_.member[(_e62 * 4u)] = 0u;
            U0_.member[((_e62 * 4u) + 1u)] = 0u;
            U0_.member[((_e62 * 4u) + 2u)] = 0u;
            U0_.member[((_e62 * 4u) + 3u)] = 0u;
        }
    }
    return;
}

@compute @workgroup_size(8, 1, 1) 
fn main(@builtin(global_invocation_id) param: vec3<u32>) {
    global = param;
    main_1();
}
