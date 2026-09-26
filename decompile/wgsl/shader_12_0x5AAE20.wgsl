struct CB0UBOUBO {
    member: array<vec4<f32>, 62>,
}

struct VertexOutput {
    @location(0) member: vec2<f32>,
    @location(1) @interpolate(flat) member_1: u32,
    @location(2) @interpolate(flat) member_2: u32,
    @location(3) @interpolate(flat) member_3: i32,
    @builtin(position) member_4: vec4<f32>,
}

@group(0) @binding(24) 
var<uniform> CB0UBO: CB0UBOUBO;
var<private> SV_VertexID_1: u32;
var<private> SV_InstanceID_1: u32;
var<private> TEXCOORD_1_: vec2<f32>;
var<private> TEXCOORD_2_: u32;
var<private> TEXCOORD_3_: u32;
var<private> TEXCOORD_4_: i32;
var<private> SV_Position: vec4<f32> = vec4<f32>(0f, 0f, 0f, 1f);
var<private> global: array<u32, 36> = array<u32, 36>(120u, u32(), u32(), u32(), 80u, u32(), u32(), u32(), 120u, u32(), u32(), u32(), 120u, u32(), u32(), u32(), 120u, u32(), u32(), u32(), 80u, u32(), u32(), u32(), 80u, u32(), u32(), u32(), 80u, u32(), u32(), u32(), 80u, u32(), u32(), u32());
var<private> global_1: array<u32, 36> = array<u32, 36>(34u, u32(), u32(), u32(), 213u, u32(), u32(), u32(), 34u, u32(), u32(), u32(), 34u, u32(), u32(), u32(), 34u, u32(), u32(), u32(), 25u, u32(), u32(), u32(), 25u, u32(), u32(), u32(), 25u, u32(), u32(), u32(), 25u, u32(), u32(), u32());
var<private> global_2: array<u32, 36> = array<u32, 36>(0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32(), 0u, u32(), u32(), u32());

