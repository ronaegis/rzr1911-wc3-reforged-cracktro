cbuffer CB0UBO : register(b8)
{
    float4 CB0_m0[63] : packoffset(c0);
};

Buffer<int4> T0 : register(t0);
Buffer<int4> T1 : register(t1);
Buffer<int4> T2 : register(t2);
Buffer<int4> T3 : register(t3);
Buffer<int4> T4 : register(t4);
Buffer<int4> T5 : register(t5);
Buffer<int4> T6 : register(t6);
Buffer<int4> T7 : register(t7);
Buffer<int4> T8 : register(t8);
Buffer<int4> T9 : register(t9);
Buffer<float4> T10 : register(t10);
Buffer<int4> T11 : register(t12);

static float2 TEXCOORD;
static uint TEXCOORD_1;
static uint TEXCOORD_2;
static int TEXCOORD_3;
static float4 SV_Target;

struct SPIRV_Cross_Input
{
    float2 TEXCOORD : TEXCOORD1;
    uint TEXCOORD_1 : TEXCOORD2;
    nointerpolation uint TEXCOORD_2 : TEXCOORD2;
    nointerpolation int TEXCOORD_3 : TEXCOORD2;
};

struct SPIRV_Cross_Output
{
    float4 SV_Target : SV_Target0;
};

static bool discard_state;

void discard_exit()
{
    if (discard_state)
    {
        discard;
    }
}

