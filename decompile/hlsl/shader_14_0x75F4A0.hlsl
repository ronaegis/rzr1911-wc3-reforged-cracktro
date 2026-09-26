static float4 gl_Position;
static int gl_VertexIndex;
static int gl_BaseVertexARB;
cbuffer SPIRV_Cross_VertexInfo
{
    int SPIRV_Cross_BaseVertex;
    int SPIRV_Cross_BaseInstance;
};

static float2 TEXCOORD;

struct SPIRV_Cross_Input
{
    uint gl_VertexIndex : SV_VertexID;
};

struct SPIRV_Cross_Output
{
    float2 TEXCOORD : TEXCOORD1;
    float4 gl_Position : SV_Position;
};

void vert_main()
{
    float _35 = (-1.0f) + (2.0f * float(2u & ((uint(gl_VertexIndex) - uint(gl_BaseVertexARB)) << (1u & 31u))));
    float _37 = 1.0f + ((-2.0f) * float(2u & (uint(gl_VertexIndex) - uint(gl_BaseVertexARB))));
    gl_Position.x = _35;
    gl_Position.y = _37;
    gl_Position.z = 0.0f;
    gl_Position.w = 1.0f;
    TEXCOORD.x = (_35 * 0.5f) + 0.5f;
    TEXCOORD.y = (_37 * 0.5f) + 0.5f;
}

SPIRV_Cross_Output main(SPIRV_Cross_Input stage_input)
{
    gl_VertexIndex = int(stage_input.gl_VertexIndex);
    gl_BaseVertexARB = SPIRV_Cross_BaseVertex;
    vert_main();
    SPIRV_Cross_Output stage_output;
    stage_output.gl_Position = gl_Position;
    stage_output.TEXCOORD = TEXCOORD;
    return stage_output;
}
