static uint _217;

cbuffer CB0UBO : register(b8)
{
    float4 CB0_m0[56] : packoffset(c0);
};

RWBuffer<uint> U0 : register(u0);

static uint3 gl_GlobalInvocationID;
struct SPIRV_Cross_Input
{
    uint3 gl_GlobalInvocationID : SV_DispatchThreadID;
};

void comp_main()
{
    float _23 = asfloat(1074580685u);
    float _25 = asfloat(1041865114u);
    float _27 = asfloat(1048576000u);
    float _29 = asfloat(1039516303u);
    float _31 = asfloat(1034147594u);
    float _33 = asfloat(1032805417u);
    uint4 _41 = asuint(CB0_m0[54u]);
    float _43 = asfloat(_41.y);
    float _45 = asfloat(_41.w);
    float _51 = asfloat(asuint(CB0_m0[55u]).y);
    uint4 _59 = asuint(CB0_m0[55u]);
    float _64 = asfloat(1034952901u);
    float _66 = asfloat(1061158912u);
    float _68 = asfloat(1032134328u);
    float _70 = asfloat(1086918619u);
    uint _79 = uint(min(int(uint(max(int(uint(int(CB0_m0[51u].w))), int(0u)))), int(128u)));
    if (gl_GlobalInvocationID.x >= 256u)
    {
        return;
    }
    bool _94 = 128u == 0u;
    bool _105 = 128u == 0u;
    uint2 _108 = uint2(_105 ? 4294967295u : (gl_GlobalInvocationID.x / 128u), _105 ? 4294967295u : (gl_GlobalInvocationID.x % 128u));
    uint _109 = _108.y;
    if (int(_109) >= int(_79))
    {
        U0[gl_GlobalInvocationID.x * 4u] = asuint(0.0f).x;
        U0[(gl_GlobalInvocationID.x * 4u) + 1u] = asuint(0.0f).x;
        U0[(gl_GlobalInvocationID.x * 4u) + 2u] = asuint(0.0f).x;
        U0[(gl_GlobalInvocationID.x * 4u) + 3u] = asuint(0.0f).x;
        return;
    }
    else
    {
        float _149 = ((-0.0f) - ((float(int(uint2(_94 ? 4294967295u : (gl_GlobalInvocationID.x / 128u), _94 ? 4294967295u : (gl_GlobalInvocationID.x % 128u)).x)) * 0.5f) / 24.0f)) + CB0_m0[0u].x;
        float _153 = asfloat(asuint(CB0_m0[54u]).z) + ((-0.0f) - _43);
        float _154 = asfloat(_59.x) + ((-0.0f) - _45);
        float _155 = asfloat(_59.z) + ((-0.0f) - _51);
        float _160 = sqrt(dot(float3(_153, _154, _155), float3(_153, _154, _155)));
        float _161 = max(_160, 9.9999999747524270787835121154785e-07f);
        float _163 = _153 / _161;
        float _164 = _154 / _161;
        float _165 = _155 / _161;
        bool _168 = 0.9900000095367431640625f < max(_165, (-0.0f) - _165);
        float _178 = asfloat(_168 ? asuint(1.0f) : asuint(0.0f));
        float _180 = asfloat(_168 ? asuint(0.0f) : asuint(1.0f));
        float _182 = asfloat(_168 ? asuint(0.0f) : asuint(0.0f));
        float _192 = ((-0.0f) - (_165 * _178)) + (_164 * _180);
        float _193 = ((-0.0f) - (_163 * _180)) + (_165 * _182);
        float _194 = ((-0.0f) - (_164 * _182)) + (_163 * _178);
        float _198 = rsqrt(dot(float3(_192, _193, _194), float3(_192, _193, _194)));
        float _199 = _192 * _198;
        float _200 = _193 * _198;
        float _201 = _194 * _198;
        float _248;
        float _263;
        bool _365;
        uint _410;
        float _416;
        uint _425;
        uint _428;
        float _436;
        float _443;
        uint _444;
        uint _457;
        uint _460;
        uint _19[512];
        uint _20[512];
        uint _21[512];
        uint _216;
        for (uint _214 = 0u; !(((int(_214) < int(_79)) ? 4294967295u : 0u) == 0u); _416 = float(int(_79)), _425 = _365 ? 1036831949u : 1043878380u, _428 = _365 ? 1050253722u : 1069681738u, _436 = asfloat(_425) * sin((_70 * _248) + (_149 * asfloat(_428))), _443 = asfloat(_425) * cos((_149 * asfloat(_428)) + (_70 * _263)), _444 = _214 * 4u, _20[_444 + 0u] = asuint(_436), _20[_444 + 1u] = asuint(_443), _457 = _214 * 4u, _460 = asuint(_160 * (((-0.0f) - frac(((-0.0f) - (_149 * max(asfloat(_410), 0.0199999995529651641845703125f))) + (float(int(_214)) / _416))) + 1.0f)), _19[_457 + 0u] = _460, _19[_457 + 1u] = asuint(_436), _19[_457 + 2u] = asuint(_443), _19[_457 + 3u] = asuint(_23 * asfloat(_21[(_214 * 4u) + 0u])), _214++, _216 = asuint(_416))
        {
            uint _227 = _214 * 1031u;
            uint _233 = ((_227 + 2749u) * 747796405u) + 2891336453u;
            uint _242 = (_233 ^ (_233 >> (((_233 >> 28u) + 4u) & 31u))) * 277803737u;
            _248 = float(_242 ^ (_242 >> 22u)) * 2.3283064365386962890625e-10f;
            uint _253 = ((_227 + 5501u) * 747796405u) + 2891336453u;
            uint _259 = (_253 ^ (_253 >> (((_253 >> 28u) + 4u) & 31u))) * 277803737u;
            _263 = float(_259 ^ (_259 >> 22u)) * 2.3283064365386962890625e-10f;
            uint _268 = (((_214 * 1031u) + 7919u) * 747796405u) + 2891336453u;
            uint _274 = (_268 ^ (_268 >> (((_268 >> 28u) + 4u) & 31u))) * 277803737u;
            float _278 = float(_274 ^ (_274 >> 22u)) * 2.3283064365386962890625e-10f;
            bool _281 = _278 < asfloat(1059648963u);
            uint _289;
            if (_281)
            {
                _289 = 1033476506u;
            }
            else
            {
                _289 = _216;
            }
            uint _353;
            if ((_281 ? 4294967295u : 0u) == 0u)
            {
                bool _350 = _278 < 0.980000019073486328125f;
                uint _399;
                if (_350)
                {
                    _399 = 1041865114u;
                }
                else
                {
                    _399 = _289;
                }
                uint _354;
                if ((_350 ? 4294967295u : 0u) == 0u)
                {
                    _354 = 1050253722u;
                }
                else
                {
                    _354 = _399;
                }
                _353 = _354;
            }
            else
            {
                _353 = _289;
            }
            _21[(_214 * 4u) + 0u] = _353;
            _365 = asfloat(_21[(_214 * 4u) + 0u]) >= asfloat(1050253722u);
            uint _367 = (_214 * 4u) + 0u;
            uint _375 = (((_214 * 3571u) + 1337u) * 747796405u) + 2891336453u;
            uint _381 = (_375 ^ (_375 >> (((_375 >> 28u) + 4u) & 31u))) * 277803737u;
            float _390 = ((float(_381 ^ (_381 >> 22u)) * 2.3283064365386962890625e-10f) * 2.0f) + asfloat(3212836864u);
            uint frontier_phi_24_pred;
            if (asfloat(1033476506u) >= asfloat(_21[_367]))
            {
                frontier_phi_24_pred = asuint(asfloat(1053609165u) + (_25 * _390));
            }
            else
            {
                uint _411;
                if (asfloat(_21[_367]) < asfloat(1050253722u))
                {
                    _411 = asuint(_27 + (_29 * _390));
                }
                else
                {
                    _411 = asuint(_31 + (_33 * _390));
                }
                frontier_phi_24_pred = _411;
            }
            _410 = frontier_phi_24_pred;
        }
        uint _226 = uint(min(int(asuint(CB0_m0[0u]).y), int(0u)));
        for (uint _283 = _226; !(((int(_283) < int(8u)) ? 4294967295u : 0u) == 0u); _283++)
        {
            for (uint _394 = _226; !(((int(_394) < int(_79)) ? 4294967295u : 0u) == 0u); _394++)
            {
                uint _409 = _394 + 1u;
                for (uint _481 = _409; !(((int(_481) < int(_79)) ? 4294967295u : 0u) == 0u); _481++)
                {
                    uint _544 = _394 * 4u;
                    uint _547 = _19[_544 + 0u];
                    uint _551 = _19[_544 + 1u];
                    uint _555 = _19[_544 + 2u];
                    uint _557 = _481 * 4u;
                    uint _560 = _19[_557 + 0u];
                    uint _563 = _19[_557 + 1u];
                    uint _566 = _19[_557 + 2u];
                    float _573 = asfloat(_547) + ((-0.0f) - asfloat(_560));
                    float _574 = asfloat(_551) + ((-0.0f) - asfloat(_563));
                    float _575 = asfloat(_555) + ((-0.0f) - asfloat(_566));
                    uint _579 = _19[(_394 * 4u) + 3u];
                    uint _584 = _19[(_481 * 4u) + 3u];
                    float _586 = asfloat(_584) + asfloat(_579);
                    float _587 = dot(float3(_573, _574, _575), float3(_573, _574, _575));
                    if ((((9.9999999392252902907785028219223e-09f < _587) ? 4294967295u : 0u) & ((_587 < (_586 * _586)) ? 4294967295u : 0u)) != 0u)
                    {
                        float _617 = sqrt(_587);
                        float _621 = _68 * ((_586 / _617) + asfloat(3212836864u));
                        float _622 = _574 / _617;
                        float _623 = _575 / _617;
                        float _640 = (asfloat(_21[(_394 * 4u) + 0u]) * asfloat(_21[(_394 * 4u) + 0u])) * asfloat(_21[(_394 * 4u) + 0u]);
                        float _657 = asfloat(_21[(_481 * 4u) + 0u]) * (asfloat(_21[(_481 * 4u) + 0u]) * asfloat(_21[(_481 * 4u) + 0u]));
                        float _658 = _640 + _657;
                        float _660 = (_621 * _657) / _658;
                        uint _663 = _394 * 4u;
                        uint _669 = _19[_663 + 2u];
                        uint _674 = _394 * 4u;
                        _19[_674 + 1u] = asuint((_660 * _622) + asfloat(_19[_663 + 1u]));
                        _19[_674 + 2u] = asuint((_660 * _623) + asfloat(_669));
                        float _682 = (_640 * _621) / _658;
                        uint _685 = _481 * 4u;
                        uint _692 = _19[_685 + 2u];
                        uint _698 = _481 * 4u;
                        _19[_698 + 1u] = asuint(((-0.0f) - (_682 * _622)) + asfloat(_19[_685 + 1u]));
                        _19[_698 + 2u] = asuint(((-0.0f) - (_682 * _623)) + asfloat(_692));
                    }
                }
            }
            for (uint _476 = _226; !(((int(_476) < int(_79)) ? 4294967295u : 0u) == 0u); _476++)
            {
                uint _486 = _476 * 4u;
                uint _494 = _476 * 4u;
                uint _501 = _19[_494 + 2u];
                uint _510 = _476 * 4u;
                uint _517 = _19[_510 + 2u];
                uint _521 = _476 * 4u;
                _19[_521 + 1u] = asuint((_64 * (asfloat(_20[_486 + 0u]) + ((-0.0f) - asfloat(_19[_494 + 1u])))) + asfloat(_19[_510 + 1u]));
                _19[_521 + 2u] = asuint((_64 * (asfloat(_20[_486 + 1u]) + ((-0.0f) - asfloat(_501)))) + asfloat(_517));
                uint _528 = _476 * 4u;
                uint _531 = _19[_528 + 1u];
                float _532 = asfloat(_531);
                uint _533 = _528 + 2u;
                uint _535 = _19[_533];
                float _542 = sqrt(dot(float2(_532, asfloat(_535)), float2(_532, asfloat(_535))));
                if (_66 < _542)
                {
                    float _598 = _66 / _542;
                    uint _599 = _476 * 4u;
                    uint _605 = _19[_599 + 2u];
                    uint _610 = _476 * 4u;
                    _19[_610 + 1u] = asuint(_598 * asfloat(_19[_599 + 1u]));
                    _19[_610 + 2u] = asuint(_598 * asfloat(_605));
                }
            }
        }
        uint _292 = _109 * 4u;
        float _303 = asfloat(_19[_292 + 0u]);
        float _310 = asfloat(_19[_292 + 1u]);
        float _317 = asfloat(_19[_292 + 2u]);
        U0[gl_GlobalInvocationID.x * 4u] = asuint(((_310 * _199) + ((_303 * _163) + _43)) + (_317 * ((_165 * _200) + ((-0.0f) - (_164 * _201))))).x;
        U0[(gl_GlobalInvocationID.x * 4u) + 1u] = asuint(((_310 * _200) + ((_303 * _164) + _45)) + (_317 * ((_163 * _201) + ((-0.0f) - (_165 * _199))))).x;
        U0[(gl_GlobalInvocationID.x * 4u) + 2u] = asuint(((_310 * _201) + ((_303 * _165) + _51)) + (_317 * ((_164 * _199) + ((-0.0f) - (_163 * _200))))).x;
        U0[(gl_GlobalInvocationID.x * 4u) + 3u] = _19[(_109 * 4u) + 3u].x;
        return;
    }
}

[numthreads(8, 1, 1)]
void main(SPIRV_Cross_Input stage_input)
{
    gl_GlobalInvocationID = stage_input.gl_GlobalInvocationID;
    comp_main();
}