void frag_main()
{
    discard_state = false;
    uint _45[36];
    _45[0u] = 1u;
    _45[4u] = 1u;
    _45[8u] = 1u;
    _45[12u] = 1u;
    _45[16u] = 1u;
    _45[20u] = 0u;
    _45[24u] = 0u;
    _45[28u] = 0u;
    _45[32u] = 0u;
    uint _46[36];
    _46[0u] = 120u;
    _46[4u] = 80u;
    _46[8u] = 120u;
    _46[12u] = 120u;
    _46[16u] = 120u;
    _46[20u] = 80u;
    _46[24u] = 80u;
    _46[28u] = 80u;
    _46[32u] = 80u;
    uint _47[36];
    _47[0u] = 34u;
    _47[4u] = 213u;
    _47[8u] = 34u;
    _47[12u] = 34u;
    _47[16u] = 34u;
    _47[20u] = 25u;
    _47[24u] = 25u;
    _47[28u] = 25u;
    _47[32u] = 25u;
    uint _48[36];
    _48[0u] = 118320u;
    _48[4u] = 32000u;
    _48[8u] = 118320u;
    _48[12u] = 118320u;
    _48[16u] = 118320u;
    _48[20u] = 32000u;
    _48[24u] = 32000u;
    _48[28u] = 32000u;
    _48[32u] = 32000u;
    uint _49[36];
    _49[0u] = 1u;
    _49[4u] = 1u;
    _49[8u] = 1u;
    _49[12u] = 1u;
    _49[16u] = 1u;
    _49[20u] = 1u;
    _49[24u] = 1u;
    _49[28u] = 1u;
    _49[32u] = 1u;
    uint _50[36];
    _50[0u] = 0u;
    _50[4u] = 0u;
    _50[8u] = 0u;
    _50[12u] = 0u;
    _50[16u] = 2u;
    _50[20u] = 2u;
    _50[24u] = 2u;
    _50[28u] = 2u;
    _50[32u] = 2u;
    uint _51[36];
    _51[0u] = 16u;
    _51[4u] = 16u;
    _51[8u] = 16u;
    _51[12u] = 16u;
    _51[16u] = 0u;
    _51[20u] = 0u;
    _51[24u] = 0u;
    _51[28u] = 0u;
    _51[32u] = 0u;
    uint _52[36];
    _52[0u] = 0u;
    _52[4u] = 0u;
    _52[8u] = 0u;
    _52[12u] = 0u;
    _52[16u] = 0u;
    _52[20u] = 0u;
    _52[24u] = 0u;
    _52[28u] = 0u;
    _52[32u] = 0u;
    uint _53[36];
    _53[0u] = 1u;
    _53[4u] = 1u;
    _53[8u] = 1u;
    _53[12u] = 1u;
    _53[16u] = 1u;
    _53[20u] = 0u;
    _53[24u] = 0u;
    _53[28u] = 0u;
    _53[32u] = 0u;
    uint _54[36];
    _54[0u] = uint(CB0_m0[61u].z);
    _54[4u] = 0u;
    _54[8u] = uint(CB0_m0[59u].w);
    _54[12u] = uint(CB0_m0[61u].z);
    _54[16u] = uint(CB0_m0[56u].z);
    _54[20u] = 0u;
    _54[24u] = 0u;
    _54[28u] = 0u;
    _54[32u] = 0u;
    uint _55[36];
    _55[0u] = asuint(16.0f);
    _55[4u] = asuint(16.0f);
    _55[8u] = asuint(16.0f);
    _55[12u] = asuint(29.0f);
    _55[16u] = asuint(0.0f);
    _55[20u] = asuint(0.0f);
    _55[24u] = asuint(0.0f);
    _55[28u] = asuint(0.0f);
    _55[32u] = asuint(0.0f);
    uint _56[36];
    _56[0u] = asuint(0.0f);
    _56[4u] = asuint(1.0f);
    _56[8u] = asuint(1.0f);
    _56[12u] = asuint(1.0f);
    _56[16u] = asuint(1.0f);
    _56[20u] = asuint(0.0f);
    _56[24u] = asuint(0.0f);
    _56[28u] = asuint(0.0f);
    _56[32u] = asuint(0.0f);
    uint _57[36];
    _57[0u] = asuint(0.0f);
    _57[4u] = asuint(CB0_m0[55u]).w;
    _57[8u] = asuint(0.0f);
    _57[12u] = asuint(CB0_m0[57u]).y;
    _57[16u] = asuint(CB0_m0[57u]).y;
    _57[20u] = asuint(0.0f);
    _57[24u] = asuint(0.0f);
    _57[28u] = asuint(0.0f);
    _57[32u] = asuint(0.0f);
    uint _58[36];
    _58[0u] = asuint(0.0f);
    _58[4u] = asuint(CB0_m0[56u]).x;
    _58[8u] = asuint(0.0f);
    _58[12u] = asuint(CB0_m0[57u]).z;
    _58[16u] = asuint(CB0_m0[57u]).z;
    _58[20u] = asuint(0.0f);
    _58[24u] = asuint(0.0f);
    _58[28u] = asuint(0.0f);
    _58[32u] = asuint(0.0f);
    uint _59[36];
    _59[0u] = asuint(0.0f);
    _59[4u] = asuint(CB0_m0[56u]).y;
    _59[8u] = asuint(0.0f);
    _59[12u] = asuint(CB0_m0[56u]).y;
    _59[16u] = asuint(0.0f);
    _59[20u] = asuint(0.0f);
    _59[24u] = asuint(0.0f);
    _59[28u] = asuint(0.0f);
    _59[32u] = asuint(0.0f);
    uint _60[36];
    _60[0u] = asuint(0.0f);
    _60[4u] = asuint(CB0_m0[61u]).x;
    _60[8u] = asuint(0.0f);
    _60[12u] = asuint(0.0f);
    _60[16u] = asuint(0.0f);
    _60[20u] = asuint(0.0f);
    _60[24u] = asuint(0.0f);
    _60[28u] = asuint(0.0f);
    _60[32u] = asuint(0.0f);
    uint _61[36];
    _61[0u] = 1028443341u;
    _61[1u] = 1028443341u;
    _61[2u] = 1028443341u;
    _61[3u] = asuint(CB0_m0[62u]).x;
    _61[4u] = asuint(0.0f);
    _61[5u] = asuint(0.0f);
    _61[6u] = asuint(0.0f);
    _61[7u] = asuint(CB0_m0[56u]).w;
    _61[8u] = asuint(0.0f);
    _61[9u] = asuint(0.0f);
    _61[10u] = asuint(0.0f);
    _61[11u] = asuint(CB0_m0[60u]).x;
    uint4 _386 = asuint(CB0_m0[62u]);
    uint _387 = _386.x;
    _61[12u] = asuint(0.0f);
    _61[13u] = asuint(0.0f);
    _61[14u] = asuint(0.0f);
    _61[15u] = _387;
    _61[16u] = asuint(0.0f);
    _61[17u] = asuint(0.0f);
    _61[18u] = asuint(0.0f);
    _61[19u] = asuint(CB0_m0[57u]).x;
    _61[20u] = asuint(0.0f);
    _61[21u] = asuint(0.0f);
    _61[22u] = asuint(0.0f);
    _61[23u] = asuint(0.0f);
    _61[24u] = asuint(0.0f);
    _61[25u] = asuint(0.0f);
    _61[26u] = asuint(0.0f);
    _61[27u] = asuint(0.0f);
    _61[28u] = asuint(0.0f);
    _61[29u] = asuint(0.0f);
    _61[30u] = asuint(0.0f);
    _61[31u] = asuint(0.0f);
    _61[32u] = asuint(0.0f);
    _61[33u] = asuint(0.0f);
    _61[34u] = asuint(0.0f);
    _61[35u] = asuint(0.0f);
    if (TEXCOORD_2 != 0u)
    {
        SV_Target.x = 0.0f;
        SV_Target.y = 0.0f;
        SV_Target.z = 0.0f;
        SV_Target.w = asfloat(1065353216u);
        discard_exit();
        return;
    }
    else
    {
        if ((((int(uint(TEXCOORD_3)) < int(9u)) ? 4294967295u : 0u) & ((int(uint(TEXCOORD_3)) >= int(0u)) ? 4294967295u : 0u)) != 0u)
        {
            uint _476 = uint(TEXCOORD_3);
            uint _483 = (_476 * 4u) + 0u;
            uint _494;
            if (_45[_483] == 0u)
            {
                _494 = asuint(0.0f);
            }
            else
            {
                _494 = _387;
            }
            float _508;
            float _510;
            float _512;
            uint _514;
            if (((0u == _45[_483]) ? 4294967295u : 0u) == 0u)
            {
                uint _506 = ((1.0f < TEXCOORD.y) ? 4294967295u : 0u) | (((TEXCOORD.y < 0.0f) ? 4294967295u : 0u) | (((1.0f < TEXCOORD.x) ? 4294967295u : 0u) | ((TEXCOORD.x < 0.0f) ? 4294967295u : 0u)));
                uint _520;
                if (_506 != 0u)
                {
                    _520 = asuint(0.0f);
                }
                else
                {
                    _520 = _494;
                }
                float _509;
                float _511;
                float _513;
                uint _515;
                if (_506 == 0u)
                {
                    uint _531 = (_476 * 4u) + 0u;
                    uint _535 = (_476 * 4u) + 0u;
                    uint _543 = (1u == _49[(_476 * 4u) + 0u]) ? 16u : 8u;
                    float _592;
                    if (1u == _53[(_476 * 4u) + 0u])
                    {
                        _592 = asfloat(_54[(_476 * 4u) + 0u]);
                    }
                    else
                    {
                        uint _577 = uint(asfloat(_55[(_476 * 4u) + 0u]) * CB0_m0[0u].x);
                        uint _579 = (_476 * 4u) + 0u;
                        bool _584 = _51[_579] == 0u;
                        _592 = asfloat(_52[(_476 * 4u) + 0u] + uint2(_584 ? 4294967295u : (_577 / _51[_579]), _584 ? 4294967295u : (_577 % _51[_579])).y);
                    }
                    float _597 = (min(max(TEXCOORD.x, 0.0f), 1.0f) * float(_46[_531])) * 8.0f;
                    float _600 = float(_543) * (min(max(TEXCOORD.y, 0.0f), 1.0f) * float(_47[_535]));
                    float _676;
                    uint _677;
                    if ((((0.0f < asfloat(_58[(_476 * 4u) + 0u])) ? 4294967295u : 0u) | ((0.0f < asfloat(_57[(_476 * 4u) + 0u])) ? 4294967295u : 0u)) != 0u)
                    {
                        float _635 = frac(floor(_597) * 0.103100001811981201171875f);
                        float _636 = frac(floor(_600) * 0.10300000011920928955078125f);
                        float _637 = frac(floor(_597) * 0.097300000488758087158203125f);
                        float _642 = dot(float3(_635, _636, _637), float3(_636 + 33.3300018310546875f, _635 + 33.3300018310546875f, _637 + 33.3300018310546875f));
                        float _651 = frac((_642 + _637) * ((_642 + _636) + (_642 + _635)));
                        _676 = (_651 * (asfloat((_597 < (float(_46[_531]) * 4.0f)) ? 1065353216u : 3212836864u) * asfloat(_57[(_476 * 4u) + 0u]))) + _597;
                        _677 = asuint((_651 * (asfloat(_58[(_476 * 4u) + 0u]) * asfloat((_600 < ((float(_47[_535]) * float(_543)) * 0.5f)) ? 1065353216u : 3212836864u))) + _600);
                    }
                    else
                    {
                        _676 = _597;
                        _677 = asuint(_600);
                    }
                    float _701;
                    uint _703;
                    if (0.0f < asfloat(_59[(_476 * 4u) + 0u]))
                    {
                        float _688 = asfloat(_59[(_476 * 4u) + 0u]);
                        float _694 = floor(CB0_m0[0u].x * 60.0f);
                        float _702;
                        if (0.0f < asfloat(_57[(_476 * 4u) + 0u]))
                        {
                            float _732 = frac((_694 + 1.10000002384185791015625f) * 0.103100001811981201171875f);
                            float _733 = frac((float(int(_476)) * 3.2999999523162841796875f) * 0.10300000011920928955078125f);
                            float _734 = frac((_694 + 1.10000002384185791015625f) * 0.097300000488758087158203125f);
                            float _738 = dot(float3(_732, _733, _734), float3(_733 + 33.3300018310546875f, _732 + 33.3300018310546875f, _734 + 33.3300018310546875f));
                            _702 = (_688 * ((frac((_738 + _734) * ((_738 + _733) + (_738 + _732))) * 2.0f) + asfloat(3212836864u))) + _676;
                        }
                        else
                        {
                            _702 = _676;
                        }
                        uint _704;
                        if (0.0f < asfloat(_58[(_476 * 4u) + 0u]))
                        {
                            float _771 = frac((_694 + 5.5f) * 0.103100001811981201171875f);
                            float _772 = frac((float(int(_476)) * 7.69999980926513671875f) * 0.10300000011920928955078125f);
                            float _773 = frac((_694 + 5.5f) * 0.097300000488758087158203125f);
                            float _777 = dot(float3(_771, _772, _773), float3(_772 + 33.3300018310546875f, _771 + 33.3300018310546875f, _773 + 33.3300018310546875f));
                            _704 = asuint((_688 * ((frac((_777 + _773) * ((_777 + _772) + (_777 + _771))) * 2.0f) + asfloat(3212836864u))) + asfloat(_677));
                        }
                        else
                        {
                            _704 = _677;
                        }
                        _701 = _702;
                        _703 = _704;
                    }
                    else
                    {
                        _701 = _676;
                        _703 = _677;
                    }
                    float _705 = _701 / 8.0f;
                    float _708 = asfloat(_703) / float(_543);
                    uint _721 = ((((_705 < 0.0f) ? 4294967295u : 0u) | ((_705 >= float(_46[_531])) ? 4294967295u : 0u)) | ((_708 < 0.0f) ? 4294967295u : 0u)) | ((_708 >= float(_47[_535])) ? 4294967295u : 0u);
                    uint _760;
                    if (_721 != 0u)
                    {
                        _760 = asuint(0.0f);
                    }
                    else
                    {
                        _760 = _520;
                    }
                    float _555;
                    float _556;
                    float _557;
                    uint _558;
                    if (_721 == 0u)
                    {
                        uint _793 = uint(_705);
                        uint _794 = uint(_708);
                        uint _800 = (_793 + (_46[_531] * _794)) + ((_46[_531] * _47[_535]) * asuint(_592));
                        bool _805 = _800 >= _48[(_476 * 4u) + 0u];
                        uint _812;
                        if (_805)
                        {
                            _812 = asuint(0.0f);
                        }
                        else
                        {
                            _812 = _760;
                        }
                        float _807;
                        float _808;
                        float _809;
                        uint _810;
                        if ((_805 ? 4294967295u : 0u) == 0u)
                        {
                            uint _814 = 3u * _800;
                            uint _833;
                            uint _835;
                            uint _837;
                            if (_476 == 0u)
                            {
                                _833 = uint4(T1.Load(1u + _814)).x;
                                _835 = uint4(T1.Load(_814)).x;
                                _837 = uint4(T1.Load(_814 + 2u)).x;
                            }
                            else
                            {
                                uint _834;
                                uint _836;
                                uint _838;
                                if (_476 == 1u)
                                {
                                    _834 = uint4(T2.Load(_814 + 1u)).x;
                                    _836 = uint4(T2.Load(_814)).x;
                                    _838 = uint4(T2.Load(_814 + 2u)).x;
                                }
                                else
                                {
                                    uint _860;
                                    uint _861;
                                    uint _862;
                                    if (_476 == 2u)
                                    {
                                        _860 = uint4(T3.Load(_814 + 1u)).x;
                                        _861 = uint4(T3.Load(_814)).x;
                                        _862 = uint4(T3.Load(_814 + 2u)).x;
                                    }
                                    else
                                    {
                                        uint _885;
                                        uint _886;
                                        uint _887;
                                        if (_476 == 3u)
                                        {
                                            _885 = uint4(T4.Load(_814 + 1u)).x;
                                            _886 = uint4(T4.Load(_814)).x;
                                            _887 = uint4(T4.Load(_814 + 2u)).x;
                                        }
                                        else
                                        {
                                            uint _974;
                                            uint _975;
                                            uint _976;
                                            if (_476 == 4u)
                                            {
                                                _974 = uint4(T5.Load(_814 + 1u)).x;
                                                _975 = uint4(T5.Load(_814)).x;
                                                _976 = uint4(T5.Load(_814 + 2u)).x;
                                            }
                                            else
                                            {
                                                uint _1013;
                                                uint _1014;
                                                uint _1015;
                                                if (_476 == 5u)
                                                {
                                                    _1013 = uint4(T6.Load(_814 + 1u)).x;
                                                    _1014 = uint4(T6.Load(_814)).x;
                                                    _1015 = uint4(T6.Load(_814 + 2u)).x;
                                                }
                                                else
                                                {
                                                    uint _1070;
                                                    uint _1071;
                                                    uint _1072;
                                                    if (_476 == 6u)
                                                    {
                                                        _1070 = uint4(T7.Load(_814 + 1u)).x;
                                                        _1071 = uint4(T7.Load(_814)).x;
                                                        _1072 = uint4(T7.Load(_814 + 2u)).x;
                                                    }
                                                    else
                                                    {
                                                        uint _1091;
                                                        uint _1092;
                                                        uint _1093;
                                                        if (_476 == 7u)
                                                        {
                                                            _1091 = uint4(T8.Load(_814 + 1u)).x;
                                                            _1092 = uint4(T8.Load(_814)).x;
                                                            _1093 = uint4(T8.Load(_814 + 2u)).x;
                                                        }
                                                        else
                                                        {
                                                            _1091 = uint4(T9.Load(_814 + 1u)).x;
                                                            _1092 = uint4(T9.Load(_814)).x;
                                                            _1093 = uint4(T9.Load(_814 + 2u)).x;
                                                        }
                                                        _1070 = _1091;
                                                        _1071 = _1092;
                                                        _1072 = _1093;
                                                    }
                                                    _1013 = _1070;
                                                    _1014 = _1071;
                                                    _1015 = _1072;
                                                }
                                                _974 = _1013;
                                                _975 = _1014;
                                                _976 = _1015;
                                            }
                                            _885 = _974;
                                            _886 = _975;
                                            _887 = _976;
                                        }
                                        _860 = _885;
                                        _861 = _886;
                                        _862 = _887;
                                    }
                                    _834 = _860;
                                    _836 = _861;
                                    _838 = _862;
                                }
                                _833 = _834;
                                _835 = _836;
                                _837 = _838;
                            }
                            uint _843 = ((_835 == 0u) ? 4294967295u : 0u) & ((_837 == 4294967295u) ? 4294967295u : 0u);
                            uint _858;
                            if (_843 != 0u)
                            {
                                _858 = asuint(0.0f);
                            }
                            else
                            {
                                _858 = _812;
                            }
                            float _816;
                            float _817;
                            float _818;
                            uint _819;
                            if (_843 == 0u)
                            {
                                uint _940;
                                if (0.0f < asfloat(_60[(_476 * 4u) + 0u]))
                                {
                                    float _900 = float(_793);
                                    float _902 = float(int(_476)) * 91.6999969482421875f;
                                    float _915 = frac((_900 + _902) * 0.103100001811981201171875f);
                                    float _916 = frac(((float(asuint(_592)) * 57.299999237060546875f) + float(_794)) * 0.10300000011920928955078125f);
                                    float _917 = frac((_900 + _902) * 0.097300000488758087158203125f);
                                    float _921 = dot(float3(_915, _916, _917), float3(_916 + 33.3300018310546875f, _915 + 33.3300018310546875f, _917 + 33.3300018310546875f));
                                    _940 = asuint(asfloat(_60[(_476 * 4u) + 0u]) * (asfloat(3212836864u) + (frac((_921 + _917) * ((_921 + _916) + (_921 + _915))) * 2.0f)));
                                }
                                else
                                {
                                    _940 = 0u;
                                }
                                float _946 = max(((-0.0f) - (asfloat(1031127695u) * asfloat(_940))) + 1.0f, 0.0500000007450580596923828125f);
                                uint _971 = (uint(min(max(((frac(_705) + asfloat(3204448256u)) / _946) + 0.5f, 0.0f), 1.0f) * 8.0f) + (uint(min(max(((frac(_708) + asfloat(3204448256u)) / _946) + 0.5f, 0.0f), 1.0f) * float(_543)) * 8u)) + ((8u * _543) * _835);
                                float _994;
                                if (int(0u) < int(_835))
                                {
                                    float _995;
                                    if (_50[(_476 * 4u) + 0u] == 2u)
                                    {
                                        _995 = asfloat((uint4(T11.Load(_971)).x == 1u) ? 4294967295u : 0u);
                                    }
                                    else
                                    {
                                        _995 = asfloat((uint4(T0.Load(_971)).x == 1u) ? 4294967295u : 0u);
                                    }
                                    _994 = _995;
                                }
                                else
                                {
                                    _994 = asfloat(0u);
                                }
                                float _1006 = min(max(((-0.0f) - (asfloat(1039516303u) * max((-0.0f) - asfloat(_940), asfloat(_940)))) + 1.0f, 0.0f), 1.0f);
                                uint _1011 = (asuint(_994) ^ 4294967295u) & ((int(_837) >= int(0u)) ? 4294967295u : 0u);
                                float _1065;
                                float _1066;
                                float _1067;
                                uint _1068;
                                if (_1011 != 0u)
                                {
                                    uint _1040 = uint(256.0f);
                                    bool _1044 = _1040 == 0u;
                                    uint _1049 = 3u * uint2(_1044 ? 4294967295u : (_837 / _1040), _1044 ? 4294967295u : (_837 % _1040)).y;
                                    _1065 = _1006 * T10.Load(_1049).x;
                                    _1066 = _1006 * T10.Load(1u + _1049).x;
                                    _1067 = _1006 * T10.Load(2u + _1049).x;
                                    _1068 = _61[(_476 * 4u) + 3u];
                                }
                                else
                                {
                                    _1065 = 0.0f;
                                    _1066 = 0.0f;
                                    _1067 = 0.0f;
                                    _1068 = _858;
                                }
                                float _881;
                                float _882;
                                float _883;
                                uint _884;
                                if (_1011 == 0u)
                                {
                                    float _1170;
                                    float _1171;
                                    float _1172;
                                    uint _1173;
                                    if (asuint(_994) != 0u)
                                    {
                                        uint _1126 = uint(256.0f);
                                        bool _1129 = _1126 == 0u;
                                        uint _1134 = uint2(_1129 ? 4294967295u : (_833 / _1126), _1129 ? 4294967295u : (_833 % _1126)).y * 3u;
                                        uint _1146 = _476 * 4u;
                                        bool _1156 = (((asfloat(_56[(_476 * 4u) + 0u]) == 1.0f) ? 4294967295u : 0u) & ((int(_833) >= int(0u)) ? 4294967295u : 0u)) != 0u;
                                        _1170 = _1006 * asfloat(_1156 ? asuint(T10.Load(_1134).x) : _61[_1146 + 0u]);
                                        _1171 = _1006 * asfloat(_1156 ? asuint(T10.Load(_1134 + 1u).x) : _61[_1146 + 1u]);
                                        _1172 = _1006 * asfloat(_1156 ? asuint(T10.Load(_1134 + 2u).x) : _61[_1146 + 2u]);
                                        _1173 = _61[(_476 * 4u) + 3u];
                                    }
                                    else
                                    {
                                        _1170 = _1065;
                                        _1171 = _1066;
                                        _1172 = _1067;
                                        _1173 = _1068;
                                    }
                                    float _1087;
                                    float _1088;
                                    float _1089;
                                    uint _1090;
                                    if (asuint(_994) == 0u)
                                    {
                                        _1087 = 0.0f;
                                        _1088 = 0.0f;
                                        _1089 = 0.0f;
                                        _1090 = asuint(0.0f);
                                    }
                                    else
                                    {
                                        _1087 = _1170;
                                        _1088 = _1171;
                                        _1089 = _1172;
                                        _1090 = _1173;
                                    }
                                    _881 = _1087;
                                    _882 = _1088;
                                    _883 = _1089;
                                    _884 = _1090;
                                }
                                else
                                {
                                    _881 = _1065;
                                    _882 = _1066;
                                    _883 = _1067;
                                    _884 = _1068;
                                }
                                _816 = _881;
                                _817 = _882;
                                _818 = _883;
                                _819 = _884;
                            }
                            else
                            {
                                _816 = 0.0f;
                                _817 = 0.0f;
                                _818 = 0.0f;
                                _819 = _858;
                            }
                            _807 = _816;
                            _808 = _817;
                            _809 = _818;
                            _810 = _819;
                        }
                        else
                        {
                            _807 = 0.0f;
                            _808 = 0.0f;
                            _809 = 0.0f;
                            _810 = _812;
                        }
                        _555 = _807;
                        _556 = _808;
                        _557 = _809;
                        _558 = _810;
                    }
                    else
                    {
                        _555 = 0.0f;
                        _556 = 0.0f;
                        _557 = 0.0f;
                        _558 = _760;
                    }
                    _509 = _555;
                    _511 = _556;
                    _513 = _557;
                    _515 = _558;
                }
                else
                {
                    _509 = 0.0f;
                    _511 = 0.0f;
                    _513 = 0.0f;
                    _515 = _520;
                }
                _508 = _509;
                _510 = _511;
                _512 = _513;
                _514 = _515;
            }
            else
            {
                _508 = 0.0f;
                _510 = 0.0f;
                _512 = 0.0f;
                _514 = _494;
            }
            if (0.001000000047497451305389404296875f >= asfloat(_514))
            {
                discard_state = true;
            }
            SV_Target.x = _508;
            SV_Target.y = _510;
            SV_Target.z = _512;
            SV_Target.w = asfloat(_514);
            discard_exit();
            return;
        }
        else
        {
            SV_Target.x = 0.0f;
            SV_Target.y = 0.0f;
            SV_Target.z = 0.0f;
            SV_Target.w = 0.0f;
            discard_exit();
            return;
        }
    }
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    TEXCOORD = stage_input.TEXCOORD;
    TEXCOORD_1 = stage_input.TEXCOORD_1;
    TEXCOORD_2 = stage_input.TEXCOORD_2;
    TEXCOORD_3 = stage_input.TEXCOORD_3;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.SV_Target = SV_Target;
    return stage_output;
}
