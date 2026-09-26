cbuffer CB0UBO : register(b8)
{
    float4 CB0_m0[64] : packoffset(c0);
};

Texture2D<float4> T0 : register(t0);
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
    float _64;
    if ((((0.5f < asfloat(asuint(CB0_m0[63u]).z)) ? 4294967295u : 0u) & ((0.5f < TEXCOORD.x) ? 4294967295u : 0u)) != 0u)
    {
        _64 = ((-0.0f) - TEXCOORD.x) + 1.0f;
    }
    else
    {
        _64 = TEXCOORD.x;
    }
    float _78;
    if ((((TEXCOORD.y < 0.5f) ? 4294967295u : 0u) & ((0.5f < asfloat(asuint(CB0_m0[63u]).w)) ? 4294967295u : 0u)) != 0u)
    {
        _78 = ((-0.0f) - TEXCOORD.y) + 1.0f;
    }
    else
    {
        _78 = TEXCOORD.y;
    }
    float4 _82 = T0.Sample(S0, float2(_64, _78));
    SV_Target.x = _82.x;
    SV_Target.y = _82.y;
    SV_Target.z = _82.z;
    SV_Target.w = _82.w;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    TEXCOORD = stage_input.TEXCOORD;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.SV_Target = SV_Target;
    return stage_output;
}
