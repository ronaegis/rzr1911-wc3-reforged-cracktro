cbuffer CB0UBO : register(b8)
{
    float4 CB0_m0[62] : packoffset(c0);
};


static float4 gl_Position;
static int gl_VertexIndex;
static int gl_InstanceIndex;
static int gl_BaseVertexARB;
static int gl_BaseInstanceARB;
cbuffer SPIRV_Cross_VertexInfo
{
    int SPIRV_Cross_BaseVertex;
    int SPIRV_Cross_BaseInstance;
};

static float2 TEXCOORD;
static uint TEXCOORD_1;
static uint TEXCOORD_2;
static int TEXCOORD_3;

struct SPIRV_Cross_Input
{
    uint gl_VertexIndex : SV_VertexID;
    uint gl_InstanceIndex : SV_InstanceID;
};

struct SPIRV_Cross_Output
{
    float2 TEXCOORD : TEXCOORD1;
    uint TEXCOORD_1 : TEXCOORD2;
    uint TEXCOORD_2 : TEXCOORD2;
    int TEXCOORD_3 : TEXCOORD2;
    float4 gl_Position : SV_Position;
};

void vert_main()
{
    uint _30[36];
    _30[0u] = 120u;
    _30[4u] = 80u;
    _30[8u] = 120u;
    _30[12u] = 120u;
    _30[16u] = 120u;
    _30[20u] = 80u;
    _30[24u] = 80u;
    _30[28u] = 80u;
    _30[32u] = 80u;
    uint _31[36];
    _31[0u] = 34u;
    _31[4u] = 213u;
    _31[8u] = 34u;
    _31[12u] = 34u;
    _31[16u] = 34u;
    _31[20u] = 25u;
    _31[24u] = 25u;
    _31[28u] = 25u;
    _31[32u] = 25u;
    uint _32[36];
    _32[0u] = 1u;
    _32[4u] = 1u;
    _32[8u] = 1u;
    _32[12u] = 1u;
    _32[16u] = 1u;
    _32[20u] = 1u;
    _32[24u] = 1u;
    _32[28u] = 1u;
    _32[32u] = 1u;
    uint _33[36];
    _33[0u] = asuint(CB0_m0[42u]).y;
    _33[4u] = asuint(0.0f);
    _33[8u] = asuint(0.0f);
    _33[12u] = asuint(CB0_m0[42u]).y;
    _33[16u] = asuint(0.0f);
    _33[20u] = asuint(0.0f);
    _33[24u] = asuint(0.0f);
    _33[28u] = asuint(0.0f);
    _33[32u] = asuint(0.0f);
    uint _34[36];
    _34[0u] = asuint(CB0_m0[42u]).z;
    _34[4u] = asuint(CB0_m0[43u]).x;
    _34[8u] = asuint(0.0f);
    _34[12u] = asuint(CB0_m0[42u]).z;
    _34[16u] = asuint(CB0_m0[57u]).w;
    _34[20u] = asuint(0.0f);
    _34[24u] = asuint(0.0f);
    _34[28u] = asuint(0.0f);
    _34[32u] = asuint(0.0f);
    uint _35[36];
    _35[0u] = asuint(CB0_m0[61u]).w;
    _35[4u] = asuint(0.0f);
    _35[8u] = 3244818432u;
    _35[12u] = asuint(CB0_m0[61u]).w;
    _35[16u] = asuint(CB0_m0[59u]).z;
    _35[20u] = asuint(0.0f);
    _35[24u] = asuint(0.0f);
    _35[28u] = asuint(0.0f);
    _35[32u] = asuint(0.0f);
    uint _36[36];
    _36[0u] = asuint(0.0f);
    _36[4u] = asuint(0.0f);
    _36[8u] = asuint(0.0f);
    _36[12u] = asuint(0.0f);
    _36[16u] = asuint(0.0f);
    _36[20u] = asuint(0.0f);
    _36[24u] = asuint(0.0f);
    _36[28u] = asuint(0.0f);
    _36[32u] = asuint(0.0f);
    uint _37[36];
    _37[0u] = asuint(0.0f);
    _37[4u] = asuint(0.0f);
    _37[8u] = asuint(0.0f);
    _37[12u] = asuint(0.0f);
    _37[16u] = asuint(0.0f);
    _37[20u] = asuint(0.0f);
    _37[24u] = asuint(0.0f);
    _37[28u] = asuint(0.0f);
    _37[32u] = asuint(0.0f);
    uint _38[36];
    _38[0u] = asuint(0.0f);
    _38[4u] = asuint(0.0f);
    _38[8u] = asuint(0.0f);
    _38[12u] = asuint(0.0f);
    _38[16u] = asuint(0.0f);
    _38[20u] = asuint(0.0f);
    _38[24u] = asuint(0.0f);
    _38[28u] = asuint(0.0f);
    _38[32u] = asuint(0.0f);
    if ((uint(gl_InstanceIndex) - uint(gl_BaseInstanceARB)) == 0u)
    {
        uint _234 = uint(gl_VertexIndex) - uint(gl_BaseVertexARB);
        bool _238 = 6u == 0u;
        uint2 _243 = uint2(_238 ? 4294967295u : (_234 / 6u), _238 ? 4294967295u : (_234 % 6u));
        uint _244 = _243.y;
        float _268 = float(int(((((5u == _244) ? 4294967295u : 0u) | (((4u == _244) ? 4294967295u : 0u) | ((1u == _244) ? 4294967295u : 0u))) != 0u) ? 1u : 4294967295u));
        float _269 = float(int(((((_244 == 5u) ? 4294967295u : 0u) | (((2u == _244) ? 4294967295u : 0u) | ((_244 == 3u) ? 4294967295u : 0u))) != 0u) ? 1u : 4294967295u));
        gl_Position.x = _268;
        gl_Position.y = _269;
        gl_Position.z = 0.0f;
        gl_Position.w = 1.0f;
        TEXCOORD_1 = 0u;
        TEXCOORD_2 = 4294967295u;
        TEXCOORD_3 = int(4294967295u);
        TEXCOORD.x = (_268 * 0.5f) + 0.5f;
        TEXCOORD.y = (_269 * 0.5f) + 0.5f;
        return;
    }
    else
    {
        uint _287 = 4294967295u + (uint(gl_InstanceIndex) - uint(gl_BaseInstanceARB));
        uint _296 = (1u == _32[(_287 * 4u) + 0u]) ? 1061997773u : 1053609165u;
        uint _332 = uint(gl_VertexIndex) - uint(gl_BaseVertexARB);
        bool _335 = 6u == 0u;
        uint2 _338 = uint2(_335 ? 4294967295u : (_332 / 6u), _335 ? 4294967295u : (_332 % 6u));
        uint _339 = _338.y;
        uint _349 = (((((1u == _339) ? 4294967295u : 0u) | ((_339 == 4u) ? 4294967295u : 0u)) | ((_339 == 5u) ? 4294967295u : 0u)) != 0u) ? 1065353216u : 3212836864u;
        uint _361 = ((((_339 == 5u) ? 4294967295u : 0u) | (((_339 == 2u) ? 4294967295u : 0u) | ((_339 == 3u) ? 4294967295u : 0u))) != 0u) ? 1069547520u : 3217031168u;
        float _371 = asfloat(_349) * ((float(_30[(_287 * 4u) + 0u]) * 0.4000000059604644775390625f) * 0.5f);
        float _376 = ((asfloat(_296) * float(_31[(_287 * 4u) + 0u])) * 0.5f) * ((-0.0f) - asfloat(_361));
        uint _378 = (_287 * 4u) + 0u;
        uint _382 = (_287 * 4u) + 0u;
        uint _386 = (_287 * 4u) + 0u;
        float _391 = cos(asfloat(_36[_378]));
        float _393 = sin(asfloat(_36[_378]));
        float _395 = cos(asfloat(_37[_382]));
        float _397 = sin(asfloat(_37[_382]));
        float _399 = cos(asfloat(_38[_386]));
        float _401 = sin(asfloat(_38[_386]));
        float _426 = asfloat(1065353216u);
        float _436 = dot(float4(_399 * _395, _401 * ((-0.0f) - _395), _397, 0.0f), float4(_371, _376, 0.0f, _426)) + ((asfloat(0u) + asfloat(_33[(_287 * 4u) + 0u])) * (-0.4000000059604644775390625f));
        float _437 = dot(float4((_401 * _391) + (_399 * (_393 * _397)), (_399 * _391) + (_401 * (_397 * ((-0.0f) - _393))), _395 * ((-0.0f) - _393), 0.0f), float4(_371, _376, 0.0f, _426)) + (asfloat(_296) * (0.0f + asfloat(_34[(_287 * 4u) + 0u])));
        float _438 = dot(float4((_401 * _393) + (_399 * (_397 * ((-0.0f) - _391))), (_401 * (_391 * _397)) + (_399 * _393), _395 * _391, 0.0f), float4(_371, _376, 0.0f, _426)) + asfloat(_35[(_287 * 4u) + 0u]);
        float _487 = ((_438 * CB0_m0[4u].x) + ((_436 * CB0_m0[2u].x) + (_437 * CB0_m0[3u].x))) + (CB0_m0[5u].x * 1.0f);
        float _488 = ((_438 * CB0_m0[4u].y) + ((_436 * CB0_m0[2u].y) + (_437 * CB0_m0[3u].y))) + (CB0_m0[5u].y * 1.0f);
        float _489 = ((_438 * CB0_m0[4u].z) + ((_436 * CB0_m0[2u].z) + (_437 * CB0_m0[3u].z))) + (CB0_m0[5u].z * 1.0f);
        float _490 = ((_438 * CB0_m0[4u].w) + ((_436 * CB0_m0[2u].w) + (_437 * CB0_m0[3u].w))) + (CB0_m0[5u].w * 1.0f);
        gl_Position.x = (_490 * CB0_m0[9u].x) + (((_487 * CB0_m0[6u].x) + (_488 * CB0_m0[7u].x)) + (_489 * CB0_m0[8u].x));
        gl_Position.y = (_490 * CB0_m0[9u].y) + (((_487 * CB0_m0[6u].y) + (_488 * CB0_m0[7u].y)) + (_489 * CB0_m0[8u].y));
        gl_Position.z = (_490 * CB0_m0[9u].z) + (((_487 * CB0_m0[6u].z) + (_488 * CB0_m0[7u].z)) + (_489 * CB0_m0[8u].z));
        gl_Position.w = (_490 * CB0_m0[9u].w) + (((_487 * CB0_m0[6u].w) + (_488 * CB0_m0[7u].w)) + (_489 * CB0_m0[8u].w));
        TEXCOORD_1 = uint(gl_InstanceIndex) - uint(gl_BaseInstanceARB);
        TEXCOORD_2 = 0u;
        TEXCOORD_3 = int(_287);
        TEXCOORD.x = (asfloat(_349) * 0.5f) + 0.5f;
        TEXCOORD.y = (asfloat(_361) * 0.5f) + 0.5f;
        return;
    }
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    gl_VertexIndex = int(stage_input.gl_VertexIndex);
    gl_InstanceIndex = int(stage_input.gl_InstanceIndex);
    gl_BaseVertexARB = SPIRV_Cross_BaseVertex;
    gl_BaseInstanceARB = SPIRV_Cross_BaseInstance;
    vert_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_Position = gl_Position;
    stage_output.TEXCOORD = TEXCOORD;
    stage_output.TEXCOORD_1 = TEXCOORD_1;
    stage_output.TEXCOORD_2 = TEXCOORD_2;
    stage_output.TEXCOORD_3 = TEXCOORD_3;
    return stage_output;
}
