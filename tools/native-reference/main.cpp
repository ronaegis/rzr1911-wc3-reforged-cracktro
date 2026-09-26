// Offscreen reference renderer using the ORIGINAL DXBC, not recompiled HLSL.
// Inputs: 1024-byte uniform block, original extracted assets; output: RGBA8.
#include <windows.h>
#include <d3d11.h>
#include <wrl/client.h>
#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <stdexcept>
using Microsoft::WRL::ComPtr;
using Bytes = std::vector<unsigned char>;
void check(HRESULT h) { if (FAILED(h)) throw std::runtime_error("D3D HRESULT " + std::to_string((unsigned)h)); }
Bytes read(const std::string& p) { std::ifstream f(p, std::ios::binary); if(!f) throw std::runtime_error("Missing " + p); return Bytes(std::istreambuf_iterator<char>(f), {}); }
struct Target { ComPtr<ID3D11Texture2D> texture; ComPtr<ID3D11RenderTargetView> rtv; ComPtr<ID3D11ShaderResourceView> srv; };
int main(int argc, char** argv) { try {
 if(argc < 5) { std::cerr << "native-reference uniform.bin output.rgba width height\n"; return 2; }
 UINT width=std::stoul(argv[3]), height=std::stoul(argv[4]);
 ComPtr<ID3D11Device> d; ComPtr<ID3D11DeviceContext> c; D3D_FEATURE_LEVEL level;
 check(D3D11CreateDevice(nullptr,D3D_DRIVER_TYPE_HARDWARE,nullptr,0,nullptr,0,D3D11_SDK_VERSION,&d,&level,&c));
 auto exe = read("original/unpacked/cracktro.unpacked.exe");
 auto dxbc = [&](size_t off) { return Bytes(exe.begin()+off, exe.begin()+off+*(UINT*)&exe[off+24]); };
 auto vertex = [&](size_t off) { auto b=dxbc(off); ComPtr<ID3D11VertexShader> s; check(d->CreateVertexShader(b.data(),b.size(),nullptr,&s)); return s; };
 auto pixel = [&](size_t off) { auto b=dxbc(off); ComPtr<ID3D11PixelShader> s; check(d->CreatePixelShader(b.data(),b.size(),nullptr,&s)); return s; };
 auto fullscreen=vertex(0x250c0), ascii=vertex(0x5aae20), geometry=vertex(0x5af460), present=vertex(0x75f4a0);
 auto scenePS=pixel(0x3f78f0), geometryPS=pixel(0x18f620), mirrorScene=pixel(0x3a87f0), asciiPS=pixel(0x189ab0);
 auto blurScene=pixel(0x3aa4c0), composite=pixel(0x185850), feedback=pixel(0x39b7c0), blurFinal=pixel(0x18fbf0), mirrorFinal=pixel(0x183b80), copy=pixel(0x75f880);
 auto b=dxbc(0x17ff60); ComPtr<ID3D11ComputeShader> compute; check(d->CreateComputeShader(b.data(),b.size(),nullptr,&compute));
 auto target = [&](DXGI_FORMAT format, bool depth=false) { Target t; D3D11_TEXTURE2D_DESC desc={}; desc.Width=width;desc.Height=height;desc.MipLevels=desc.ArraySize=1;desc.Format=format;desc.SampleDesc.Count=1;desc.BindFlags=depth?D3D11_BIND_DEPTH_STENCIL:D3D11_BIND_RENDER_TARGET|D3D11_BIND_SHADER_RESOURCE;check(d->CreateTexture2D(&desc,nullptr,&t.texture)); if(!depth) { check(d->CreateRenderTargetView(t.texture.Get(),nullptr,&t.rtv));check(d->CreateShaderResourceView(t.texture.Get(),nullptr,&t.srv));}return t; };
 std::vector<Target> targets; for(int i=0;i<9;i++)targets.push_back(target(DXGI_FORMAT_R16G16B16A16_FLOAT)); targets.push_back(target(DXGI_FORMAT_R8G8B8A8_UNORM));
 auto depth=target(DXGI_FORMAT_D32_FLOAT,true);ComPtr<ID3D11DepthStencilView> dsv;check(d->CreateDepthStencilView(depth.texture.Get(),nullptr,&dsv));
 D3D11_BUFFER_DESC desc={};desc.ByteWidth=1024;desc.BindFlags=D3D11_BIND_CONSTANT_BUFFER;auto uniforms=read(argv[1]);D3D11_SUBRESOURCE_DATA data={uniforms.data(),0,0};ComPtr<ID3D11Buffer> cb;check(d->CreateBuffer(&desc,&data,&cb));ID3D11Buffer* cbp=cb.Get();c->VSSetConstantBuffers(8,1,&cbp);c->PSSetConstantBuffers(8,1,&cbp);c->CSSetConstantBuffers(8,1,&cbp);
 desc={};desc.ByteWidth=4096;desc.BindFlags=D3D11_BIND_SHADER_RESOURCE|D3D11_BIND_UNORDERED_ACCESS;desc.MiscFlags=D3D11_RESOURCE_MISC_BUFFER_STRUCTURED;desc.StructureByteStride=16;ComPtr<ID3D11Buffer> particles;check(d->CreateBuffer(&desc,nullptr,&particles));ComPtr<ID3D11ShaderResourceView> particleSRV;check(d->CreateShaderResourceView(particles.Get(),nullptr,&particleSRV));ComPtr<ID3D11UnorderedAccessView> particleUAV;check(d->CreateUnorderedAccessView(particles.Get(),nullptr,&particleUAV));
 auto buffer = [&](const std::string& file, DXGI_FORMAT format) {auto bytes=read(file);D3D11_BUFFER_DESC desc={};desc.ByteWidth=(UINT)bytes.size();desc.BindFlags=D3D11_BIND_SHADER_RESOURCE;D3D11_SUBRESOURCE_DATA data={bytes.data(),0,0};ComPtr<ID3D11Buffer> buf;check(d->CreateBuffer(&desc,&data,&buf));D3D11_SHADER_RESOURCE_VIEW_DESC view={};view.Format=format;view.ViewDimension=D3D11_SRV_DIMENSION_BUFFER;view.Buffer.NumElements=(UINT)bytes.size()/4;ComPtr<ID3D11ShaderResourceView> srv;check(d->CreateShaderResourceView(buf.Get(),&view,&srv));return srv;};
 std::vector<ComPtr<ID3D11ShaderResourceView>> assets;for(const char* n:{"b0","b1","b2","b3","b4","b5","b6","b6","b6","b6","b10","b0","b12"}) assets.push_back(buffer(std::string("web/buffers/")+n+".bin",std::string(n)=="b10"?DXGI_FORMAT_R32_FLOAT:DXGI_FORMAT_R32_SINT));
 auto font=buffer("web/buffers/geometry-font.bin",DXGI_FORMAT_R32_SINT);
 D3D11_SAMPLER_DESC samplerDesc={};samplerDesc.Filter=D3D11_FILTER_MIN_MAG_MIP_LINEAR;samplerDesc.AddressU=samplerDesc.AddressV=samplerDesc.AddressW=D3D11_TEXTURE_ADDRESS_CLAMP;samplerDesc.MaxLOD=D3D11_FLOAT32_MAX;samplerDesc.MinLOD=-D3D11_FLOAT32_MAX;samplerDesc.MaxAnisotropy=1;samplerDesc.ComparisonFunc=D3D11_COMPARISON_NEVER;ComPtr<ID3D11SamplerState> sampler;check(d->CreateSamplerState(&samplerDesc,&sampler));auto sp=sampler.Get();c->PSSetSamplers(0,1,&sp);c->VSSetSamplers(0,1,&sp);
 D3D11_RASTERIZER_DESC raster={};raster.FillMode=D3D11_FILL_SOLID;raster.CullMode=D3D11_CULL_NONE;raster.DepthClipEnable=TRUE;ComPtr<ID3D11RasterizerState> rs;check(d->CreateRasterizerState(&raster,&rs));c->RSSetState(rs.Get());D3D11_VIEWPORT viewport={0,0,(float)width,(float)height,0,1};c->RSSetViewports(1,&viewport);c->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
 D3D11_BLEND_DESC bd={};auto& rt=bd.RenderTarget[0];rt.BlendEnable=TRUE;rt.SrcBlend=D3D11_BLEND_SRC_ALPHA;rt.DestBlend=D3D11_BLEND_INV_SRC_ALPHA;rt.BlendOp=D3D11_BLEND_OP_ADD;rt.SrcBlendAlpha=D3D11_BLEND_ONE;rt.DestBlendAlpha=D3D11_BLEND_ZERO;rt.BlendOpAlpha=D3D11_BLEND_OP_ADD;rt.RenderTargetWriteMask=15;ComPtr<ID3D11BlendState> blend;check(d->CreateBlendState(&bd,&blend));
 ID3D11UnorderedAccessView* uav=particleUAV.Get();c->CSSetShader(compute.Get(),nullptr,0);c->CSSetUnorderedAccessViews(0,1,&uav,nullptr);c->Dispatch(32,1,1);uav=nullptr;c->CSSetUnorderedAccessViews(0,1,&uav,nullptr);
 auto draw = [&](int out, ID3D11VertexShader* vs, ID3D11PixelShader* ps, std::vector<ID3D11ShaderResourceView*> inputs, UINT vertices=3,UINT instances=1,bool z=false,bool alpha=false){
 ID3D11ShaderResourceView* empty[16]={};c->VSSetShaderResources(0,16,empty);c->PSSetShaderResources(0,16,empty);auto rtv=targets[out].rtv.Get();float clear[4]={0,0,0,1};c->ClearRenderTargetView(rtv,clear);if(z)c->ClearDepthStencilView(dsv.Get(),D3D11_CLEAR_DEPTH,1,0);c->OMSetRenderTargets(1,&rtv,z?dsv.Get():nullptr);c->OMSetBlendState(alpha?blend.Get():nullptr,nullptr,0xffffffff);c->VSSetShader(vs,nullptr,0);c->PSSetShader(ps,nullptr,0);c->VSSetShaderResources(0,(UINT)inputs.size(),inputs.data());c->PSSetShaderResources(0,(UINT)inputs.size(),inputs.data());c->DrawInstanced(vertices,instances,0,0);
 };
 draw(0,fullscreen.Get(),scenePS.Get(),{particleSRV.Get()});
 draw(1,geometry.Get(),geometryPS.Get(),{font.Get(),nullptr,nullptr,nullptr,targets[0].srv.Get()},6,256*96*128,true,true);
 draw(2,fullscreen.Get(),mirrorScene.Get(),{targets[1].srv.Get()});
 std::vector<ID3D11ShaderResourceView*> srvs;for(auto& a:assets)srvs.push_back(a.Get());draw(3,ascii.Get(),asciiPS.Get(),srvs,6,10,false,true);
 draw(4,fullscreen.Get(),blurScene.Get(),{targets[2].srv.Get()});draw(5,fullscreen.Get(),composite.Get(),{targets[4].srv.Get(),targets[3].srv.Get()});draw(6,fullscreen.Get(),feedback.Get(),{targets[5].srv.Get()});draw(7,fullscreen.Get(),blurFinal.Get(),{targets[6].srv.Get()});draw(8,fullscreen.Get(),mirrorFinal.Get(),{targets[7].srv.Get()});draw(9,present.Get(),copy.Get(),{targets[8].srv.Get()});
 c->OMSetRenderTargets(0,nullptr,nullptr);D3D11_TEXTURE2D_DESC td;targets[9].texture->GetDesc(&td);td.Usage=D3D11_USAGE_STAGING;td.BindFlags=0;td.CPUAccessFlags=D3D11_CPU_ACCESS_READ;ComPtr<ID3D11Texture2D> staging;check(d->CreateTexture2D(&td,nullptr,&staging));c->CopyResource(staging.Get(),targets[9].texture.Get());D3D11_MAPPED_SUBRESOURCE mapped;check(c->Map(staging.Get(),0,D3D11_MAP_READ,0,&mapped));std::ofstream output(argv[2],std::ios::binary);for(UINT y=0;y<height;y++)output.write((char*)mapped.pData+y*mapped.RowPitch,width*4);c->Unmap(staging.Get(),0);std::cout << "Rendered original DXBC at " << ((float*)uniforms.data())[0] << "s\n";
 return 0;
 }catch(const std::exception& e){std::cerr<<e.what()<<"\n";return 1;}}

