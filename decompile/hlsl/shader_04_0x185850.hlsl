static float _401;

cbuffer CB0UBO : register(b8)
{
    float4 CB0_m0[61] : packoffset(c0);
};

Texture2D<float4> T0 : register(t0);
Texture2D<float4> T1 : register(t1);
SamplerState S0 : register(s0);

static float2 TEXCOORD;
static float4 SV_Target;

struct SPIRV_Cross_Input
{
    float2 TEXCOORD : TEXCOORD1;
};

struct SPIRV_Cross_Output
{
    float4 SV_Target : SV_Target0;
};

void frag_main()
{
    float _46 = asfloat(asuint(CB0_m0[44u]).z);
    float _47 = asfloat(1028443341u);
    float _58 = asfloat(asuint(CB0_m0[44u]).w);
    uint _69 = uint(int(CB0_m0[60u].y));
    float _70 = asfloat(1008981770u);
    float _72 = asfloat(1008981770u);
    if (uint(int(CB0_m0[44u].x)) == 0u)
    {
        bool _85 = 0.5f < CB0_m0[41u].y;
        float4 _94 = T0.Sample(S0, float2(TEXCOORD.x, TEXCOORD.y));
        uint _104 = _85 ? asuint(_94.x) : 0u;
        uint _105 = _85 ? asuint(_94.y) : 0u;
        uint _106 = _85 ? asuint(_94.z) : 0u;
        bool _111 = 0.5f < CB0_m0[41u].z;
        float4 _117 = T1.Sample(S0, float2(TEXCOORD.x, TEXCOORD.y));
        uint _127 = _111 ? asuint(_117.x) : 0u;
        uint _128 = _111 ? asuint(_117.y) : 0u;
        uint _129 = _111 ? asuint(_117.z) : 0u;
        uint _134 = (0u != _69) ? _127 : _104;
        uint _135 = (0u != _69) ? _128 : _105;
        uint _136 = (0u != _69) ? _129 : _106;
        uint _144 = (0u != _69) ? (_85 ? asuint(_94.w) : 0u) : (_111 ? asuint(_117.w) : 0u);
        float _145 = asfloat((0u != _69) ? _104 : _127);
        float _146 = asfloat((0u != _69) ? _105 : _128);
        float _147 = asfloat((0u != _69) ? _106 : _129);
        bool _156 = _70 >= asfloat(_144);
        float _400;
        if (_156)
        {
            _400 = asfloat(0u);
        }
        else
        {
            _400 = _401;
        }
        float _408;
        if ((_156 ? 4294967295u : 0u) == 0u)
        {
            bool _406 = _72 >= dot(float3(_145, _146, _147), float3(0.2125999927520751953125f, 0.715200006961822509765625f, 0.072200000286102294921875f));
            float _545;
            if (_406)
            {
                _545 = asfloat(0u);
            }
            else
            {
                _545 = _400;
            }
            float _409;
            if ((_406 ? 4294967295u : 0u) == 0u)
            {
                _409 = asfloat(_144);
            }
            else
            {
                _409 = _545;
            }
            _408 = _409;
        }
        else
        {
            _408 = _400;
        }
        SV_Target.x = (_408 * (_145 + ((-0.0f) - asfloat(_134)))) + asfloat(_134);
        SV_Target.y = (_408 * (_146 + ((-0.0f) - asfloat(_135)))) + asfloat(_135);
        SV_Target.z = (_408 * (_147 + ((-0.0f) - asfloat(_136)))) + asfloat(_136);
        SV_Target.w = 1.0f;
        return;
    }
    else
    {
        float _165 = ceil(CB0_m0[0u].x * 11.0f);
        float _169 = CB0_m0[0u].x * 5.0f;
        float _175 = (CB0_m0[0u].x * 5.0f) + 127.3000030517578125f;
        float _197 = frac(sin(dot(float2(_169, _175), float2(127.09999847412109375f, 311.70001220703125f))) * 43758.546875f) + asfloat(3204448256u);
        float _198 = frac(sin(dot(float2(_169, _175), float2(269.5f, 183.3000030517578125f))) * 43758.546875f) + asfloat(3204448256u);
        float _216 = _165 * 0.00999999977648258209228515625f;
        float _225 = frac(sin(dot(float2(_216 + TEXCOORD.x, _216 + TEXCOORD.y), float2(127.09999847412109375f, 311.70001220703125f))) * 43758.546875f);
        float _228 = (_225 * asfloat((0.1500000059604644775390625f < max(_197, (-0.0f) - _197)) ? asuint(_197 * 0.000600000028498470783233642578125f) : 0u)) + TEXCOORD.x;
        float _229 = (_225 * asfloat((0.1500000059604644775390625f < max((-0.0f) - _198, _198)) ? asuint(_198 * 0.000600000028498470783233642578125f) : 0u)) + TEXCOORD.y;
        float _235 = asfloat(asuint(CB0_m0[0u]).x) * 5.0f;
        float _236 = _235 + 17.0f;
        float _238 = floor(_236);
        float _239 = frac(_236);
        float _253 = frac(sin(_238) * 43758.546875f);
        float _268 = _235 + 37.0f;
        float _270 = floor(_268);
        float _271 = frac(_268);
        float _282 = frac(sin(_270) * 43758.546875f);
        float _294 = _235 + 71.0f;
        float _296 = floor(_294);
        float _297 = frac(_294);
        float _308 = frac(sin(_296) * 43758.546875f);
        float _336 = _228 + (_58 * asfloat((0.699999988079071044921875f < (((((((_239 * (asfloat(3245342720u) + (_239 * 6.0f))) + 10.0f) * (_239 * (_239 * _239))) * (((-0.0f) - _253) + frac(sin(_238 + 1.0f) * 43758.546875f))) + _253) * 2.0f) + asfloat(3212836864u))) ? 1065353216u : 0u));
        float _337 = _229 + asfloat(0u);
        bool _341 = 0.5f < CB0_m0[41u].y;
        float4 _343 = T0.Sample(S0, float2(_336, _337));
        uint _353 = _341 ? asuint(_343.x) : 0u;
        uint _354 = _341 ? asuint(_343.y) : 0u;
        uint _355 = _341 ? asuint(_343.z) : 0u;
        bool _360 = 0.5f < CB0_m0[41u].z;
        float4 _362 = T1.Sample(S0, float2(_336, _337));
        uint _372 = _360 ? asuint(_362.x) : 0u;
        uint _373 = _360 ? asuint(_362.y) : 0u;
        uint _374 = _360 ? asuint(_362.z) : 0u;
        uint _379 = (0u != _69) ? _372 : _353;
        uint _380 = (0u != _69) ? _373 : _354;
        uint _381 = (0u != _69) ? _374 : _355;
        uint _388 = (0u != _69) ? _355 : _374;
        uint _389 = (0u != _69) ? (_341 ? asuint(_343.w) : 0u) : (_360 ? asuint(_362.w) : 0u);
        float _390 = asfloat((0u != _69) ? _353 : _372);
        float _391 = asfloat((0u != _69) ? _354 : _373);
        bool _397 = _70 >= asfloat(_389);
        float _404;
        if (_397)
        {
            _404 = asfloat(0u);
        }
        else
        {
            _404 = _337;
        }
        float _437;
        if ((_397 ? 4294967295u : 0u) == 0u)
        {
            bool _435 = _72 >= dot(float3(_390, _391, asfloat(_388)), float3(0.2125999927520751953125f, 0.715200006961822509765625f, 0.072200000286102294921875f));
            float _548;
            if (_435)
            {
                _548 = asfloat(0u);
            }
            else
            {
                _548 = _404;
            }
            float _438;
            if ((_435 ? 4294967295u : 0u) == 0u)
            {
                _438 = asfloat(_389);
            }
            else
            {
                _438 = _548;
            }
            _437 = _438;
        }
        else
        {
            _437 = _404;
        }
        float _461 = min(max((_437 * (_390 + ((-0.0f) - asfloat(_379)))) + asfloat(_379), 0.0f), 1.0f);
        float _478 = ((-0.0f) - exp2(log2(((-0.0f) - ((_47 * (dot(float3(_461, min(max((_437 * (_391 + ((-0.0f) - asfloat(_380)))) + asfloat(_380), 0.0f), 1.0f), min(max((_437 * (asfloat(_388) + ((-0.0f) - asfloat(_381)))) + asfloat(_381), 0.0f), 1.0f)), float3(0.2125999927520751953125f, 0.715200006961822509765625f, 0.072200000286102294921875f)) + ((-0.0f) - _461))) + _461)) + 1.0f) * (1.0f / asfloat(1069547520u)))) + 1.0f;
        float _479 = _228 + (_58 * asfloat((0.699999988079071044921875f < (asfloat(3212836864u) + ((((((-0.0f) - _282) + frac(sin(_270 + 1.0f) * 43758.546875f)) * (((((_271 * 6.0f) + asfloat(3245342720u)) * _271) + 10.0f) * (_271 * (_271 * _271)))) + _282) * 2.0f))) ? 1065353216u : 0u));
        float _480 = _229 + asfloat(0u);
        bool _484 = 0.5f < CB0_m0[41u].y;
        float4 _486 = T0.Sample(S0, float2(_479, _480));
        uint _496 = _484 ? asuint(_486.x) : 0u;
        uint _497 = _484 ? asuint(_486.y) : 0u;
        uint _498 = _484 ? asuint(_486.z) : 0u;
        bool _503 = 0.5f < CB0_m0[41u].z;
        float4 _507 = T1.Sample(S0, float2(_479, _480));
        uint _517 = _503 ? asuint(_507.x) : 0u;
        uint _518 = _503 ? asuint(_507.y) : 0u;
        uint _519 = _503 ? asuint(_507.z) : 0u;
        uint _524 = (0u != _69) ? _517 : _496;
        uint _525 = (0u != _69) ? _518 : _497;
        uint _526 = (0u != _69) ? _519 : _498;
        uint _534 = (0u != _69) ? (_484 ? asuint(_486.w) : 0u) : (_503 ? asuint(_507.w) : 0u);
        float _535 = asfloat((0u != _69) ? _496 : _517);
        float _536 = asfloat((0u != _69) ? _497 : _518);
        float _537 = asfloat((0u != _69) ? _498 : _519);
        bool _542 = _70 >= asfloat(_534);
        float _551;
        if (_542)
        {
            _551 = asfloat(0u);
        }
        else
        {
            _551 = asfloat(_503 ? 4294967295u : 0u);
        }
        float _557;
        if ((_542 ? 4294967295u : 0u) == 0u)
        {
            bool _555 = _72 >= dot(float3(_535, _536, _537), float3(0.2125999927520751953125f, 0.715200006961822509765625f, 0.072200000286102294921875f));
            float _666;
            if (_555)
            {
                _666 = asfloat(0u);
            }
            else
            {
                _666 = _551;
            }
            float _558;
            if ((_555 ? 4294967295u : 0u) == 0u)
            {
                _558 = asfloat(_534);
            }
            else
            {
                _558 = _666;
            }
            _557 = _558;
        }
        else
        {
            _557 = _551;
        }
        float _581 = min(max((_557 * (_536 + ((-0.0f) - asfloat(_525)))) + asfloat(_525), 0.0f), 1.0f);
        float _597 = ((-0.0f) - exp2(log2(((-0.0f) - ((_47 * (((-0.0f) - _581) + dot(float3(min(max((_557 * (_535 + ((-0.0f) - asfloat(_524)))) + asfloat(_524), 0.0f), 1.0f), _581, min(max((_557 * (_537 + ((-0.0f) - asfloat(_526)))) + asfloat(_526), 0.0f), 1.0f)), float3(0.2125999927520751953125f, 0.715200006961822509765625f, 0.072200000286102294921875f)))) + _581)) + 1.0f) * (1.0f / asfloat(1068708659u)))) + 1.0f;
        float _599 = _228 + asfloat(0u);
        float _600 = _229 + (_58 * asfloat((0.699999988079071044921875f < (((((((_297 * ((_297 * 6.0f) + asfloat(3245342720u))) + 10.0f) * (_297 * (_297 * _297))) * (((-0.0f) - _308) + frac(sin(_296 + 1.0f) * 43758.546875f))) + _308) * 2.0f) + asfloat(3212836864u))) ? 1065353216u : 0u));
        bool _604 = 0.5f < CB0_m0[41u].y;
        float4 _606 = T0.Sample(S0, float2(_599, _600));
        uint _616 = _604 ? asuint(_606.x) : 0u;
        uint _617 = _604 ? asuint(_606.y) : 0u;
        uint _618 = _604 ? asuint(_606.z) : 0u;
        bool _623 = 0.5f < CB0_m0[41u].z;
        float4 _625 = T1.Sample(S0, float2(_599, _600));
        uint _635 = _623 ? asuint(_625.x) : 0u;
        uint _636 = _623 ? asuint(_625.y) : 0u;
        uint _637 = _623 ? asuint(_625.z) : 0u;
        uint _652 = (0u != _69) ? (_604 ? asuint(_606.w) : 0u) : (_623 ? asuint(_625.w) : 0u);
        float _653 = asfloat((0u != _69) ? _635 : _616);
        float _654 = asfloat((0u != _69) ? _636 : _617);
        float _655 = asfloat((0u != _69) ? _637 : _618);
        float _656 = asfloat((0u != _69) ? _616 : _635);
        float _657 = asfloat((0u != _69) ? _617 : _636);
        float _658 = asfloat((0u != _69) ? _618 : _637);
        bool _663 = _70 >= asfloat(_652);
        float _669;
        if (_663)
        {
            _669 = asfloat(0u);
        }
        else
        {
            _669 = _557;
        }
        float _674;
        if ((_663 ? 4294967295u : 0u) == 0u)
        {
            bool _672 = _72 >= dot(float3(_656, _657, _658), float3(0.2125999927520751953125f, 0.715200006961822509765625f, 0.072200000286102294921875f));
            float _712;
            if (_672)
            {
                _712 = asfloat(0u);
            }
            else
            {
                _712 = _669;
            }
            float _675;
            if ((_672 ? 4294967295u : 0u) == 0u)
            {
                _675 = asfloat(_652);
            }
            else
            {
                _675 = _712;
            }
            _674 = _675;
        }
        else
        {
            _674 = _669;
        }
        float _693 = min(max(_655 + ((((-0.0f) - _655) + _658) * _674), 0.0f), 1.0f);
        float _708 = ((-0.0f) - exp2(log2(((-0.0f) - ((_47 * (((-0.0f) - _693) + dot(float3(min(max(_653 + ((((-0.0f) - _653) + _656) * _674), 0.0f), 1.0f), min(max(_654 + ((((-0.0f) - _654) + _657) * _674), 0.0f), 1.0f), _693), float3(0.2125999927520751953125f, 0.715200006961822509765625f, 0.072200000286102294921875f)))) + _693)) + 1.0f) * (1.0f / asfloat(1069547520u)))) + 1.0f;
        float _731;
        float _732;
        uint _733;
        if (0u != uint(int(CB0_m0[44u].y)))
        {
            float _725 = (cos(((_229 * 3.141592502593994140625f) * CB0_m0[1u].y) / 2.7000000476837158203125f) * 0.07500000298023223876953125f) + 0.925000011920928955078125f;
            _731 = _725 * _478;
            _732 = _725 * _597;
            _733 = asuint(_725 * _708);
        }
        else
        {
            _731 = _478;
            _732 = _597;
            _733 = asuint(_708);
        }
        float _741 = frac((CB0_m0[0u].x * 100.0f) / 6.28318023681640625f);
        float _755 = ((exp2(((_741 + asfloat(3204448256u)) * ((asfloat(3204448256u) + _741) * (-10.0f))) * 1.44269502162933349609375f) * asfloat(asuint(CB0_m0[45u]).x)) * 0.039999999105930328369140625f) + 0.959999978542327880859375f;
        float _765 = (asfloat(3204448256u) + _228) * 2.0f;
        float _766 = (asfloat(3204448256u) + _229) * 2.0f;
        float _785 = ((((frac(sin(_165 + 13.69999980926513671875f) * 43758.546875f) * 0.300000011920928955078125f) + 0.699999988079071044921875f) * (((-0.0f) - (dot(float2(_765, _766), float2(_765, _766)) * 0.2939999997615814208984375f)) + 1.0f)) * 0.4000000059604644775390625f) + 0.60000002384185791015625f;
        float _805 = (frac(sin(dot(float2(_165 + (_228 * 1000.0f), _165 + (_229 * 1000.0f)), float2(12.98980045318603515625f, 78.233001708984375f))) * 43758.546875f) * 0.20000000298023223876953125f) + 1.0f;
        SV_Target.x = _46 * (_805 * (_785 * (_755 * _731)));
        SV_Target.y = _46 * (_805 * (_785 * (_755 * _732)));
        SV_Target.z = _46 * (_805 * (_785 * (_755 * asfloat(_733))));
        SV_Target.w = 1.0f;
        return;
    }
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    TEXCOORD = stage_input.TEXCOORD;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.SV_Target = SV_Target;
    return stage_output;
}
