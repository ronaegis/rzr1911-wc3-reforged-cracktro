struct T0SSBO {
    member: array<u32>,
}

struct T1SSBO {
    member: array<u32>,
}

struct T2SSBO {
    member: array<u32>,
}

struct T3SSBO {
    member: array<u32>,
}

struct T4SSBO {
    member: array<u32>,
}

struct T5SSBO {
    member: array<u32>,
}

struct T6SSBO {
    member: array<u32>,
}

struct T7SSBO {
    member: array<u32>,
}

struct T8SSBO {
    member: array<u32>,
}

struct T9SSBO {
    member: array<u32>,
}

struct T10SSBO {
    member: array<u32>,
}

struct T11SSBO {
    member: array<u32>,
}

struct CB0UBOUBO {
    member: array<vec4<f32>, 63>,
}

@group(0) @binding(0) 
var<storage, read_write> T0_: T0SSBO;
@group(0) @binding(1) 
var<storage, read_write> T1_: T1SSBO;
@group(0) @binding(2) 
var<storage, read_write> T2_: T2SSBO;
@group(0) @binding(3) 
var<storage, read_write> T3_: T3SSBO;
@group(0) @binding(4) 
var<storage, read_write> T4_: T4SSBO;
@group(0) @binding(5) 
var<storage, read_write> T5_: T5SSBO;
@group(0) @binding(6) 
var<storage, read_write> T6_: T6SSBO;
@group(0) @binding(7) 
var<storage, read_write> T7_: T7SSBO;
@group(0) @binding(8) 
var<storage, read_write> T8_: T8SSBO;
@group(0) @binding(9) 
var<storage, read_write> T9_: T9SSBO;
@group(0) @binding(10) 
var<storage, read_write> T10_: T10SSBO;
@group(0) @binding(12) 
var<storage, read_write> T11_: T11SSBO;
@group(0) @binding(24) 
var<uniform> CB0UBO: CB0UBOUBO;
var<private> TEXCOORD_1_1: vec2<f32>;
var<private> TEXCOORD_2_1: u32;
var<private> TEXCOORD_3_1: u32;
var<private> TEXCOORD_4_1: i32;
var<private> SV_Target: vec4<f32>;
var<private> global: array<u32, 36> = array<u32, 36>(120u, u32(), u32(), u32(), 80u, u32(), u32(), u32(), 120u, u32(), u32(), u32(), 120u, u32(), u32(), u32(), 120u, u32(), u32(), u32(), 80u, u32(), u32(), u32(), 80u, u32(), u32(), u32(), 80u, u32(), u32(), u32(), 80u, u32(), u32(), u32());
var<private> global_1: array<u32, 36> = array<u32, 36>(34u, u32(), u32(), u32(), 213u, u32(), u32(), u32(), 34u, u32(), u32(), u32(), 34u, u32(), u32(), u32(), 34u, u32(), u32(), u32(), 25u, u32(), u32(), u32(), 25u, u32(), u32(), u32(), 25u, u32(), u32(), u32(), 25u, u32(), u32(), u32());
var<private> global_2: array<u32, 36> = array<u32, 36>(118320u, u32(), u32(), u32(), 32000u, u32(), u32(), u32(), 118320u, u32(), u32(), u32(), 118320u, u32(), u32(), u32(), 118320u, u32(), u32(), u32(), 32000u, u32(), u32(), u32(), 32000u, u32(), u32(), u32(), 32000u, u32(), u32(), u32(), 32000u, u32(), u32(), u32());
var<private> global_3: array<u32, 36> = array<u32, 36>(16u, u32(), u32(), u32(), 16u, u32(), u32(), u32(), 16u, u32(), u32(), u32(), 16u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32());
var<private> global_4: array<u32, 36> = array<u32, 36>(0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32());
var<private> global_5: array<u32, 36> = array<u32, 36>(1098907648u, u32(), u32(), u32(), 1098907648u, u32(), u32(), u32(), 1098907648u, u32(), u32(), u32(), 1105723392u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32());
var<private> global_6: array<u32, 36> = array<u32, 36>(0u, u32(), u32(), u32(), 1065353216u, u32(), u32(), u32(), 1065353216u, u32(), u32(), u32(), 1065353216u, u32(), u32(), u32(), 1065353216u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32());
var<private> discard_state: bool;

fn discard_exit() {
    let _e309: bool = discard_state;
    if _e309 {
        discard;
    }
    return;
}