fn main_1() {
    var local: array<u32, 36>;
    var local_1: array<u32, 36>;
    var local_2: array<u32, 36>;
    var phi_420_: f32;
    var phi_421_: u32;
    var phi_422_: u32;
    var phi_423_: u32;
    var phi_424_: f32;
    var phi_425_: f32;
    var phi_426_: f32;
    var phi_427_: f32;
    var phi_428_: f32;

    let _e139: u32 = SV_InstanceID_1;
    let _e140: u32 = (_e139 - 0u);
    let _e141: u32 = SV_VertexID_1;
    let _e145: vec4<f32> = CB0UBO.member[42u];
    local[0u] = bitcast<u32>(_e145.y);
    local[4u] = 0u;
    local[8u] = 0u;
    local[12u] = bitcast<u32>(_e145.y);
    local[16u] = 0u;
    local[20u] = 0u;
    local[24u] = 0u;
    local[28u] = 0u;
    local[32u] = 0u;
    local_1[0u] = bitcast<u32>(_e145.z);
    let _e163: vec4<f32> = CB0UBO.member[43u];
    local_1[4u] = bitcast<u32>(_e163.x);
    local_1[8u] = 0u;
    local_1[12u] = bitcast<u32>(_e145.z);
    let _e172: vec4<f32> = CB0UBO.member[57u];
    local_1[16u] = bitcast<u32>(_e172.w);
    local_1[20u] = 0u;
    local_1[24u] = 0u;
    local_1[28u] = 0u;
    local_1[32u] = 0u;
    let _e182: vec4<f32> = CB0UBO.member[61u];
    local_2[0u] = bitcast<u32>(_e182.w);
    local_2[4u] = 0u;
    local_2[8u] = 3244818432u;
    local_2[12u] = bitcast<u32>(_e182.w);
    let _e192: vec4<f32> = CB0UBO.member[59u];
    local_2[16u] = bitcast<u32>(_e192.z);
    local_2[20u] = 0u;
    local_2[24u] = 0u;
    local_2[28u] = 0u;
    local_2[32u] = 0u;
    let _e201: u32 = ((_e141 - 0u) % 6u);
    let _e203: u32 = (_e201 & 6u);
    let _e205: bool = ((_e201 == 5u) || (_e203 == 2u));
    if (_e140 == 0u) {
        let _e209: f32 = select(-1f, 1f, ((_e201 == 1u) || (_e203 == 4u)));
        let _e210: f32 = select(-1f, 1f, _e205);
        phi_420_ = _e210;
        phi_421_ = 0u;
        phi_422_ = 4294967295u;
        phi_423_ = 4294967295u;
        phi_424_ = _e209;
        phi_425_ = _e210;
        phi_426_ = 0f;
        phi_427_ = 1f;
        phi_428_ = _e209;
    } else {
        let _e211: u32 = (_e140 + 4294967295u);
        let _e213: u32 = (_e211 << bitcast<u32>(2u));
        let _e218: f32 = select(-1f, 1f, ((_e201 == 4u) || ((_e201 & 3u) == 1u)));
        let _e220: u32 = global[_e213];
        let _e223: f32 = ((f32(_e220) * 0.2f) * _e218);
        let _e225: u32 = global_1[_e213];
        let _e227: f32 = select(-1.5f, 1.5f, _e205);
        let _e229: f32 = ((f32(_e225) * -0.4f) * _e227);
        let _e231: u32 = global_2[_e213];
        let _e232: f32 = bitcast<f32>(_e231);
        let _e233: f32 = cos(_e232);
        let _e234: f32 = sin(_e232);
        let _e236: u32 = global_2[_e213];
        let _e237: f32 = bitcast<f32>(_e236);
        let _e238: f32 = cos(_e237);
        let _e239: f32 = sin(_e237);
        let _e241: u32 = global_2[_e213];
        let _e242: f32 = bitcast<f32>(_e241);
        let _e243: f32 = cos(_e242);
        let _e244: f32 = sin(_e242);
        let _e252: u32 = local[_e213];
        let _e255: f32 = (dot(vec4<f32>((_e243 * _e238), (-0f - (_e238 * _e244)), _e239, 0f), vec4<f32>(_e223, _e229, 0f, 1f)) - (bitcast<f32>(_e252) * 0.4f));
        let _e257: f32 = (_e239 * _e234);
        let _e269: u32 = local_1[_e213];
        let _e272: f32 = ((bitcast<f32>(_e269) * 0.8f) + dot(vec4<f32>(((_e244 * _e233) + (_e257 * _e243)), ((_e243 * _e233) - (_e257 * _e244)), (-0f - (_e234 * _e238)), 0f), vec4<f32>(_e223, _e229, 0f, 1f)));
        let _e274: f32 = (_e239 * _e233);
        let _e285: u32 = local_2[_e213];
        let _e287: f32 = (bitcast<f32>(_e285) + dot(vec4<f32>(((_e244 * _e234) - (_e274 * _e243)), ((_e274 * _e244) + (_e243 * _e234)), (_e238 * _e233), 0f), vec4<f32>(_e223, _e229, 0f, 1f)));
        let _e290: vec4<f32> = CB0UBO.member[4u];
        let _e295: vec4<f32> = CB0UBO.member[2u];
        let _e300: vec4<f32> = CB0UBO.member[3u];
        let _e305: vec4<f32> = CB0UBO.member[5u];
        let _e309: f32 = ((((_e295.x * _e255) + (_e287 * _e290.x)) + (_e300.x * _e272)) + _e305.x);
        let _e319: f32 = ((((_e295.y * _e255) + (_e290.y * _e287)) + (_e300.y * _e272)) + _e305.y);
        let _e329: f32 = ((((_e295.z * _e255) + (_e290.z * _e287)) + (_e300.z * _e272)) + _e305.z);
        let _e339: f32 = ((((_e295.w * _e255) + (_e290.w * _e287)) + (_e300.w * _e272)) + _e305.w);
        let _e342: vec4<f32> = CB0UBO.member[9u];
        let _e347: vec4<f32> = CB0UBO.member[6u];
        let _e352: vec4<f32> = CB0UBO.member[7u];
        let _e358: vec4<f32> = CB0UBO.member[8u];
        phi_420_ = _e227;
        phi_421_ = _e140;
        phi_422_ = 0u;
        phi_423_ = _e211;
        phi_424_ = ((((_e352.x * _e319) + (_e347.x * _e309)) + (_e339 * _e342.x)) + (_e358.x * _e329));
        phi_425_ = ((((_e347.y * _e309) + (_e342.y * _e339)) + (_e352.y * _e319)) + (_e358.y * _e329));
        phi_426_ = ((((_e347.z * _e309) + (_e342.z * _e339)) + (_e352.z * _e319)) + (_e358.z * _e329));
        phi_427_ = ((((_e347.w * _e309) + (_e342.w * _e339)) + (_e352.w * _e319)) + (_e358.w * _e329));
        phi_428_ = _e218;
    }
    let _e397: f32 = phi_420_;
    let _e399: u32 = phi_421_;
    let _e401: u32 = phi_422_;
    let _e403: u32 = phi_423_;
    let _e405: f32 = phi_424_;
    let _e407: f32 = phi_425_;
    let _e409: f32 = phi_426_;
    let _e411: f32 = phi_427_;
    let _e413: f32 = phi_428_;
    SV_Position[0u] = _e405;
    SV_Position[1u] = _e407;
    SV_Position[2u] = _e409;
    SV_Position[3u] = _e411;
    TEXCOORD_1_[0u] = ((_e413 * 0.5f) + 0.5f);
    TEXCOORD_1_[1u] = ((_e397 * 0.5f) + 0.5f);
    TEXCOORD_2_ = _e399;
    TEXCOORD_3_ = _e401;
    TEXCOORD_4_ = bitcast<i32>(_e403);
    return;
}

@vertex 
fn main(@builtin(vertex_index) SV_VertexID: u32, @builtin(instance_index) SV_InstanceID: u32) -> VertexOutput {
    SV_VertexID_1 = SV_VertexID;
    SV_InstanceID_1 = SV_InstanceID;
    main_1();
    let _e9: vec2<f32> = TEXCOORD_1_;
    let _e10: u32 = TEXCOORD_2_;
    let _e11: u32 = TEXCOORD_3_;
    let _e12: i32 = TEXCOORD_4_;
    let _e13: vec4<f32> = SV_Position;
    return VertexOutput(_e9, _e10, _e11, _e12, _e13);
}
