static float _106;

cbuffer CB0UBO : register(b8)
{
    float4 CB0_m0[62] : packoffset(c0);
};

Buffer<uint4> T0 : register(t0);

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
    float _24 = asfloat(1059648963u);
    float _26 = asfloat(1072064102u);
    float _28 = asfloat(1067030938u);
    float _30 = asfloat(1068708659u);
    uint4 _38 = asuint(CB0_m0[58u]);
    uint _39 = _38.x;
    uint _40 = _38.y;
    uint _41 = _38.z;
    uint4 _44 = asuint(CB0_m0[58u]);
    uint _45 = _44.w;
    uint4 _49 = asuint(CB0_m0[59u]);
    uint _50 = _49.x;
    uint _51 = _49.y;
    uint4 _55 = asuint(CB0_m0[61u]);
    uint _56 = _55.y;
    float _57 = asfloat(1051931443u);
    float _59 = asfloat(3171900457u);
    float _61 = asfloat(1115947008u);
    float _63 = asfloat(1041865114u);
    float _65 = asfloat(1073741824u);
    uint _74 = uint(min(int(128u), int(uint(max(int(uint(int(CB0_m0[51u].w))), int(0u))))));
    float _86 = TEXCOORD.x * CB0_m0[1u].x;
    float _87 = TEXCOORD.y * CB0_m0[1u].y;
    uint _92 = uint(min(int(asuint(CB0_m0[0u]).y), int(0u)));
    uint _97;
    uint _99;
    uint _101;
    _97 = asuint(0.0f);
    _99 = asuint(0.0f);
    _101 = asuint(0.0f);
    float _107;
    float _109;
    float _111;
    float _113;
    float _179;
    float _181;
    float _183;
    float _105;
    float _108;
    float _110;
    float _112;
    for (uint _103 = _92; !(((int(_103) < int(1u)) ? 4294967295u : 0u) == 0u); _97 = asuint(_179), _99 = asuint(_181), _101 = asuint(_183), _103++, _105 = _107, _108 = _109, _110 = _111, _112 = _113)
    {
        _179 = asfloat(_97);
        _181 = asfloat(_99);
        _183 = asfloat(_101);
        _107 = _105;
        _109 = _108;
        _111 = _110;
        _113 = _112;
        float _187;
        float _188;
        float _189;
        float _190;
        uint _306;
        uint _309;
        uint _312;
        for (uint _185 = _92; !(((int(_185) < int(1u)) ? 4294967295u : 0u) == 0u); _179 += exp2(log2(asfloat(_306)) * 0.4545454680919647216796875f), _181 += exp2(log2(asfloat(_309)) * 0.4545454680919647216796875f), _183 += exp2(log2(asfloat(_312)) * 0.4545454680919647216796875f), _185++, _107 = _187, _109 = _188, _111 = _189, _113 = _190)
        {
            float _196 = float(int(1u));
            float _220 = (((-0.0f) - CB0_m0[1u].x) + ((_86 + (asfloat(3204448256u) + (float(int(_185)) / _196))) * 2.0f)) / CB0_m0[1u].y;
            float _221 = (((-0.0f) - CB0_m0[1u].y) + ((_87 + (asfloat(3204448256u) + (float(int(_103)) / _196))) * 2.0f)) / CB0_m0[1u].y;
            float _227 = (float(int(_185 + (1u * _103))) + 0.5f) / 1.0f;
            float _232 = sin(CB0_m0[52u].w);
            float _236 = cos(CB0_m0[52u].w);
            float _237 = _26 * _232;
            float _241 = ((-0.0f) - (_28 * _232)) + (_221 * _236);
            float _246 = ((-0.0f) - (_28 * _236)) + (_232 * ((-0.0f) - _221));
            float _251 = sin(CB0_m0[53u].x);
            float _255 = cos(CB0_m0[53u].x);
            float _257 = _236 * (_26 * _251);
            float _259 = _236 * (_26 * _255);
            float _263 = ((-0.0f) - (_251 * _246)) + (_220 * _255);
            float _266 = (_246 * _255) + (_251 * _220);
            float _271 = rsqrt(dot(float3(_263, _241, _266), float3(_263, _241, _266)));
            float _272 = _271 * _263;
            float _273 = _271 * _241;
            float _274 = _271 * _266;
            float _275 = asfloat(_56);
            float _276 = asfloat(_56);
            float _277 = asfloat(_56);
            uint _278 = asuint(0.0f);
            uint _279 = asuint(0.0f);
            uint _280 = asuint(0.0f);
            float _281 = asfloat(0u);
            float _282 = asfloat(0u);
            float _290;
            float _1176;
            float _1177;
            float _1178;
            float _296;
            float _298;
            float _300;
            float _302;
            float _365;
            uint frontier_phi_8_pred;
            uint frontier_phi_8_pred_1;
            float frontier_phi_8_pred_2;
            float frontier_phi_8_pred_3;
            float frontier_phi_8_pred_4;
            float frontier_phi_8_pred_5;
            uint frontier_phi_8_pred_6;
            uint _283 = _278;
            uint _285 = _279;
            uint _287 = _280;
            float _289 = _281;
            float _291 = _282;
            uint _293 = 0u;
            float _295 = _107;
            float _297 = _109;
            float _299 = _111;
            float _301 = _113;
            for (;;)
            {
                if (((int(_293) < int(3u)) ? 4294967295u : 0u) == 0u)
                {
                    frontier_phi_8_pred = _283;
                    frontier_phi_8_pred_1 = _285;
                    frontier_phi_8_pred_2 = _301;
                    frontier_phi_8_pred_3 = _299;
                    frontier_phi_8_pred_4 = _297;
                    frontier_phi_8_pred_5 = _295;
                    frontier_phi_8_pred_6 = _287;
                    break;
                }
                else
                {
                    float _315;
                    float _316;
                    float _317;
                    float _318;
                    uint _341;
                    uint _345;
                    uint _349;
                    uint _353;
                    uint _357;
                    uint _361;
                    uint _367;
                    uint _369;
                    _341 = asuint(0.0f);
                    _345 = asuint(0.0f);
                    _349 = asuint(0.0f);
                    _353 = asuint(0.0f);
                    _357 = asuint(0.0f);
                    _361 = asuint(0.0f);
                    _365 = asfloat(1621981420u);
                    _367 = 4294967295u;
                    _369 = asuint(1.0f);
                    _315 = _295;
                    _316 = _297;
                    _317 = _299;
                    _318 = _301;
                    uint frontier_phi_10_back_edge_merge;
                    float frontier_phi_10_back_edge_merge_1;
                    uint frontier_phi_10_back_edge_merge_2;
                    float frontier_phi_10_back_edge_merge_3;
                    float frontier_phi_10_back_edge_merge_4;
                    uint frontier_phi_10_back_edge_merge_5;
                    uint frontier_phi_10_back_edge_merge_6;
                    float frontier_phi_10_back_edge_merge_7;
                    float frontier_phi_10_back_edge_merge_8;
                    uint frontier_phi_10_back_edge_merge_9;
                    float frontier_phi_10_back_edge_merge_10;
                    float frontier_phi_10_back_edge_merge_11;
                    float frontier_phi_10_back_edge_merge_12;
                    uint frontier_phi_10_back_edge_merge_13;
                    float frontier_phi_10_back_edge_merge_14;
                    uint frontier_phi_10_back_edge_merge_15;
                    float frontier_phi_10_back_edge_merge_16;
                    uint frontier_phi_10_back_edge_merge_17;
                    float frontier_phi_10_back_edge_merge_18;
                    uint frontier_phi_10_back_edge_merge_19;
                    float _343 = 0.0f;
                    float _347 = 0.0f;
                    float _351 = 0.0f;
                    float _355 = 0.0f;
                    float _359 = 0.0f;
                    float _363 = 0.0f;
                    uint _371 = 0u;
                    for (; !(((int(_371) < int(_74)) ? 4294967295u : 0u) == 0u); _341 = frontier_phi_10_back_edge_merge_19, _343 = frontier_phi_10_back_edge_merge_8, _345 = frontier_phi_10_back_edge_merge_17, _347 = frontier_phi_10_back_edge_merge_16, _349 = frontier_phi_10_back_edge_merge_15, _351 = frontier_phi_10_back_edge_merge_14, _353 = frontier_phi_10_back_edge_merge_13, _355 = frontier_phi_10_back_edge_merge_12, _357 = frontier_phi_10_back_edge_merge, _359 = frontier_phi_10_back_edge_merge_1, _361 = frontier_phi_10_back_edge_merge_2, _363 = frontier_phi_10_back_edge_merge_3, _365 = frontier_phi_10_back_edge_merge_4, _367 = frontier_phi_10_back_edge_merge_5, _369 = frontier_phi_10_back_edge_merge_6, _371 = frontier_phi_10_back_edge_merge_9, _315 = frontier_phi_10_back_edge_merge_18, _316 = frontier_phi_10_back_edge_merge_7, _317 = frontier_phi_10_back_edge_merge_11, _318 = frontier_phi_10_back_edge_merge_10)
                    {
                        uint4 _385 = T0.Load(_371 * 4u);
                        uint _386 = _385.x;
                        float _387 = asfloat(_386);
                        uint4 _390 = T0.Load((_371 * 4u) + 1u);
                        uint _391 = _390.x;
                        uint4 _394 = T0.Load((_371 * 4u) + 2u);
                        uint _395 = _394.x;
                        uint4 _398 = T0.Load((_371 * 4u) + 3u);
                        uint _399 = _398.x;
                        uint4 _404 = T0.Load((_371 * 4u) + 512u);
                        uint _405 = _404.x;
                        float _411 = asfloat(T0.Load((_371 * 4u) + 513u).x);
                        float _417 = asfloat(T0.Load((_371 * 4u) + 514u).x);
                        float _430 = ((-0.0f) - asfloat(_405)) + _387;
                        float _431 = ((-0.0f) - _411) + asfloat(_391);
                        float _432 = ((-0.0f) - _417) + asfloat(_395);
                        bool _437 = _65 < sqrt(dot(float3(_430, _431, _432), float3(_430, _431, _432)));
                        float _524;
                        float _525;
                        float _526;
                        float _527;
                        if (_437)
                        {
                            _524 = asfloat(_395);
                            _525 = asfloat(_386);
                            _526 = asfloat(_391);
                            _527 = asfloat(_399);
                        }
                        else
                        {
                            _524 = _315;
                            _525 = _316;
                            _526 = _317;
                            _527 = _318;
                        }
                        float _374;
                        float _375;
                        float _376;
                        float _377;
                        if ((_437 ? 4294967295u : 0u) == 0u)
                        {
                            float _530 = _63 * _227;
                            _374 = (_530 * (((-0.0f) - asfloat(_395)) + _417)) + asfloat(_395);
                            _375 = (_530 * (((-0.0f) - _387) + asfloat(_405))) + _387;
                            _376 = (_530 * (((-0.0f) - asfloat(_391)) + _411)) + asfloat(_391);
                            _377 = (_530 * (((-0.0f) - asfloat(_399)) + asfloat(T0.Load((_371 * 4u) + 515u).x))) + asfloat(_399);
                        }
                        else
                        {
                            _374 = _524;
                            _375 = _525;
                            _376 = _526;
                            _377 = _527;
                        }
                        float _560 = _377 * 1.2000000476837158203125f;
                        float _565 = (_257 + (_272 * _291)) + ((-0.0f) - _375);
                        float _566 = (_237 + (_273 * _291)) + ((-0.0f) - _376);
                        float _567 = (_259 + (_274 * _291)) + ((-0.0f) - _374);
                        float _568 = dot(float3(_565, _566, _567), float3(_272, _273, _274));
                        float _576 = ((-0.0f) - (_560 * _560)) + dot(float3(_565, _566, _567), float3(_565, _566, _567));
                        uint _580 = (0.0f < _568) ? 4294967295u : 0u;
                        uint _582 = _580 & ((0.0f < _576) ? 4294967295u : 0u);
                        float _598;
                        if (_582 != 0u)
                        {
                            _598 = asfloat(0u);
                        }
                        else
                        {
                            _598 = asfloat(_580);
                        }
                        float _632;
                        if (_582 == 0u)
                        {
                            _632 = asfloat(((((-0.0f) - _576) + (_568 * _568)) >= 0.0f) ? 4294967295u : 0u);
                        }
                        else
                        {
                            _632 = _598;
                        }
                        if (asuint(_632) == 0u)
                        {
                            frontier_phi_10_back_edge_merge = _357;
                            frontier_phi_10_back_edge_merge_1 = _359;
                            frontier_phi_10_back_edge_merge_2 = _361;
                            frontier_phi_10_back_edge_merge_3 = _363;
                            frontier_phi_10_back_edge_merge_4 = _365;
                            frontier_phi_10_back_edge_merge_5 = _367;
                            frontier_phi_10_back_edge_merge_6 = _369;
                            frontier_phi_10_back_edge_merge_7 = _375;
                            frontier_phi_10_back_edge_merge_8 = _343;
                            frontier_phi_10_back_edge_merge_9 = _371 + 1u;
                            frontier_phi_10_back_edge_merge_10 = _377;
                            frontier_phi_10_back_edge_merge_11 = _376;
                            frontier_phi_10_back_edge_merge_12 = _355;
                            frontier_phi_10_back_edge_merge_13 = _353;
                            frontier_phi_10_back_edge_merge_14 = _351;
                            frontier_phi_10_back_edge_merge_15 = _349;
                            frontier_phi_10_back_edge_merge_16 = _347;
                            frontier_phi_10_back_edge_merge_17 = _345;
                            frontier_phi_10_back_edge_merge_18 = _374;
                            frontier_phi_10_back_edge_merge_19 = _341;
                            continue;
                        }
                        uint _641 = (((_371 * 1031u) + 7919u) * 747796405u) + 2891336453u;
                        uint _650 = (_641 ^ (_641 >> (((_641 >> 28u) + 4u) & 31u))) * 277803737u;
                        float _656 = float(_650 ^ (_650 >> 22u)) * 2.3283064365386962890625e-10f;
                        bool _658 = _656 < _24;
                        float _686;
                        if (_658)
                        {
                            _686 = asfloat(1033476506u);
                        }
                        else
                        {
                            _686 = _632;
                        }
                        float _691;
                        if ((_658 ? 4294967295u : 0u) == 0u)
                        {
                            bool _688 = _656 < 0.980000019073486328125f;
                            float _713;
                            if (_688)
                            {
                                _713 = asfloat(1041865114u);
                            }
                            else
                            {
                                _713 = _686;
                            }
                            float _692;
                            if ((_688 ? 4294967295u : 0u) == 0u)
                            {
                                _692 = asfloat(1050253722u);
                            }
                            else
                            {
                                _692 = _713;
                            }
                            _691 = _692;
                        }
                        else
                        {
                            _691 = _686;
                        }
                        uint _696 = (((_371 * 1031u) + 7919u) * 747796405u) + 2891336453u;
                        uint _702 = (_696 ^ (_696 >> (((_696 >> 28u) + 4u) & 31u))) * 277803737u;
                        float _706 = float(_702 ^ (_702 >> 22u)) * 2.3283064365386962890625e-10f;
                        bool _707 = _706 < _24;
                        float _716;
                        if (_707)
                        {
                            _716 = asfloat(1033476506u);
                        }
                        else
                        {
                            _716 = _567;
                        }
                        float _725;
                        if ((_707 ? 4294967295u : 0u) == 0u)
                        {
                            bool _723 = _706 < 0.980000019073486328125f;
                            float _837;
                            if (_723)
                            {
                                _837 = asfloat(1041865114u);
                            }
                            else
                            {
                                _837 = _716;
                            }
                            float _726;
                            if ((_723 ? 4294967295u : 0u) == 0u)
                            {
                                _726 = asfloat(1050253722u);
                            }
                            else
                            {
                                _726 = _837;
                            }
                            _725 = _726;
                        }
                        else
                        {
                            _725 = _716;
                        }
                        float _731 = asfloat((_725 >= asfloat(1050253722u)) ? 1050253722u : 1061158912u);
                        float _735 = (_731 * _374) * 1.0f;
                        float _737 = (_731 * _375) * 1.0f;
                        float _738 = (_731 * _376) * (-1.0f);
                        float _746 = cos(_735);
                        float _747 = sin(_735);
                        float _748 = cos(_737);
                        float _749 = sin(_737);
                        float _750 = cos(_738);
                        float _751 = sin(_738);
                        float _752 = _748 * _750;
                        float _754 = _751 * ((-0.0f) - _748);
                        float _758 = (_750 * (_747 * _749)) + (_746 * _751);
                        float _763 = ((-0.0f) - (_751 * (_747 * _749))) + (_746 * _750);
                        float _765 = _748 * ((-0.0f) - _747);
                        float _770 = ((-0.0f) - (_750 * (_746 * _749))) + (_747 * _751);
                        float _774 = (_747 * _750) + (_751 * (_746 * _749));
                        float _775 = _746 * _748;
                        float _779 = (_257 + (_272 * _291)) + ((-0.0f) - _375);
                        float _780 = (_237 + (_273 * _291)) + ((-0.0f) - _376);
                        float _781 = (_259 + (_274 * _291)) + ((-0.0f) - _374);
                        float _782 = dot(float3(_752, _758, _770), float3(_779, _780, _781));
                        float _785 = dot(float3(_754, _763, _774), float3(_779, _780, _781));
                        float _788 = dot(float3(_749, _765, _775), float3(_779, _780, _781));
                        float _791 = dot(float3(_752, _758, _770), float3(_272, _273, _274));
                        float _794 = dot(float3(_754, _763, _774), float3(_272, _273, _274));
                        float _797 = dot(float3(_749, _765, _775), float3(_272, _273, _274));
                        float _800 = asfloat(0u);
                        float _801 = asfloat(0u);
                        float _840;
                        float _378;
                        uint _851;
                        float _853;
                        float _839 = _800;
                        float _841 = _801;
                        for (;;)
                        {
                            uint _846 = (int(asuint(_841)) < int(40u)) ? 4294967295u : 0u;
                            if (_846 == 0u)
                            {
                                _851 = 0u;
                                _853 = asfloat(0u);
                                _378 = asfloat(_846);
                                break;
                            }
                            else
                            {
                                float _866 = ((_791 * _839) + _782) / _691;
                                float _867 = ((_794 * _839) + _785) / _691;
                                float _868 = ((_797 * _839) + _788) / _691;
                                float _872 = max(_868, (-0.0f) - _868);
                                float _873 = max(_866, (-0.0f) - _866);
                                float _874 = max(_867, (-0.0f) - _867);
                                float _899;
                                float _900;
                                if (_873 < _874)
                                {
                                    _899 = _873;
                                    _900 = _874;
                                }
                                else
                                {
                                    _899 = _874;
                                    _900 = _873;
                                }
                                float _936;
                                float _937;
                                if (_900 < _872)
                                {
                                    _936 = _900;
                                    _937 = _872;
                                }
                                else
                                {
                                    _936 = _872;
                                    _937 = _900;
                                }
                                float _939;
                                float _940;
                                if (_899 < _936)
                                {
                                    _939 = _899;
                                    _940 = _936;
                                }
                                else
                                {
                                    _939 = _936;
                                    _940 = _899;
                                }
                                float _856 = (_691 * (((-0.0f) - (_30 * asfloat(1064153254u))) + dot(float3(_937, _940, _939), float3(asfloat(1064153254u), asfloat(1052649195u), asfloat(0u))))) * 0.800000011920928955078125f;
                                if (_856 < 0.00150000001303851604461669921875f)
                                {
                                    _851 = asuint(_839);
                                    _853 = asfloat(4294967295u);
                                    _378 = _856;
                                    break;
                                }
                                else
                                {
                                    _840 = _839 + _856;
                                    bool _960 = 5.0f < _840;
                                    if (!_960)
                                    {
                                        _839 = _840;
                                        _841 = asfloat(asuint(_841) + 1u);
                                        continue;
                                    }
                                    _851 = 0u;
                                    _853 = asfloat(0u);
                                    _378 = asfloat(_960 ? 4294967295u : 0u);
                                    break;
                                }
                            }
                        }
                        uint _879;
                        if (asuint(_853) == 0u)
                        {
                            _879 = 3212836864u;
                        }
                        else
                        {
                            _879 = _851;
                        }
                        uint _342;
                        float _344;
                        uint _346;
                        float _348;
                        uint _350;
                        float _352;
                        uint _354;
                        float _356;
                        uint _358;
                        float _360;
                        uint _362;
                        float _364;
                        float _366;
                        uint _368;
                        uint _370;
                        if ((((0.0f < asfloat(_879)) ? 4294967295u : 0u) & ((asfloat(_879) < _365) ? 4294967295u : 0u)) != 0u)
                        {
                            _342 = asuint(_375);
                            _344 = _375;
                            _346 = asuint(_376);
                            _348 = _376;
                            _350 = asuint(_374);
                            _352 = _374;
                            _354 = asuint(_735);
                            _356 = _735;
                            _358 = asuint(_737);
                            _360 = _737;
                            _362 = asuint(_738);
                            _364 = _738;
                            _366 = asfloat(_879);
                            _368 = _371;
                            _370 = asuint(_691);
                        }
                        else
                        {
                            _342 = _341;
                            _344 = _343;
                            _346 = _345;
                            _348 = _347;
                            _350 = _349;
                            _352 = _351;
                            _354 = _353;
                            _356 = _355;
                            _358 = _357;
                            _360 = _359;
                            _362 = _361;
                            _364 = _363;
                            _366 = _365;
                            _368 = _367;
                            _370 = _369;
                        }
                        frontier_phi_10_back_edge_merge = _358;
                        frontier_phi_10_back_edge_merge_1 = _360;
                        frontier_phi_10_back_edge_merge_2 = _362;
                        frontier_phi_10_back_edge_merge_3 = _364;
                        frontier_phi_10_back_edge_merge_4 = _366;
                        frontier_phi_10_back_edge_merge_5 = _368;
                        frontier_phi_10_back_edge_merge_6 = _370;
                        frontier_phi_10_back_edge_merge_7 = _375;
                        frontier_phi_10_back_edge_merge_8 = _344;
                        frontier_phi_10_back_edge_merge_9 = _371 + 1u;
                        frontier_phi_10_back_edge_merge_10 = _378;
                        frontier_phi_10_back_edge_merge_11 = _376;
                        frontier_phi_10_back_edge_merge_12 = _356;
                        frontier_phi_10_back_edge_merge_13 = _354;
                        frontier_phi_10_back_edge_merge_14 = _352;
                        frontier_phi_10_back_edge_merge_15 = _350;
                        frontier_phi_10_back_edge_merge_16 = _348;
                        frontier_phi_10_back_edge_merge_17 = _346;
                        frontier_phi_10_back_edge_merge_18 = _374;
                        frontier_phi_10_back_edge_merge_19 = _342;
                    }
                    if (_367 == 4294967295u)
                    {
                        float _440 = ((-0.0f) - _289) + 1.0f;
                        frontier_phi_8_pred = asuint(asfloat(_283) + (_275 * _440));
                        frontier_phi_8_pred_1 = asuint(asfloat(_285) + (_276 * _440));
                        frontier_phi_8_pred_2 = _318;
                        frontier_phi_8_pred_3 = _317;
                        frontier_phi_8_pred_4 = _316;
                        frontier_phi_8_pred_5 = _315;
                        frontier_phi_8_pred_6 = asuint(asfloat(_287) + (_277 * _440));
                        break;
                    }
                    else
                    {
                        float _450 = _291 + _365;
                        float _454 = _257 + (_272 * _450);
                        float _455 = _237 + (_273 * _450);
                        float _456 = _259 + (_274 * _450);
                        float _463 = _454 + ((-0.0f) - asfloat(_341));
                        float _464 = _455 + ((-0.0f) - asfloat(_345));
                        float _465 = _456 + ((-0.0f) - asfloat(_349));
                        float _467 = cos(asfloat(_353));
                        float _469 = sin(asfloat(_353));
                        float _471 = cos(asfloat(_357));
                        float _473 = sin(asfloat(_357));
                        float _475 = cos(asfloat(_361));
                        float _477 = sin(asfloat(_361));
                        float _478 = _471 * _475;
                        float _480 = _477 * ((-0.0f) - _471);
                        float _484 = (_467 * _477) + (_475 * (_469 * _473));
                        float _489 = (_467 * _475) + ((-0.0f) - (_477 * (_469 * _473)));
                        float _491 = _471 * ((-0.0f) - _469);
                        float _496 = (_469 * _477) + ((-0.0f) - (_475 * (_467 * _473)));
                        float _500 = (_469 * _475) + (_477 * (_467 * _473));
                        float _501 = _467 * _471;
                        float _502 = dot(float3(_478, _484, _496), float3(_463, _464, _465));
                        float _505 = dot(float3(_480, _489, _500), float3(_463, _464, _465));
                        float _508 = dot(float3(_473, _491, _501), float3(_463, _464, _465));
                        float _514 = max(_502, (-0.0f) - _502);
                        float _515 = max(_505, (-0.0f) - _505);
                        float _518 = max(max(_508, (-0.0f) - _508), max(_515, _514));
                        float _584;
                        uint _586;
                        float _588;
                        if (_518 == _514)
                        {
                            _584 = _508;
                            _586 = 0u;
                            _588 = _505;
                        }
                        else
                        {
                            float _585;
                            uint _587;
                            if (_518 == _515)
                            {
                                _585 = _508;
                                _587 = 1u;
                            }
                            else
                            {
                                _585 = _505;
                                _587 = 2u;
                            }
                            _584 = _585;
                            _586 = _587;
                            _588 = _502;
                        }
                        uint _594 = (max(_584, (-0.0f) - _584) < max((-0.0f) - _588, _588)) ? 4294967295u : 0u;
                        float _602;
                        if (_586 == 1u)
                        {
                            _602 = asfloat(_594 ^ 4294967295u);
                        }
                        else
                        {
                            _602 = asfloat(_594);
                        }
                        uint _606 = uint(max(int(_367), int(0u - _367)));
                        uint _607 = uint(max(int(4294967294u), int(2u)));
                        bool _611 = _607 == 0u;
                        uint2 _615 = uint2(_611 ? 4294967295u : (_606 / _607), _611 ? 4294967295u : (_606 % _607));
                        uint _616 = _615.y;
                        bool _620 = ((0u != (_367 & 2147483648u)) ? (0u - _616) : _616) == 0u;
                        uint _660;
                        uint _661;
                        uint _662;
                        uint _663;
                        if (asuint(_602) != 0u)
                        {
                            _660 = _620 ? _39 : _45;
                            _661 = _620 ? _40 : _50;
                            _662 = _620 ? _41 : _51;
                            _663 = 1065353216u;
                        }
                        else
                        {
                            _660 = 1065353216u;
                            _661 = 1065353216u;
                            _662 = 1065353216u;
                            _663 = 1059481190u;
                        }
                        float _667 = asfloat(990057071u);
                        float _669 = asfloat(3137540719u);
                        float _673 = asfloat(_369);
                        float _674 = (_502 + _667) / _673;
                        float _675 = (_505 + _669) / _673;
                        float _676 = (_508 + _669) / _673;
                        float _680 = max(_676, (-0.0f) - _676);
                        float _681 = max(_674, (-0.0f) - _674);
                        float _682 = max(_675, (-0.0f) - _675);
                        float _709;
                        float _710;
                        if (_681 < _682)
                        {
                            _709 = _681;
                            _710 = _682;
                        }
                        else
                        {
                            _709 = _682;
                            _710 = _681;
                        }
                        float _718;
                        float _719;
                        if (_710 < _680)
                        {
                            _718 = _710;
                            _719 = _680;
                        }
                        else
                        {
                            _718 = _680;
                            _719 = _710;
                        }
                        float _802;
                        float _803;
                        if (_709 < _718)
                        {
                            _802 = _709;
                            _803 = _718;
                        }
                        else
                        {
                            _802 = _718;
                            _803 = _709;
                        }
                        float _804 = asfloat(1064153254u);
                        float _817 = (asfloat(_369) * (dot(float3(_719, _803, _802), float3(_804, asfloat(1052649195u), asfloat(0u))) + ((-0.0f) - (_30 * _804)))) * 0.800000011920928955078125f;
                        float _825 = asfloat(_369);
                        float _826 = (_502 + _669) / _825;
                        float _827 = (_505 + _669) / _825;
                        float _828 = (_508 + _667) / _825;
                        float _832 = max(_828, (-0.0f) - _828);
                        float _833 = max(_826, (-0.0f) - _826);
                        float _834 = max(_827, (-0.0f) - _827);
                        float _876;
                        float _877;
                        if (_833 < _834)
                        {
                            _876 = _833;
                            _877 = _834;
                        }
                        else
                        {
                            _876 = _834;
                            _877 = _833;
                        }
                        float _889;
                        float _890;
                        if (_877 < _832)
                        {
                            _889 = _877;
                            _890 = _832;
                        }
                        else
                        {
                            _889 = _832;
                            _890 = _877;
                        }
                        float _902;
                        float _903;
                        if (_876 < _889)
                        {
                            _902 = _876;
                            _903 = _889;
                        }
                        else
                        {
                            _902 = _889;
                            _903 = _876;
                        }
                        float _904 = asfloat(1064153254u);
                        float _915 = (asfloat(_369) * (dot(float3(_890, _903, _902), float3(_904, asfloat(1052649195u), asfloat(0u))) + ((-0.0f) - (_30 * _904)))) * 0.800000011920928955078125f;
                        float _925 = asfloat(_369);
                        float _926 = (_502 + _669) / _925;
                        float _927 = (_505 + _667) / _925;
                        float _928 = (_508 + _669) / _925;
                        float _932 = max(_928, (-0.0f) - _928);
                        float _933 = max(_926, (-0.0f) - _926);
                        float _934 = max(_927, (-0.0f) - _927);
                        float _954;
                        float _955;
                        if (_933 < _934)
                        {
                            _954 = _933;
                            _955 = _934;
                        }
                        else
                        {
                            _954 = _934;
                            _955 = _933;
                        }
                        float _957;
                        float _958;
                        if (_955 < _932)
                        {
                            _957 = _955;
                            _958 = _932;
                        }
                        else
                        {
                            _957 = _932;
                            _958 = _955;
                        }
                        float _963;
                        float _964;
                        if (_954 < _957)
                        {
                            _963 = _954;
                            _964 = _957;
                        }
                        else
                        {
                            _963 = _957;
                            _964 = _954;
                        }
                        float _965 = asfloat(1064153254u);
                        float _976 = (asfloat(_369) * (dot(float3(_958, _964, _963), float3(_965, asfloat(1052649195u), asfloat(0u))) + ((-0.0f) - (_30 * _965)))) * 0.800000011920928955078125f;
                        float _982 = ((_817 * _669) + (_915 * _667)) + (_976 * _669);
                        float _986 = asfloat(_369);
                        float _987 = (_502 + _667) / _986;
                        float _988 = (_505 + _667) / _986;
                        float _989 = (_508 + _667) / _986;
                        float _993 = max(_989, (-0.0f) - _989);
                        float _994 = max(_987, (-0.0f) - _987);
                        float _995 = max(_988, (-0.0f) - _988);
                        float _999;
                        float _1000;
                        if (_994 < _995)
                        {
                            _999 = _994;
                            _1000 = _995;
                        }
                        else
                        {
                            _999 = _995;
                            _1000 = _994;
                        }
                        float _1002;
                        float _1003;
                        if (_1000 < _993)
                        {
                            _1002 = _1000;
                            _1003 = _993;
                        }
                        else
                        {
                            _1002 = _993;
                            _1003 = _1000;
                        }
                        float _1005;
                        float _1006;
                        if (_999 < _1002)
                        {
                            _1005 = _999;
                            _1006 = _1002;
                        }
                        else
                        {
                            _1005 = _1002;
                            _1006 = _999;
                        }
                        float _1007 = asfloat(1064153254u);
                        float _1018 = (asfloat(_369) * (dot(float3(_1003, _1006, _1005), float3(_1007, asfloat(1052649195u), asfloat(0u))) + ((-0.0f) - (_30 * _1007)))) * 0.800000011920928955078125f;
                        float _1022 = (_1018 * _667) + (((_817 * _667) + (_915 * _669)) + (_976 * asfloat(3137540719u)));
                        float _1023 = (_1018 * _667) + (((_817 * _669) + (_915 * _669)) + (_976 * _667));
                        float _1024 = (_1018 * _667) + _982;
                        float _1028 = rsqrt(dot(float3(_1022, _1023, _1024), float3(_1022, _1023, _1024)));
                        float _1029 = _1028 * _1022;
                        float _1030 = _1028 * _1023;
                        float _1031 = _1028 * _1024;
                        float _1041 = asfloat(0u);
                        float _1042 = asfloat(1065353216u);
                        float _1043 = asfloat(0u);
                        float _1044 = asfloat(0u);
                        float _1045 = asfloat(1065353216u);
                        uint _1073;
                        float _1075;
                        float frontier_phi_99_back_edge_merge;
                        uint frontier_phi_99_back_edge_merge_1;
                        float frontier_phi_99_back_edge_merge_2;
                        float frontier_phi_99_back_edge_merge_3;
                        float frontier_phi_99_back_edge_merge_4;
                        float frontier_phi_99_back_edge_merge_5;
                        float frontier_phi_99_back_edge_merge_6;
                        float frontier_phi_99_back_edge_merge_7;
                        uint _1046 = 1065353216u;
                        float _1048 = _1045;
                        float _1050 = _1044;
                        float _1053 = _484;
                        float _1056 = _489;
                        float _1059 = _491;
                        float _1062 = _318;
                        float _1065 = _982;
                        for (;;)
                        {
                            if (((int(asuint(_1050)) < int(_74)) ? 4294967295u : 0u) == 0u)
                            {
                                _1073 = _1046;
                                _1075 = asfloat(0u);
                                _296 = _1053;
                                _298 = _1056;
                                _300 = _1059;
                                _302 = _1062;
                                break;
                            }
                            else
                            {
                                uint _1079 = asuint(_1050);
                                uint4 _1081 = T0.Load(_1079 * 4u);
                                uint _1082 = _1081.x;
                                float _1083 = asfloat(_1082);
                                uint4 _1086 = T0.Load((_1079 * 4u) + 1u);
                                uint _1087 = _1086.x;
                                float _1088 = asfloat(_1087);
                                uint4 _1091 = T0.Load((_1079 * 4u) + 2u);
                                uint _1092 = _1091.x;
                                float _1093 = asfloat(_1092);
                                uint4 _1096 = T0.Load((_1079 * 4u) + 3u);
                                uint _1097 = _1096.x;
                                float _1063 = asfloat(_1097);
                                float _1103 = asfloat(T0.Load((_1079 * 4u) + 512u).x);
                                float _1108 = asfloat(T0.Load((_1079 * 4u) + 513u).x);
                                float _1113 = asfloat(T0.Load((_1079 * 4u) + 514u).x);
                                float _1122 = _1083 + ((-0.0f) - _1103);
                                float _1123 = _1088 + ((-0.0f) - _1108);
                                float _1124 = _1093 + ((-0.0f) - _1113);
                                bool _1129 = _65 < sqrt(dot(float3(_1122, _1123, _1124), float3(_1122, _1123, _1124)));
                                float _1189;
                                float _1190;
                                float _1191;
                                float _1192;
                                if (_1129)
                                {
                                    _1189 = asfloat(_1092);
                                    _1190 = asfloat(_1082);
                                    _1191 = asfloat(_1087);
                                    _1192 = asfloat(_1097);
                                }
                                else
                                {
                                    _1189 = _1122;
                                    _1190 = _1123;
                                    _1191 = _1124;
                                    _1192 = _1065;
                                }
                                float _1066;
                                float _1213;
                                float _1214;
                                float _1215;
                                if ((_1129 ? 4294967295u : 0u) == 0u)
                                {
                                    float _1196 = _63 * _227;
                                    _1213 = _1093 + (_1196 * (_1113 + ((-0.0f) - _1093)));
                                    _1214 = _1083 + (_1196 * (_1103 + ((-0.0f) - _1083)));
                                    _1215 = _1088 + (_1196 * (_1108 + ((-0.0f) - _1088)));
                                    _1066 = _1063 + (_1196 * (asfloat(T0.Load((_1079 * 4u) + 515u).x) + ((-0.0f) - _1063)));
                                }
                                else
                                {
                                    _1213 = _1189;
                                    _1214 = _1190;
                                    _1215 = _1191;
                                    _1066 = _1192;
                                }
                                float _1054 = asfloat(0u);
                                float _1057 = asfloat(1065353216u);
                                float _1060 = asfloat(0u);
                                float _1216 = _1066 * 1.2000000476837158203125f;
                                float _1220 = _454 + ((-0.0f) - _1214);
                                float _1221 = _455 + ((-0.0f) - _1215);
                                float _1222 = _456 + ((-0.0f) - _1213);
                                float _1223 = dot(float3(_1220, _1221, _1222), float3(_1054, _1057, _1060));
                                float _1231 = ((-0.0f) - (_1216 * _1216)) + dot(float3(_1220, _1221, _1222), float3(_1220, _1221, _1222));
                                uint _1235 = (0.0f < _1223) ? 4294967295u : 0u;
                                uint _1236 = _1235 & ((0.0f < _1231) ? 4294967295u : 0u);
                                uint _1238;
                                if (_1236 != 0u)
                                {
                                    _1238 = 0u;
                                }
                                else
                                {
                                    _1238 = _1235;
                                }
                                uint _1245;
                                if (_1236 == 0u)
                                {
                                    _1245 = ((((-0.0f) - _1231) + (_1223 * _1223)) >= 0.0f) ? 4294967295u : 0u;
                                }
                                else
                                {
                                    _1245 = _1238;
                                }
                                if (_1245 == 0u)
                                {
                                    frontier_phi_99_back_edge_merge = _1060;
                                    frontier_phi_99_back_edge_merge_1 = _1046;
                                    frontier_phi_99_back_edge_merge_2 = _1066;
                                    frontier_phi_99_back_edge_merge_3 = _1063;
                                    frontier_phi_99_back_edge_merge_4 = _1057;
                                    frontier_phi_99_back_edge_merge_5 = _1054;
                                    frontier_phi_99_back_edge_merge_6 = asfloat(asuint(_1050) + 1u);
                                    frontier_phi_99_back_edge_merge_7 = _1048;
                                    _1046 = frontier_phi_99_back_edge_merge_1;
                                    _1048 = frontier_phi_99_back_edge_merge_7;
                                    _1050 = frontier_phi_99_back_edge_merge_6;
                                    _1053 = frontier_phi_99_back_edge_merge_5;
                                    _1056 = frontier_phi_99_back_edge_merge_4;
                                    _1059 = frontier_phi_99_back_edge_merge;
                                    _1062 = frontier_phi_99_back_edge_merge_3;
                                    _1065 = frontier_phi_99_back_edge_merge_2;
                                    continue;
                                }
                                uint _1253 = (((asuint(_1050) * 1031u) + 7919u) * 747796405u) + 2891336453u;
                                uint _1259 = (_1253 ^ (_1253 >> (((_1253 >> 28u) + 4u) & 31u))) * 277803737u;
                                float _1263 = float(_1259 ^ (_1259 >> 22u)) * 2.3283064365386962890625e-10f;
                                bool _1264 = _1263 < _24;
                                uint _1266;
                                if (_1264)
                                {
                                    _1266 = 1033476506u;
                                }
                                else
                                {
                                    _1266 = _1245;
                                }
                                uint _1270;
                                if ((_1264 ? 4294967295u : 0u) == 0u)
                                {
                                    bool _1268 = _1263 < 0.980000019073486328125f;
                                    uint _1289;
                                    if (_1268)
                                    {
                                        _1289 = 1041865114u;
                                    }
                                    else
                                    {
                                        _1289 = _1266;
                                    }
                                    uint _1271;
                                    if ((_1268 ? 4294967295u : 0u) == 0u)
                                    {
                                        _1271 = 1050253722u;
                                    }
                                    else
                                    {
                                        _1271 = _1289;
                                    }
                                    _1270 = _1271;
                                }
                                else
                                {
                                    _1270 = _1266;
                                }
                                uint _1276 = (((asuint(_1050) * 1031u) + 7919u) * 747796405u) + 2891336453u;
                                uint _1282 = (_1276 ^ (_1276 >> (((_1276 >> 28u) + 4u) & 31u))) * 277803737u;
                                float _1286 = float(_1282 ^ (_1282 >> 22u)) * 2.3283064365386962890625e-10f;
                                bool _1287 = _1286 < _24;
                                float _1292;
                                if (_1287)
                                {
                                    _1292 = asfloat(1033476506u);
                                }
                                else
                                {
                                    _1292 = _1216;
                                }
                                float _1296;
                                if ((_1287 ? 4294967295u : 0u) == 0u)
                                {
                                    bool _1294 = _1286 < 0.980000019073486328125f;
                                    float _1364;
                                    if (_1294)
                                    {
                                        _1364 = asfloat(1041865114u);
                                    }
                                    else
                                    {
                                        _1364 = _1292;
                                    }
                                    float _1297;
                                    if ((_1294 ? 4294967295u : 0u) == 0u)
                                    {
                                        _1297 = asfloat(1050253722u);
                                    }
                                    else
                                    {
                                        _1297 = _1364;
                                    }
                                    _1296 = _1297;
                                }
                                else
                                {
                                    _1296 = _1292;
                                }
                                float _1301 = asfloat((_1296 >= asfloat(1050253722u)) ? 1050253722u : 1061158912u);
                                float _1305 = (_1301 * _1213) * 1.0f;
                                float _1306 = (_1301 * _1214) * 1.0f;
                                float _1307 = (_1301 * _1215) * (-1.0f);
                                float _1308 = cos(_1305);
                                float _1309 = sin(_1305);
                                float _1310 = cos(_1306);
                                float _1311 = sin(_1306);
                                float _1312 = cos(_1307);
                                float _1313 = sin(_1307);
                                float _1314 = _1312 * _1310;
                                float _1316 = _1313 * ((-0.0f) - _1310);
                                float _1320 = (_1312 * (_1309 * _1311)) + (_1308 * _1313);
                                float _1325 = ((-0.0f) - (_1313 * (_1309 * _1311))) + (_1308 * _1312);
                                float _1327 = _1310 * ((-0.0f) - _1309);
                                float _1332 = ((-0.0f) - (_1312 * (_1308 * _1311))) + (_1309 * _1313);
                                float _1336 = (_1309 * _1312) + (_1313 * (_1308 * _1311));
                                float _1337 = _1308 * _1310;
                                float _1341 = _454 + ((-0.0f) - _1214);
                                float _1342 = _455 + ((-0.0f) - _1215);
                                float _1343 = _456 + ((-0.0f) - _1213);
                                float _1344 = dot(float3(_1314, _1320, _1332), float3(_1341, _1342, _1343));
                                float _1347 = dot(float3(_1316, _1325, _1336), float3(_1341, _1342, _1343));
                                float _1350 = dot(float3(_1311, _1327, _1337), float3(_1341, _1342, _1343));
                                float _1055 = dot(float3(_1314, _1320, _1332), float3(_1041, _1042, _1043));
                                float _1058 = dot(float3(_1316, _1325, _1336), float3(_1041, _1042, _1043));
                                float _1061 = dot(float3(_1311, _1327, _1337), float3(_1041, _1042, _1043));
                                float _1359 = asfloat(_1046);
                                float _1360 = asfloat(1017370378u);
                                float _1064;
                                _1064 = asfloat(0u);
                                float _1367;
                                float _1369;
                                float _1372;
                                float _1049;
                                float _1067;
                                float _1366 = _1359;
                                float _1368 = _1360;
                                float _1371 = _1066;
                                for (;;)
                                {
                                    if (((int(asuint(_1064)) < int(16u)) ? 4294967295u : 0u) == 0u)
                                    {
                                        _1049 = _1366;
                                        _1067 = _1371;
                                        break;
                                    }
                                    else
                                    {
                                        float _1386 = asfloat(_1270);
                                        float _1387 = ((_1368 * _1055) + _1344) / _1386;
                                        float _1388 = ((_1368 * _1058) + _1347) / _1386;
                                        float _1389 = ((_1368 * _1061) + _1350) / _1386;
                                        float _1393 = max(_1389, (-0.0f) - _1389);
                                        float _1394 = max(_1387, (-0.0f) - _1387);
                                        float _1395 = max(_1388, (-0.0f) - _1388);
                                        float _1399;
                                        float _1400;
                                        if (_1394 < _1395)
                                        {
                                            _1399 = _1394;
                                            _1400 = _1395;
                                        }
                                        else
                                        {
                                            _1399 = _1395;
                                            _1400 = _1394;
                                        }
                                        float _1402;
                                        float _1403;
                                        if (_1400 < _1393)
                                        {
                                            _1402 = _1400;
                                            _1403 = _1393;
                                        }
                                        else
                                        {
                                            _1402 = _1393;
                                            _1403 = _1400;
                                        }
                                        bool _1404 = _1399 < _1402;
                                        _1372 = asfloat(_1404 ? 4294967295u : 0u);
                                        float _1406;
                                        float _1407;
                                        if (_1404)
                                        {
                                            _1406 = _1399;
                                            _1407 = _1402;
                                        }
                                        else
                                        {
                                            _1406 = _1402;
                                            _1407 = _1399;
                                        }
                                        float _1408 = asfloat(1064153254u);
                                        float _1418 = (_1386 * (((-0.0f) - (_30 * _1408)) + dot(float3(_1403, _1407, _1406), float3(_1408, asfloat(1052649195u), asfloat(0u))))) * 0.800000011920928955078125f;
                                        _1367 = min(_1366, (_61 * _1418) / _1368);
                                        _1369 = _1368 + _1418;
                                        if (!((((2.0f < _1369) ? 4294967295u : 0u) | ((_1367 < 0.00999999977648258209228515625f) ? 4294967295u : 0u)) != 0u))
                                        {
                                            _1366 = _1367;
                                            _1368 = _1369;
                                            _1064 = asfloat(asuint(_1064) + 1u);
                                            _1371 = _1372;
                                            continue;
                                        }
                                        _1049 = _1367;
                                        _1067 = _1372;
                                        break;
                                    }
                                }
                                if (!(_1049 < 0.00999999977648258209228515625f))
                                {
                                    frontier_phi_99_back_edge_merge = _1061;
                                    frontier_phi_99_back_edge_merge_1 = asuint(_1049);
                                    frontier_phi_99_back_edge_merge_2 = _1067;
                                    frontier_phi_99_back_edge_merge_3 = _1064;
                                    frontier_phi_99_back_edge_merge_4 = _1058;
                                    frontier_phi_99_back_edge_merge_5 = _1055;
                                    frontier_phi_99_back_edge_merge_6 = asfloat(asuint(_1050) + 1u);
                                    frontier_phi_99_back_edge_merge_7 = _1049;
                                    _1046 = frontier_phi_99_back_edge_merge_1;
                                    _1048 = frontier_phi_99_back_edge_merge_7;
                                    _1050 = frontier_phi_99_back_edge_merge_6;
                                    _1053 = frontier_phi_99_back_edge_merge_5;
                                    _1056 = frontier_phi_99_back_edge_merge_4;
                                    _1059 = frontier_phi_99_back_edge_merge;
                                    _1062 = frontier_phi_99_back_edge_merge_3;
                                    _1065 = frontier_phi_99_back_edge_merge_2;
                                    continue;
                                }
                                _1073 = asuint(_1049);
                                _1075 = asfloat(4294967295u);
                                _296 = _1055;
                                _298 = _1058;
                                _300 = _1061;
                                _302 = _1064;
                                break;
                            }
                        }
                        uint _1135;
                        if (asuint(_1075) == 0u)
                        {
                            _1135 = asuint(min(max(asfloat(_1073), 0.0f), 1.0f));
                        }
                        else
                        {
                            _1135 = 0u;
                        }
                        float _1142 = _57 * min(max(dot(float3(_272, _273, _274), float3(dot(float3(_478, _480, _473), float3(_1029, _1030, _1031)), dot(float3(_484, _489, _491), float3(_1029, _1030, _1031)), dot(float3(_496, _500, _501), float3(_1029, _1030, _1031)))) + 1.0f, 0.0f), 1.0f);
                        float _1160 = (asfloat(_1135) * 0.5f) + 0.5f;
                        float _1164 = asfloat(_663);
                        float _1169 = ((-0.0f) - _289) + 1.0f;
                        _1176 = asfloat(_283) + (_1169 * (_1164 * (_1160 * min(max(_59 + (_1142 + asfloat(_660)), 0.0f), 1.0f))));
                        _1177 = asfloat(_285) + (_1169 * (_1164 * (_1160 * min(max(_59 + (_1142 + asfloat(_661)), 0.0f), 1.0f))));
                        _1178 = asfloat(_287) + (_1169 * (_1164 * (_1160 * min(max(_59 + (_1142 + asfloat(_662)), 0.0f), 1.0f))));
                        _290 = ((((-0.0f) - _289) + 1.0f) * asfloat(_663)) + _289;
                        if (!(0.949999988079071044921875f < _290))
                        {
                            _283 = asuint(_1176);
                            _285 = asuint(_1177);
                            _287 = asuint(_1178);
                            _289 = _290;
                            _291 = (_365 + 0.00999999977648258209228515625f) + _291;
                            _293++;
                            _295 = _296;
                            _297 = _298;
                            _299 = _300;
                            _301 = _302;
                            continue;
                        }
                        frontier_phi_8_pred = asuint(_1176);
                        frontier_phi_8_pred_1 = asuint(_1177);
                        frontier_phi_8_pred_2 = _302;
                        frontier_phi_8_pred_3 = _300;
                        frontier_phi_8_pred_4 = _298;
                        frontier_phi_8_pred_5 = _296;
                        frontier_phi_8_pred_6 = asuint(_1178);
                        break;
                    }
                }
            }
            _306 = frontier_phi_8_pred;
            _309 = frontier_phi_8_pred_1;
            _190 = frontier_phi_8_pred_2;
            _189 = frontier_phi_8_pred_3;
            _188 = frontier_phi_8_pred_4;
            _187 = frontier_phi_8_pred_5;
            _312 = frontier_phi_8_pred_6;
        }
    }
    float _145 = _86 / CB0_m0[1u].x;
    float _146 = _87 / CB0_m0[1u].y;
    float _165 = ((asfloat(3192704205u) + 1.0f) * exp2(log2(((((-0.0f) - _146) + 1.0f) * _146) * (((((-0.0f) - _145) + 1.0f) * _145) * 16.0f)) * 0.20000000298023223876953125f)) + 0.20000000298023223876953125f;
    SV_Target.x = _165 * (((asfloat(_97) / 1.0f) * asfloat(1065353216u)) * 1.10000002384185791015625f);
    SV_Target.y = _165 * (exp2(log2(asfloat(_99) / 1.0f) * 1.2999999523162841796875f) * 1.10000002384185791015625f);
    SV_Target.z = _165 * (exp2(log2(asfloat(_101) / 1.0f) * 1.39999997615814208984375f) * 1.10000002384185791015625f);
    SV_Target.w = 1.0f;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    TEXCOORD = stage_input.TEXCOORD;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.SV_Target = SV_Target;
    return stage_output;
}
