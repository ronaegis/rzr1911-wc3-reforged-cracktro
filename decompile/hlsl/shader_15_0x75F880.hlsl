Texture2D<float4> T0 : register(t0);
SamplerState S0 : register(s3);

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
    float4 _33 = T0.SampleLevel(S0, float2(TEXCOORD.x, TEXCOORD.y), 0.0f);
    SV_Target.x = _33.x;
    SV_Target.y = _33.y;
    SV_Target.z = _33.z;
    SV_Target.w = _33.w;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    TEXCOORD = stage_input.TEXCOORD;
    frag_main();
    SPIRV_Cross_Output stage_output;
    stage_output.SV_Target = SV_Target;
    return stage_output;
}