fn main_1() {
    var local: array<u32, 36>;
    var local_1: array<u32, 36>;
    var local_2: array<u32, 36>;
    var local_3: array<u32, 36>;
    var local_4: array<u32, 36>;
    var local_5: array<u32, 36>;
    var phi_585_: u32;
    var phi_557_: u32;
    var phi_637_: f32;
    var phi_638_: f32;
    var phi_653_: f32;
    var phi_1037_: u32;
    var phi_1038_: f32;
    var phi_650_: u32;
    var phi_652_: f32;
    var phi_1039_: u32;
    var phi_1046_: u32;
    var phi_1053_: u32;
    var phi_1040_: u32;
    var phi_1047_: u32;
    var phi_1054_: u32;
    var phi_1041_: u32;
    var phi_1048_: u32;
    var phi_1055_: u32;
    var phi_1042_: u32;
    var phi_1049_: u32;
    var phi_1056_: u32;
    var phi_1043_: u32;
    var phi_1050_: u32;
    var phi_1057_: u32;
    var phi_1044_: u32;
    var phi_1051_: u32;
    var phi_1058_: u32;
    var phi_1045_: u32;
    var phi_1052_: u32;
    var phi_1059_: u32;
    var phi_744_: u32;
    var phi_753_: u32;
    var phi_762_: u32;
    var phi_835_: f32;
    var phi_946_: u32;
    var phi_878_: u32;
    var phi_534_: f32;
    var phi_532_: f32;
    var phi_530_: f32;
    var phi_528_: u32;
    var phi_1009_: u32;
    var phi_1021_: u32;
    var phi_1033_: u32;
    var phi_961_: f32;
    var phi_963_: f32;
    var phi_965_: f32;
    var phi_967_: u32;
    var phi_1060_: u32;
    var phi_1065_: f32;
    var phi_1070_: f32;
    var phi_1075_: f32;
    var phi_1061_: u32;
    var phi_1066_: f32;
    var phi_1071_: f32;
    var phi_1076_: f32;
    var phi_1062_: u32;
    var phi_1067_: f32;
    var phi_1072_: f32;
    var phi_1077_: f32;
    var phi_1063_: u32;
    var phi_1068_: f32;
    var phi_1073_: f32;
    var phi_1078_: f32;
    var phi_1064_: u32;
    var phi_1069_: f32;
    var phi_1074_: f32;
    var phi_1079_: f32;
    var phi_527_: u32;
    var phi_514_: f32;
    var phi_512_: f32;
    var phi_509_: f32;
    var phi_1080_: f32;
    var phi_1082_: f32;
    var phi_1084_: f32;
    var phi_1086_: f32;
    var phi_1081_: f32;
    var phi_1083_: f32;
    var phi_1085_: f32;
    var phi_1087_: f32;
    var phi_508_: f32;
    var phi_511_: f32;
    var phi_513_: f32;
    var phi_515_: f32;

    discard_state = false;
    let _e315: i32 = TEXCOORD_4_1;
    let _e316: u32 = bitcast<u32>(_e315);
    let _e317: u32 = TEXCOORD_3_1;
    let _e319: f32 = TEXCOORD_1_1[0u];
    let _e321: f32 = TEXCOORD_1_1[1u];
    let _e324: vec4<f32> = CB0UBO.member[61u];
    let _e326: u32 = u32(_e324.z);
    local[0u] = _e326;
    local[4u] = 0u;
    let _e331: vec4<f32> = CB0UBO.member[59u];
    local[8u] = u32(_e331.w);
    local[12u] = _e326;
    let _e338: vec4<f32> = CB0UBO.member[56u];
    local[16u] = u32(_e338.z);
    local[20u] = 0u;
    local[24u] = 0u;
    local[28u] = 0u;
    local[32u] = 0u;
    local_1[0u] = 0u;
    let _e349: vec4<f32> = CB0UBO.member[55u];
    local_1[4u] = bitcast<u32>(_e349.w);
    local_1[8u] = 0u;
    let _e356: vec4<f32> = CB0UBO.member[57u];
    local_1[12u] = bitcast<u32>(_e356.y);
    local_1[16u] = bitcast<u32>(_e356.y);
    local_1[20u] = 0u;
    local_1[24u] = 0u;
    local_1[28u] = 0u;
    local_1[32u] = 0u;
    local_2[0u] = 0u;
    local_2[4u] = bitcast<u32>(_e338.x);
    local_2[8u] = 0u;
    local_2[12u] = bitcast<u32>(_e356.z);
    local_2[16u] = bitcast<u32>(_e356.z);
    local_2[20u] = 0u;
    local_2[24u] = 0u;
    local_2[28u] = 0u;
    local_2[32u] = 0u;
    local_3[0u] = 0u;
    local_3[4u] = bitcast<u32>(_e338.y);
    local_3[8u] = 0u;
    let _e387: vec4<f32> = CB0UBO.member[56u];
    local_3[12u] = bitcast<u32>(_e387.y);
    local_3[16u] = 0u;
    local_3[20u] = 0u;
    local_3[24u] = 0u;
    local_3[28u] = 0u;
    local_3[32u] = 0u;
    local_4[0u] = 0u;
    let _e399: vec4<f32> = CB0UBO.member[61u];
    local_4[4u] = bitcast<u32>(_e399.x);
    local_4[8u] = 0u;
    local_4[12u] = 0u;
    local_4[16u] = 0u;
    local_4[20u] = 0u;
    local_4[24u] = 0u;
    local_4[28u] = 0u;
    local_4[32u] = 0u;
    local_5[0u] = 1028443341u;
    local_5[1u] = 1028443341u;
    local_5[2u] = 1028443341u;
    let _e415: vec4<f32> = CB0UBO.member[62u];
    local_5[3u] = bitcast<u32>(_e415.x);
    local_5[4u] = 0u;
    local_5[5u] = 0u;
    local_5[6u] = 0u;
    let _e424: vec4<f32> = CB0UBO.member[56u];
    local_5[7u] = bitcast<u32>(_e424.w);
    local_5[8u] = 0u;
    local_5[9u] = 0u;
    local_5[10u] = 0u;
    let _e433: vec4<f32> = CB0UBO.member[60u];
    local_5[11u] = bitcast<u32>(_e433.x);
    let _e439: vec4<f32> = CB0UBO.member[62u];
    local_5[12u] = 0u;
    local_5[13u] = 0u;
    local_5[14u] = 0u;
    local_5[15u] = bitcast<u32>(_e439.x);
    local_5[16u] = 0u;
    local_5[17u] = 0u;
    local_5[18u] = 0u;
    let _e452: vec4<f32> = CB0UBO.member[57u];
    local_5[19u] = bitcast<u32>(_e452.x);
    local_5[20u] = 0u;
    local_5[21u] = 0u;
    local_5[22u] = 0u;
    local_5[23u] = 0u;
    local_5[24u] = 0u;
    local_5[25u] = 0u;
    local_5[26u] = 0u;
    local_5[27u] = 0u;
    local_5[28u] = 0u;
    local_5[29u] = 0u;
    local_5[30u] = 0u;
    local_5[31u] = 0u;
    local_5[32u] = 0u;
    local_5[33u] = 0u;
    local_5[34u] = 0u;
    local_5[35u] = 0u;
    phi_508_ = 0f;
    phi_511_ = 0f;
    phi_513_ = 0f;
    phi_515_ = 1f;
    if (_e317 == 0u) {
        phi_1081_ = 0f;
        phi_1083_ = 0f;
        phi_1085_ = 0f;
        phi_1087_ = 0f;
        if ((select(0u, 4294967295u, (bitcast<i32>(_e316) < bitcast<i32>(9u))) & ((_e316 >> bitcast<u32>(31u)) ^ 4294967295u)) == 0u) {
        } else {
            let _e483: u32 = (_e316 << bitcast<u32>(2u));
            let _e485: bool = ((_e483 + 4294967276u) < 16u);
            phi_527_ = 0u;
            phi_514_ = 0f;
            phi_512_ = 0f;
            phi_509_ = 0f;
            if _e485 {
            } else {
                phi_1064_ = 0u;
                phi_1069_ = 0f;
                phi_1074_ = 0f;
                phi_1079_ = 0f;
                if ((_e321 > 1f) || ((_e321 < 0f) || ((_e319 > 1f) || (_e319 < 0f)))) {
                } else {
                    if (_e483 < 20u) {
                        let _e495: u32 = local[_e483];
                        phi_557_ = _e495;
                    } else {
                        let _e499: u32 = global_4[_e483];
                        phi_585_ = 4294967295u;
                        if ((_e483 + 4294967280u) < 20u) {
                        } else {
                            let _e501: u32 = global_3[_e483];
                            let _e503: u32 = global_5[_e483];
                            let _e507: vec4<f32> = CB0UBO.member[0u];
                            phi_585_ = (u32((_e507.x * bitcast<f32>(_e503))) % _e501);
                        }
                        let _e513: u32 = phi_585_;
                        phi_557_ = (_e513 + _e499);
                    }
                    let _e516: u32 = phi_557_;
                    let _e520: u32 = global[_e483];
                    let _e521: f32 = f32(_e520);
                    let _e523: f32 = ((min(max(_e319, 0f), 1f) * 8f) * _e521);
                    let _e527: u32 = global_1[_e483];
                    let _e528: f32 = f32(_e527);
                    let _e530: f32 = ((min(max(_e321, 0f), 1f) * 16f) * _e528);
                    let _e532: u32 = local_2[_e483];
                    let _e533: f32 = bitcast<f32>(_e532);
                    let _e534: bool = (_e533 > 0f);
                    let _e536: u32 = local_1[_e483];
                    let _e537: f32 = bitcast<f32>(_e536);
                    let _e538: bool = (_e537 > 0f);
                    phi_637_ = _e530;
                    phi_638_ = _e523;
                    if (_e534 || _e538) {
                        let _e540: f32 = floor(_e523);
                        let _e542: f32 = fract((_e540 * 0.1031f));
                        let _e545: f32 = fract((floor(_e530) * 0.103f));
                        let _e547: f32 = fract((_e540 * 0.0973f));
                        let _e553: f32 = dot(vec3<f32>(_e542, _e545, _e547), vec3<f32>((_e545 + 33.33f), (_e542 + 33.33f), (_e547 + 33.33f)));
                        let _e559: f32 = fract((((_e545 + _e542) + (_e553 * 2f)) * (_e553 + _e547)));
                        phi_637_ = (((_e533 * _e559) * select(-1f, 1f, (_e530 < (_e528 * 8f)))) + _e530);
                        phi_638_ = (((_e537 * _e559) * select(-1f, 1f, (_e523 < (_e521 * 4f)))) + _e523);
                    }
                    let _e573: f32 = phi_637_;
                    let _e575: f32 = phi_638_;
                    let _e576: u32 = bitcast<u32>(_e573);
                    let _e578: u32 = local_3[_e483];
                    let _e579: f32 = bitcast<f32>(_e578);
                    phi_650_ = _e576;
                    phi_652_ = _e575;
                    if (_e579 > 0f) {
                        let _e583: vec4<f32> = CB0UBO.member[0u];
                        let _e586: f32 = floor((_e583.x * 60f));
                        phi_653_ = _e575;
                        if _e538 {
                            let _e587: f32 = (_e586 + 1.1f);
                            let _e589: f32 = fract((_e587 * 0.1031f));
                            let _e592: f32 = fract((f32(_e316) * 0.3399f));
                            let _e594: f32 = fract((_e587 * 0.0973f));
                            let _e600: f32 = dot(vec3<f32>(_e589, _e592, _e594), vec3<f32>((_e592 + 33.33f), (_e589 + 33.33f), (_e594 + 33.33f)));
                            phi_653_ = ((((fract((((_e592 + _e589) + (_e600 * 2f)) * (_e600 + _e594))) * 2f) + -1f) * _e579) + _e575);
                        }
                        let _e612: f32 = phi_653_;
                        phi_1037_ = _e576;
                        phi_1038_ = _e612;
                        if _e534 {
                            let _e613: f32 = (_e586 + 5.5f);
                            let _e615: f32 = fract((_e613 * 0.1031f));
                            let _e618: f32 = fract((f32(_e316) * 0.7931f));
                            let _e620: f32 = fract((_e613 * 0.0973f));
                            let _e626: f32 = dot(vec3<f32>(_e615, _e618, _e620), vec3<f32>((_e618 + 33.33f), (_e615 + 33.33f), (_e620 + 33.33f)));
                            phi_1037_ = bitcast<u32>(((((fract((((_e618 + _e615) + (_e626 * 2f)) * (_e626 + _e620))) * 2f) + -1f) * _e579) + _e573));
                            phi_1038_ = _e612;
                        }
                        let _e639: u32 = phi_1037_;
                        let _e641: f32 = phi_1038_;
                        phi_650_ = _e639;
                        phi_652_ = _e641;
                    }
                    let _e643: u32 = phi_650_;
                    let _e645: f32 = phi_652_;
                    let _e646: f32 = (_e645 * 0.125f);
                    let _e648: f32 = (bitcast<f32>(_e643) * 0.0625f);
                    phi_1063_ = 0u;
                    phi_1068_ = 0f;
                    phi_1073_ = 0f;
                    phi_1078_ = 0f;
                    if ((_e648 >= _e528) || ((_e648 < 0f) || ((_e646 < 0f) || (_e646 >= _e521)))) {
                    } else {
                        let _e656: u32 = u32(_e646);
                        let _e657: u32 = u32(_e648);
                        let _e661: u32 = ((((_e527 * _e516) + _e657) * _e520) + _e656);
                        let _e663: u32 = global_2[_e483];
                        phi_1062_ = 0u;
                        phi_1067_ = 0f;
                        phi_1072_ = 0f;
                        phi_1077_ = 0f;
                        if (_e661 < _e663) {
                            let _e665: u32 = (_e661 * 3u);
                            if (_e316 == 0u) {
                                let _e673: u32 = T1_.member[((_e661 * 12u) + 4u)];
                                let _e677: u32 = T1_.member[(_e661 * 12u)];
                                let _e682: u32 = T1_.member[((_e661 * 12u) + 8u)];
                                phi_744_ = _e673;
                                phi_753_ = _e677;
                                phi_762_ = _e682;
                            } else {
                                if (_e316 == 1u) {
                                    let _e688: u32 = T2_.member[((_e661 * 12u) + 4u)];
                                    let _e692: u32 = T2_.member[(_e661 * 12u)];
                                    let _e697: u32 = T2_.member[((_e661 * 12u) + 8u)];
                                    phi_1045_ = _e688;
                                    phi_1052_ = _e692;
                                    phi_1059_ = _e697;
                                } else {
                                    if (_e316 == 2u) {
                                        let _e703: u32 = T3_.member[((_e661 * 12u) + 4u)];
                                        let _e707: u32 = T3_.member[(_e661 * 12u)];
                                        let _e712: u32 = T3_.member[((_e661 * 12u) + 8u)];
                                        phi_1044_ = _e703;
                                        phi_1051_ = _e707;
                                        phi_1058_ = _e712;
                                    } else {
                                        if (_e316 == 3u) {
                                            let _e718: u32 = T4_.member[((_e661 * 12u) + 4u)];
                                            let _e722: u32 = T4_.member[(_e661 * 12u)];
                                            let _e727: u32 = T4_.member[((_e661 * 12u) + 8u)];
                                            phi_1043_ = _e718;
                                            phi_1050_ = _e722;
                                            phi_1057_ = _e727;
                                        } else {
                                            if (_e316 == 4u) {
                                                let _e733: u32 = T5_.member[((_e661 * 12u) + 4u)];
                                                let _e737: u32 = T5_.member[(_e661 * 12u)];
                                                let _e742: u32 = T5_.member[((_e661 * 12u) + 8u)];
                                                phi_1042_ = _e733;
                                                phi_1049_ = _e737;
                                                phi_1056_ = _e742;
                                            } else {
                                                if (_e316 == 5u) {
                                                    let _e748: u32 = T6_.member[((_e661 * 12u) + 4u)];
                                                    let _e752: u32 = T6_.member[(_e661 * 12u)];
                                                    let _e757: u32 = T6_.member[((_e661 * 12u) + 8u)];
                                                    phi_1041_ = _e748;
                                                    phi_1048_ = _e752;
                                                    phi_1055_ = _e757;
                                                } else {
                                                    if (_e316 == 6u) {
                                                        let _e763: u32 = T7_.member[((_e661 * 12u) + 4u)];
                                                        let _e767: u32 = T7_.member[(_e661 * 12u)];
                                                        let _e772: u32 = T7_.member[((_e661 * 12u) + 8u)];
                                                        phi_1040_ = _e763;
                                                        phi_1047_ = _e767;
                                                        phi_1054_ = _e772;
                                                    } else {
                                                        if (_e316 == 7u) {
                                                            let _e778: u32 = T8_.member[((_e661 * 12u) + 4u)];
                                                            let _e782: u32 = T8_.member[(_e661 * 12u)];
                                                            let _e787: u32 = T8_.member[((_e661 * 12u) + 8u)];
                                                            phi_1039_ = _e778;
                                                            phi_1046_ = _e782;
                                                            phi_1053_ = _e787;
                                                        } else {
                                                            let _e792: u32 = T9_.member[((_e661 * 12u) + 4u)];
                                                            let _e796: u32 = T9_.member[(_e661 * 12u)];
                                                            let _e801: u32 = T9_.member[((_e661 * 12u) + 8u)];
                                                            phi_1039_ = _e792;
                                                            phi_1046_ = _e796;
                                                            phi_1053_ = _e801;
                                                        }
                                                        let _e803: u32 = phi_1039_;
                                                        let _e805: u32 = phi_1046_;
                                                        let _e807: u32 = phi_1053_;
                                                        phi_1040_ = _e803;
                                                        phi_1047_ = _e805;
                                                        phi_1054_ = _e807;
                                                    }
                                                    let _e809: u32 = phi_1040_;
                                                    let _e811: u32 = phi_1047_;
                                                    let _e813: u32 = phi_1054_;
                                                    phi_1041_ = _e809;
                                                    phi_1048_ = _e811;
                                                    phi_1055_ = _e813;
                                                }
                                                let _e815: u32 = phi_1041_;
                                                let _e817: u32 = phi_1048_;
                                                let _e819: u32 = phi_1055_;
                                                phi_1042_ = _e815;
                                                phi_1049_ = _e817;
                                                phi_1056_ = _e819;
                                            }
                                            let _e821: u32 = phi_1042_;
                                            let _e823: u32 = phi_1049_;
                                            let _e825: u32 = phi_1056_;
                                            phi_1043_ = _e821;
                                            phi_1050_ = _e823;
                                            phi_1057_ = _e825;
                                        }
                                        let _e827: u32 = phi_1043_;
                                        let _e829: u32 = phi_1050_;
                                        let _e831: u32 = phi_1057_;
                                        phi_1044_ = _e827;
                                        phi_1051_ = _e829;
                                        phi_1058_ = _e831;
                                    }
                                    let _e833: u32 = phi_1044_;
                                    let _e835: u32 = phi_1051_;
                                    let _e837: u32 = phi_1058_;
                                    phi_1045_ = _e833;
                                    phi_1052_ = _e835;
                                    phi_1059_ = _e837;
                                }
                                let _e839: u32 = phi_1045_;
                                let _e841: u32 = phi_1052_;
                                let _e843: u32 = phi_1059_;
                                phi_744_ = _e839;
                                phi_753_ = _e841;
                                phi_762_ = _e843;
                            }
                            let _e845: u32 = phi_744_;
                            let _e847: u32 = phi_753_;
                            let _e849: u32 = phi_762_;
                            let _e852: bool = ((_e847 == 0u) && (_e849 == 4294967295u));
                            phi_1061_ = 0u;
                            phi_1066_ = 0f;
                            phi_1071_ = 0f;
                            phi_1076_ = 0f;
                            if _e852 {
                            } else {
                                let _e856: u32 = local_4[_e483];
                                let _e857: f32 = bitcast<f32>(_e856);
                                phi_835_ = 0f;
                                if (_e857 > 0f) {
                                    let _e862: f32 = (f32(_e656) + (f32(_e316) * 91.7f));
                                    let _e864: f32 = fract((_e862 * 0.1031f));
                                    let _e870: f32 = fract(((f32(_e657) + (f32(_e516) * 57.3f)) * 0.103f));
                                    let _e872: f32 = fract((_e862 * 0.0973f));
                                    let _e878: f32 = dot(vec3<f32>(_e864, _e870, _e872), vec3<f32>((_e870 + 33.33f), (_e864 + 33.33f), (_e872 + 33.33f)));
                                    phi_835_ = (((fract((((_e870 + _e864) + (_e878 * 2f)) * (_e878 + _e872))) * 2f) + -1f) * _e857);
                                }
                                let _e889: f32 = phi_835_;
                                let _e892: f32 = max((1f - (_e889 * 0.06f)), 0.05f);
                                let _e914: u32 = (((u32((min(max((((fract(_e648) + -0.5f) / _e892) + 0.5f), 0f), 1f) * 16f)) + (_e847 << bitcast<u32>(4u))) << bitcast<u32>(3u)) + u32((min(max((((fract(_e646) + -0.5f) / _e892) + 0.5f), 0f), 1f) * 8f)));
                                phi_878_ = 0u;
                                if (bitcast<i32>(_e847) > bitcast<i32>(0u)) {
                                    if ((_e483 + 4294967280u) < 20u) {
                                        let _e923: u32 = T11_.member[(_e914 * 4u)];
                                        phi_946_ = _e923;
                                    } else {
                                        let _e927: u32 = T0_.member[(_e914 * 4u)];
                                        phi_946_ = _e927;
                                    }
                                    let _e929: u32 = phi_946_;
                                    phi_878_ = select(0u, 4294967295u, (_e929 == 1u));
                                }
                                let _e933: u32 = phi_878_;
                                let _e939: f32 = min(max((1f - (max((-0f - _e889), _e889) * 0.12f)), 0f), 1f);
                                let _e943: bool = ((_e933 | (_e849 >> bitcast<u32>(31u))) == 4294967295u);
                                phi_534_ = 0f;
                                phi_532_ = 0f;
                                phi_530_ = 0f;
                                phi_528_ = select(bitcast<u32>(_e439.x), 0u, (_e852 || _e485));
                                if _e943 {
                                } else {
                                    let _e944: u32 = (_e849 & 255u);
                                    let _e945: u32 = (_e944 * 3u);
                                    let _e949: u32 = T10_.member[(_e944 * 12u)];
                                    let _e957: u32 = T10_.member[((_e944 * 12u) + 4u)];
                                    let _e965: u32 = T10_.member[((_e944 * 12u) + 8u)];
                                    let _e970: u32 = local_5[(_e483 | 3u)];
                                    phi_534_ = (bitcast<f32>(_e949) * _e939);
                                    phi_532_ = (bitcast<f32>(_e957) * _e939);
                                    phi_530_ = (bitcast<f32>(_e965) * _e939);
                                    phi_528_ = _e970;
                                }
                                let _e972: f32 = phi_534_;
                                let _e974: f32 = phi_532_;
                                let _e976: f32 = phi_530_;
                                let _e978: u32 = phi_528_;
                                phi_1060_ = _e978;
                                phi_1065_ = _e976;
                                phi_1070_ = _e974;
                                phi_1075_ = _e972;
                                if _e943 {
                                    let _e979: bool = (_e933 == 0u);
                                    phi_961_ = _e972;
                                    phi_963_ = _e974;
                                    phi_965_ = _e976;
                                    phi_967_ = _e978;
                                    if _e979 {
                                    } else {
                                        let _e980: u32 = (_e845 & 255u);
                                        let _e981: u32 = (_e980 * 3u);
                                        let _e983: u32 = global_6[_e483];
                                        let _e991: bool = ((select(0u, 4294967295u, (bitcast<f32>(_e983) == 1f)) & ((_e845 >> bitcast<u32>(31u)) ^ 4294967295u)) != 0u);
                                        if _e991 {
                                            let _e995: u32 = T10_.member[(_e980 * 12u)];
                                            phi_1009_ = bitcast<u32>(bitcast<f32>(_e995));
                                        } else {
                                            let _e999: u32 = local_5[_e483];
                                            phi_1009_ = _e999;
                                        }
                                        let _e1001: u32 = phi_1009_;
                                        if _e991 {
                                            let _e1009: u32 = T10_.member[((_e980 * 12u) + 4u)];
                                            phi_1021_ = bitcast<u32>(bitcast<f32>(_e1009));
                                        } else {
                                            let _e1014: u32 = local_5[(_e483 | 1u)];
                                            phi_1021_ = _e1014;
                                        }
                                        let _e1016: u32 = phi_1021_;
                                        if _e991 {
                                            let _e1024: u32 = T10_.member[((_e980 * 12u) + 8u)];
                                            phi_1033_ = bitcast<u32>(bitcast<f32>(_e1024));
                                        } else {
                                            let _e1029: u32 = local_5[(_e483 | 2u)];
                                            phi_1033_ = _e1029;
                                        }
                                        let _e1031: u32 = phi_1033_;
                                        let _e1036: u32 = local_5[(_e483 | 3u)];
                                        phi_961_ = (bitcast<f32>(_e1001) * _e939);
                                        phi_963_ = (bitcast<f32>(_e1016) * _e939);
                                        phi_965_ = (bitcast<f32>(_e1031) * _e939);
                                        phi_967_ = _e1036;
                                    }
                                    let _e1038: f32 = phi_961_;
                                    let _e1040: f32 = phi_963_;
                                    let _e1042: f32 = phi_965_;
                                    let _e1044: u32 = phi_967_;
                                    phi_1060_ = select(_e1044, 0u, _e979);
                                    phi_1065_ = select(_e1042, 0f, _e979);
                                    phi_1070_ = select(_e1040, 0f, _e979);
                                    phi_1075_ = select(_e1038, 0f, _e979);
                                }
                                let _e1050: u32 = phi_1060_;
                                let _e1052: f32 = phi_1065_;
                                let _e1054: f32 = phi_1070_;
                                let _e1056: f32 = phi_1075_;
                                phi_1061_ = _e1050;
                                phi_1066_ = _e1052;
                                phi_1071_ = _e1054;
                                phi_1076_ = _e1056;
                            }
                            let _e1058: u32 = phi_1061_;
                            let _e1060: f32 = phi_1066_;
                            let _e1062: f32 = phi_1071_;
                            let _e1064: f32 = phi_1076_;
                            phi_1062_ = _e1058;
                            phi_1067_ = _e1060;
                            phi_1072_ = _e1062;
                            phi_1077_ = _e1064;
                        }
                        let _e1066: u32 = phi_1062_;
                        let _e1068: f32 = phi_1067_;
                        let _e1070: f32 = phi_1072_;
                        let _e1072: f32 = phi_1077_;
                        phi_1063_ = _e1066;
                        phi_1068_ = _e1068;
                        phi_1073_ = _e1070;
                        phi_1078_ = _e1072;
                    }
                    let _e1074: u32 = phi_1063_;
                    let _e1076: f32 = phi_1068_;
                    let _e1078: f32 = phi_1073_;
                    let _e1080: f32 = phi_1078_;
                    phi_1064_ = _e1074;
                    phi_1069_ = _e1076;
                    phi_1074_ = _e1078;
                    phi_1079_ = _e1080;
                }
                let _e1082: u32 = phi_1064_;
                let _e1084: f32 = phi_1069_;
                let _e1086: f32 = phi_1074_;
                let _e1088: f32 = phi_1079_;
                phi_527_ = _e1082;
                phi_514_ = _e1084;
                phi_512_ = _e1086;
                phi_509_ = _e1088;
            }
            let _e1090: u32 = phi_527_;
            let _e1092: f32 = phi_514_;
            let _e1094: f32 = phi_512_;
            let _e1096: f32 = phi_509_;
            let _e1097: f32 = bitcast<f32>(_e1090);
            phi_1080_ = _e1096;
            phi_1082_ = _e1094;
            phi_1084_ = _e1092;
            phi_1086_ = _e1097;
            if (_e1097 > 0.001f) {
            } else {
                discard_state = true;
                phi_1080_ = _e1096;
                phi_1082_ = _e1094;
                phi_1084_ = _e1092;
                phi_1086_ = _e1097;
            }
            let _e1100: f32 = phi_1080_;
            let _e1102: f32 = phi_1082_;
            let _e1104: f32 = phi_1084_;
            let _e1106: f32 = phi_1086_;
            phi_1081_ = _e1100;
            phi_1083_ = _e1102;
            phi_1085_ = _e1104;
            phi_1087_ = _e1106;
        }
        let _e1108: f32 = phi_1081_;
        let _e1110: f32 = phi_1083_;
        let _e1112: f32 = phi_1085_;
        let _e1114: f32 = phi_1087_;
        phi_508_ = _e1108;
        phi_511_ = _e1110;
        phi_513_ = _e1112;
        phi_515_ = _e1114;
    }
    let _e1116: f32 = phi_508_;
    let _e1118: f32 = phi_511_;
    let _e1120: f32 = phi_513_;
    let _e1122: f32 = phi_515_;
    SV_Target[0u] = _e1116;
    SV_Target[1u] = _e1118;
    SV_Target[2u] = _e1120;
    SV_Target[3u] = _e1122;
    discard_exit();
    return;
}

@fragment 
fn main(@location(0) TEXCOORD_1_: vec2<f32>, @location(1) @interpolate(flat) TEXCOORD_2_: u32, @location(2) @interpolate(flat) TEXCOORD_3_: u32, @location(3) @interpolate(flat) TEXCOORD_4_: i32) -> @location(0) vec4<f32> {
    TEXCOORD_1_1 = TEXCOORD_1_;
    TEXCOORD_2_1 = TEXCOORD_2_;
    TEXCOORD_3_1 = TEXCOORD_3_;
    TEXCOORD_4_1 = TEXCOORD_4_;
    main_1();
    let _e9: vec4<f32> = SV_Target;
    return _e9;
}
