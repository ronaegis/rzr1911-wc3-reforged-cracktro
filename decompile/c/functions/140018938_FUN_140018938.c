
/* WARNING: Removing unreachable block (ram,0x000140018a94) */
/* WARNING: Removing unreachable block (ram,0x000140018db2) */

void FUN_140018938(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Dst;
  undefined8 *_Dst_00;
  void *_Dst_01;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_2b8 [32];
  undefined8 *local_298;
  undefined8 *puStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  uint local_278;
  undefined4 uStack_274;
  uint uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 local_260 [2];
  undefined1 local_258 [4];
  int local_254;
  void *local_248;
  undefined1 local_240 [4];
  int local_23c;
  void *local_230;
  undefined1 local_228 [4];
  int local_224;
  void *local_218;
  undefined1 local_210 [4];
  int local_20c;
  void *local_200;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_158 [2];
  undefined1 local_150 [24];
  undefined1 local_138 [24];
  undefined1 local_120 [24];
  undefined1 local_108 [24];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  uint local_88;
  void *local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  uint local_60;
  undefined4 *local_58;
  ulonglong local_48;
  
  iVar2 = DAT_1401857dc;
  iVar1 = DAT_1401857d8;
  local_48 = DAT_140027040 ^ (ulonglong)auStack_2b8;
  _Dst = (undefined8 *)operator_new(0x80);
  memset(_Dst,0,0x80);
  *_Dst = Zion::Gfx::TextureRuntime::vftable;
  *(undefined4 *)(_Dst + 2) = 1;
  *(undefined4 *)((longlong)_Dst + 0x14) = 2;
  _Dst[3] = 2;
  *(undefined1 *)(_Dst + 4) = 0;
  *(undefined4 *)((longlong)_Dst + 0x24) = 0x3f800000;
  *(undefined1 *)(_Dst + 5) = 0;
  *(undefined4 *)((longlong)_Dst + 0x2c) = 3;
  *(undefined4 *)(_Dst + 6) = 1;
  *(undefined4 *)((longlong)_Dst + 0x34) = 1;
  _Dst[7] = 0;
  _Dst[8] = 0;
  _Dst[9] = 0;
  _Dst[10] = 0;
  _Dst[0xb] = 0;
  _Dst[0xc] = 0;
  _Dst[0xd] = 0;
  _Dst[0xe] = 0;
  _Dst[0xf] = 0;
  local_288 = 1;
  uStack_27c = 0;
  local_278 = local_278 & 0xffffff00;
  uStack_274 = 0x3f800000;
  uStack_270 = uStack_270 & 0xffffff00;
  uStack_26c = 3;
  local_268 = 1;
  uStack_264 = 1;
  uStack_284 = (undefined4)(longlong)(float)iVar2;
  uStack_280 = (undefined4)(longlong)(float)iVar1;
  _Dst[2] = CONCAT44(uStack_284,1);
  _Dst[3] = (longlong)(float)iVar1 & 0xffffffff;
  _Dst[4] = CONCAT44(0x3f800000,local_278);
  _Dst[5] = CONCAT44(3,uStack_270);
  _Dst[6] = 0x100000001;
  FUN_14001acf0();
  _Dst_00 = (undefined8 *)operator_new(0x1b8);
  local_298 = _Dst_00;
  memset(_Dst_00,0,0x1b8);
  FUN_1400011f4(_Dst_00);
  FUN_1400012c4(_Dst_00 + 0x21);
  _Dst_00[0x34] = 0;
  _Dst_00[0x35] = 0;
  _Dst_00[0x36] = 0;
  local_158[0] = 0;
  FUN_140001020(local_150,"vertex_main");
  FUN_140001020(local_138,"pixel_main");
  FUN_140001020(local_120,"kernel_main");
  FUN_140001020(local_108,&DAT_14002364c);
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0x3f800000;
  local_b0 = 1;
  local_a8 = 3;
  local_a4 = 3;
  local_a0 = 1;
  local_98 = 0;
  local_94 = 0x47c35000;
  local_90 = 0x3fce147b;
  local_88 = 8;
  local_80 = malloc(0x80);
  local_78 = 0;
  local_70 = 1;
  local_68 = 0x3fce147b;
  local_60 = 8;
  local_58 = (undefined4 *)malloc(0x80);
  local_260[0] = 0;
  FUN_140001020(local_258,"vertex_main");
  FUN_140001020(local_240,"pixel_main");
  FUN_140001020(local_228,"kernel_main");
  FUN_140001020(local_210,&DAT_14002364c);
  local_1f8 = 0;
  local_1f0 = &DAT_1407614a0;
  local_1e8 = &DAT_140761880;
  local_1e0 = 0;
  local_1d8 = 0x3dc;
  local_1d4 = 0x2b4;
  FUN_1400174e4(local_158,local_260);
  if (local_20c != 0) {
    free(local_200);
  }
  if (local_224 != 0) {
    free(local_218);
  }
  if (local_23c != 0) {
    free(local_230);
  }
  if (local_254 != 0) {
    free(local_248);
  }
  puStack_290 = (undefined8 *)CONCAT71(puStack_290._1_7_,1);
  uVar3 = local_90._4_4_;
  uVar8 = (ulonglong)local_90._4_4_;
  local_298 = _Dst;
  uVar4 = local_88;
  _Dst_01 = local_80;
  if (local_88 <= local_90._4_4_) {
    uVar10 = (ulonglong)((float)local_88 * (float)local_90 + 1.0);
    uVar9 = (uint)uVar10;
    if ((local_88 <= uVar9) &&
       (_Dst_01 = malloc((uVar10 & 0xffffffff) << 4), uVar4 = uVar9, uVar3 != 0)) {
      memcpy(_Dst_01,local_80,uVar8 << 4);
      free(local_80);
    }
  }
  local_80 = _Dst_01;
  local_88 = uVar4;
  local_90 = CONCAT44(uVar3 + 1,(float)local_90);
  puVar6 = (undefined8 *)((longlong)local_80 + uVar8 * 0x10);
  *puVar6 = local_298;
  puVar6[1] = puStack_290;
  uVar8 = (ulonglong)local_68._4_4_;
  if (local_68._4_4_ == 0) {
    if (local_60 == 0) {
      fVar11 = (float)local_60 * (float)local_68 + 1.0;
      fVar12 = 1.0;
      if (1.0 <= fVar11) {
        fVar12 = fVar11;
      }
      local_58 = (undefined4 *)malloc(((longlong)fVar12 & 0xffffffffU) << 4);
      local_60 = (uint)(longlong)fVar12;
    }
    puVar6 = (undefined8 *)(local_58 + uVar8 * 4);
    lVar7 = 1;
    do {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = puVar6 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  local_68 = CONCAT44(1,(float)local_68);
  *local_58 = 0;
  *(undefined8 *)(local_58 + 2) = *(undefined8 *)(param_1 + 0x98);
  uVar5 = FUN_1400176ac(local_260,local_158);
  FUN_14001b728(_Dst_00,uVar5);
  local_298 = (undefined8 *)CONCAT44(local_298._4_4_,1);
  puStack_290 = _Dst_00;
  FUN_140017a74(param_1 + 0xa0,&local_298);
  *(undefined8 **)(param_1 + 0x98) = _Dst;
  FUN_140001398(local_158);
  FUN_14001cb70(local_48 ^ (ulonglong)auStack_2b8);
  return;
}

