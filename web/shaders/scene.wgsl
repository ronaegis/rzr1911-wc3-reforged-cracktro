struct typeCB0UBO {
    CB0_m0_: array<vec4<f32>, 62>,
}

struct typeStructuredBufferuint {
    member: array<u32>,
}

@group(0) @binding(8) 
var<uniform> CB0UBO: typeCB0UBO;
@group(0) @binding(0) 
var<storage> T0_: typeStructuredBufferuint;
var<private> invarTEXCOORD1_1: vec2<f32>;
var<private> outvarSV_Target0_: vec4<f32>;

fn main_1() {
    var phi_149_: f32;
    var phi_152_: f32;
    var phi_154_: f32;
    var phi_156_: f32;
    var phi_158_: u32;
    var phi_160_: u32;
    var phi_162_: u32;
    var phi_164_: u32;
    var phi_150_: f32;
    var phi_153_: f32;
    var phi_155_: f32;
    var phi_157_: f32;
    var phi_182_: f32;
    var phi_184_: f32;
    var phi_186_: f32;
    var phi_188_: u32;
    var phi_247_: u32;
    var phi_250_: u32;
    var phi_252_: u32;
    var phi_254_: f32;
    var phi_256_: f32;
    var phi_258_: f32;
    var phi_260_: f32;
    var phi_262_: f32;
    var phi_264_: f32;
    var phi_266_: u32;
    var phi_280_: f32;
    var phi_283_: f32;
    var phi_285_: f32;
    var phi_287_: f32;
    var phi_289_: u32;
    var phi_291_: u32;
    var phi_293_: u32;
    var phi_295_: u32;
    var phi_297_: u32;
    var phi_299_: u32;
    var phi_301_: u32;
    var phi_303_: f32;
    var phi_305_: u32;
    var phi_307_: u32;
    var phi_354_: f32;
    var phi_281_: f32;
    var phi_286_: f32;
    var phi_284_: f32;
    var phi_383_: f32;
    var phi_410_: f32;
    var phi_420_: f32;
    var phi_456_: f32;
    var phi_468_: f32;
    var phi_512_: f32;
    var phi_515_: f32;
    var phi_570_: f32;
    var phi_571_: u32;
    var phi_572_: f32;
    var phi_593_: u32;
    var phi_594_: u32;
    var phi_595_: u32;
    var phi_596_: u32;
    var phi_597_: u32;
    var phi_598_: u32;
    var phi_599_: u32;
    var phi_288_: f32;
    var phi_308_: u32;
    var phi_290_: u32;
    var phi_306_: u32;
    var phi_304_: f32;
    var phi_292_: u32;
    var phi_294_: u32;
    var phi_296_: u32;
    var phi_298_: u32;
    var phi_300_: u32;
    var phi_302_: u32;
    var local: u32;
    var local_1: f32;
    var local_2: u32;
    var local_3: u32;
    var local_4: u32;
    var local_5: u32;
    var local_6: u32;
    var local_7: u32;
    var phi_671_: u32;
    var phi_672_: f32;
    var phi_689_: f32;
    var local_8: u32;
    var local_9: u32;
    var local_10: u32;
    var phi_702_: u32;
    var phi_712_: u32;
    var phi_713_: u32;
    var phi_714_: u32;
    var local_11: u32;
    var phi_816_: u32;
    var phi_819_: f32;
    var phi_821_: f32;
    var phi_823_: f32;
    var phi_825_: f32;
    var phi_827_: f32;
    var phi_829_: f32;
    var phi_906_: f32;
    var phi_907_: f32;
    var phi_908_: f32;
    var phi_909_: f32;
    var phi_934_: u32;
    var phi_970_: u32;
    var phi_982_: f32;
    var phi_1024_: f32;
    var phi_1027_: f32;
    var phi_1029_: f32;
    var phi_1031_: f32;
    var phi_1086_: f32;
    var phi_1087_: f32;
    var phi_817_: u32;
    var phi_820_: f32;
    var phi_822_: f32;
    var phi_824_: f32;
    var phi_826_: f32;
    var phi_828_: f32;
    var phi_830_: f32;
    var phi_265_: f32;
    var phi_263_: f32;
    var phi_261_: f32;
    var phi_259_: f32;
    var phi_1095_: u32;
    var phi_1096_: f32;
    var phi_1106_: u32;
    var local_12: f32;
    var local_13: f32;
    var local_14: f32;
    var local_15: f32;
    var phi_1174_: u32;
    var phi_181_: f32;
    var phi_180_: f32;
    var phi_179_: f32;
    var phi_177_: f32;
    var phi_1175_: u32;
    var phi_1176_: u32;
    var local_16: u32;
    var local_17: u32;
    var local_18: u32;
    var local_19: f32;
    var local_20: f32;
    var local_21: f32;
    var local_22: u32;
    var local_23: u32;
    var local_24: u32;
    var local_25: f32;
    var local_26: f32;
    var local_27: f32;
    var local_28: f32;
    var local_29: f32;
    var local_30: f32;
    var local_31: f32;
    var local_32: f32;
    var local_33: f32;
    var local_34: f32;
    var local_35: f32;
    var local_36: f32;
    var local_37: f32;
    var local_38: f32;
    var local_39: f32;
    var local_40: f32;
    var local_41: f32;
    var local_42: f32;
    var local_43: f32;
    var local_44: f32;
    var local_45: f32;
    var local_46: f32;
    var local_47: f32;
    var local_48: f32;
    var local_49: f32;
    var local_50: f32;
    var local_51: f32;

    let _e86: vec2<f32> = invarTEXCOORD1_1;
    let _e89: vec4<f32> = CB0UBO.CB0_m0_[58u];
    let _e90: vec4<u32> = bitcast<vec4<u32>>(_e89);
    let _e97: vec4<f32> = CB0UBO.CB0_m0_[59u];
    let _e98: vec4<u32> = bitcast<vec4<u32>>(_e97);
    let _e103: vec4<f32> = CB0UBO.CB0_m0_[61u];
    let _e109: f32 = CB0UBO.CB0_m0_[51u][3i];
    let _e112: i32 = min(128i, max(i32(_e109), 0i));
    let _e117: f32 = CB0UBO.CB0_m0_[1u][0i];
    let _e123: f32 = CB0UBO.CB0_m0_[1u][1i];
    let _e127: vec4<f32> = CB0UBO.CB0_m0_[0u];
    let _e132: u32 = bitcast<u32>(min(bitcast<i32>(bitcast<vec4<u32>>(_e127).y), 0i));
    phi_149_ = f32();
    phi_152_ = f32();
    phi_154_ = f32();
    phi_156_ = f32();
    phi_158_ = 0u;
    phi_160_ = 0u;
    phi_162_ = 0u;
    phi_164_ = _e132;
    loop {
        let _e134: f32 = phi_149_;
        let _e136: f32 = phi_152_;
        let _e138: f32 = phi_154_;
        let _e140: f32 = phi_156_;
        let _e142: u32 = phi_158_;
        let _e144: u32 = phi_160_;
        let _e146: u32 = phi_162_;
        let _e148: u32 = phi_164_;
        let _e149: i32 = bitcast<i32>(_e148);
        let _e150: bool = (_e149 < 1i);
        local_22 = _e146;
        local_23 = _e144;
        local_24 = _e142;
        if _e150 {
            phi_150_ = _e134;
            phi_153_ = _e136;
            phi_155_ = _e138;
            phi_157_ = _e140;
            phi_182_ = bitcast<f32>(_e142);
            phi_184_ = bitcast<f32>(_e144);
            phi_186_ = bitcast<f32>(_e146);
            phi_188_ = _e132;
            loop {
                let _e156: f32 = phi_150_;
                let _e158: f32 = phi_153_;
                let _e160: f32 = phi_155_;
                let _e162: f32 = phi_157_;
                let _e164: f32 = phi_182_;
                let _e166: f32 = phi_184_;
                let _e168: f32 = phi_186_;
                let _e170: u32 = phi_188_;
                let _e171: i32 = bitcast<i32>(_e170);
                let _e172: bool = (_e171 < 1i);
                local_25 = _e156;
                local_26 = _e158;
                local_27 = _e160;
                local_28 = _e162;
                local_19 = _e168;
                local_20 = _e166;
                local_21 = _e164;
                if _e172 {
                    let _e179: f32 = (((((_e86.x * _e117) + (-0.5f + f32(_e171))) * 2f) - _e117) / _e123);
                    let _e185: f32 = (((((_e86.y * _e123) + (-0.5f + f32(_e149))) * 2f) - _e123) / _e123);
                    let _e189: f32 = (f32(bitcast<i32>((_e170 + _e148))) + 0.5f);
                    let _e193: f32 = CB0UBO.CB0_m0_[52u][3i];
                    let _e194: f32 = sin(_e193);
                    let _e195: f32 = cos(_e193);
                    let _e196: f32 = (1.8f * _e194);
                    let _e199: f32 = ((_e194 * -1.2f) + (_e185 * _e195));
                    let _e203: f32 = ((_e195 * -1.2f) + (_e194 * -(_e185)));
                    let _e207: f32 = CB0UBO.CB0_m0_[53u][0i];
                    let _e208: f32 = sin(_e207);
                    let _e209: f32 = cos(_e207);
                    let _e211: f32 = (_e195 * (1.8f * _e208));
                    let _e213: f32 = (_e195 * (1.8f * _e209));
                    let _e216: f32 = ((_e179 * _e209) - (_e208 * _e203));
                    let _e219: f32 = ((_e203 * _e209) + (_e208 * _e179));
                    let _e220: vec3<f32> = vec3<f32>(_e216, _e199, _e219);
                    let _e222: f32 = inverseSqrt(dot(_e220, _e220));
                    let _e223: f32 = (_e222 * _e216);
                    let _e224: f32 = (_e222 * _e199);
                    let _e225: f32 = (_e222 * _e219);
                    phi_247_ = 0u;
                    phi_250_ = 0u;
                    phi_252_ = 0u;
                    phi_254_ = 0f;
                    phi_256_ = 0f;
                    phi_258_ = _e156;
                    phi_260_ = _e158;
                    phi_262_ = _e160;
                    phi_264_ = _e162;
                    phi_266_ = 0u;
                    loop {
                        let _e228: u32 = phi_247_;
                        let _e230: u32 = phi_250_;
                        let _e232: u32 = phi_252_;
                        let _e234: f32 = phi_254_;
                        let _e236: f32 = phi_256_;
                        let _e238: f32 = phi_258_;
                        let _e240: f32 = phi_260_;
                        let _e242: f32 = phi_262_;
                        let _e244: f32 = phi_264_;
                        let _e246: u32 = phi_266_;
                        let _e247: i32 = bitcast<i32>(_e246);
                        if (_e247 >= 3i) {
                            phi_1174_ = _e228;
                            phi_181_ = _e244;
                            phi_180_ = _e242;
                            phi_179_ = _e240;
                            phi_177_ = _e238;
                            phi_1175_ = _e230;
                            phi_1176_ = _e232;
                            break;
                        } else {
                            phi_280_ = _e244;
                            phi_283_ = _e242;
                            phi_285_ = _e240;
                            phi_287_ = _e238;
                            phi_289_ = 1065353216u;
                            phi_291_ = 0u;
                            phi_293_ = 0u;
                            phi_295_ = 0u;
                            phi_297_ = 0u;
                            phi_299_ = 0u;
                            phi_301_ = 0u;
                            phi_303_ = 100000000000000000000f;
                            phi_305_ = 4294967295u;
                            phi_307_ = 0u;
                            loop {
                                let _e252: f32 = phi_280_;
                                let _e254: f32 = phi_283_;
                                let _e256: f32 = phi_285_;
                                let _e258: f32 = phi_287_;
                                let _e260: u32 = phi_289_;
                                let _e262: u32 = phi_291_;
                                let _e264: u32 = phi_293_;
                                let _e266: u32 = phi_295_;
                                let _e268: u32 = phi_297_;
                                let _e270: u32 = phi_299_;
                                let _e272: u32 = phi_301_;
                                let _e274: f32 = phi_303_;
                                let _e276: u32 = phi_305_;
                                let _e278: u32 = phi_307_;
                                let _e280: bool = (bitcast<i32>(_e278) < _e112);
                                local = _e276;
                                local_1 = _e274;
                                local_2 = _e272;
                                local_3 = _e270;
                                local_4 = _e268;
                                local_5 = _e266;
                                local_6 = _e264;
                                local_7 = _e262;
                                local_8 = _e276;
                                local_9 = _e276;
                                local_10 = _e276;
                                local_11 = _e260;
                                local_42 = _e258;
                                local_15 = _e274;
                                local_48 = _e252;
                                local_49 = _e254;
                                local_50 = _e256;
                                local_51 = _e258;
                                if _e280 {
                                    let _e282: u32 = (_e278 * 4u);
                                    let _e285: u32 = T0_.member[_e282];
                                    let _e286: f32 = bitcast<f32>(_e285);
                                    let _e290: u32 = T0_.member[(_e282 + 1u)];
                                    let _e294: u32 = T0_.member[(_e282 + 2u)];
                                    let _e298: u32 = T0_.member[(_e282 + 3u)];
                                    let _e302: u32 = T0_.member[(_e282 + 512u)];
                                    let _e306: u32 = T0_.member[(_e282 + 513u)];
                                    let _e307: f32 = bitcast<f32>(_e306);
                                    let _e311: u32 = T0_.member[(_e282 + 514u)];
                                    let _e312: f32 = bitcast<f32>(_e311);
                                    let _e313: f32 = bitcast<f32>(_e302);
                                    let _e315: f32 = bitcast<f32>(_e290);
                                    let _e317: f32 = bitcast<f32>(_e294);
                                    let _e319: vec3<f32> = vec3<f32>((_e286 - _e313), (_e315 - _e307), (_e317 - _e312));
                                    let _e322: bool = (2f < sqrt(dot(_e319, _e319)));
                                    if _e322 {
                                        phi_354_ = bitcast<f32>(_e298);
                                    } else {
                                        phi_354_ = _e258;
                                    }
                                    let _e325: f32 = phi_354_;
                                    if !(_e322) {
                                        let _e331: f32 = (0.15f * _e189);
                                        let _e341: f32 = bitcast<f32>(_e298);
                                        let _e345: u32 = T0_.member[(_e282 + 515u)];
                                        phi_281_ = ((_e331 * (_e312 - _e317)) + _e317);
                                        phi_286_ = ((_e331 * (_e307 - _e315)) + _e315);
                                        phi_284_ = ((_e331 * (_e313 - _e286)) + _e286);
                                        phi_383_ = ((_e331 * (bitcast<f32>(_e345) - _e341)) + _e341);
                                    } else {
                                        phi_281_ = select(_e252, _e317, _e322);
                                        phi_286_ = select(_e256, _e315, _e322);
                                        phi_284_ = select(_e254, _e286, _e322);
                                        phi_383_ = _e325;
                                    }
                                    let _e351: f32 = phi_281_;
                                    let _e353: f32 = phi_286_;
                                    let _e355: f32 = phi_284_;
                                    let _e357: f32 = phi_383_;
                                    let _e366: f32 = ((_e213 + (_e225 * _e236)) - _e351);
                                    let _e367: vec3<f32> = vec3<f32>(((_e211 + (_e223 * _e236)) - _e355), ((_e196 + (_e224 * _e236)) - _e353), _e366);
                                    let _e368: vec3<f32> = vec3<f32>(_e223, _e224, _e225);
                                    let _e369: f32 = dot(_e367, _e368);
                                    let _e373: f32 = (((_e357 * _e357) * -1.44f) + dot(_e367, _e367));
                                    let _e375: u32 = select(0u, 4294967295u, (0f < _e369));
                                    let _e378: u32 = (_e375 & select(0u, 4294967295u, (0f < _e373)));
                                    local_38 = _e351;
                                    local_39 = _e355;
                                    local_40 = _e353;
                                    if (_e378 != 0u) {
                                        phi_410_ = 0f;
                                    } else {
                                        phi_410_ = bitcast<f32>(_e375);
                                    }
                                    let _e382: f32 = phi_410_;
                                    if (_e378 == 0u) {
                                        phi_420_ = bitcast<f32>(select(0u, 4294967295u, (((_e369 * _e369) - _e373) >= 0f)));
                                    } else {
                                        phi_420_ = _e382;
                                    }
                                    let _e390: f32 = phi_420_;
                                    if (bitcast<u32>(_e390) == 0u) {
                                        phi_288_ = _e357;
                                        phi_308_ = (_e278 + 1u);
                                        phi_290_ = _e260;
                                        phi_306_ = _e276;
                                        phi_304_ = _e274;
                                        phi_292_ = _e262;
                                        phi_294_ = _e264;
                                        phi_296_ = _e266;
                                        phi_298_ = _e268;
                                        phi_300_ = _e270;
                                        phi_302_ = _e272;
                                        continue;
                                    }
                                    let _e397: u32 = ((((_e278 * 1031u) + 7919u) * 747796405u) + 2891336453u);
                                    let _e405: u32 = ((_e397 ^ (_e397 >> bitcast<u32>((((_e397 >> bitcast<u32>(28u)) + 4u) & 31u)))) * 277803737u);
                                    let _e410: f32 = (f32((_e405 ^ (_e405 >> bitcast<u32>(22u)))) * 0.00000000023283064f);
                                    let _e411: bool = (_e410 < 0.66f);
                                    let _e412: f32 = select(_e390, 0.075f, _e411);
                                    let _e414: bool = !(_e411);
                                    if _e414 {
                                        let _e415: bool = (_e410 < 0.98f);
                                        phi_456_ = select(select(_e412, 0.15f, _e415), 0.3f, !(_e415));
                                    } else {
                                        phi_456_ = _e412;
                                    }
                                    let _e421: f32 = phi_456_;
                                    let _e422: f32 = select(_e366, 0.075f, _e411);
                                    if _e414 {
                                        let _e423: bool = (_e410 < 0.98f);
                                        phi_468_ = select(select(_e422, 0.15f, _e423), 0.3f, !(_e423));
                                    } else {
                                        phi_468_ = _e422;
                                    }
                                    let _e429: f32 = phi_468_;
                                    let _e432: f32 = bitcast<f32>(select(1061158912u, 1050253722u, (_e429 >= 0.3f)));
                                    let _e433: f32 = (_e432 * _e351);
                                    let _e434: f32 = (_e432 * _e355);
                                    let _e436: f32 = ((_e432 * _e353) * -1f);
                                    let _e437: f32 = cos(_e433);
                                    let _e438: f32 = sin(_e433);
                                    let _e439: f32 = cos(_e434);
                                    let _e440: f32 = sin(_e434);
                                    let _e441: f32 = cos(_e436);
                                    let _e442: f32 = sin(_e436);
                                    let _e446: f32 = (_e438 * _e440);
                                    let _e455: f32 = (_e437 * _e440);
                                    let _e463: vec3<f32> = vec3<f32>((_e439 * _e441), ((_e441 * _e446) + (_e437 * _e442)), ((_e438 * _e442) - (_e441 * _e455)));
                                    let _e465: vec3<f32> = vec3<f32>((_e442 * -(_e439)), ((_e437 * _e441) - (_e442 * _e446)), ((_e438 * _e441) + (_e442 * _e455)));
                                    let _e467: vec3<f32> = vec3<f32>(_e440, (_e439 * -(_e438)), (_e437 * _e439));
                                    phi_512_ = 0f;
                                    phi_515_ = 0f;
                                    loop {
                                        let _e473: f32 = phi_512_;
                                        let _e475: f32 = phi_515_;
                                        let _e477: i32 = bitcast<i32>(_e475);
                                        if (_e477 >= 40i) {
                                            phi_570_ = bitcast<f32>(select(0u, 4294967295u, (_e477 < 40i)));
                                            phi_571_ = 0u;
                                            phi_572_ = 0f;
                                            break;
                                        } else {
                                            let _e483: f32 = (((dot(_e463, _e368) * _e473) + dot(_e463, _e367)) / _e421);
                                            let _e486: f32 = (((dot(_e465, _e368) * _e473) + dot(_e465, _e367)) / _e421);
                                            let _e489: f32 = (((dot(_e467, _e368) * _e473) + dot(_e467, _e367)) / _e421);
                                            let _e491: f32 = max(_e489, -(_e489));
                                            let _e493: f32 = max(_e483, -(_e483));
                                            let _e495: f32 = max(_e486, -(_e486));
                                            let _e496: bool = (_e493 < _e495);
                                            let _e497: f32 = select(_e495, _e493, _e496);
                                            let _e498: f32 = select(_e493, _e495, _e496);
                                            let _e499: bool = (_e498 < _e491);
                                            let _e501: f32 = select(_e491, _e498, _e499);
                                            let _e502: bool = (_e497 < _e501);
                                            let _e509: f32 = ((_e421 * (-1.2998674f + dot(vec3<f32>(select(_e498, _e491, _e499), select(_e497, _e501, _e502), select(_e501, _e497, _e502)), vec3<f32>(0.9284767f, 0.37139067f, 0f)))) * 0.8f);
                                            if (_e509 < 0.0015f) {
                                                phi_570_ = _e509;
                                                phi_571_ = bitcast<u32>(_e473);
                                                phi_572_ = 1f;
                                                break;
                                            } else {
                                                let _e511: f32 = (_e473 + _e509);
                                                let _e512: bool = (5f < _e511);
                                                local_41 = _e511;
                                                if !(_e512) {
                                                    continue;
                                                }
                                                phi_570_ = bitcast<f32>(select(0u, 4294967295u, _e512));
                                                phi_571_ = 0u;
                                                phi_572_ = 0f;
                                                break;
                                            }
                                        }
                                        continuing {
                                            let _e1345: f32 = local_41;
                                            phi_512_ = _e1345;
                                            phi_515_ = bitcast<f32>((bitcast<u32>(_e475) + 1u));
                                        }
                                    }
                                    let _e521: f32 = phi_570_;
                                    let _e523: u32 = phi_571_;
                                    let _e525: f32 = phi_572_;
                                    let _e529: f32 = bitcast<f32>(select(_e523, 3212836864u, (bitcast<u32>(_e525) == 0u)));
                                    let _e535: bool = ((select(0u, 4294967295u, (0f < _e529)) & select(0u, 4294967295u, (_e529 < _e274))) != 0u);
                                    if _e535 {
                                        phi_593_ = bitcast<u32>(_e355);
                                        phi_594_ = bitcast<u32>(_e353);
                                        phi_595_ = bitcast<u32>(_e351);
                                        phi_596_ = bitcast<u32>(_e433);
                                        phi_597_ = bitcast<u32>(_e421);
                                        phi_598_ = bitcast<u32>(_e436);
                                        phi_599_ = bitcast<u32>(_e434);
                                    } else {
                                        phi_593_ = _e272;
                                        phi_594_ = _e270;
                                        phi_595_ = _e268;
                                        phi_596_ = _e266;
                                        phi_597_ = _e260;
                                        phi_598_ = _e262;
                                        phi_599_ = _e264;
                                    }
                                    let _e544: u32 = phi_593_;
                                    let _e546: u32 = phi_594_;
                                    let _e548: u32 = phi_595_;
                                    let _e550: u32 = phi_596_;
                                    let _e552: u32 = phi_597_;
                                    let _e554: u32 = phi_598_;
                                    let _e556: u32 = phi_599_;
                                    phi_288_ = _e521;
                                    phi_308_ = (_e278 + 1u);
                                    phi_290_ = _e552;
                                    phi_306_ = select(_e276, _e278, _e535);
                                    phi_304_ = select(_e274, _e529, _e535);
                                    phi_292_ = _e554;
                                    phi_294_ = _e556;
                                    phi_296_ = _e550;
                                    phi_298_ = _e548;
                                    phi_300_ = _e546;
                                    phi_302_ = _e544;
                                    continue;
                                } else {
                                    break;
                                }
                                continuing {
                                    let _e561: f32 = phi_288_;
                                    let _e563: u32 = phi_308_;
                                    let _e565: u32 = phi_290_;
                                    let _e567: u32 = phi_306_;
                                    let _e569: f32 = phi_304_;
                                    let _e571: u32 = phi_292_;
                                    let _e573: u32 = phi_294_;
                                    let _e575: u32 = phi_296_;
                                    let _e577: u32 = phi_298_;
                                    let _e579: u32 = phi_300_;
                                    let _e581: u32 = phi_302_;
                                    let _e1316: f32 = local_38;
                                    phi_280_ = _e1316;
                                    let _e1319: f32 = local_39;
                                    phi_283_ = _e1319;
                                    let _e1322: f32 = local_40;
                                    phi_285_ = _e1322;
                                    phi_287_ = _e561;
                                    phi_289_ = _e565;
                                    phi_291_ = _e571;
                                    phi_293_ = _e573;
                                    phi_295_ = _e575;
                                    phi_297_ = _e577;
                                    phi_299_ = _e579;
                                    phi_301_ = _e581;
                                    phi_303_ = _e569;
                                    phi_305_ = _e567;
                                    phi_307_ = _e563;
                                }
                            }
                            let _e583: u32 = local;
                            if (_e583 == 4294967295u) {
                                let _e1174: f32 = (bitcast<f32>(bitcast<vec4<u32>>(_e103).y) * (1f - _e234));
                                phi_1174_ = bitcast<u32>((bitcast<f32>(_e228) + _e1174));
                                let _e1440: f32 = local_48;
                                phi_181_ = _e1440;
                                let _e1443: f32 = local_49;
                                phi_180_ = _e1443;
                                let _e1446: f32 = local_50;
                                phi_179_ = _e1446;
                                let _e1449: f32 = local_51;
                                phi_177_ = _e1449;
                                phi_1175_ = bitcast<u32>((bitcast<f32>(_e230) + _e1174));
                                phi_1176_ = bitcast<u32>((bitcast<f32>(_e232) + _e1174));
                                break;
                            } else {
                                let _e586: f32 = local_1;
                                let _e587: f32 = (_e236 + _e586);
                                let _e589: f32 = (_e211 + (_e223 * _e587));
                                let _e591: f32 = (_e196 + (_e224 * _e587));
                                let _e593: f32 = (_e213 + (_e225 * _e587));
                                let _e595: u32 = local_2;
                                let _e599: u32 = local_3;
                                let _e603: u32 = local_4;
                                let _e607: u32 = local_5;
                                let _e608: f32 = bitcast<f32>(_e607);
                                let _e609: f32 = cos(_e608);
                                let _e610: f32 = sin(_e608);
                                let _e612: u32 = local_6;
                                let _e613: f32 = bitcast<f32>(_e612);
                                let _e614: f32 = cos(_e613);
                                let _e615: f32 = sin(_e613);
                                let _e617: u32 = local_7;
                                let _e618: f32 = bitcast<f32>(_e617);
                                let _e619: f32 = cos(_e618);
                                let _e620: f32 = sin(_e618);
                                let _e621: f32 = (_e614 * _e619);
                                let _e623: f32 = (_e620 * -(_e614));
                                let _e625: f32 = (_e610 * _e615);
                                let _e627: f32 = ((_e609 * _e620) + (_e619 * _e625));
                                let _e630: f32 = ((_e609 * _e619) - (_e620 * _e625));
                                let _e632: f32 = (_e614 * -(_e610));
                                let _e634: f32 = (_e609 * _e615);
                                let _e636: f32 = ((_e610 * _e620) - (_e619 * _e634));
                                let _e639: f32 = ((_e610 * _e619) + (_e620 * _e634));
                                let _e640: f32 = (_e609 * _e614);
                                let _e642: vec3<f32> = vec3<f32>((_e589 - bitcast<f32>(_e595)), (_e591 - bitcast<f32>(_e599)), (_e593 - bitcast<f32>(_e603)));
                                let _e643: f32 = dot(vec3<f32>(_e621, _e627, _e636), _e642);
                                let _e645: f32 = dot(vec3<f32>(_e623, _e630, _e639), _e642);
                                let _e647: f32 = dot(vec3<f32>(_e615, _e632, _e640), _e642);
                                let _e649: f32 = max(_e643, -(_e643));
                                let _e651: f32 = max(_e645, -(_e645));
                                let _e655: f32 = max(max(_e647, -(_e647)), max(_e651, _e649));
                                let _e656: bool = (_e655 == _e649);
                                if _e656 {
                                    phi_671_ = 0u;
                                    phi_672_ = _e647;
                                } else {
                                    let _e657: bool = (_e655 == _e651);
                                    phi_671_ = select(2u, 1u, _e657);
                                    phi_672_ = select(_e645, _e647, _e657);
                                }
                                let _e661: u32 = phi_671_;
                                let _e663: f32 = phi_672_;
                                let _e664: f32 = select(_e643, _e645, _e656);
                                let _e669: bool = (max(_e663, -(_e663)) < max(-(_e664), _e664));
                                if (_e661 == 1u) {
                                    phi_689_ = bitcast<f32>(select(4294967295u, 0u, _e669));
                                } else {
                                    phi_689_ = bitcast<f32>(select(0u, 4294967295u, _e669));
                                }
                                let _e676: f32 = phi_689_;
                                let _e678: u32 = local_8;
                                let _e681: u32 = local_9;
                                let _e686: u32 = (bitcast<u32>(max(bitcast<i32>(_e678), bitcast<i32>((0u - _e681)))) % 2u);
                                let _e688: u32 = local_10;
                                if (0u != (_e688 & 2147483648u)) {
                                    phi_702_ = (0u - _e686);
                                } else {
                                    phi_702_ = _e686;
                                }
                                let _e693: u32 = phi_702_;
                                let _e694: bool = (_e693 == 0u);
                                let _e696: bool = (bitcast<u32>(_e676) != 0u);
                                if _e696 {
                                    phi_712_ = select(_e98.y, _e90.z, _e694);
                                    phi_713_ = select(_e98.x, _e90.y, _e694);
                                    phi_714_ = select(_e90.w, _e90.x, _e694);
                                } else {
                                    phi_712_ = 1065353216u;
                                    phi_713_ = 1065353216u;
                                    phi_714_ = 1065353216u;
                                }
                                let _e701: u32 = phi_712_;
                                let _e703: u32 = phi_713_;
                                let _e705: u32 = phi_714_;
                                let _e708: u32 = local_11;
                                let _e709: f32 = bitcast<f32>(_e708);
                                let _e711: f32 = ((_e643 + 0.002f) / _e709);
                                let _e713: f32 = ((_e645 + -0.002f) / _e709);
                                let _e715: f32 = ((_e647 + -0.002f) / _e709);
                                let _e717: f32 = max(_e715, -(_e715));
                                let _e719: f32 = max(_e711, -(_e711));
                                let _e721: f32 = max(_e713, -(_e713));
                                let _e722: bool = (_e719 < _e721);
                                let _e723: f32 = select(_e721, _e719, _e722);
                                let _e724: f32 = select(_e719, _e721, _e722);
                                let _e725: bool = (_e724 < _e717);
                                let _e727: f32 = select(_e717, _e724, _e725);
                                let _e728: bool = (_e723 < _e727);
                                let _e734: f32 = (_e709 * (dot(vec3<f32>(select(_e724, _e717, _e725), select(_e723, _e727, _e728), select(_e727, _e723, _e728)), vec3<f32>(0.9284767f, 0.37139067f, 0f)) + -1.2998674f));
                                let _e736: f32 = ((_e643 + -0.002f) / _e709);
                                let _e738: f32 = ((_e647 + 0.002f) / _e709);
                                let _e740: f32 = max(_e738, -(_e738));
                                let _e742: f32 = max(_e736, -(_e736));
                                let _e743: bool = (_e742 < _e721);
                                let _e744: f32 = select(_e721, _e742, _e743);
                                let _e745: f32 = select(_e742, _e721, _e743);
                                let _e746: bool = (_e745 < _e740);
                                let _e748: f32 = select(_e740, _e745, _e746);
                                let _e749: bool = (_e744 < _e748);
                                let _e755: f32 = (_e709 * (dot(vec3<f32>(select(_e745, _e740, _e746), select(_e744, _e748, _e749), select(_e748, _e744, _e749)), vec3<f32>(0.9284767f, 0.37139067f, 0f)) + -1.2998674f));
                                let _e757: f32 = ((_e645 + 0.002f) / _e709);
                                let _e759: f32 = max(_e757, -(_e757));
                                let _e760: bool = (_e742 < _e759);
                                let _e761: f32 = select(_e759, _e742, _e760);
                                let _e762: f32 = select(_e742, _e759, _e760);
                                let _e763: bool = (_e762 < _e717);
                                let _e765: f32 = select(_e717, _e762, _e763);
                                let _e766: bool = (_e761 < _e765);
                                let _e772: f32 = (_e709 * (dot(vec3<f32>(select(_e762, _e717, _e763), select(_e761, _e765, _e766), select(_e765, _e761, _e766)), vec3<f32>(0.9284767f, 0.37139067f, 0f)) + -1.2998674f));
                                let _e773: f32 = (_e734 * -0.0016000001f);
                                let _e776: f32 = (_e772 * -0.0016000001f);
                                let _e777: f32 = ((_e773 + (_e755 * 0.0016000001f)) + _e776);
                                let _e778: bool = (_e719 < _e759);
                                let _e779: f32 = select(_e759, _e719, _e778);
                                let _e780: f32 = select(_e719, _e759, _e778);
                                let _e781: bool = (_e780 < _e740);
                                let _e783: f32 = select(_e740, _e780, _e781);
                                let _e784: bool = (_e779 < _e783);
                                let _e791: f32 = ((_e709 * (dot(vec3<f32>(select(_e780, _e740, _e781), select(_e779, _e783, _e784), select(_e783, _e779, _e784)), vec3<f32>(0.9284767f, 0.37139067f, 0f)) + -1.2998674f)) * 0.0016000001f);
                                let _e793: f32 = (_e755 * -0.0016000001f);
                                let _e796: f32 = (_e791 + (((_e734 * 0.0016000001f) + _e793) + _e776));
                                let _e800: f32 = (_e791 + ((_e773 + _e793) + (_e772 * 0.0016000001f)));
                                let _e801: f32 = (_e791 + _e777);
                                let _e802: vec3<f32> = vec3<f32>(_e796, _e800, _e801);
                                let _e804: f32 = inverseSqrt(dot(_e802, _e802));
                                phi_816_ = 1065353216u;
                                phi_819_ = _e777;
                                phi_821_ = 0f;
                                let _e1392: f32 = local_42;
                                phi_823_ = _e1392;
                                phi_825_ = _e632;
                                phi_827_ = _e630;
                                phi_829_ = _e627;
                                loop {
                                    let _e809: u32 = phi_816_;
                                    let _e811: f32 = phi_819_;
                                    let _e813: f32 = phi_821_;
                                    let _e815: f32 = phi_823_;
                                    let _e817: f32 = phi_825_;
                                    let _e819: f32 = phi_827_;
                                    let _e821: f32 = phi_829_;
                                    let _e822: u32 = bitcast<u32>(_e813);
                                    let _e823: i32 = bitcast<i32>(_e813);
                                    if (_e823 >= _e112) {
                                        phi_265_ = _e821;
                                        phi_263_ = _e819;
                                        phi_261_ = _e817;
                                        phi_259_ = _e815;
                                        phi_1095_ = _e809;
                                        phi_1096_ = 0f;
                                        break;
                                    } else {
                                        let _e827: u32 = (_e822 * 4u);
                                        let _e830: u32 = T0_.member[_e827];
                                        let _e831: f32 = bitcast<f32>(_e830);
                                        let _e835: u32 = T0_.member[(_e827 + 1u)];
                                        let _e836: f32 = bitcast<f32>(_e835);
                                        let _e840: u32 = T0_.member[(_e827 + 2u)];
                                        let _e841: f32 = bitcast<f32>(_e840);
                                        let _e845: u32 = T0_.member[(_e827 + 3u)];
                                        let _e846: f32 = bitcast<f32>(_e845);
                                        let _e850: u32 = T0_.member[(_e827 + 512u)];
                                        let _e851: f32 = bitcast<f32>(_e850);
                                        let _e855: u32 = T0_.member[(_e827 + 513u)];
                                        let _e856: f32 = bitcast<f32>(_e855);
                                        let _e860: u32 = T0_.member[(_e827 + 514u)];
                                        let _e861: f32 = bitcast<f32>(_e860);
                                        let _e862: f32 = (_e831 - _e851);
                                        let _e863: f32 = (_e836 - _e856);
                                        let _e864: f32 = (_e841 - _e861);
                                        let _e865: vec3<f32> = vec3<f32>(_e862, _e863, _e864);
                                        let _e868: bool = (2f < sqrt(dot(_e865, _e865)));
                                        if !(_e868) {
                                            let _e875: f32 = (0.15f * _e189);
                                            let _e888: u32 = T0_.member[(_e827 + 515u)];
                                            phi_906_ = (_e841 + (_e875 * (_e861 - _e841)));
                                            phi_907_ = (_e836 + (_e875 * (_e856 - _e836)));
                                            phi_908_ = (_e831 + (_e875 * (_e851 - _e831)));
                                            phi_909_ = (_e846 + (_e875 * (bitcast<f32>(_e888) - _e846)));
                                        } else {
                                            phi_906_ = select(_e862, _e841, _e868);
                                            phi_907_ = select(_e864, _e836, _e868);
                                            phi_908_ = select(_e863, _e831, _e868);
                                            phi_909_ = select(_e811, _e846, _e868);
                                        }
                                        let _e894: f32 = phi_906_;
                                        let _e896: f32 = phi_907_;
                                        let _e898: f32 = phi_908_;
                                        let _e900: f32 = phi_909_;
                                        let _e903: f32 = (_e591 - _e896);
                                        let _e905: vec3<f32> = vec3<f32>((_e589 - _e898), _e903, (_e593 - _e894));
                                        let _e909: f32 = (((_e900 * _e900) * -1.44f) + dot(_e905, _e905));
                                        let _e911: u32 = select(0u, 4294967295u, (0f < _e903));
                                        let _e914: u32 = (_e911 & select(0u, 4294967295u, (0f < _e909)));
                                        if (_e914 == 0u) {
                                            phi_934_ = select(0u, 4294967295u, (((_e903 * _e903) - _e909) >= 0f));
                                        } else {
                                            phi_934_ = select(_e911, 0u, (_e914 != 0u));
                                        }
                                        let _e923: u32 = phi_934_;
                                        if (_e923 == 0u) {
                                            phi_817_ = _e809;
                                            phi_820_ = _e900;
                                            phi_822_ = bitcast<f32>((_e822 + 1u));
                                            phi_824_ = _e846;
                                            phi_826_ = 0f;
                                            phi_828_ = 1f;
                                            phi_830_ = 0f;
                                            continue;
                                        }
                                        let _e930: u32 = ((((_e822 * 1031u) + 7919u) * 747796405u) + 2891336453u);
                                        let _e938: u32 = ((_e930 ^ (_e930 >> bitcast<u32>((((_e930 >> bitcast<u32>(28u)) + 4u) & 31u)))) * 277803737u);
                                        let _e943: f32 = (f32((_e938 ^ (_e938 >> bitcast<u32>(22u)))) * 0.00000000023283064f);
                                        let _e944: bool = (_e943 < 0.66f);
                                        let _e945: u32 = select(_e923, 1033476506u, _e944);
                                        let _e947: bool = !(_e944);
                                        if _e947 {
                                            let _e948: bool = (_e943 < 0.98f);
                                            phi_970_ = select(select(_e945, 1041865114u, _e948), 1050253722u, !(_e948));
                                        } else {
                                            phi_970_ = _e945;
                                        }
                                        let _e954: u32 = phi_970_;
                                        let _e955: f32 = select((_e900 * 1.2f), 0.075f, _e944);
                                        if _e947 {
                                            let _e956: bool = (_e943 < 0.98f);
                                            phi_982_ = select(select(_e955, 0.15f, _e956), 0.3f, !(_e956));
                                        } else {
                                            phi_982_ = _e955;
                                        }
                                        let _e962: f32 = phi_982_;
                                        let _e965: f32 = bitcast<f32>(select(1061158912u, 1050253722u, (_e962 >= 0.3f)));
                                        let _e966: f32 = (_e965 * _e894);
                                        let _e967: f32 = (_e965 * _e898);
                                        let _e969: f32 = ((_e965 * _e896) * -1f);
                                        let _e970: f32 = cos(_e966);
                                        let _e971: f32 = sin(_e966);
                                        let _e972: f32 = cos(_e967);
                                        let _e973: f32 = sin(_e967);
                                        let _e974: f32 = cos(_e969);
                                        let _e975: f32 = sin(_e969);
                                        let _e979: f32 = (_e971 * _e973);
                                        let _e982: f32 = ((_e974 * _e979) + (_e970 * _e975));
                                        let _e985: f32 = ((_e970 * _e974) - (_e975 * _e979));
                                        let _e987: f32 = (_e972 * -(_e971));
                                        let _e988: f32 = (_e970 * _e973);
                                        phi_1024_ = bitcast<f32>(_e809);
                                        phi_1027_ = 0.02f;
                                        phi_1029_ = 0f;
                                        phi_1031_ = _e900;
                                        loop {
                                            let _e1004: f32 = phi_1024_;
                                            let _e1006: f32 = phi_1027_;
                                            let _e1008: f32 = phi_1029_;
                                            let _e1010: f32 = phi_1031_;
                                            let _e1012: i32 = bitcast<i32>(_e1008);
                                            local_46 = _e1008;
                                            local_47 = _e1008;
                                            if (_e1012 >= 16i) {
                                                phi_1086_ = _e1010;
                                                phi_1087_ = _e1004;
                                                break;
                                            } else {
                                                let _e1016: f32 = bitcast<f32>(_e954);
                                                let _e1019: f32 = (((_e1006 * _e982) + dot(vec3<f32>((_e974 * _e972), _e982, ((_e971 * _e975) - (_e974 * _e988))), _e905)) / _e1016);
                                                let _e1022: f32 = (((_e1006 * _e985) + dot(vec3<f32>((_e975 * -(_e972)), _e985, ((_e971 * _e974) + (_e975 * _e988))), _e905)) / _e1016);
                                                let _e1025: f32 = (((_e1006 * _e987) + dot(vec3<f32>(_e973, _e987, (_e970 * _e972)), _e905)) / _e1016);
                                                let _e1027: f32 = max(_e1025, -(_e1025));
                                                let _e1029: f32 = max(_e1019, -(_e1019));
                                                let _e1031: f32 = max(_e1022, -(_e1022));
                                                let _e1032: bool = (_e1029 < _e1031);
                                                let _e1033: f32 = select(_e1031, _e1029, _e1032);
                                                let _e1034: f32 = select(_e1029, _e1031, _e1032);
                                                let _e1035: bool = (_e1034 < _e1027);
                                                let _e1037: f32 = select(_e1027, _e1034, _e1035);
                                                let _e1038: bool = (_e1033 < _e1037);
                                                let _e1040: f32 = bitcast<f32>(select(0u, 4294967295u, _e1038));
                                                let _e1046: f32 = (_e1016 * (-1.2998674f + dot(vec3<f32>(select(_e1034, _e1027, _e1035), select(_e1033, _e1037, _e1038), select(_e1037, _e1033, _e1038)), vec3<f32>(0.9284767f, 0.37139067f, 0f))));
                                                let _e1050: f32 = min(_e1004, ((_e1046 * 52.8f) / _e1006));
                                                let _e1051: f32 = (_e1006 + (_e1046 * 0.8f));
                                                local_43 = _e1050;
                                                local_44 = _e1051;
                                                local_45 = _e1040;
                                                if ((select(0u, 4294967295u, (2f < _e1051)) | select(0u, 4294967295u, (_e1050 < 0.01f))) == 0u) {
                                                    continue;
                                                }
                                                phi_1086_ = _e1040;
                                                phi_1087_ = _e1050;
                                                break;
                                            }
                                            continuing {
                                                let _e1405: f32 = local_43;
                                                phi_1024_ = _e1405;
                                                let _e1408: f32 = local_44;
                                                phi_1027_ = _e1408;
                                                phi_1029_ = bitcast<f32>((bitcast<u32>(_e1008) + 1u));
                                                let _e1412: f32 = local_45;
                                                phi_1031_ = _e1412;
                                            }
                                        }
                                        let _e1061: f32 = phi_1086_;
                                        let _e1063: f32 = phi_1087_;
                                        if (_e1063 >= 0.01f) {
                                            phi_817_ = bitcast<u32>(_e1063);
                                            phi_820_ = _e1061;
                                            phi_822_ = bitcast<f32>((_e822 + 1u));
                                            let _e1420: f32 = local_46;
                                            phi_824_ = _e1420;
                                            phi_826_ = _e987;
                                            phi_828_ = _e985;
                                            phi_830_ = _e982;
                                            continue;
                                        }
                                        phi_265_ = _e982;
                                        phi_263_ = _e985;
                                        phi_261_ = _e987;
                                        let _e1429: f32 = local_47;
                                        phi_259_ = _e1429;
                                        phi_1095_ = bitcast<u32>(_e1063);
                                        phi_1096_ = 1f;
                                        break;
                                    }
                                    continuing {
                                        let _e1070: u32 = phi_817_;
                                        let _e1072: f32 = phi_820_;
                                        let _e1074: f32 = phi_822_;
                                        let _e1076: f32 = phi_824_;
                                        let _e1078: f32 = phi_826_;
                                        let _e1080: f32 = phi_828_;
                                        let _e1082: f32 = phi_830_;
                                        phi_816_ = _e1070;
                                        phi_819_ = _e1072;
                                        phi_821_ = _e1074;
                                        phi_823_ = _e1076;
                                        phi_825_ = _e1078;
                                        phi_827_ = _e1080;
                                        phi_829_ = _e1082;
                                    }
                                }
                                let _e1084: f32 = phi_265_;
                                let _e1086: f32 = phi_263_;
                                let _e1088: f32 = phi_261_;
                                let _e1090: f32 = phi_259_;
                                let _e1092: u32 = phi_1095_;
                                let _e1094: f32 = phi_1096_;
                                local_34 = _e1090;
                                local_35 = _e1088;
                                local_36 = _e1086;
                                local_37 = _e1084;
                                if (bitcast<u32>(_e1094) == 0u) {
                                    phi_1106_ = bitcast<u32>(min(max(bitcast<f32>(_e1092), 0f), 1f));
                                } else {
                                    phi_1106_ = 0u;
                                }
                                let _e1102: u32 = phi_1106_;
                                let _e1105: vec3<f32> = vec3<f32>((_e804 * _e796), (_e804 * _e800), (_e804 * _e801));
                                let _e1116: f32 = (0.35f * min(max((dot(vec3<f32>(_e223, _e224, _e225), vec3<f32>(dot(vec3<f32>(_e621, _e623, _e615), _e1105), dot(vec3<f32>(_e627, _e630, _e632), _e1105), dot(vec3<f32>(_e636, _e639, _e640), _e1105))) + 1f), 0f), 1f));
                                let _e1119: f32 = ((bitcast<f32>(_e1102) * 0.5f) + 0.5f);
                                let _e1120: f32 = bitcast<f32>(select(1059481190u, 1065353216u, _e696));
                                let _e1121: f32 = (1f - _e234);
                                let _e1131: f32 = (bitcast<f32>(_e232) + (_e1121 * (_e1120 * (_e1119 * min(max((-0.035f + (_e1116 + bitcast<f32>(_e705))), 0f), 1f)))));
                                let _e1141: f32 = (bitcast<f32>(_e230) + (_e1121 * (_e1120 * (_e1119 * min(max((-0.035f + (_e1116 + bitcast<f32>(_e703))), 0f), 1f)))));
                                let _e1151: f32 = (bitcast<f32>(_e228) + (_e1121 * (_e1120 * (_e1119 * min(max((-0.035f + (_e1116 + bitcast<f32>(_e701))), 0f), 1f)))));
                                let _e1153: f32 = ((_e1121 * _e1120) + _e234);
                                local_33 = _e1153;
                                local_12 = _e1131;
                                local_13 = _e1141;
                                local_14 = _e1151;
                                if (0.95f >= _e1153) {
                                    continue;
                                }
                                phi_1174_ = bitcast<u32>(_e1151);
                                phi_181_ = _e1084;
                                phi_180_ = _e1086;
                                phi_179_ = _e1088;
                                phi_177_ = _e1090;
                                phi_1175_ = bitcast<u32>(_e1141);
                                phi_1176_ = bitcast<u32>(_e1131);
                                break;
                            }
                        }
                        continuing {
                            let _e1156: f32 = local_12;
                            let _e1159: f32 = local_13;
                            let _e1162: f32 = local_14;
                            let _e1165: f32 = local_15;
                            phi_247_ = bitcast<u32>(_e1162);
                            phi_250_ = bitcast<u32>(_e1159);
                            phi_252_ = bitcast<u32>(_e1156);
                            let _e1299: f32 = local_33;
                            phi_254_ = _e1299;
                            phi_256_ = ((_e1165 + 0.01f) + _e236);
                            let _e1303: f32 = local_34;
                            phi_258_ = _e1303;
                            let _e1306: f32 = local_35;
                            phi_260_ = _e1306;
                            let _e1309: f32 = local_36;
                            phi_262_ = _e1309;
                            let _e1312: f32 = local_37;
                            phi_264_ = _e1312;
                            phi_266_ = (_e246 + 1u);
                        }
                    }
                    let _e1184: u32 = phi_1174_;
                    let _e1186: f32 = phi_181_;
                    let _e1188: f32 = phi_180_;
                    let _e1190: f32 = phi_179_;
                    let _e1192: f32 = phi_177_;
                    let _e1194: u32 = phi_1175_;
                    let _e1196: u32 = phi_1176_;
                    local_29 = _e1192;
                    local_30 = _e1190;
                    local_31 = _e1188;
                    local_32 = _e1186;
                    local_16 = _e1196;
                    local_17 = _e1194;
                    local_18 = _e1184;
                    continue;
                } else {
                    break;
                }
                continuing {
                    let _e1198: u32 = local_16;
                    let _e1205: u32 = local_17;
                    let _e1212: u32 = local_18;
                    let _e1280: f32 = local_29;
                    phi_150_ = _e1280;
                    let _e1283: f32 = local_30;
                    phi_153_ = _e1283;
                    let _e1286: f32 = local_31;
                    phi_155_ = _e1286;
                    let _e1289: f32 = local_32;
                    phi_157_ = _e1289;
                    phi_182_ = (_e164 + exp2((log2(bitcast<f32>(_e1212)) * 0.45454547f)));
                    phi_184_ = (_e166 + exp2((log2(bitcast<f32>(_e1205)) * 0.45454547f)));
                    phi_186_ = (_e168 + exp2((log2(bitcast<f32>(_e1198)) * 0.45454547f)));
                    phi_188_ = (_e170 + 1u);
                }
            }
            continue;
        } else {
            break;
        }
        continuing {
            let _e1220: f32 = local_19;
            let _e1223: f32 = local_20;
            let _e1226: f32 = local_21;
            let _e1264: f32 = local_25;
            phi_149_ = _e1264;
            let _e1267: f32 = local_26;
            phi_152_ = _e1267;
            let _e1270: f32 = local_27;
            phi_154_ = _e1270;
            let _e1273: f32 = local_28;
            phi_156_ = _e1273;
            phi_158_ = bitcast<u32>(_e1226);
            phi_160_ = bitcast<u32>(_e1223);
            phi_162_ = bitcast<u32>(_e1220);
            phi_164_ = (_e148 + 1u);
        }
    }
    let _e1239: f32 = ((0.8f * exp2((log2((((1f - _e86.y) * _e86.y) * (((1f - _e86.x) * _e86.x) * 16f))) * 0.2f))) + 0.2f);
    let _e1241: u32 = local_22;
    let _e1246: u32 = local_23;
    let _e1254: u32 = local_24;
    outvarSV_Target0_ = vec4<f32>((_e1239 * (bitcast<f32>(_e1241) * 1.1f)), (_e1239 * (exp2((log2(bitcast<f32>(_e1246)) * 1.3f)) * 1.1f)), (_e1239 * (exp2((log2(bitcast<f32>(_e1254)) * 1.4f)) * 1.1f)), 1f);
    return;
}

@fragment 
fn main(@location(0) invarTEXCOORD1_: vec2<f32>) -> @location(0) vec4<f32> {
    invarTEXCOORD1_1 = invarTEXCOORD1_;
    main_1();
    let _e3: vec4<f32> = outvarSV_Target0_;
    return _e3;
}
