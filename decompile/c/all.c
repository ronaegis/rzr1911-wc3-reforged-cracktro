/* Ghidra decompilation of RZR_D_Cracktro_03-Warcraft3_Reforged.exe (UPX unpacked). */
/* Image base 0x140000000. Pseudocode, not a buildable translation. */

/* FUN_140001000 @ 140001000 (32 bytes) */

void FUN_140001000(void)

{
  FUN_140018888(&DAT_140762600);
  atexit(FUN_140022260);
  return;
}



/* FUN_140001020 @ 140001020 (292 bytes) */

float * FUN_140001020(float *param_1,char *param_2)

{
  char cVar1;
  void *pvVar2;
  float fVar3;
  ulonglong uVar4;
  float fVar5;
  size_t _Size;
  
  param_1[1] = 0.0;
  *param_1 = 1.61;
  param_1[2] = 1.12104e-44;
  pvVar2 = malloc(8);
  _Size = 0;
  *(void **)(param_1 + 4) = pvVar2;
  cVar1 = *param_2;
  while (fVar5 = (float)_Size, cVar1 != '\0') {
    _Size = (size_t)((int)fVar5 + 1);
    cVar1 = param_2[_Size];
  }
  fVar3 = (float)((int)fVar5 + 1);
  if ((uint)param_1[2] <= (uint)fVar3) {
    pvVar2 = malloc((ulonglong)(uint)fVar3);
    if (param_1[1] != 0.0) {
      memcpy(pvVar2,*(void **)(param_1 + 4),(ulonglong)(uint)param_1[1]);
      free(*(void **)(param_1 + 4));
    }
    *(void **)(param_1 + 4) = pvVar2;
    param_1[2] = fVar3;
  }
  memcpy(pvVar2,param_2,_Size);
  param_1[1] = fVar5;
  if ((uint)param_1[2] <= (uint)fVar5) {
    uVar4 = (ulonglong)((float)(uint)param_1[2] * *param_1 + 1.0);
    fVar3 = (float)uVar4;
    if ((uint)param_1[2] <= (uint)fVar3) {
      pvVar2 = malloc(uVar4 & 0xffffffff);
      fVar5 = param_1[1];
      if (fVar5 != 0.0) {
        memcpy(pvVar2,*(void **)(param_1 + 4),(ulonglong)(uint)fVar5);
        free(*(void **)(param_1 + 4));
        fVar5 = param_1[1];
      }
      *(void **)(param_1 + 4) = pvVar2;
      param_1[2] = fVar3;
    }
  }
  param_1[1] = (float)((int)fVar5 + 1);
  *(undefined1 *)((ulonglong)(uint)fVar5 + *(longlong *)(param_1 + 4)) = 0;
  return param_1;
}



/* FUN_140001144 @ 140001144 (132 bytes) */

undefined4 * FUN_140001144(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  
  *param_1 = 0x3fce147b;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  uVar1 = *(uint *)(param_2 + 8);
  param_1[2] = uVar1;
  pvVar2 = malloc((ulonglong)uVar1);
  *(void **)(param_1 + 4) = pvVar2;
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      *(undefined1 *)(uVar4 + *(longlong *)(param_1 + 4)) =
           *(undefined1 *)(uVar4 + *(longlong *)(param_2 + 0x10));
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar1 = param_1[1];
    } while (uVar3 < uVar1);
    if ((uVar1 != 0) && (*(char *)((ulonglong)(uVar1 - 1) + *(longlong *)(param_1 + 4)) == '\0')) {
      return param_1;
    }
  }
  local_res8[0] = 0;
  FUN_1400180f4(param_1,local_res8);
  return param_1;
}



/* FUN_1400011c8 @ 1400011c8 (25 bytes) */

void FUN_1400011c8(longlong param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    free(*(void **)(param_1 + 0x10));
  }
  return;
}



/* _guard_check_icall @ 1400011e4 (3 bytes) */

void _guard_check_icall(void)

{
  return;
}



/* FUN_1400011f0 @ 1400011f0 (3 bytes) */

undefined8 FUN_1400011f0(void)

{
  return 0;
}



/* FUN_1400011f4 @ 1400011f4 (206 bytes) */

longlong FUN_1400011f4(longlong param_1)

{
  void *pvVar1;
  
  FUN_1400012c4();
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 1;
  *(undefined8 *)(param_1 + 0xb8) = 1;
  *(undefined4 *)(param_1 + 0xb0) = 3;
  *(undefined4 *)(param_1 + 0xb4) = 3;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x47c35000;
  *(undefined8 *)(param_1 + 200) = 0x3fce147b;
  *(undefined4 *)(param_1 + 0xd0) = 8;
  pvVar1 = malloc(0x80);
  *(void **)(param_1 + 0xd8) = pvVar1;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 1;
  *(undefined8 *)(param_1 + 0xf0) = 0x3fce147b;
  *(undefined4 *)(param_1 + 0xf8) = 8;
  pvVar1 = malloc(0x80);
  *(void **)(param_1 + 0x100) = pvVar1;
  return param_1;
}



/* FUN_1400012c4 @ 1400012c4 (129 bytes) */

undefined4 * FUN_1400012c4(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_140001020(param_1 + 2,"vertex_main");
  FUN_140001020(param_1 + 8,"pixel_main");
  FUN_140001020(param_1 + 0xe,"kernel_main");
  FUN_140001020(param_1 + 0x14,&DAT_14002364c);
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}



/* FUN_140001348 @ 140001348 (79 bytes) */

void FUN_140001348(longlong param_1)

{
  if (*(int *)(param_1 + 0x54) != 0) {
    free(*(void **)(param_1 + 0x60));
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    free(*(void **)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    free(*(void **)(param_1 + 0x18));
  }
  return;
}



/* FUN_140001398 @ 140001398 (123 bytes) */

void FUN_140001398(longlong param_1)

{
  if (*(int *)(param_1 + 0xf4) != 0) {
    free(*(void **)(param_1 + 0x100));
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    free(*(void **)(param_1 + 0xd8));
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    free(*(void **)(param_1 + 0x60));
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    free(*(void **)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    free(*(void **)(param_1 + 0x18));
  }
  return;
}



/* FUN_140001414 @ 140001414 (164 bytes) */

longlong FUN_140001414(longlong param_1)

{
  void *pvVar1;
  
  FUN_1400012c4();
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x98) = 8;
  *(undefined4 *)(param_1 + 0x9c) = 8;
  *(undefined4 *)(param_1 + 0xac) = 0x47c35000;
  *(undefined4 *)(param_1 + 0xb0) = 0x3fce147b;
  *(undefined4 *)(param_1 + 0xb8) = 8;
  pvVar1 = malloc(0x80);
  *(void **)(param_1 + 0xc0) = pvVar1;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0x3fce147b;
  *(undefined4 *)(param_1 + 0xd0) = 8;
  pvVar1 = malloc(0x80);
  *(void **)(param_1 + 0xd8) = pvVar1;
  return param_1;
}



/* FUN_1400014b8 @ 1400014b8 (123 bytes) */

void FUN_1400014b8(longlong param_1)

{
  if (*(int *)(param_1 + 0xcc) != 0) {
    free(*(void **)(param_1 + 0xd8));
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    free(*(void **)(param_1 + 0xc0));
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    free(*(void **)(param_1 + 0x60));
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    free(*(void **)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    free(*(void **)(param_1 + 0x18));
  }
  return;
}



/* FUN_140001534 @ 140001534 (89075 bytes) */
/* decompilation failed: Exception while decompiling 140001534: process: timeout
 */


/* FUN_140017128 @ 140017128 (410 bytes) */

undefined8 * FUN_140017128(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = 0x3fce147b;
  *(undefined4 *)(param_1 + 1) = 8;
  pvVar1 = malloc(0x8a0);
  param_1[2] = pvVar1;
  param_1[3] = 0x3fce147b;
  *(undefined4 *)(param_1 + 4) = 8;
  pvVar1 = malloc(0x40);
  param_1[5] = pvVar1;
  param_1[6] = 0x3fce147b;
  *(undefined4 *)(param_1 + 7) = 8;
  pvVar1 = malloc(0x40);
  param_1[8] = pvVar1;
  *(undefined4 *)(param_1 + 9) = 1;
  *(undefined4 *)(param_1 + 10) = 0x3f400000;
  param_1[0xc] = 0x10;
  pvVar1 = malloc(0x80);
  param_1[0xb] = pvVar1;
  memset(pvVar1,0,0x80);
  *(undefined4 *)(param_1 + 0xd) = 0x3f400000;
  param_1[0xf] = 0x10;
  pvVar1 = malloc(0x80);
  param_1[0xe] = pvVar1;
  memset(pvVar1,0,0x80);
  *(undefined4 *)(param_1 + 0x10) = 0x3f400000;
  param_1[0x12] = 0x10;
  pvVar1 = malloc(0x80);
  param_1[0x11] = pvVar1;
  memset(pvVar1,0,0x80);
  param_1[0x13] = 0;
  param_1[0x14] = 0x3fce147b;
  *(undefined4 *)(param_1 + 0x15) = 8;
  pvVar1 = malloc(0x80);
  param_1[0x16] = pvVar1;
  param_1[0x18] = 0x3fce147b;
  *(undefined4 *)(param_1 + 0x19) = 8;
  pvVar1 = malloc(0x8a0);
  param_1[0x1a] = pvVar1;
  param_1[0x1b] = 0x3fce147b;
  *(undefined4 *)(param_1 + 0x1c) = 8;
  pvVar1 = malloc(0x20);
  param_1[0x1d] = pvVar1;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  return param_1;
}



/* FUN_1400172c4 @ 1400172c4 (50 bytes) */

undefined4 * FUN_1400172c4(undefined4 *param_1)

{
  void *pvVar1;
  
  param_1[1] = 0;
  *param_1 = 0x3fce147b;
  param_1[2] = 8;
  pvVar1 = malloc(0x8a0);
  *(void **)(param_1 + 4) = pvVar1;
  return param_1;
}



/* FUN_1400172f8 @ 1400172f8 (103 bytes) */

undefined8 * FUN_1400172f8(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = Zion::Gfx::TextureRuntime::vftable;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 2;
  param_1[3] = 2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 3;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



/* FUN_140017360 @ 140017360 (70 bytes) */

undefined8 * FUN_140017360(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 4;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = Zion::Gfx::BufferRuntime::vftable;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



/* FUN_1400173a8 @ 1400173a8 (131 bytes) */

undefined8 * FUN_1400173a8(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 4;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = Zion::Gfx::BufferDataRuntime::vftable;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  memset((void *)((longlong)param_1 + 0x66),0,0xffe);
  param_1[0x20d] = 0;
  *(undefined4 *)(param_1 + 0x20e) = 0;
  return param_1;
}



/* FUN_14001742c @ 14001742c (92 bytes) */

longlong FUN_14001742c(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_28 [32];
  
  lVar4 = FUN_140017cd8(local_28);
  uVar1 = *(undefined4 *)(lVar4 + 4);
  uVar2 = *(undefined4 *)(lVar4 + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x10);
  *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  if (*(int *)(lVar4 + 4) != 0) {
    free(*(void **)(lVar4 + 0x10));
  }
  return param_1;
}



/* FUN_140017488 @ 140017488 (23 bytes) */

undefined8 FUN_140017488(undefined8 param_1)

{
  FUN_140017cd8();
  return param_1;
}



/* FUN_1400174a0 @ 1400174a0 (67 bytes) */

longlong FUN_1400174a0(longlong param_1)

{
  FUN_1400011f4();
  FUN_1400012c4(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  return param_1;
}



/* FUN_1400174e4 @ 1400174e4 (453 bytes) */

undefined4 * FUN_1400174e4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong lVar6;
  undefined1 local_28 [32];
  
  *param_1 = *param_2;
  lVar6 = FUN_140001144(local_28,param_2 + 2);
  uVar1 = *(undefined4 *)(lVar6 + 4);
  uVar2 = *(undefined4 *)(lVar6 + 8);
  uVar4 = *(undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 4) = 0;
  iVar3 = param_1[3];
  pvVar5 = *(void **)(param_1 + 6);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  *(undefined8 *)(param_1 + 6) = uVar4;
  if (iVar3 != 0) {
    free(pvVar5);
  }
  if (*(int *)(lVar6 + 4) != 0) {
    free(*(void **)(lVar6 + 0x10));
  }
  lVar6 = FUN_140001144(local_28,param_2 + 8);
  uVar1 = *(undefined4 *)(lVar6 + 4);
  uVar2 = *(undefined4 *)(lVar6 + 8);
  uVar4 = *(undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 4) = 0;
  iVar3 = param_1[9];
  pvVar5 = *(void **)(param_1 + 0xc);
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  if (iVar3 != 0) {
    free(pvVar5);
  }
  if (*(int *)(lVar6 + 4) != 0) {
    free(*(void **)(lVar6 + 0x10));
  }
  lVar6 = FUN_140001144(local_28,param_2 + 0xe);
  uVar1 = *(undefined4 *)(lVar6 + 4);
  uVar2 = *(undefined4 *)(lVar6 + 8);
  uVar4 = *(undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 4) = 0;
  iVar3 = param_1[0xf];
  pvVar5 = *(void **)(param_1 + 0x12);
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar2;
  *(undefined8 *)(param_1 + 0x12) = uVar4;
  if (iVar3 != 0) {
    free(pvVar5);
  }
  if (*(int *)(lVar6 + 4) != 0) {
    free(*(void **)(lVar6 + 0x10));
  }
  lVar6 = FUN_140001144(local_28,param_2 + 0x14);
  uVar1 = *(undefined4 *)(lVar6 + 4);
  uVar2 = *(undefined4 *)(lVar6 + 8);
  uVar4 = *(undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 4) = 0;
  iVar3 = param_1[0x15];
  pvVar5 = *(void **)(param_1 + 0x18);
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  if (iVar3 != 0) {
    free(pvVar5);
  }
  if (*(int *)(lVar6 + 4) != 0) {
    free(*(void **)(lVar6 + 0x10));
  }
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  return param_1;
}



/* FUN_1400176ac @ 1400176ac (413 bytes) */

longlong FUN_1400176ac(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  FUN_14001784c();
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  uVar4 = *(undefined4 *)(param_2 + 0xa0);
  uVar5 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  *(undefined4 *)(param_1 + 0xa0) = uVar4;
  *(undefined4 *)(param_1 + 0xa4) = uVar5;
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xa9) = *(undefined1 *)(param_2 + 0xa9);
  *(undefined1 *)(param_1 + 0xaa) = *(undefined1 *)(param_2 + 0xaa);
  *(undefined1 *)(param_1 + 0xab) = *(undefined1 *)(param_2 + 0xab);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 200) = 0x3fce147b;
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  uVar9 = *(uint *)(param_2 + 0xd0);
  *(uint *)(param_1 + 0xd0) = uVar9;
  pvVar7 = malloc((ulonglong)uVar9 << 4);
  uVar9 = 0;
  *(void **)(param_1 + 0xd8) = pvVar7;
  uVar8 = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    do {
      uVar10 = (int)uVar8 + 1;
      puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0xd8) + uVar8 * 0x10);
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xd8) + uVar8 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      uVar8 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_1 + 0xcc));
  }
  uVar3 = *(undefined4 *)(param_2 + 0xe4);
  uVar4 = *(undefined4 *)(param_2 + 0xe8);
  uVar5 = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  *(undefined4 *)(param_1 + 0xe8) = uVar4;
  *(undefined4 *)(param_1 + 0xec) = uVar5;
  *(undefined4 *)(param_1 + 0xf0) = 0x3fce147b;
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  uVar10 = *(uint *)(param_2 + 0xf8);
  *(uint *)(param_1 + 0xf8) = uVar10;
  pvVar7 = malloc((ulonglong)uVar10 << 4);
  *(void **)(param_1 + 0x100) = pvVar7;
  if (*(int *)(param_1 + 0xf4) != 0) {
    do {
      uVar8 = (ulonglong)uVar9;
      uVar9 = uVar9 + 1;
      puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x100) + uVar8 * 0x10);
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x100) + uVar8 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
    } while (uVar9 < *(uint *)(param_1 + 0xf4));
  }
  return param_1;
}



/* FUN_14001784c @ 14001784c (160 bytes) */

undefined4 * FUN_14001784c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_140001144(param_1 + 2,param_2 + 2);
  FUN_140001144(param_1 + 8,param_2 + 8);
  FUN_140001144(param_1 + 0xe,param_2 + 0xe);
  FUN_140001144(param_1 + 0x14,param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  return param_1;
}



/* FUN_1400178ec @ 1400178ec (67 bytes) */

longlong FUN_1400178ec(longlong param_1)

{
  FUN_140001414();
  FUN_1400012c4(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  return param_1;
}



/* FUN_140017930 @ 140017930 (323 bytes) */

longlong FUN_140017930(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  
  FUN_14001784c();
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xb0) = 0x3fce147b;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  uVar11 = *(uint *)(param_2 + 0xb8);
  *(uint *)(param_1 + 0xb8) = uVar11;
  pvVar9 = malloc((ulonglong)uVar11 << 4);
  uVar11 = 0;
  *(void **)(param_1 + 0xc0) = pvVar9;
  uVar10 = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    do {
      uVar12 = (int)uVar10 + 1;
      puVar1 = (undefined4 *)(*(longlong *)(param_2 + 0xc0) + uVar10 * 0x10);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0xc0) + uVar10 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      uVar10 = (ulonglong)uVar12;
    } while (uVar12 < *(uint *)(param_1 + 0xb4));
  }
  *(undefined4 *)(param_1 + 200) = 0x3fce147b;
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  uVar12 = *(uint *)(param_2 + 0xd0);
  *(uint *)(param_1 + 0xd0) = uVar12;
  pvVar9 = malloc((ulonglong)uVar12 << 4);
  *(void **)(param_1 + 0xd8) = pvVar9;
  if (*(int *)(param_1 + 0xcc) != 0) {
    do {
      uVar10 = (ulonglong)uVar11;
      uVar11 = uVar11 + 1;
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0xd8) + uVar10 * 0x10);
      uVar8 = puVar3[1];
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0xd8) + uVar10 * 0x10);
      *puVar4 = *puVar3;
      puVar4[1] = uVar8;
    } while (uVar11 < *(uint *)(param_1 + 0xcc));
  }
  return param_1;
}



/* FUN_140017a74 @ 140017a74 (178 bytes) */

void FUN_140017a74(float *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *_Dst;
  undefined8 *puVar2;
  float fVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(uint)param_1[1];
  if ((uint)param_1[2] <= (uint)param_1[1]) {
    uVar4 = (ulonglong)((float)(uint)param_1[2] * *param_1 + 1.0);
    fVar3 = (float)uVar4;
    if ((uint)param_1[2] <= (uint)fVar3) {
      _Dst = malloc((uVar4 & 0xffffffff) << 4);
      uVar5 = (ulonglong)(uint)param_1[1];
      if (param_1[1] != 0.0) {
        memcpy(_Dst,*(void **)(param_1 + 4),uVar5 << 4);
        free(*(void **)(param_1 + 4));
        uVar5 = (ulonglong)(uint)param_1[1];
      }
      *(void **)(param_1 + 4) = _Dst;
      param_1[2] = fVar3;
    }
  }
  param_1[1] = (float)((int)uVar5 + 1);
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 4));
  *puVar2 = *param_2;
  puVar2[1] = uVar1;
  return;
}



/* FUN_140017b28 @ 140017b28 (163 bytes) */

uint * FUN_140017b28(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 8);
  if (uVar2 != 0) {
    for (puVar6 = *(uint **)(*plVar1 + ((ulonglong)*param_2 % (ulonglong)uVar2) * 8);
        puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 4)) {
      if (*puVar6 == *param_2) {
        if (puVar6 != (uint *)0x0) goto LAB_140017bb1;
        break;
      }
    }
  }
  uVar3 = *param_2;
  puVar6 = (uint *)operator_new(0x18);
  uVar5 = *(undefined8 *)(*plVar1 + ((ulonglong)uVar3 % (ulonglong)uVar2) * 8);
  uVar4 = *param_2;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = uVar4;
  *(undefined8 *)(puVar6 + 4) = uVar5;
  *(uint **)(*plVar1 + ((ulonglong)uVar3 % (ulonglong)uVar2) * 8) = puVar6;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
LAB_140017bb1:
  return puVar6 + 2;
}



/* FUN_140017bcc @ 140017bcc (266 bytes) */

void FUN_140017bcc(float *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *_Dst;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  float fVar7;
  ulonglong uVar8;
  
  uVar5 = (ulonglong)(uint)param_1[1];
  if ((uint)param_1[2] <= (uint)param_1[1]) {
    uVar8 = (ulonglong)((float)(uint)param_1[2] * *param_1 + 1.0);
    fVar7 = (float)uVar8;
    if ((uint)param_1[2] <= (uint)fVar7) {
      _Dst = malloc((uVar8 & 0xffffffff) * 0x114);
      uVar5 = (ulonglong)(uint)param_1[1];
      if (param_1[1] != 0.0) {
        memcpy(_Dst,*(void **)(param_1 + 4),uVar5 * 0x114);
        free(*(void **)(param_1 + 4));
        uVar5 = (ulonglong)(uint)param_1[1];
      }
      *(void **)(param_1 + 4) = _Dst;
      param_1[2] = fVar7;
    }
  }
  param_1[1] = (float)((int)uVar5 + 1);
  lVar3 = 2;
  puVar2 = (undefined8 *)(uVar5 * 0x114 + *(longlong *)(param_1 + 4));
  do {
    puVar6 = param_2;
    puVar4 = puVar2;
    uVar1 = puVar6[1];
    *puVar4 = *puVar6;
    puVar4[1] = uVar1;
    uVar1 = puVar6[3];
    puVar4[2] = puVar6[2];
    puVar4[3] = uVar1;
    uVar1 = puVar6[5];
    puVar4[4] = puVar6[4];
    puVar4[5] = uVar1;
    uVar1 = puVar6[7];
    puVar4[6] = puVar6[6];
    puVar4[7] = uVar1;
    uVar1 = puVar6[9];
    puVar4[8] = puVar6[8];
    puVar4[9] = uVar1;
    uVar1 = puVar6[0xb];
    puVar4[10] = puVar6[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar6[0xd];
    puVar4[0xc] = puVar6[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar6[0xf];
    puVar4[0xe] = puVar6[0xe];
    puVar4[0xf] = uVar1;
    lVar3 = lVar3 + -1;
    puVar2 = puVar4 + 0x10;
    param_2 = puVar6 + 0x10;
  } while (lVar3 != 0);
  uVar1 = puVar6[0x11];
  puVar4[0x10] = puVar6[0x10];
  puVar4[0x11] = uVar1;
  *(undefined4 *)(puVar4 + 0x12) = *(undefined4 *)(puVar6 + 0x12);
  return;
}



/* FUN_140017cd8 @ 140017cd8 (222 bytes) */

undefined4 * FUN_140017cd8(undefined4 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  *param_1 = 0x3fce147b;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  uVar8 = *(uint *)(param_2 + 8);
  param_1[2] = uVar8;
  pvVar4 = malloc((ulonglong)uVar8 * 0x114);
  uVar8 = 0;
  *(void **)(param_1 + 4) = pvVar4;
  if (param_1[1] != 0) {
    do {
      lVar6 = 2;
      puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar8 * 0x114);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar8 * 0x114);
      do {
        puVar7 = puVar3;
        puVar5 = puVar2;
        uVar1 = puVar5[1];
        *puVar7 = *puVar5;
        puVar7[1] = uVar1;
        uVar1 = puVar5[3];
        puVar7[2] = puVar5[2];
        puVar7[3] = uVar1;
        uVar1 = puVar5[5];
        puVar7[4] = puVar5[4];
        puVar7[5] = uVar1;
        uVar1 = puVar5[7];
        puVar7[6] = puVar5[6];
        puVar7[7] = uVar1;
        uVar1 = puVar5[9];
        puVar7[8] = puVar5[8];
        puVar7[9] = uVar1;
        uVar1 = puVar5[0xb];
        puVar7[10] = puVar5[10];
        puVar7[0xb] = uVar1;
        uVar1 = puVar5[0xd];
        puVar7[0xc] = puVar5[0xc];
        puVar7[0xd] = uVar1;
        uVar1 = puVar5[0xf];
        puVar7[0xe] = puVar5[0xe];
        puVar7[0xf] = uVar1;
        lVar6 = lVar6 + -1;
        puVar2 = puVar5 + 0x10;
        puVar3 = puVar7 + 0x10;
      } while (lVar6 != 0);
      uVar1 = puVar5[0x11];
      uVar8 = uVar8 + 1;
      puVar7[0x10] = puVar5[0x10];
      puVar7[0x11] = uVar1;
      *(undefined4 *)(puVar7 + 0x12) = *(undefined4 *)(puVar5 + 0x12);
    } while (uVar8 < (uint)param_1[1]);
  }
  return param_1;
}



/* FUN_140017db8 @ 140017db8 (213 bytes) */

void FUN_140017db8(float *param_1,float param_2)

{
  longlong lVar1;
  void *_Dst;
  float fVar2;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = param_1[1];
  if ((uint)fVar2 < (uint)param_2) {
    if ((uint)param_1[2] < (uint)param_2) {
      fVar5 = (float)(uint)param_1[2] * *param_1 + 1.0;
      fVar6 = (float)(uint)param_2;
      if ((float)(uint)param_2 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar5 = (float)(longlong)fVar6;
      if ((uint)param_1[2] <= (uint)fVar5) {
        _Dst = malloc(((longlong)fVar6 & 0xffffffffU) << 4);
        fVar2 = param_1[1];
        if (fVar2 != 0.0) {
          memcpy(_Dst,*(void **)(param_1 + 4),(ulonglong)(uint)fVar2 << 4);
          free(*(void **)(param_1 + 4));
          fVar2 = param_1[1];
        }
        *(void **)(param_1 + 4) = _Dst;
        param_1[2] = fVar5;
      }
    }
    if ((uint)fVar2 < (uint)param_2) {
      lVar4 = (ulonglong)(uint)fVar2 << 4;
      uVar3 = (ulonglong)(uint)((int)param_2 - (int)fVar2);
      do {
        lVar1 = *(longlong *)(param_1 + 4);
        *(undefined8 *)(lVar1 + lVar4) = 0;
        *(undefined8 *)(lVar1 + 8 + lVar4) = 0;
        lVar4 = lVar4 + 0x10;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  param_1[1] = param_2;
  return;
}



/* FUN_140017e90 @ 140017e90 (11 bytes) */

longlong FUN_140017e90(longlong param_1,uint param_2)

{
  return (ulonglong)param_2 * 0x10 + *(longlong *)(param_1 + 0x10);
}



/* FUN_140017e9c @ 140017e9c (50 bytes) */

undefined4 * FUN_140017e9c(undefined4 *param_1)

{
  void *pvVar1;
  
  param_1[1] = 0;
  *param_1 = 0x3fce147b;
  param_1[2] = 8;
  pvVar1 = malloc(0x80);
  *(void **)(param_1 + 4) = pvVar1;
  return param_1;
}



/* FUN_140017ed0 @ 140017ed0 (335 bytes) */

void FUN_140017ed0(float *param_1)

{
  void *pvVar1;
  longlong lVar2;
  float fVar3;
  ulonglong uVar4;
  void *_Dst;
  float fVar5;
  
  fVar3 = param_1[1];
  uVar4 = (ulonglong)(uint)fVar3;
  if ((uint)fVar3 < 0x69) {
    if ((uint)fVar3 < 0x68) {
      if ((uint)param_1[2] < 0x68) {
        fVar5 = (float)(uint)param_1[2] * *param_1 + 1.0;
        fVar3 = 104.0;
        if (104.0 <= fVar5) {
          fVar3 = fVar5;
        }
        fVar5 = (float)(longlong)fVar3;
        if ((uint)param_1[2] <= (uint)fVar5) {
          pvVar1 = malloc(((longlong)fVar3 & 0xffffffffU) * 0x118);
          uVar4 = (ulonglong)(uint)param_1[1];
          if (param_1[1] != 0.0) {
            memcpy(pvVar1,*(void **)(param_1 + 4),uVar4 * 0x118);
            free(*(void **)(param_1 + 4));
            uVar4 = (ulonglong)(uint)param_1[1];
          }
          *(void **)(param_1 + 4) = pvVar1;
          param_1[2] = fVar5;
          if (0x67 < (uint)uVar4) goto LAB_140018003;
        }
      }
      lVar2 = uVar4 * 0x118;
      uVar4 = (ulonglong)(0x68 - (int)uVar4);
      do {
        _Dst = (void *)(*(longlong *)(param_1 + 4) + lVar2);
        memset(_Dst,0,0x118);
        *(undefined4 *)((longlong)_Dst + 0x104) = 0;
        *(undefined4 *)((longlong)_Dst + 0x100) = 0x3fce147b;
        *(undefined4 *)((longlong)_Dst + 0x108) = 8;
        pvVar1 = malloc(0x60);
        lVar2 = lVar2 + 0x118;
        *(void **)((longlong)_Dst + 0x110) = pvVar1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    uVar4 = 0x68;
    do {
      lVar2 = uVar4 * 0x118 + *(longlong *)(param_1 + 4);
      if (*(int *)(lVar2 + 0x104) != 0) {
        free(*(void **)(lVar2 + 0x110));
      }
      fVar3 = (float)((int)uVar4 + 1);
      uVar4 = (ulonglong)(uint)fVar3;
    } while ((uint)fVar3 < (uint)param_1[1]);
  }
LAB_140018003:
  param_1[1] = 1.45735e-43;
  return;
}



/* FUN_140018020 @ 140018020 (14 bytes) */

longlong FUN_140018020(longlong param_1,uint param_2)

{
  return (ulonglong)param_2 * 0x118 + *(longlong *)(param_1 + 0x10);
}



/* FUN_140018030 @ 140018030 (195 bytes) */

void FUN_140018030(float *param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *_Dst;
  float fVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(uint)param_1[1];
  if ((uint)param_1[2] <= (uint)param_1[1]) {
    uVar3 = (ulonglong)((float)(uint)param_1[2] * *param_1 + 1.0);
    fVar2 = (float)uVar3;
    if ((uint)param_1[2] <= (uint)fVar2) {
      _Dst = malloc((uVar3 & 0xffffffff) * 0xc);
      uVar4 = (ulonglong)(uint)param_1[1];
      if (param_1[1] != 0.0) {
        memcpy(_Dst,*(void **)(param_1 + 4),uVar4 * 0xc);
        free(*(void **)(param_1 + 4));
        uVar4 = (ulonglong)(uint)param_1[1];
      }
      *(void **)(param_1 + 4) = _Dst;
      param_1[2] = fVar2;
    }
  }
  lVar1 = *(longlong *)(param_1 + 4);
  param_1[1] = (float)((int)uVar4 + 1);
  *(undefined8 *)(lVar1 + uVar4 * 0xc) = *param_2;
  *(undefined4 *)(lVar1 + 8 + uVar4 * 0xc) = *(undefined4 *)(param_2 + 1);
  return;
}



/* FUN_1400180f4 @ 1400180f4 (165 bytes) */

void FUN_1400180f4(float *param_1,undefined1 *param_2)

{
  void *_Dst;
  float fVar1;
  ulonglong uVar2;
  ulonglong _Size;
  
  _Size = (ulonglong)(uint)param_1[1];
  if ((uint)param_1[2] <= (uint)param_1[1]) {
    uVar2 = (ulonglong)((float)(uint)param_1[2] * *param_1 + 1.0);
    fVar1 = (float)uVar2;
    if ((uint)param_1[2] <= (uint)fVar1) {
      _Dst = malloc(uVar2 & 0xffffffff);
      _Size = (ulonglong)(uint)param_1[1];
      if (param_1[1] != 0.0) {
        memcpy(_Dst,*(void **)(param_1 + 4),_Size);
        free(*(void **)(param_1 + 4));
        _Size = (ulonglong)(uint)param_1[1];
      }
      *(void **)(param_1 + 4) = _Dst;
      param_1[2] = fVar1;
    }
  }
  param_1[1] = (float)((int)_Size + 1);
  *(undefined1 *)(_Size + *(longlong *)(param_1 + 4)) = *param_2;
  return;
}



/* FUN_14001819c @ 14001819c (64 bytes) */

undefined8 FUN_14001819c(undefined8 param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 2) {
    PostQuitMessage(0);
  }
  else if ((param_2 != 5) && ((param_2 != 0x112 || ((param_3 & 0xfff0) != 0xf100)))) {
                    /* WARNING: Could not recover jumptable at 0x0001400181c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = DefWindowProcW();
    return uVar1;
  }
  return 0;
}



/* FUN_1400181dc @ 1400181dc (812 bytes) */

void FUN_1400181dc(longlong param_1)

{
  undefined8 *puVar1;
  int nWidth;
  int iVar2;
  int iVar3;
  HMODULE pHVar4;
  HICON pHVar5;
  HWND pHVar6;
  undefined1 auStackY_118 [32];
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78 [2];
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  tagRECT local_38;
  ulonglong local_28;
  
  nWidth = DAT_1401857dc;
  iVar3 = DAT_1401857d8;
  local_28 = DAT_140027040 ^ (ulonglong)auStackY_118;
  pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
  pHVar5 = LoadIconW(pHVar4,(LPCWSTR)0x65);
  pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
  ((WNDCLASSEXW *)(param_1 + 0x30))->cbSize = 0x50;
  *(undefined4 *)(param_1 + 0x34) = 0x40;
  *(code **)(param_1 + 0x38) = FUN_14001819c;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(HMODULE *)(param_1 + 0x48) = pHVar4;
  *(HICON *)(param_1 + 0x50) = pHVar5;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(wchar_t **)(param_1 + 0x70) = L"DemoTemplate";
  *(undefined8 *)(param_1 + 0x78) = 0;
  RegisterClassExW((WNDCLASSEXW *)(param_1 + 0x30));
  pHVar6 = CreateWindowExW(0,*(LPCWSTR *)(param_1 + 0x70),L"RZR_D_Cracktro_03-Warcraft3_Reforged",
                           0x90000000,0,0,nWidth,iVar3,(HWND)0x0,(HMENU)0x0,
                           *(HINSTANCE *)(param_1 + 0x48),(LPVOID)0x0);
  *(HWND *)(param_1 + 0x28) = pHVar6;
  pHVar6 = GetDesktopWindow();
  GetClientRect(pHVar6,&local_38);
  SetWindowPos(*(HWND *)(param_1 + 0x28),(HWND)0x0,(local_38.right - nWidth) / 2,
               (local_38.bottom - iVar3) / 2,0,0,5);
  local_a0 = (longlong *)0x0;
  puVar1 = (undefined8 *)(param_1 + 8);
  local_98 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  local_88 = 0;
  local_b0 = 0xb000;
  iVar2 = D3D11CreateDevice(0,1,0,0);
  if (-1 < iVar2) {
    (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,&DAT_140023d40,&local_a0);
    (**(code **)(*local_a0 + 0x38))(local_a0,&local_98);
    (**(code **)(*local_98 + 0x30))(local_98,&DAT_140023d60,&local_90);
    local_60 = 0x1c;
    local_58 = 1;
    local_4c = 2;
    local_40 = 0;
    local_68 = nWidth;
    local_64 = iVar3;
    local_50 = 0x20;
    local_44 = 4;
    iVar3 = (**(code **)(*local_90 + 0xc0))(local_90,*puVar1,&local_68,0);
    if (-1 < iVar3) {
      *(undefined8 *)(param_1 + 0x18) = local_88;
      local_b8 = (longlong *)0x0;
      local_80 = (longlong *)0x0;
      local_a8 = (longlong *)0x0;
      DCompositionCreateDevice(0,&DAT_140023d70,&local_b8);
      (**(code **)(*local_b8 + 0x30))(local_b8,*(undefined8 *)(param_1 + 0x28),1,&local_80);
      (**(code **)(*local_b8 + 0x38))(local_b8,&local_a8);
      (**(code **)(*local_a8 + 0x78))(local_a8,*(undefined8 *)(param_1 + 0x18));
      (**(code **)(*local_80 + 0x18))(local_80,local_a8);
      (**(code **)(*local_b8 + 0x18))();
      local_78[0] = 0;
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                (*(longlong **)(param_1 + 0x18),0,&DAT_140023d50,local_78);
      (**(code **)(*(longlong *)*puVar1 + 0x48))((longlong *)*puVar1,local_78[0],0,param_1 + 0x20);
      ShowWindow(*(HWND *)(param_1 + 0x28),10);
      UpdateWindow(*(HWND *)(param_1 + 0x28));
      ShowCursor(0);
      pHVar6 = GetConsoleWindow();
      ShowWindow(pHVar6,0);
    }
  }
  FUN_14001cb70(local_28 ^ (ulonglong)auStackY_118);
  return;
}



/* FUN_140018508 @ 140018508 (17 bytes) */

void FUN_140018508(void)

{
  FUN_140018eb4();
                    /* WARNING: Subroutine does not return */
  ExitProcess(0);
}



/* FUN_14001851c @ 14001851c (128 bytes) */

float * FUN_14001851c(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float fStack_14;
  
  fStack_14 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  local_18 = (float)*(undefined8 *)param_2;
  fVar3 = sqrtf(fStack_14 * fStack_14 + local_18 * local_18 + param_2[2] * param_2[2]);
  fVar3 = 1.0 / fVar3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = fVar3 * *param_2;
  param_1[1] = fVar3 * fVar1;
  param_1[2] = fVar3 * fVar2;
  return param_1;
}



/* FUN_14001859c @ 14001859c (600 bytes) */

float * FUN_14001859c(float *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_78;
  float fStack_74;
  undefined8 local_68;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  
  uVar3 = *(undefined8 *)param_3;
  local_78 = (float)*param_4;
  local_68._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  fStack_74 = (float)((ulonglong)*param_4 >> 0x20);
  local_68._0_4_ = (float)uVar3;
  local_50 = (float)local_68 * fStack_74 - local_78 * local_68._4_4_;
  _local_58 = CONCAT44(local_78 * param_3[2] - (float)local_68 * *(float *)(param_4 + 1),
                       *(float *)(param_4 + 1) * local_68._4_4_ - fStack_74 * param_3[2]);
  local_68 = uVar3;
  FUN_14001851c(&local_68,&local_58);
  fVar6 = local_60;
  fVar5 = local_68._4_4_;
  fVar7 = (float)local_68;
  fStack_74 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  local_78 = (float)*(undefined8 *)param_3;
  local_50 = local_78 * local_68._4_4_ - fStack_74 * (float)local_68;
  _local_58 = CONCAT44(param_3[2] * (float)local_68 - local_78 * local_60,
                       fStack_74 * local_60 - param_3[2] * local_68._4_4_);
  FUN_14001851c(&local_68,&local_58);
  uVar3 = *param_2;
  param_1[2] = *param_3;
  param_1[6] = param_3[1];
  fStack_54 = (float)((ulonglong)uVar3 >> 0x20);
  param_1[10] = param_3[2];
  *param_1 = fVar7;
  param_1[1] = (float)local_68;
  param_1[4] = fVar5;
  param_1[5] = local_68._4_4_;
  param_1[8] = fVar6;
  param_1[9] = local_60;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  local_58 = (float)uVar3;
  fVar1 = *(float *)(param_2 + 1);
  param_1[0xf] = 1.0;
  fVar7 = local_58 * fVar7;
  uVar3 = *param_2;
  local_58 = (float)uVar3;
  fVar8 = local_58 * (float)local_68;
  fVar2 = *(float *)(param_2 + 1);
  param_1[0xc] = -(fStack_54 * fVar5 + fVar7 + fVar1 * fVar6);
  fStack_54 = (float)((ulonglong)uVar3 >> 0x20);
  uVar3 = *param_2;
  uVar4 = *(undefined8 *)param_3;
  local_58 = (float)uVar3;
  local_68._0_4_ = (float)uVar4;
  fVar1 = *(float *)(param_2 + 1);
  fVar7 = param_3[2];
  param_1[0xd] = -(fStack_54 * local_68._4_4_ + fVar8 + fVar2 * local_60);
  fStack_54 = (float)((ulonglong)uVar3 >> 0x20);
  local_68._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  param_1[0xe] = -(fStack_54 * local_68._4_4_ + local_58 * (float)local_68 + fVar1 * fVar7);
  return param_1;
}



/* FUN_1400187f4 @ 1400187f4 (148 bytes) */

float * FUN_1400187f4(float *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  
  param_3 = param_3 - (longlong)param_1;
  lVar7 = 4;
  pfVar3 = param_1;
  do {
    lVar5 = 4;
    pfVar4 = pfVar3;
    do {
      fVar10 = 0.0;
      pfVar9 = (float *)(param_3 + (longlong)pfVar4);
      lVar6 = 4;
      pfVar8 = (float *)((param_2 - (longlong)param_1) + (longlong)pfVar3);
      do {
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        fVar2 = *pfVar9;
        pfVar9 = pfVar9 + 4;
        fVar10 = fVar10 + fVar1 * fVar2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      *pfVar4 = fVar10;
      pfVar4 = pfVar4 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    pfVar3 = pfVar3 + 4;
    param_3 = param_3 + -0x10;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return param_1;
}



/* FUN_140018888 @ 140018888 (174 bytes) */

float * FUN_140018888(float *param_1)

{
  float fVar1;
  void *_Dst;
  float fVar2;
  ulonglong uVar3;
  
  param_1[1] = 0.0;
  *param_1 = 1.61;
  param_1[2] = 1.12104e-44;
  _Dst = malloc(8);
  *(void **)(param_1 + 4) = _Dst;
  fVar1 = param_1[1];
  if ((uint)param_1[2] <= (uint)fVar1) {
    uVar3 = (ulonglong)((float)(uint)param_1[2] * *param_1 + 1.0);
    fVar2 = (float)uVar3;
    if ((uint)param_1[2] <= (uint)fVar2) {
      _Dst = malloc(uVar3 & 0xffffffff);
      fVar1 = param_1[1];
      if (fVar1 != 0.0) {
        memcpy(_Dst,*(void **)(param_1 + 4),(ulonglong)(uint)fVar1);
        free(*(void **)(param_1 + 4));
        fVar1 = param_1[1];
      }
      *(void **)(param_1 + 4) = _Dst;
      param_1[2] = fVar2;
    }
  }
  param_1[1] = (float)((int)fVar1 + 1);
  *(undefined1 *)((ulonglong)(uint)fVar1 + (longlong)_Dst) = 0;
  return param_1;
}



/* FUN_140018938 @ 140018938 (1401 bytes) */

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



/* FUN_140018eb4 @ 140018eb4 (3224 bytes) */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140018eb4(void)

{
  float fVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  SHORT SVar11;
  MMRESULT MVar12;
  BOOL BVar13;
  int iVar14;
  float *pfVar15;
  longlong *_ArgList;
  uintptr_t uVar16;
  undefined8 *puVar17;
  float *pfVar18;
  undefined8 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStackY_8a18 [32];
  uintptr_t local_89b8;
  ulonglong uStack_89b0;
  float local_89a8;
  float fStack_89a4;
  float fStack_89a0;
  undefined4 uStack_899c;
  float local_8998;
  float fStack_8994;
  float fStack_8990;
  undefined4 uStack_898c;
  float local_8988;
  float fStack_8984;
  float fStack_8980;
  undefined4 uStack_897c;
  undefined8 uStack_8978;
  undefined4 uStack_8970;
  undefined4 uStack_896c;
  undefined8 local_8968;
  undefined4 local_8960;
  ulonglong local_8958;
  uint local_8950;
  undefined8 local_8948;
  undefined4 local_8940;
  float local_8938;
  undefined4 uStack_8934;
  undefined8 uStack_8930;
  undefined4 uStack_8928;
  float fStack_8924;
  undefined1 auStack_8920 [16];
  undefined8 local_8910;
  undefined8 uStack_8908;
  undefined4 local_8900;
  undefined4 local_88fc;
  char local_88f8 [8];
  undefined8 local_88f0;
  undefined8 local_88e8;
  longlong *plStack_88e0;
  undefined8 local_88d8;
  undefined8 local_8878;
  undefined8 uStack_8870;
  undefined8 local_8868;
  undefined8 uStack_8860;
  undefined8 local_8858;
  undefined8 uStack_8850;
  undefined8 local_8848;
  undefined8 uStack_8840;
  undefined8 local_8838;
  ulonglong uStack_8830;
  undefined8 local_8828;
  ulonglong uStack_8820;
  undefined8 local_8818;
  ulonglong uStack_8810;
  undefined8 local_8808;
  undefined8 uStack_8800;
  longlong local_87f8;
  undefined8 local_87f0;
  uint uStack_87ec;
  undefined4 local_87e8;
  void *local_87e0;
  undefined4 local_87d8;
  undefined4 local_87d4;
  float local_86c8;
  int iStack_86c4;
  float fStack_86c0;
  undefined4 uStack_86bc;
  float local_86b8;
  float fStack_86b4;
  undefined4 uStack_86b0;
  undefined4 uStack_86ac;
  undefined8 local_86a8;
  undefined8 uStack_86a0;
  undefined8 local_8698;
  undefined8 uStack_8690;
  undefined8 local_8688;
  undefined8 uStack_8680;
  undefined8 local_8678;
  undefined8 uStack_8670;
  undefined8 local_8668;
  undefined8 uStack_8660;
  undefined8 local_8658;
  undefined8 uStack_8650;
  undefined8 local_8648;
  undefined8 uStack_8640;
  undefined8 local_8638;
  undefined8 uStack_8630;
  undefined1 local_8628 [64];
  undefined1 local_85e8 [64];
  undefined1 local_85a8 [64];
  undefined1 local_8568 [64];
  undefined1 local_8528 [64];
  undefined1 local_84e8 [64];
  undefined1 local_84a8 [64];
  undefined1 local_8468 [24];
  undefined8 local_8450;
  undefined8 local_8448;
  undefined1 local_8438 [64];
  undefined8 local_83f8;
  undefined4 uStack_83f0;
  undefined4 uStack_83ec;
  undefined8 local_83e8;
  undefined8 uStack_83e0;
  undefined1 local_83d8 [64];
  undefined1 local_8398 [64];
  undefined1 local_8358 [64];
  undefined1 local_8318 [64];
  undefined1 local_82d8 [64];
  undefined1 local_8298 [64];
  undefined1 local_8258 [64];
  undefined1 local_8218 [64];
  undefined1 local_81d8 [64];
  undefined1 local_8198 [4];
  int local_8194;
  void *local_8188;
  undefined8 local_8180;
  undefined8 local_8178;
  WAVEFORMATEX local_8168;
  mmtime_tag local_8148;
  wavehdr_tag local_8138;
  HWAVEOUT local_8108;
  CHAR local_8100 [32768];
  void *local_100;
  uintptr_t local_f8;
  ulonglong uStack_f0;
  undefined2 local_e8;
  undefined8 local_e6;
  undefined4 local_de;
  ulonglong local_d8;
  
  local_d8 = DAT_140027040 ^ (ulonglong)auStackY_8a18;
  uVar23 = 0;
  DAT_1401857dc = GetSystemMetrics(0);
  DAT_1401857d8 = GetSystemMetrics(1);
  fVar38 = (float)DAT_1401857dc;
  fVar24 = (float)DAT_1401857d8;
  local_88f8[0] = '\0';
  local_88f0 = 0;
  local_88e8 = 0;
  plStack_88e0 = (longlong *)0x0;
  local_88d8 = 0;
  FUN_1400181dc(local_88f8);
  local_83f8._0_4_ = 0;
  local_83f8._4_4_ = 0;
  uStack_83f0 = 0;
  uStack_83ec = 0;
  local_83e8 = 0;
  uStack_83e0 = 0;
  memset(local_83d8,0,0x40);
  memset(local_8398,0,0x40);
  memset(local_8358,0,0x40);
  memset(local_8318,0,0x40);
  memset(local_82d8,0,0x40);
  memset(local_8298,0,0x40);
  memset(local_8258,0,0x40);
  memset(local_8218,0,0x40);
  memset(local_81d8,0,0x40);
  FUN_140018888(local_8198);
  uVar5 = local_88e8;
  uVar4 = local_88f0;
  local_8180 = local_88f0;
  local_8178 = local_88e8;
  lVar20 = 4;
  pfVar18 = &local_86c8;
  puVar17 = &local_83f8;
  do {
    puVar19 = puVar17;
    pfVar15 = pfVar18;
    uVar3 = puVar19[1];
    *(undefined8 *)pfVar15 = *puVar19;
    *(undefined8 *)(pfVar15 + 2) = uVar3;
    uVar3 = puVar19[3];
    *(undefined8 *)(pfVar15 + 4) = puVar19[2];
    *(undefined8 *)(pfVar15 + 6) = uVar3;
    uVar3 = puVar19[5];
    *(undefined8 *)(pfVar15 + 8) = puVar19[4];
    *(undefined8 *)(pfVar15 + 10) = uVar3;
    uVar3 = puVar19[7];
    *(undefined8 *)(pfVar15 + 0xc) = puVar19[6];
    *(undefined8 *)(pfVar15 + 0xe) = uVar3;
    uVar3 = puVar19[9];
    *(undefined8 *)(pfVar15 + 0x10) = puVar19[8];
    *(undefined8 *)(pfVar15 + 0x12) = uVar3;
    uVar3 = puVar19[0xb];
    *(undefined8 *)(pfVar15 + 0x14) = puVar19[10];
    *(undefined8 *)(pfVar15 + 0x16) = uVar3;
    uVar3 = puVar19[0xd];
    *(undefined8 *)(pfVar15 + 0x18) = puVar19[0xc];
    *(undefined8 *)(pfVar15 + 0x1a) = uVar3;
    uVar3 = puVar19[0xf];
    *(undefined8 *)(pfVar15 + 0x1c) = puVar19[0xe];
    *(undefined8 *)(pfVar15 + 0x1e) = uVar3;
    lVar20 = lVar20 + -1;
    pfVar18 = pfVar15 + 0x20;
    puVar17 = puVar19 + 0x10;
  } while (lVar20 != 0);
  uVar3 = puVar19[0x11];
  *(undefined8 *)(pfVar15 + 0x20) = puVar19[0x10];
  *(undefined8 *)(pfVar15 + 0x22) = uVar3;
  uVar3 = puVar19[0x13];
  *(undefined8 *)(pfVar15 + 0x24) = puVar19[0x12];
  *(undefined8 *)(pfVar15 + 0x26) = uVar3;
  uVar3 = puVar19[0x15];
  *(undefined8 *)(pfVar15 + 0x28) = puVar19[0x14];
  *(undefined8 *)(pfVar15 + 0x2a) = uVar3;
  uVar3 = puVar19[0x17];
  *(undefined8 *)(pfVar15 + 0x2c) = puVar19[0x16];
  *(undefined8 *)(pfVar15 + 0x2e) = uVar3;
  uVar3 = puVar19[0x19];
  *(undefined8 *)(pfVar15 + 0x30) = puVar19[0x18];
  *(undefined8 *)(pfVar15 + 0x32) = uVar3;
  uVar3 = puVar19[0x1b];
  *(undefined8 *)(pfVar15 + 0x34) = puVar19[0x1a];
  *(undefined8 *)(pfVar15 + 0x36) = uVar3;
  FUN_140001144(local_8468,local_8198);
  local_8450 = uVar4;
  local_8448 = uVar5;
  FUN_14001a544(&local_86c8);
  if (local_8194 != 0) {
    free(local_8188);
  }
  local_87f0 = 0x3fce147b;
  local_87e8 = 8;
  local_87e0 = malloc(0x8c0);
  local_87d8 = 0x42f00000;
  local_87d4 = 8;
  FUN_140001534(&local_87f8,DAT_1401857dc,DAT_1401857d8);
  FUN_140018938(local_87f8);
  *(undefined8 *)(*(longlong *)(local_87f8 + 0x98) + 0x58) = local_88d8;
  fVar35 = 0.0;
  local_8138.lpData = (CHAR *)0x0;
  local_8138.dwBufferLength = 0;
  local_8138.dwBytesRecorded = 0;
  local_8138.dwUser = 0;
  local_8138.dwFlags = 0;
  local_8138.dwLoops = 0;
  local_8138.lpNext = (wavehdr_tag *)0x0;
  local_8138.reserved = 0;
  local_8108 = (HWAVEOUT)0x0;
  local_100 = (void *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e6 = 2;
  local_de = 0;
  local_8168.nBlockAlign = 8;
  local_8168.wBitsPerSample = 0x20;
  local_8168.wFormatTag = 3;
  local_8168.nChannels = 2;
  local_8168.nSamplesPerSec = 0xac44;
  local_8168.nAvgBytesPerSec = 0x56220;
  local_8168.cbSize = 0;
  MVar12 = waveOutOpen(&local_8108,0xffffffff,&local_8168,0,0,0);
  uVar22 = uVar23;
  if (MVar12 == 0) {
    local_8138.lpData = local_8100;
    local_8138.dwBufferLength = 0x8000;
    local_8138.dwBytesRecorded = 0;
    local_8138.dwUser = 0;
    local_8138.dwFlags = 0xc;
    local_8138.dwLoops = 0xffffffff;
    waveOutPrepareHeader(local_8108,&local_8138,0x30);
    FUN_14001da90(&local_100,&DAT_14073a140,0x27357,0xac44);
    FUN_14001dc30(local_100,1);
    FUN_14001e110(local_100,local_8100,0x1000);
    _ArgList = (longlong *)operator_new(8);
    *_ArgList = (longlong)&local_8138;
    uVar16 = _beginthreadex((void *)0x0,0,FUN_140019c14,_ArgList,0,(uint *)&uStack_89b0);
    uVar21 = uStack_89b0;
    local_89b8 = uVar16;
    if (uVar16 == 0) {
      uStack_89b0 = uStack_89b0 & 0xffffffff00000000;
      std::_Throw_Cpp_error(6);
      fVar36 = fVar35;
      goto LAB_140019397;
    }
    if ((int)uStack_f0 != 0) {
                    /* WARNING: Subroutine does not return */
      terminate();
    }
    local_89b8 = 0;
    uStack_89b0 = 0;
    uStack_f0 = uVar21;
    local_e8 = CONCAT11(local_e8._1_1_,1);
    uVar22 = 0;
    local_f8 = uVar16;
  }
  while (fVar36 = fVar35, local_88f8[0] == '\0') {
    while (BVar13 = PeekMessageW((LPMSG)&local_89a8,(HWND)0x0,0,0,1), BVar13 != 0) {
LAB_140019397:
      TranslateMessage((MSG *)&local_89a8);
      DispatchMessageW((MSG *)&local_89a8);
      if (fStack_89a0 == 2.52234e-44) {
        local_88f8[0] = '\x01';
      }
    }
    if (local_88f8[0] == '\0') {
      SVar11 = GetAsyncKeyState(0x1b);
      local_88f8[0] = '\0';
      if (SVar11 != 0) goto LAB_1400193f1;
    }
    else {
LAB_1400193f1:
      local_88f8[0] = '\x01';
    }
    if ((char)local_e8 != '\0') {
      waveOutWrite(local_8108,&local_8138,0x30);
      local_e8 = local_e8 & 0xff00;
    }
    local_8148.u = (_union_1042)0x0;
    local_8148.wType = 4;
    waveOutGetPosition(local_8108,&local_8148,0xc);
    fVar35 = (float)((double)((ulonglong)local_8148.u >> 3 & 0x1fffffff) / 44100.0);
    if (67.0 <= fVar35) break;
    uVar25 = FUN_14001c744(&stack0xffffffffffff7810,0,fVar35);
    uVar26 = FUN_14001c744(&stack0xffffffffffff7810,1,fVar35);
    uVar27 = FUN_14001c744(&stack0xffffffffffff7810,2,fVar35);
    uVar28 = FUN_14001c744(&stack0xffffffffffff7810,3,fVar35);
    uVar29 = FUN_14001c744(&stack0xffffffffffff7810,4,fVar35);
    uVar30 = FUN_14001c744(&stack0xffffffffffff7810,5,fVar35);
    fVar31 = (float)FUN_14001c744(&stack0xffffffffffff7810,6,fVar35);
    fVar32 = (float)FUN_14001c744(&stack0xffffffffffff7810,7,fVar35);
    fStack_8924 = tanf(fVar31 * 0.017453292 * 0.5);
    fStack_8924 = 1.0 / fStack_8924;
    local_8938 = fStack_8924 / (fVar38 / fVar24);
    uStack_8934 = 0;
    uStack_8930 = 0;
    uStack_8928 = 0;
    auStack_8920 = ZEXT416(0);
    local_8910 = 0xbf800000bf800347;
    uStack_8908 = 0;
    local_8900 = 0xbdccd20b;
    local_88fc = 0;
    local_8950 = uVar30 ^ 0x80000000;
    local_8968 = 0x3f80000000000000;
    local_8960 = 0;
    local_8958 = CONCAT44(uVar29,uVar28) ^ 0x8000000080000000;
    local_8948 = CONCAT44(uVar26,uVar25);
    local_8940 = uVar27;
    puVar17 = (undefined8 *)FUN_14001859c(&local_8878,&local_8948,&local_8958);
    uVar4 = *puVar17;
    uVar5 = puVar17[1];
    uVar3 = puVar17[2];
    uVar6 = puVar17[3];
    uVar7 = puVar17[4];
    uVar8 = puVar17[5];
    uVar9 = puVar17[6];
    uVar10 = puVar17[7];
    fVar34 = (fVar32 / 180.0) * 3.1415927;
    local_8168.wFormatTag = 0;
    local_8168.nChannels = 0;
    local_8168.nSamplesPerSec = 0;
    local_8168.nAvgBytesPerSec = 0x3f800000;
    pfVar18 = (float *)FUN_14001851c(&local_89b8,&local_8168);
    fVar31 = *pfVar18;
    fVar32 = pfVar18[1];
    fVar1 = pfVar18[2];
    fVar33 = cosf(fVar34);
    fVar34 = sinf(fVar34);
    fVar37 = 1.0 - fVar33;
    local_89a8 = fVar31 * fVar31 * fVar37 + fVar33;
    local_8998 = fVar31 * fVar32 * fVar37;
    fStack_89a4 = local_8998 + fVar1 * fVar34;
    local_8988 = fVar31 * fVar1 * fVar37;
    fStack_89a0 = local_8988 - fVar32 * fVar34;
    uStack_899c = 0;
    local_8998 = local_8998 - fVar1 * fVar34;
    fStack_8994 = fVar32 * fVar32 * fVar37 + fVar33;
    fStack_8984 = fVar32 * fVar1 * fVar37;
    fStack_8990 = fStack_8984 + fVar31 * fVar34;
    uStack_898c = 0;
    local_8988 = local_8988 + fVar32 * fVar34;
    fStack_8984 = fStack_8984 - fVar31 * fVar34;
    fStack_8980 = fVar1 * fVar1 * fVar37 + fVar33;
    uStack_897c = 0;
    uStack_8978 = 0;
    uStack_8970 = 0;
    uStack_896c = 0x3f800000;
    local_8838 = CONCAT44(fStack_89a4,local_89a8);
    uStack_8830 = (ulonglong)(uint)fStack_89a0;
    local_8828 = CONCAT44(fStack_8994,local_8998);
    uStack_8820 = (ulonglong)(uint)fStack_8990;
    local_8818 = CONCAT44(fStack_8984,local_8988);
    uStack_8810 = (ulonglong)(uint)fStack_8980;
    uStack_8800 = 0x3f80000000000000;
    local_8808 = 0;
    local_8878 = uVar4;
    uStack_8870 = uVar5;
    local_8868 = uVar3;
    uStack_8860 = uVar6;
    local_8858 = uVar7;
    uStack_8850 = uVar8;
    local_8848 = uVar9;
    uStack_8840 = uVar10;
    puVar17 = (undefined8 *)FUN_1400187f4(local_8438,&local_8878,&local_8838);
    iStack_86c4 = (int)uVar22;
    uVar22 = (ulonglong)(iStack_86c4 + 1);
    uStack_86bc = 0;
    fStack_86b4 = (float)DAT_1401857d8;
    local_86b8 = (float)DAT_1401857dc;
    uStack_86b0 = 0;
    uStack_86ac = 0;
    local_86a8 = *puVar17;
    uStack_86a0 = puVar17[1];
    local_8698 = puVar17[2];
    uStack_8690 = puVar17[3];
    local_8688 = puVar17[4];
    uStack_8680 = puVar17[5];
    local_8678 = puVar17[6];
    uStack_8670 = puVar17[7];
    local_8668 = CONCAT44(uStack_8934,local_8938);
    uStack_8660 = uStack_8930;
    local_8658 = CONCAT44(fStack_8924,uStack_8928);
    uStack_8650 = auStack_8920._0_8_;
    local_8648 = auStack_8920._8_8_;
    uStack_8640 = local_8910;
    uStack_8630 = CONCAT44(local_88fc,local_8900);
    local_8638 = uStack_8908;
    local_86c8 = fVar35;
    fStack_86c0 = fVar35 - fVar36;
    memset(local_8628,0,0x40);
    memset(local_85e8,0,0x40);
    memset(local_85a8,0,0x40);
    memset(local_8568,0,0x40);
    memset(local_8528,0,0x40);
    memset(local_84e8,0,0x40);
    memset(local_84a8,0,0x40);
    lVar20 = 4;
    puVar17 = &local_83f8;
    pfVar18 = &local_86c8;
    do {
      pfVar15 = pfVar18;
      puVar19 = puVar17;
      uVar4 = *(undefined8 *)(pfVar15 + 2);
      *puVar19 = *(undefined8 *)pfVar15;
      puVar19[1] = uVar4;
      uVar4 = *(undefined8 *)(pfVar15 + 6);
      puVar19[2] = *(undefined8 *)(pfVar15 + 4);
      puVar19[3] = uVar4;
      uVar4 = *(undefined8 *)(pfVar15 + 10);
      puVar19[4] = *(undefined8 *)(pfVar15 + 8);
      puVar19[5] = uVar4;
      uVar4 = *(undefined8 *)(pfVar15 + 0xe);
      puVar19[6] = *(undefined8 *)(pfVar15 + 0xc);
      puVar19[7] = uVar4;
      uVar4 = *(undefined8 *)(pfVar15 + 0x12);
      puVar19[8] = *(undefined8 *)(pfVar15 + 0x10);
      puVar19[9] = uVar4;
      uVar4 = *(undefined8 *)(pfVar15 + 0x16);
      puVar19[10] = *(undefined8 *)(pfVar15 + 0x14);
      puVar19[0xb] = uVar4;
      uVar4 = *(undefined8 *)(pfVar15 + 0x1a);
      puVar19[0xc] = *(undefined8 *)(pfVar15 + 0x18);
      puVar19[0xd] = uVar4;
      uVar4 = *(undefined8 *)(pfVar15 + 0x1e);
      puVar19[0xe] = *(undefined8 *)(pfVar15 + 0x1c);
      puVar19[0xf] = uVar4;
      lVar20 = lVar20 + -1;
      puVar17 = puVar19 + 0x10;
      pfVar18 = pfVar15 + 0x20;
    } while (lVar20 != 0);
    uVar4 = *(undefined8 *)(pfVar15 + 0x22);
    puVar19[0x10] = *(undefined8 *)(pfVar15 + 0x20);
    puVar19[0x11] = uVar4;
    uVar4 = *(undefined8 *)(pfVar15 + 0x26);
    puVar19[0x12] = *(undefined8 *)(pfVar15 + 0x24);
    puVar19[0x13] = uVar4;
    uVar4 = *(undefined8 *)(pfVar15 + 0x2a);
    puVar19[0x14] = *(undefined8 *)(pfVar15 + 0x28);
    puVar19[0x15] = uVar4;
    uVar4 = *(undefined8 *)(pfVar15 + 0x2e);
    puVar19[0x16] = *(undefined8 *)(pfVar15 + 0x2c);
    puVar19[0x17] = uVar4;
    uVar4 = *(undefined8 *)(pfVar15 + 0x32);
    puVar19[0x18] = *(undefined8 *)(pfVar15 + 0x30);
    puVar19[0x19] = uVar4;
    uVar4 = *(undefined8 *)(pfVar15 + 0x36);
    puVar19[0x1a] = *(undefined8 *)(pfVar15 + 0x34);
    puVar19[0x1b] = uVar4;
    FUN_14001a9e8(&local_83f8);
    if (uStack_87ec != 0) {
      lVar20 = *(longlong *)(local_87f8 + 0x10);
      uVar21 = uVar23;
      do {
        uVar25 = FUN_14001c744(&stack0xffffffffffff7810,uVar21,fVar35);
        *(undefined4 *)(uVar21 * 0x114 + 0x104 + lVar20) = uVar25;
        uVar30 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar30;
      } while (uVar30 < uStack_87ec);
    }
    FUN_14001c448(local_87f8);
    (**(code **)(*plStack_88e0 + 0x40))();
  }
  local_e8 = CONCAT11(1,(char)local_e8);
  if ((int)uStack_f0 == 0) {
    std::_Throw_Cpp_error(1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar14 = _Thrd_id();
  if ((int)uStack_f0 == iVar14) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_89b8 = local_f8;
  uStack_89b0 = uStack_f0;
  iVar14 = _Thrd_join(&local_89b8,0);
  if (iVar14 != 0) {
    std::_Throw_Cpp_error(2);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  if (local_8108 != (HWAVEOUT)0x0) {
    waveOutPause(local_8108);
    waveOutReset(local_8108);
    waveOutClose(local_8108);
  }
  if (local_100 != (void *)0x0) {
    free(local_100);
  }
  if ((int)uStack_f0 == 0) {
    FUN_140019b94(&stack0xffffffffffff7810);
    FUN_14001cb70(local_d8 ^ (ulonglong)auStackY_8a18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}



/* FUN_140019b4c @ 140019b4c (31 bytes) */

void FUN_140019b4c(longlong param_1)

{
  if (*(int *)(param_1 + 0x264) != 0) {
    free(*(void **)(param_1 + 0x270));
  }
  return;
}



/* FUN_140019b78 @ 140019b78 (25 bytes) */

void FUN_140019b78(longlong param_1)

{
  if (*(int *)(param_1 + 0x8048) != 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return;
}



/* FUN_140019b94 @ 140019b94 (99 bytes) */

void FUN_140019b94(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      do {
        lVar1 = uVar3 * 0x118 + *(longlong *)(param_1 + 0x10);
        if (*(int *)(lVar1 + 0x104) != 0) {
          free(*(void **)(lVar1 + 0x110));
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 4));
    }
    free(*(void **)(param_1 + 0x10));
  }
  return;
}



/* FUN_140019bf8 @ 140019bf8 (27 bytes) */

void FUN_140019bf8(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  return;
}



/* FUN_140019c14 @ 140019c14 (296 bytes) */

void FUN_140019c14(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  HANDLE hThread;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  mmtime_tag local_38;
  ulonglong local_28;
  
  local_28 = DAT_140027040 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  hThread = GetCurrentThread();
  SetThreadPriority(hThread,0xf);
  uVar4 = 0;
  cVar1 = *(char *)(lVar2 + 0x8051);
  while (cVar1 == '\0') {
    local_38.u = (_union_1042)0x0;
    local_38.wType = 4;
    waveOutGetPosition(*(HWAVEOUT *)(lVar2 + 0x30),&local_38,0xc);
    uVar5 = local_38.u.ms >> 3;
    if ((uVar4 < uVar5) && (uVar6 = uVar5 - uVar4, uVar6 != 0)) {
      do {
        uVar3 = 0x1000;
        if ((uVar4 & 0xfffff000) != (uVar5 & 0xfffff000)) {
          uVar3 = 0x1000 - (uVar4 & 0xfff);
        }
        if (uVar6 <= uVar3) {
          uVar3 = uVar6;
        }
        FUN_14001e110(*(undefined8 *)(lVar2 + 0x8038),
                      lVar2 + 0x38 + (ulonglong)((uVar4 & 0xfff) * 2) * 4,uVar3);
        uVar4 = uVar4 + uVar3;
        uVar6 = uVar6 - uVar3;
      } while (uVar6 != 0);
    }
    Sleep(5);
    cVar1 = *(char *)(lVar2 + 0x8051);
  }
  _Cnd_do_broadcast_at_thread_exit();
  free(param_1);
  FUN_14001cb70(local_28 ^ (ulonglong)auStack_58);
  return;
}



/* FUN_140019d3c @ 140019d3c (2055 bytes) */

float * FUN_140019d3c(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  fVar20 = param_2[9];
  fVar3 = param_2[0xd];
  fVar4 = param_2[3];
  fVar5 = param_2[5];
  fVar6 = param_2[7];
  fVar7 = param_2[0xe];
  fVar8 = param_2[0xf];
  fVar9 = param_2[0xb];
  fVar25 = param_2[10];
  fVar34 = param_2[1];
  fVar10 = param_2[6];
  fVar26 = (((param_2[5] * fVar25 * fVar8 - fVar9 * param_2[5] * fVar7) -
            param_2[6] * fVar20 * fVar8) + fVar6 * fVar20 * fVar7 + fVar3 * param_2[6] * fVar9) -
           fVar3 * fVar6 * fVar25;
  *param_1 = fVar26;
  fVar11 = param_2[2];
  fVar12 = param_2[5];
  param_1[1] = ((((fVar34 * fVar9 * fVar7 - fVar34 * fVar25 * fVar8) + fVar8 * fVar11 * fVar20) -
                fVar7 * fVar4 * fVar20) - fVar9 * fVar11 * fVar3) + fVar25 * fVar4 * fVar3;
  fVar13 = param_2[6];
  fVar14 = *param_2;
  param_1[2] = (((fVar8 * fVar34 * fVar10 - fVar7 * fVar34 * fVar6) - fVar8 * fVar11 * fVar12) +
                fVar7 * fVar4 * fVar5 + fVar6 * fVar11 * fVar3) - param_2[6] * fVar4 * fVar3;
  fVar3 = param_2[8];
  fVar7 = param_2[0xe];
  fVar15 = param_2[4];
  fVar16 = param_2[0xc];
  fVar17 = param_2[7];
  param_1[3] = ((((fVar25 * fVar34 * fVar6 - fVar9 * fVar34 * fVar10) + fVar9 * fVar11 * fVar12) -
                fVar25 * fVar4 * fVar5) - fVar6 * fVar11 * fVar20) + fVar13 * fVar4 * fVar20;
  fVar23 = ((((fVar7 * fVar15 * fVar9 - fVar8 * fVar15 * fVar25) + fVar8 * fVar3 * fVar13) -
            fVar7 * fVar3 * fVar6) - fVar9 * fVar16 * fVar13) + param_2[10] * fVar16 * fVar17;
  fVar19 = fVar14 * param_2[10];
  param_1[4] = fVar23;
  fVar31 = fVar3 * param_2[2];
  fVar21 = fVar16 * param_2[2];
  fVar35 = fVar16 * param_2[3];
  fVar36 = fVar3 * param_2[3];
  fVar27 = fVar14 * param_2[6];
  fVar32 = fVar14 * param_2[7];
  fVar20 = param_2[0xf];
  fVar28 = fVar15 * param_2[2];
  fVar33 = fVar15 * param_2[3];
  param_1[5] = (((param_2[0xf] * fVar19 - fVar7 * fVar14 * fVar9) - param_2[0xf] * fVar31) +
                fVar7 * fVar36 + param_2[0xb] * fVar21) - param_2[10] * fVar35;
  fVar4 = param_2[0xb];
  fVar5 = param_2[4];
  fVar7 = param_2[9];
  param_1[6] = ((((param_2[0xe] * fVar32 - fVar20 * fVar27) + fVar20 * fVar28) -
                param_2[0xe] * fVar33) - param_2[7] * fVar21) + param_2[6] * fVar35;
  fVar20 = param_2[8];
  fVar29 = fVar20 * param_2[5];
  fVar8 = param_2[5];
  param_1[7] = (((fVar4 * fVar27 - param_2[10] * fVar32) - fVar4 * fVar28) + param_2[10] * fVar33 +
               param_2[7] * fVar31) - param_2[6] * fVar36;
  fVar20 = fVar20 * fVar34;
  fVar4 = param_2[0xd];
  fVar10 = *param_2;
  fVar24 = param_2[4] * fVar34;
  fVar11 = param_2[0xb];
  fVar22 = fVar10 * param_2[9];
  fVar12 = param_2[0xf];
  fVar34 = param_2[0xc] * fVar34;
  fVar37 = (((param_2[0xf] * fVar5 * fVar7 - param_2[0xd] * fVar15 * fVar9) - param_2[0xf] * fVar29)
            + param_2[0xd] * fVar3 * fVar6 + fVar11 * fVar16 * fVar8) - param_2[9] * fVar16 * fVar17
  ;
  param_1[8] = fVar37;
  fVar30 = fVar10 * param_2[5];
  fVar6 = param_2[0xf];
  fVar17 = param_2[0xd];
  param_1[9] = ((((fVar4 * fVar14 * fVar9 - fVar12 * fVar22) + fVar12 * fVar20) -
                param_2[0xd] * fVar36) - fVar11 * fVar34) + param_2[9] * fVar35;
  fVar4 = param_2[9];
  param_1[10] = (((fVar6 * fVar30 - fVar17 * fVar32) - fVar6 * fVar24) + param_2[0xd] * fVar33 +
                param_2[7] * fVar34) - param_2[5] * fVar35;
  fVar6 = param_2[9];
  fVar9 = param_2[0xd];
  fVar11 = param_2[0xe];
  param_1[0xb] = ((((fVar4 * fVar32 - param_2[0xb] * fVar30) + param_2[0xb] * fVar24) -
                  fVar6 * fVar33) - param_2[7] * fVar20) + param_2[5] * fVar36;
  fVar4 = param_2[10];
  fVar25 = ((((fVar9 * fVar15 * fVar25 - fVar11 * fVar5 * fVar7) + fVar11 * fVar29) -
            fVar9 * fVar3 * fVar13) - fVar4 * fVar16 * fVar8) + fVar6 * fVar16 * fVar13;
  param_1[0xc] = fVar25;
  param_1[0xd] = (((fVar11 * fVar22 - fVar9 * fVar19) - fVar11 * fVar20) + fVar9 * fVar31 +
                 fVar4 * fVar34) - param_2[9] * fVar21;
  fVar3 = param_2[6];
  fVar5 = param_2[5];
  fVar6 = param_2[9];
  param_1[0xe] = ((((fVar9 * fVar27 - fVar11 * fVar30) + fVar11 * fVar24) - fVar9 * fVar28) -
                 fVar3 * fVar34) + fVar5 * fVar21;
  fVar7 = param_2[2];
  lVar18 = 0;
  fVar8 = param_2[1];
  param_1[0xf] = (((fVar4 * fVar30 - fVar6 * fVar27) - fVar4 * fVar24) + fVar6 * fVar28 +
                 fVar3 * fVar20) - fVar5 * fVar31;
  fVar20 = 1.0 / (fVar8 * fVar23 + fVar10 * fVar26 + fVar7 * fVar37 + param_2[3] * fVar25);
  do {
    pfVar1 = param_1 + lVar18;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
    fVar5 = pfVar1[3];
    pfVar2 = param_1 + lVar18;
    *pfVar2 = *pfVar1 * fVar20;
    pfVar2[1] = fVar3 * fVar20;
    pfVar2[2] = fVar4 * fVar20;
    pfVar2[3] = fVar5 * fVar20;
    lVar18 = lVar18 + 4;
  } while (lVar18 < 0x10);
  return param_1;
}



/* FUN_14001a544 @ 14001a544 (590 bytes) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001a544(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *_Memory;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined1 local_a0 [24];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_140027040 ^ (ulonglong)auStack_c8;
  lVar4 = param_1;
  local_a8 = param_1;
  FUN_14001a794(param_1,param_1);
  lVar3 = FUN_140001144(local_a0,lVar4 + 0x260);
  uVar1 = *(undefined4 *)(lVar3 + 4);
  _DAT_140762608 = *(undefined4 *)(lVar3 + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined4 *)(lVar3 + 8) = 0;
  *(undefined4 *)(lVar3 + 4) = 0;
  _Memory = DAT_140762610;
  bVar5 = DAT_140762604 != 0;
  DAT_140762604 = uVar1;
  DAT_140762610 = (void *)uVar2;
  if (bVar5) {
    free(_Memory);
  }
  if (*(int *)(lVar3 + 4) != 0) {
    free(*(void **)(lVar3 + 0x10));
  }
  DAT_140762618 = *(undefined8 *)(param_1 + 0x278);
  DAT_140762620 = *(undefined8 *)(param_1 + 0x280);
  memset(&local_88,0,0x34);
  local_88 = 0x300000015;
  uStack_80 = 0x300000003;
  local_6c = 0;
  uStack_64 = 0;
  local_70 = 1;
  local_74 = 1;
  local_5c = 0xff7fffff;
  local_58 = 0x7f7fffff;
  local_78 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0xb8))
            (*(longlong **)(param_1 + 0x278),&local_88,local_50);
  local_88 = CONCAT44(4,(undefined4)local_88);
  uStack_80 = 0x400000004;
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0xb8))
            (*(longlong **)(param_1 + 0x278),&local_88,local_48);
  local_88 = CONCAT44(1,(undefined4)local_88);
  uStack_80 = 0x100000001;
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0xb8))
            (*(longlong **)(param_1 + 0x278),&local_88,local_40);
  local_88 = 0x300000000;
  uStack_80 = 0x300000003;
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0xb8))
            (*(longlong **)(param_1 + 0x278),&local_88,local_38);
  local_88 = CONCAT44(4,(undefined4)local_88);
  uStack_80 = 0x400000004;
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0xb8))
            (*(longlong **)(param_1 + 0x278),&local_88,local_30);
  local_88 = CONCAT44(1,(undefined4)local_88);
  uStack_80 = 0x100000001;
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0xb8))
            (*(longlong **)(param_1 + 0x278),&local_88,local_28);
  (**(code **)(**(longlong **)(param_1 + 0x280) + 0xd0))
            (*(longlong **)(param_1 + 0x280),0,6,local_50);
  (**(code **)(**(longlong **)(param_1 + 0x280) + 0x50))
            (*(longlong **)(param_1 + 0x280),0,6,local_50);
  (**(code **)(**(longlong **)(param_1 + 0x280) + 0x230))
            (*(longlong **)(param_1 + 0x280),0,6,local_50);
  if (*(int *)(lVar4 + 0x264) != 0) {
    free(*(void **)(lVar4 + 0x270));
  }
  FUN_14001cb70(local_20 ^ (ulonglong)auStack_c8);
  return;
}



/* FUN_14001a794 @ 14001a794 (593 bytes) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14001a794(undefined8 param_1,undefined4 *param_2)

{
  DAT_1407623a0 = *param_2;
  _DAT_1407623a4 = param_2[1];
  _DAT_1407623a8 = param_2[2];
  _DAT_1407623ac = param_2[3];
  _DAT_1407623b0 = param_2[4];
  _DAT_1407623b4 = param_2[5];
  _DAT_1407623b8 = param_2[6];
  DAT_1407623bc = param_2[7];
  _DAT_1407623c0 = *(undefined8 *)(param_2 + 8);
  uRam00000001407623c8 = *(undefined8 *)(param_2 + 10);
  _DAT_1407623d0 = *(undefined8 *)(param_2 + 0xc);
  uRam00000001407623d8 = *(undefined8 *)(param_2 + 0xe);
  _DAT_1407623e0 = *(undefined8 *)(param_2 + 0x10);
  uRam00000001407623e8 = *(undefined8 *)(param_2 + 0x12);
  _DAT_1407623f0 = *(undefined8 *)(param_2 + 0x14);
  uRam00000001407623f8 = *(undefined8 *)(param_2 + 0x16);
  _DAT_140762400 = *(undefined8 *)(param_2 + 0x18);
  uRam0000000140762408 = *(undefined8 *)(param_2 + 0x1a);
  _DAT_140762410 = *(undefined8 *)(param_2 + 0x1c);
  uRam0000000140762418 = *(undefined8 *)(param_2 + 0x1e);
  _DAT_140762420 = *(undefined8 *)(param_2 + 0x20);
  uRam0000000140762428 = *(undefined8 *)(param_2 + 0x22);
  _DAT_140762430 = *(undefined8 *)(param_2 + 0x24);
  uRam0000000140762438 = *(undefined8 *)(param_2 + 0x26);
  _DAT_140762440 = *(undefined8 *)(param_2 + 0x28);
  uRam0000000140762448 = *(undefined8 *)(param_2 + 0x2a);
  _DAT_140762450 = *(undefined8 *)(param_2 + 0x2c);
  uRam0000000140762458 = *(undefined8 *)(param_2 + 0x2e);
  _DAT_140762460 = *(undefined8 *)(param_2 + 0x30);
  uRam0000000140762468 = *(undefined8 *)(param_2 + 0x32);
  _DAT_140762470 = *(undefined8 *)(param_2 + 0x34);
  uRam0000000140762478 = *(undefined8 *)(param_2 + 0x36);
  _DAT_140762480 = *(undefined8 *)(param_2 + 0x38);
  uRam0000000140762488 = *(undefined8 *)(param_2 + 0x3a);
  _DAT_140762490 = *(undefined8 *)(param_2 + 0x3c);
  uRam0000000140762498 = *(undefined8 *)(param_2 + 0x3e);
  _DAT_1407624a0 = *(undefined8 *)(param_2 + 0x40);
  uRam00000001407624a8 = *(undefined8 *)(param_2 + 0x42);
  _DAT_1407624b0 = *(undefined8 *)(param_2 + 0x44);
  uRam00000001407624b8 = *(undefined8 *)(param_2 + 0x46);
  _DAT_1407624c0 = *(undefined8 *)(param_2 + 0x48);
  uRam00000001407624c8 = *(undefined8 *)(param_2 + 0x4a);
  _DAT_1407624d0 = *(undefined8 *)(param_2 + 0x4c);
  uRam00000001407624d8 = *(undefined8 *)(param_2 + 0x4e);
  _DAT_1407624e0 = *(undefined8 *)(param_2 + 0x50);
  uRam00000001407624e8 = *(undefined8 *)(param_2 + 0x52);
  _DAT_1407624f0 = *(undefined8 *)(param_2 + 0x54);
  uRam00000001407624f8 = *(undefined8 *)(param_2 + 0x56);
  _DAT_140762500 = *(undefined8 *)(param_2 + 0x58);
  uRam0000000140762508 = *(undefined8 *)(param_2 + 0x5a);
  _DAT_140762510 = *(undefined8 *)(param_2 + 0x5c);
  uRam0000000140762518 = *(undefined8 *)(param_2 + 0x5e);
  _DAT_140762520 = *(undefined8 *)(param_2 + 0x60);
  uRam0000000140762528 = *(undefined8 *)(param_2 + 0x62);
  _DAT_140762530 = *(undefined8 *)(param_2 + 100);
  uRam0000000140762538 = *(undefined8 *)(param_2 + 0x66);
  _DAT_140762540 = *(undefined8 *)(param_2 + 0x68);
  uRam0000000140762548 = *(undefined8 *)(param_2 + 0x6a);
  _DAT_140762550 = *(undefined8 *)(param_2 + 0x6c);
  uRam0000000140762558 = *(undefined8 *)(param_2 + 0x6e);
  _DAT_140762560 = *(undefined8 *)(param_2 + 0x70);
  uRam0000000140762568 = *(undefined8 *)(param_2 + 0x72);
  _DAT_140762570 = *(undefined8 *)(param_2 + 0x74);
  uRam0000000140762578 = *(undefined8 *)(param_2 + 0x76);
  _DAT_140762580 = *(undefined8 *)(param_2 + 0x78);
  uRam0000000140762588 = *(undefined8 *)(param_2 + 0x7a);
  _DAT_140762590 = *(undefined8 *)(param_2 + 0x7c);
  uRam0000000140762598 = *(undefined8 *)(param_2 + 0x7e);
  _DAT_1407625a0 = *(undefined8 *)(param_2 + 0x80);
  uRam00000001407625a8 = *(undefined8 *)(param_2 + 0x82);
  _DAT_1407625b0 = *(undefined8 *)(param_2 + 0x84);
  uRam00000001407625b8 = *(undefined8 *)(param_2 + 0x86);
  _DAT_1407625c0 = *(undefined8 *)(param_2 + 0x88);
  uRam00000001407625c8 = *(undefined8 *)(param_2 + 0x8a);
  _DAT_1407625d0 = *(undefined8 *)(param_2 + 0x8c);
  uRam00000001407625d8 = *(undefined8 *)(param_2 + 0x8e);
  _DAT_1407625e0 = *(undefined8 *)(param_2 + 0x90);
  uRam00000001407625e8 = *(undefined8 *)(param_2 + 0x92);
  _DAT_1407625f0 = *(undefined8 *)(param_2 + 0x94);
  uRam00000001407625f8 = *(undefined8 *)(param_2 + 0x96);
  return &DAT_1407623a0;
}



/* FUN_14001a9e8 @ 14001a9e8 (738 bytes) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001a9e8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [64];
  
  _DAT_1407623b0 = (float)param_1[4];
  DAT_1407623a0 = *param_1;
  _DAT_1407623b4 = (float)param_1[5];
  _DAT_1407623a4 = param_1[1];
  _DAT_1407623a8 = param_1[2];
  _DAT_1407623b8 = 1.0 / _DAT_1407623b0;
  _DAT_140762540 = _DAT_1407623c0;
  uRam0000000140762548 = uRam00000001407623c8;
  _DAT_140762550 = _DAT_1407623d0;
  uRam0000000140762558 = uRam00000001407623d8;
  _DAT_140762560 = _DAT_1407623e0;
  uRam0000000140762568 = uRam00000001407623e8;
  _DAT_140762570 = _DAT_1407623f0;
  uRam0000000140762578 = uRam00000001407623f8;
  _DAT_140762580 = _DAT_140762400;
  uRam0000000140762588 = uRam0000000140762408;
  _DAT_140762590 = _DAT_140762410;
  uRam0000000140762598 = uRam0000000140762418;
  _DAT_1407625a0 = _DAT_140762420;
  uRam00000001407625a8 = uRam0000000140762428;
  _DAT_1407625c0 = CONCAT44(uRam0000000140762444,_DAT_140762440);
  uRam00000001407625c8 = CONCAT44(uRam000000014076244c,uRam0000000140762448);
  _DAT_1407625b0 = _DAT_140762430;
  uRam00000001407625b8 = uRam0000000140762438;
  _DAT_1407625e0 = CONCAT44(uRam0000000140762464,_DAT_140762460);
  uRam00000001407625e8 = CONCAT44(uRam000000014076246c,uRam0000000140762468);
  _DAT_1407625d0 = _DAT_140762450;
  uRam00000001407625d8 = uRam0000000140762458;
  _DAT_1407625f0 = CONCAT44(uRam0000000140762474,_DAT_140762470);
  uRam00000001407625f8 = CONCAT44(uRam000000014076247c,uRam0000000140762478);
  _DAT_1407623c0 = *(undefined8 *)(param_1 + 8);
  uRam00000001407623c8 = *(undefined8 *)(param_1 + 10);
  _DAT_1407623d0 = *(undefined8 *)(param_1 + 0xc);
  uRam00000001407623d8 = *(undefined8 *)(param_1 + 0xe);
  _DAT_1407623e0 = *(undefined8 *)(param_1 + 0x10);
  uRam00000001407623e8 = *(undefined8 *)(param_1 + 0x12);
  _DAT_1407623f0 = *(undefined8 *)(param_1 + 0x14);
  uRam00000001407623f8 = *(undefined8 *)(param_1 + 0x16);
  _DAT_140762400 = *(undefined8 *)(param_1 + 0x18);
  uRam0000000140762408 = *(undefined8 *)(param_1 + 0x1a);
  _DAT_140762410 = *(undefined8 *)(param_1 + 0x1c);
  uRam0000000140762418 = *(undefined8 *)(param_1 + 0x1e);
  _DAT_140762420 = *(undefined8 *)(param_1 + 0x20);
  uRam0000000140762428 = *(undefined8 *)(param_1 + 0x22);
  _DAT_140762430 = *(undefined8 *)(param_1 + 0x24);
  uRam0000000140762438 = *(undefined8 *)(param_1 + 0x26);
  local_c8 = *(undefined8 *)(param_1 + 0x18);
  uStack_c0 = *(undefined8 *)(param_1 + 0x1a);
  local_b8 = *(undefined8 *)(param_1 + 0x1c);
  uStack_b0 = *(undefined8 *)(param_1 + 0x1e);
  local_a8 = *(undefined8 *)(param_1 + 0x20);
  uStack_a0 = *(undefined8 *)(param_1 + 0x22);
  local_98 = *(undefined8 *)(param_1 + 0x24);
  uStack_90 = *(undefined8 *)(param_1 + 0x26);
  local_88 = *(undefined8 *)(param_1 + 8);
  uStack_80 = *(undefined8 *)(param_1 + 10);
  local_78 = *(undefined8 *)(param_1 + 0xc);
  uStack_70 = *(undefined8 *)(param_1 + 0xe);
  local_68 = param_1[0x10];
  uStack_64 = param_1[0x11];
  uStack_60 = param_1[0x12];
  uStack_5c = param_1[0x13];
  local_58 = param_1[0x14];
  uStack_54 = param_1[0x15];
  uStack_50 = param_1[0x16];
  uStack_4c = param_1[0x17];
  DAT_1407623bc = 1.0 / _DAT_1407623b4;
  puVar1 = (undefined4 *)FUN_1400187f4(local_48,&local_88,&local_c8);
  _DAT_140762440 = *puVar1;
  uRam0000000140762444 = puVar1[1];
  uRam0000000140762448 = puVar1[2];
  uRam000000014076244c = puVar1[3];
  _DAT_140762450 = *(undefined8 *)(puVar1 + 4);
  uRam0000000140762458 = *(undefined8 *)(puVar1 + 6);
  _DAT_140762460 = puVar1[8];
  uRam0000000140762464 = puVar1[9];
  uRam0000000140762468 = puVar1[10];
  uRam000000014076246c = puVar1[0xb];
  _DAT_140762470 = puVar1[0xc];
  uRam0000000140762474 = puVar1[0xd];
  uRam0000000140762478 = puVar1[0xe];
  uRam000000014076247c = puVar1[0xf];
  puVar2 = (undefined8 *)FUN_140019d3c(local_48,&DAT_1407623c0);
  _DAT_140762480 = *puVar2;
  uRam0000000140762488 = puVar2[1];
  _DAT_140762490 = puVar2[2];
  uRam0000000140762498 = puVar2[3];
  _DAT_1407624a0 = *(undefined4 *)(puVar2 + 4);
  uRam00000001407624a4 = *(undefined4 *)((longlong)puVar2 + 0x24);
  uRam00000001407624a8 = *(undefined4 *)(puVar2 + 5);
  uRam00000001407624ac = *(undefined4 *)((longlong)puVar2 + 0x2c);
  _DAT_1407624b0 = *(undefined4 *)(puVar2 + 6);
  uRam00000001407624b4 = *(undefined4 *)((longlong)puVar2 + 0x34);
  uRam00000001407624b8 = *(undefined4 *)(puVar2 + 7);
  uRam00000001407624bc = *(undefined4 *)((longlong)puVar2 + 0x3c);
  puVar2 = (undefined8 *)FUN_140019d3c(local_48,&DAT_140762400);
  _DAT_1407624c0 = *puVar2;
  uRam00000001407624c8 = puVar2[1];
  _DAT_1407624d0 = puVar2[2];
  uRam00000001407624d8 = puVar2[3];
  _DAT_1407624e0 = *(undefined4 *)(puVar2 + 4);
  uRam00000001407624e4 = *(undefined4 *)((longlong)puVar2 + 0x24);
  uRam00000001407624e8 = *(undefined4 *)(puVar2 + 5);
  uRam00000001407624ec = *(undefined4 *)((longlong)puVar2 + 0x2c);
  _DAT_1407624f0 = *(undefined4 *)(puVar2 + 6);
  uRam00000001407624f4 = *(undefined4 *)((longlong)puVar2 + 0x34);
  uRam00000001407624f8 = *(undefined4 *)(puVar2 + 7);
  uRam00000001407624fc = *(undefined4 *)((longlong)puVar2 + 0x3c);
  puVar2 = (undefined8 *)FUN_140019d3c(local_48,&DAT_140762440);
  _DAT_140762500 = *puVar2;
  uRam0000000140762508 = puVar2[1];
  _DAT_140762510 = puVar2[2];
  uRam0000000140762518 = puVar2[3];
  _DAT_140762520 = puVar2[4];
  uRam0000000140762528 = puVar2[5];
  _DAT_140761ba8 = 1;
  DAT_140761ba4 = 0x260;
  _DAT_140762530 = puVar2[6];
  uRam0000000140762538 = puVar2[7];
  DAT_140761ba0 = 1;
  _DAT_1407623ac = DAT_1407623bc * _DAT_1407623b0;
  return;
}



/* FUN_14001accc @ 14001accc (36 bytes) */

void FUN_14001accc(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = param_2[1];
  param_1[2] = *param_2;
  param_1[3] = lVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar3 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 4) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(int *)(param_1 + 5) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  param_1[6] = param_2[4];
  *(undefined1 *)(param_1 + 1) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014001acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* FUN_14001acf0 @ 14001acf0 (1117 bytes) */

void FUN_14001acf0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_b8 [32];
  uint local_98 [6];
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_68;
  undefined8 local_64;
  uint local_5c;
  uint local_58;
  ulonglong local_54;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_140027040 ^ (ulonglong)auStack_b8;
  uVar4 = *(uint *)(param_1 + 0x14);
  if ((0 < *(int *)(param_1 + 0x10)) && (uVar4 < *(uint *)(param_1 + 0x18))) {
    uVar4 = *(uint *)(param_1 + 0x18);
  }
  if ((1 < *(int *)(param_1 + 0x10)) && (uVar4 < *(uint *)(param_1 + 0x1c))) {
    uVar4 = *(uint *)(param_1 + 0x1c);
  }
  uVar6 = 1;
  if ((*(char *)(param_1 + 0x28) == '\0') ||
     (*(int *)(param_1 + 0x2c) == 5 || *(int *)(param_1 + 0x2c) == 6)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 1;
    if (1 < (int)uVar4) {
      do {
        uVar4 = uVar4 >> 1;
        if (uVar4 == 0) {
          uVar5 = uVar5 + 1;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (1 < uVar4);
    }
  }
  uVar4 = *(uint *)(&DAT_140023da8 + (longlong)*(int *)(param_1 + 0x2c) * 4);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    memset(&local_68,0,0x20);
    local_68 = *(uint *)(param_1 + 0x14);
    if (*(uint *)(param_1 + 0x14) == 0) {
      local_68 = uVar6;
    }
    local_58 = 0;
    local_64 = CONCAT44(1,uVar5);
    uVar6 = 0x88;
    if (1 < (int)uVar5) {
      uVar6 = 0xa8;
    }
    local_54 = (ulonglong)uVar6;
    local_4c = (uint)(1 < uVar5);
    local_5c = uVar4;
    (**(code **)(*DAT_140762618 + 0x20))(DAT_140762618,&local_68,0,param_1 + 0x38);
    if (*(char *)(param_1 + 8) != '\0') {
      (**(code **)(*DAT_140762618 + 0x20))(DAT_140762618,&local_68,0,param_1 + 0x40);
    }
  }
  else if (iVar1 == 1) {
    memset(&local_68,0,0x2c);
    local_5c = 1;
    local_68 = *(uint *)(param_1 + 0x14);
    if (*(uint *)(param_1 + 0x14) == 0) {
      local_68 = uVar6;
    }
    local_54 = 1;
    local_4c = 0;
    uVar2 = *(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) == 0) {
      uVar2 = uVar6;
    }
    local_64 = CONCAT44(uVar5,uVar2);
    local_44 = 0;
    local_48 = 0x40;
    if (1 < *(int *)(param_1 + 0x2c) - 5U) {
      local_48 = 0xa8;
    }
    local_40 = (uint)(1 < uVar5);
    local_58 = uVar4;
    (**(code **)(*DAT_140762618 + 0x28))(DAT_140762618,&local_68,0,param_1 + 0x38);
    if (*(char *)(param_1 + 8) != '\0') {
      (**(code **)(*DAT_140762618 + 0x28))(DAT_140762618,&local_68,0,param_1 + 0x40);
    }
  }
  else if (iVar1 == 2) {
    memset(&local_68,0,0x24);
    local_68 = *(uint *)(param_1 + 0x14);
    if (*(uint *)(param_1 + 0x14) == 0) {
      local_68 = 1;
    }
    uVar2 = *(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) == 0) {
      uVar2 = uVar6;
    }
    local_4c = 0;
    uVar3 = *(uint *)(param_1 + 0x1c);
    if (*(uint *)(param_1 + 0x1c) == 0) {
      uVar3 = uVar6;
    }
    local_64 = CONCAT44(uVar3,uVar2);
    uVar6 = 0x88;
    if (1 < (int)uVar5) {
      uVar6 = 0xa8;
    }
    local_54 = (ulonglong)uVar6 << 0x20;
    local_48 = (uint)(1 < uVar5);
    local_5c = uVar5;
    local_58 = uVar4;
    (**(code **)(*DAT_140762618 + 0x30))(DAT_140762618,&local_68,0,param_1 + 0x38);
    if (*(char *)(param_1 + 8) != '\0') {
      (**(code **)(*DAT_140762618 + 0x30))(DAT_140762618,&local_68,0,param_1 + 0x40);
    }
  }
  if (*(int *)(param_1 + 0x2c) == 5 || *(int *)(param_1 + 0x2c) == 6) {
    memset(&local_68,0,0x18);
    local_64 = CONCAT44(local_64._4_4_,3);
    local_5c = 0;
    local_68 = uVar4;
    (**(code **)(*DAT_140762618 + 0x50))
              (DAT_140762618,*(undefined8 *)(param_1 + 0x38),&local_68,param_1 + 0x60);
  }
  else {
    memset(local_98,0,0x14);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      local_98[1] = 2;
      local_98[2] = 0;
    }
    else if (iVar1 == 1) {
      local_98[1] = 4;
      local_98[2] = 0;
    }
    else if (iVar1 == 2) {
      local_98[4] = *(undefined4 *)(param_1 + 0x1c);
      local_98[1] = 8;
      local_98[2] = 0;
      local_98[3] = 0;
    }
    local_98[0] = uVar4;
    (**(code **)(*DAT_140762618 + 0x40))
              (DAT_140762618,*(undefined8 *)(param_1 + 0x38),local_98,param_1 + 0x48);
    if (*(char *)(param_1 + 8) != '\0') {
      (**(code **)(*DAT_140762618 + 0x40))
                (DAT_140762618,*(undefined8 *)(param_1 + 0x40),local_98,param_1 + 0x68);
    }
    memset(&local_68,0,0x18);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      local_64 = 2;
      local_5c = uVar5;
    }
    else if (iVar1 == 1) {
      local_64 = 4;
      local_5c = uVar5;
    }
    else if (iVar1 == 2) {
      local_64 = 8;
      local_5c = uVar5;
    }
    local_68 = uVar4;
    (**(code **)(*DAT_140762618 + 0x38))
              (DAT_140762618,*(undefined8 *)(param_1 + 0x38),&local_68,param_1 + 0x50);
    if (*(char *)(param_1 + 8) != '\0') {
      (**(code **)(*DAT_140762618 + 0x38))
                (DAT_140762618,*(undefined8 *)(param_1 + 0x40),&local_68,param_1 + 0x70);
    }
    if (*(int *)(param_1 + 0x10) == 1) {
      memset(&local_80,0,0x14);
      if (*(int *)(param_1 + 0x10) == 0) {
        local_7c = 2;
      }
      else {
        local_7c = 8;
        if (*(int *)(param_1 + 0x10) == 1) {
          local_7c = 4;
        }
      }
      local_78 = 0;
      local_80 = uVar4;
      (**(code **)(*DAT_140762618 + 0x48))
                (DAT_140762618,*(undefined8 *)(param_1 + 0x38),&local_80,param_1 + 0x58);
      if (*(char *)(param_1 + 8) != '\0') {
        (**(code **)(*DAT_140762618 + 0x48))
                  (DAT_140762618,*(undefined8 *)(param_1 + 0x40),&local_80,param_1 + 0x78);
      }
    }
  }
  FUN_14001cb70(local_38 ^ (ulonglong)auStack_b8);
  return;
}



/* FUN_14001b150 @ 14001b150 (128 bytes) */

void FUN_14001b150(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,byte param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_140027040 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_40 = (uint)param_5 * param_3;
  local_14 = 1;
  local_48 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  (**(code **)(*DAT_140762620 + 0x180))(DAT_140762620,*(undefined8 *)(param_1 + 0x38),0,&local_28);
  FUN_14001cb70(local_10 ^ (ulonglong)auStack_68);
  return;
}



/* FUN_14001b1d0 @ 14001b1d0 (61 bytes) */

void FUN_14001b1d0(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) != '\0') {
    (**(code **)(*DAT_140762620 + 0x1b0))(DAT_140762620,*(undefined8 *)(param_1 + 0x50));
    (**(code **)(*DAT_140762620 + 0x1b0))(DAT_140762620,*(undefined8 *)(param_1 + 0x70));
  }
  return;
}



/* FUN_14001b210 @ 14001b210 (231 bytes) */

undefined8 FUN_14001b210(longlong param_1)

{
  int iVar1;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    }
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
    }
  }
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 1;
}



/* FUN_14001b380 @ 14001b380 (26 bytes) */

void FUN_14001b380(longlong *param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 2) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *(undefined1 *)(param_1 + 1) = param_3;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00014001b396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* FUN_14001b39c @ 14001b39c (443 bytes) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14001b39c(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 local_38;
  int local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x18);
  fVar4 = ceilf((float)(uint)(iVar2 * *(int *)(param_1 + 0x14)) * 0.0625);
  _DAT_14076262c = 0;
  puVar1 = (undefined8 *)(param_1 + 0x30);
  _DAT_140762628 = (undefined4)(longlong)(fVar4 * 16.0);
  _DAT_140762634 = 0;
  _DAT_140762630 = (-(uint)(*(char *)(param_1 + 0x10) != '\0') & 0xffffff7c) + 0x88;
  _DAT_140762638 = ~-(uint)(*(char *)(param_1 + 0x10) != '\0') & 0x40;
  _DAT_14076263c = *(undefined4 *)(param_1 + 0x14);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    memset(&local_38,0,0x10);
    local_38 = *(undefined8 *)(param_1 + 0x28);
    puVar3 = &local_38;
  }
  (**(code **)(*DAT_140762618 + 0x18))(DAT_140762618,&DAT_140762628,puVar3,puVar1);
  if (*(char *)(param_1 + 0x10) == '\0') {
    memset(&local_20,0,0x18);
    local_20 = 0;
    local_1c = 1;
    local_14 = iVar2;
    (**(code **)(*DAT_140762618 + 0x38))(DAT_140762618,*puVar1,&local_20,param_1 + 0x48);
    memset(&local_38,0,0x14);
    local_38 = 0x100000000;
    local_2c = iVar2;
    (**(code **)(*DAT_140762618 + 0x40))(DAT_140762618,*puVar1,&local_38,param_1 + 0x40);
    if (*(char *)(param_1 + 8) != '\0') {
      puVar1 = (undefined8 *)(param_1 + 0x38);
      (**(code **)(*DAT_140762618 + 0x18))(DAT_140762618,&DAT_140762628,0,puVar1);
      (**(code **)(*DAT_140762618 + 0x38))(DAT_140762618,*puVar1,&local_20,param_1 + 0x58);
      (**(code **)(*DAT_140762618 + 0x40))(DAT_140762618,*puVar1,&local_38,param_1 + 0x50);
    }
  }
  return 1;
}



/* FUN_14001b558 @ 14001b558 (57 bytes) */

undefined8 FUN_14001b558(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return 1;
}



/* FUN_14001b594 @ 14001b594 (31 bytes) */

undefined8 FUN_14001b594(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 8) != '\0') {
    if (param_2 == '\0') {
      if (*(char *)(param_1 + 9) != '\0') goto LAB_14001b5ae;
    }
    else if (*(char *)(param_1 + 9) == '\0') {
LAB_14001b5ae:
      return *(undefined8 *)(param_1 + 0x38);
    }
  }
  return *(undefined8 *)(param_1 + 0x30);
}



/* FUN_14001b5b4 @ 14001b5b4 (31 bytes) */

undefined8 FUN_14001b5b4(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 8) != '\0') {
    if (param_2 == '\0') {
      if (*(char *)(param_1 + 9) != '\0') goto LAB_14001b5ce;
    }
    else if (*(char *)(param_1 + 9) == '\0') {
LAB_14001b5ce:
      return *(undefined8 *)(param_1 + 0x50);
    }
  }
  return *(undefined8 *)(param_1 + 0x40);
}



/* FUN_14001b5d4 @ 14001b5d4 (31 bytes) */

undefined8 FUN_14001b5d4(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 8) != '\0') {
    if (param_2 == '\0') {
      if (*(char *)(param_1 + 9) != '\0') goto LAB_14001b5ee;
    }
    else if (*(char *)(param_1 + 9) == '\0') {
LAB_14001b5ee:
      return *(undefined8 *)(param_1 + 0x58);
    }
  }
  return *(undefined8 *)(param_1 + 0x48);
}



/* FUN_14001b5f4 @ 14001b5f4 (113 bytes) */

undefined1 FUN_14001b5f4(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  FUN_1400174e4();
  uVar1 = FUN_14001b668(param_1);
  if (*(int *)(param_2 + 0x54) != 0) {
    free(*(void **)(param_2 + 0x60));
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    free(*(void **)(param_2 + 0x48));
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    free(*(void **)(param_2 + 0x30));
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    free(*(void **)(param_2 + 0x18));
  }
  return uVar1;
}



/* FUN_14001b668 @ 14001b668 (189 bytes) */

undefined8 FUN_14001b668(int *param_1)

{
  if (((*(longlong *)(param_1 + 0x1c) != 0) && (*(longlong *)(param_1 + 0x1e) != 0)) ||
     (*(longlong *)(param_1 + 0x20) != 0)) {
    if (*param_1 == 0) {
      (**(code **)(*DAT_140762618 + 0x60))
                (DAT_140762618,*(longlong *)(param_1 + 0x1c),param_1[0x22],0,param_1 + 0x26);
      (**(code **)(*DAT_140762618 + 0x78))
                (DAT_140762618,*(undefined8 *)(param_1 + 0x1e),param_1[0x23],0,param_1 + 0x28);
    }
    else if (*param_1 == 1) {
      (**(code **)(*DAT_140762618 + 0x90))
                (DAT_140762618,*(undefined8 *)(param_1 + 0x20),param_1[0x24],0,param_1 + 0x2a);
    }
  }
  return 1;
}



/* FUN_14001b728 @ 14001b728 (482 bytes) */

undefined1 FUN_14001b728(undefined4 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 local_b8 [160];
  
  FUN_1400174e4();
  puVar12 = param_1 + 0x26;
  lVar13 = 4;
  do {
    *puVar12 = *(undefined4 *)((param_2 - (longlong)param_1) + (longlong)puVar12);
    puVar12 = puVar12 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0xa8);
  *(undefined1 *)((longlong)param_1 + 0xa9) = *(undefined1 *)(param_2 + 0xa9);
  *(undefined1 *)((longlong)param_1 + 0xaa) = *(undefined1 *)(param_2 + 0xaa);
  *(undefined1 *)((longlong)param_1 + 0xab) = *(undefined1 *)(param_2 + 0xab);
  param_1[0x2b] = *(undefined4 *)(param_2 + 0xac);
  param_1[0x2c] = *(undefined4 *)(param_2 + 0xb0);
  param_1[0x2d] = *(undefined4 *)(param_2 + 0xb4);
  param_1[0x2e] = *(undefined4 *)(param_2 + 0xb8);
  param_1[0x2f] = *(undefined4 *)(param_2 + 0xbc);
  param_1[0x30] = *(undefined4 *)(param_2 + 0xc0);
  param_1[0x31] = *(undefined4 *)(param_2 + 0xc4);
  uVar2 = *(uint *)(param_2 + 0xcc);
  uVar3 = *(uint *)(param_2 + 0xd0);
  pvVar10 = malloc((ulonglong)uVar3 << 4);
  if (uVar2 != 0) {
    lVar13 = 0;
    uVar14 = (ulonglong)uVar2;
    do {
      puVar12 = (undefined4 *)(lVar13 + *(longlong *)(param_2 + 0xd8));
      uVar6 = puVar12[1];
      uVar7 = puVar12[2];
      uVar8 = puVar12[3];
      puVar1 = (undefined4 *)(lVar13 + (longlong)pvVar10);
      *puVar1 = *puVar12;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar13 = lVar13 + 0x10;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  iVar4 = param_1[0x33];
  pvVar5 = *(void **)(param_1 + 0x36);
  param_1[0x33] = uVar2;
  param_1[0x34] = uVar3;
  *(void **)(param_1 + 0x36) = pvVar10;
  if (iVar4 != 0) {
    free(pvVar5);
  }
  uVar6 = *(undefined4 *)(param_2 + 0xe4);
  uVar7 = *(undefined4 *)(param_2 + 0xe8);
  uVar8 = *(undefined4 *)(param_2 + 0xec);
  param_1[0x38] = *(undefined4 *)(param_2 + 0xe0);
  param_1[0x39] = uVar6;
  param_1[0x3a] = uVar7;
  param_1[0x3b] = uVar8;
  uVar2 = *(uint *)(param_2 + 0xf4);
  uVar3 = *(uint *)(param_2 + 0xf8);
  pvVar10 = malloc((ulonglong)uVar3 << 4);
  if (uVar2 != 0) {
    lVar13 = 0;
    uVar14 = (ulonglong)uVar2;
    do {
      puVar12 = (undefined4 *)(lVar13 + *(longlong *)(param_2 + 0x100));
      uVar6 = puVar12[1];
      uVar7 = puVar12[2];
      uVar8 = puVar12[3];
      puVar1 = (undefined4 *)(lVar13 + (longlong)pvVar10);
      *puVar1 = *puVar12;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar13 = lVar13 + 0x10;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  iVar4 = param_1[0x3d];
  pvVar5 = *(void **)(param_1 + 0x40);
  param_1[0x3d] = uVar2;
  param_1[0x3e] = uVar3;
  *(void **)(param_1 + 0x40) = pvVar10;
  if (iVar4 != 0) {
    free(pvVar5);
  }
  *param_1 = 0;
  uVar11 = FUN_14001784c(local_b8,param_1);
  uVar9 = FUN_14001b5f4(param_1 + 0x42,uVar11);
  FUN_140001398(param_2);
  return uVar9;
}



/* FUN_14001b90c @ 14001b90c (1415 bytes) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001b90c(longlong param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  __uint64 _Var4;
  undefined8 *_Memory;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_1f8 [32];
  ulonglong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  int local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_158;
  uint local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined1 local_134;
  ulonglong local_48;
  
  local_48 = DAT_140027040 ^ (ulonglong)auStack_1f8;
  uVar7 = 0;
  if ((*(longlong *)(param_1 + 0x1a8) != 0) && (*(longlong *)(param_1 + 0x1a0) != 0)) {
    if (DAT_140761ba4 != param_3) {
      DAT_140761ba0 = 1;
      DAT_140761ba4 = param_3;
      FUN_14001b558(&PTR_vftable_140761b40);
      DAT_140761b50 = DAT_140761ba0;
      _DAT_140761b51 = DAT_140761ba1;
      DAT_140761b53 = DAT_140761ba3;
      _DAT_140761b54 = DAT_140761ba4;
      _DAT_140761b58 = _DAT_140761ba8;
      uRam0000000140761b60 = uRam0000000140761bb0;
      DAT_140761b48 = 0;
      _DAT_140761b68 = DAT_140761bb8;
      (**(code **)(PTR_vftable_140761b40 + 8))(&PTR_vftable_140761b40);
    }
    local_1c8 = 0;
    local_1d0 = 0;
    local_1d8 = param_2;
    (**(code **)(*DAT_140762620 + 0x180))(DAT_140762620,DAT_140761b70,0,0);
    local_1a0 = 0;
    local_19c = 0;
    local_198 = (float)*(uint *)(**(longlong **)(param_1 + 0xd8) + 0x14);
    local_190 = 0;
    local_18c = 0x3f800000;
    local_194 = (float)*(uint *)(**(longlong **)(param_1 + 0xd8) + 0x18);
    (**(code **)(*DAT_140762620 + 0x160))(DAT_140762620,1,&local_1a0);
    uVar6 = *(uint *)(param_1 + 0xcc);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)(int)uVar6;
    _Var4 = SUB168(ZEXT816(8) * auVar3,0);
    if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
      _Var4 = 0xffffffffffffffff;
    }
    _Memory = (undefined8 *)operator_new(_Var4);
    if (uVar6 != 0) {
      uVar12 = (ulonglong)uVar6;
      uVar9 = uVar7;
      puVar11 = _Memory;
      do {
        plVar2 = *(longlong **)(uVar9 + *(longlong *)(param_1 + 0xd8));
        uVar5 = (**(code **)(*plVar2 + 0x38))(plVar2,0);
        *puVar11 = uVar5;
        if (*(char *)(param_1 + 0xa8) != '\0') {
          (**(code **)(*DAT_140762620 + 400))(DAT_140762620,uVar5,param_1 + 0x98);
        }
        uVar9 = uVar9 + 0x10;
        puVar11 = puVar11 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uVar10 = 1;
    uVar9 = uVar7;
    if (((*(char *)(param_1 + 0xa9) != '\0') && (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0))
       && (uVar9 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x40))(),
          *(char *)(param_1 + 0xa8) != '\0')) {
      local_1d8 = local_1d8 & 0xffffffffffffff00;
      (**(code **)(*DAT_140762620 + 0x1a8))(DAT_140762620,uVar9,1,0x3f800000);
    }
    (**(code **)(*DAT_140762620 + 0x108))(DAT_140762620,uVar6,_Memory,uVar9);
    local_1b8 = (longlong *)0x0;
    local_188 = 3;
    local_180 = 0;
    local_174 = 0;
    local_178 = 0;
    local_184 = (-(uint)(*(char *)(param_1 + 0xaa) != '\0') & 2) + 1;
    local_170 = 1;
    uStack_168 = 0;
    (**(code **)(*DAT_140762618 + 0xb0))(DAT_140762618,&local_188,&local_1b8);
    (**(code **)(*DAT_140762620 + 0x158))(DAT_140762620,local_1b8);
    (**(code **)(*DAT_140762620 + 0xc0))
              (DAT_140762620,
               *(undefined4 *)(&DAT_140023d90 + (longlong)*(int *)(param_1 + 0xb0) * 4));
    local_1b0 = (longlong *)0x0;
    memset(&local_158,0,0x108);
    local_150 = (uint)*(byte *)(param_1 + 0xab);
    iVar1 = *(int *)(param_1 + 0xac);
    local_158 = 0;
    local_134 = 0xf;
    if (iVar1 == 0) {
      local_148 = 0x100000002;
      uStack_140 = 0x200000002;
      local_14c = 2;
      local_138 = uVar10;
    }
    else if (iVar1 == 1) {
      local_148 = 0x100000006;
      uStack_140 = 0x200000008;
      local_14c = 5;
      local_138 = uVar10;
    }
    else if (iVar1 == 2) {
      local_148 = 0x100000006;
      uStack_140 = 0x100000002;
      local_14c = 5;
      local_138 = uVar10;
    }
    else if (iVar1 == 3) {
      local_148 = 0x100000004;
      uStack_140 = 0x600000001;
      local_14c = uVar10;
      local_138 = uVar10;
    }
    (**(code **)(*DAT_140762618 + 0xa0))(DAT_140762618,&local_158,&local_1b0);
    (**(code **)(*DAT_140762620 + 0x118))(DAT_140762620,local_1b0,0,0xffffffff);
    (**(code **)(*DAT_140762620 + 0x38))(DAT_140762620,8,1,&DAT_140761b70);
    (**(code **)(*DAT_140762620 + 0x80))(DAT_140762620,8,1,&DAT_140761b70);
    uVar9 = uVar7;
    if (*(int *)(param_1 + 0xf4) != 0) {
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x100) + 8 + uVar9 * 0x10);
        if (plVar2 != (longlong *)0x0) {
          local_1a8 = (**(code **)(*plVar2 + 0x30))(plVar2,1);
          (**(code **)(*DAT_140762620 + 200))(DAT_140762620,uVar9,1,&local_1a8);
          (**(code **)(*DAT_140762620 + 0x40))(DAT_140762620,uVar9,1,&local_1a8);
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(param_1 + 0xf4));
    }
    (**(code **)(*DAT_140762620 + 0x58))(DAT_140762620,*(undefined8 *)(param_1 + 0x1a0),0,0);
    (**(code **)(*DAT_140762620 + 0x48))(DAT_140762620,*(undefined8 *)(param_1 + 0x1a8),0,0);
    local_1d8 = local_1d8 & 0xffffffff00000000;
    (**(code **)(*DAT_140762620 + 0xa8))
              (DAT_140762620,*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8),0);
    (**(code **)(*DAT_140762620 + 200))
              (DAT_140762620,0,*(undefined4 *)(param_1 + 0xf4),&DAT_140762330);
    (**(code **)(*DAT_140762620 + 0x40))
              (DAT_140762620,0,*(undefined4 *)(param_1 + 0xf4),&DAT_140762330);
    (**(code **)(*DAT_140762620 + 0x108))(DAT_140762620,uVar6,&DAT_140762330,0);
    (**(code **)(*DAT_140762620 + 0x58))(DAT_140762620,0,0,0);
    (**(code **)(*DAT_140762620 + 0x48))(DAT_140762620,0,0,0);
    free(_Memory);
    (**(code **)(*local_1b8 + 0x10))();
    (**(code **)(*local_1b0 + 0x10))();
    if (*(int *)(param_1 + 0xcc) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xd8) + uVar7 * 0x10) + 0x50))();
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_1 + 0xcc));
    }
  }
  FUN_14001cb70(local_48 ^ (ulonglong)auStack_1f8);
  return;
}



/* FUN_14001be94 @ 14001be94 (376 bytes) */

undefined1 FUN_14001be94(undefined4 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  void *pvVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 local_b8 [160];
  
  FUN_1400174e4();
  param_1[0x26] = *(undefined4 *)(param_2 + 0x98);
  param_1[0x27] = *(undefined4 *)(param_2 + 0x9c);
  param_1[0x28] = *(undefined4 *)(param_2 + 0xa0);
  param_1[0x29] = *(undefined4 *)(param_2 + 0xa4);
  param_1[0x2a] = *(undefined4 *)(param_2 + 0xa8);
  param_1[0x2b] = *(undefined4 *)(param_2 + 0xac);
  uVar3 = *(uint *)(param_2 + 0xb4);
  uVar4 = *(uint *)(param_2 + 0xb8);
  pvVar11 = malloc((ulonglong)uVar4 << 4);
  if (uVar3 != 0) {
    lVar13 = 0;
    uVar14 = (ulonglong)uVar3;
    do {
      puVar1 = (undefined4 *)(lVar13 + *(longlong *)(param_2 + 0xc0));
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(lVar13 + (longlong)pvVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      lVar13 = lVar13 + 0x10;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  iVar5 = param_1[0x2d];
  pvVar6 = *(void **)(param_1 + 0x30);
  param_1[0x2d] = uVar3;
  param_1[0x2e] = uVar4;
  *(void **)(param_1 + 0x30) = pvVar11;
  if (iVar5 != 0) {
    free(pvVar6);
  }
  uVar3 = *(uint *)(param_2 + 0xcc);
  uVar4 = *(uint *)(param_2 + 0xd0);
  pvVar11 = malloc((ulonglong)uVar4 << 4);
  if (uVar3 != 0) {
    lVar13 = 0;
    uVar14 = (ulonglong)uVar3;
    do {
      puVar1 = (undefined4 *)(lVar13 + *(longlong *)(param_2 + 0xd8));
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(lVar13 + (longlong)pvVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      lVar13 = lVar13 + 0x10;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  iVar5 = param_1[0x33];
  pvVar6 = *(void **)(param_1 + 0x36);
  param_1[0x33] = uVar3;
  param_1[0x34] = uVar4;
  *(void **)(param_1 + 0x36) = pvVar11;
  if (iVar5 != 0) {
    free(pvVar6);
  }
  *param_1 = 1;
  uVar12 = FUN_14001784c(local_b8,param_1);
  uVar10 = FUN_14001b5f4(param_1 + 0x38,uVar12);
  FUN_1400014b8(param_2);
  return uVar10;
}



/* FUN_14001c00c @ 14001c00c (771 bytes) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001c00c(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 0x188) != 0) {
    if (DAT_140761ba4 != param_3) {
      DAT_140761ba0 = 1;
      DAT_140761ba4 = param_3;
      FUN_14001b558(&PTR_vftable_140761b40);
      DAT_140761b50 = DAT_140761ba0;
      _DAT_140761b51 = DAT_140761ba1;
      DAT_140761b53 = DAT_140761ba3;
      _DAT_140761b54 = DAT_140761ba4;
      _DAT_140761b58 = _DAT_140761ba8;
      uRam0000000140761b5c = uRam0000000140761bac;
      uRam0000000140761b60 = uRam0000000140761bb0;
      uRam0000000140761b64 = uRam0000000140761bb4;
      DAT_140761b48 = 0;
      _DAT_140761b68 = DAT_140761bb8;
      (**(code **)(PTR_vftable_140761b40 + 8))(&PTR_vftable_140761b40);
    }
    (**(code **)(*DAT_140762620 + 0x180))(DAT_140762620,DAT_140761b70,0,0,param_2,0,0);
    (**(code **)(*DAT_140762620 + 0x238))(DAT_140762620,8,1,&DAT_140761b70);
    uVar2 = 0;
    if (*(int *)(param_1 + 0xcc) != 0) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd8) + 8 + (ulonglong)uVar2 * 0x10);
        if (plVar1 != (longlong *)0x0) {
          local_res8 = (**(code **)(*plVar1 + 0x30))(plVar1,1);
          (**(code **)(*DAT_140762620 + 0x218))(DAT_140762620,uVar2,1,&local_res8);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xcc));
    }
    uVar2 = 0;
    if (*(int *)(param_1 + 0xb4) != 0) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 8 + (ulonglong)uVar2 * 0x10);
        if (plVar1 != (longlong *)0x0) {
          local_res8 = (**(code **)(*plVar1 + 0x28))(plVar1,0);
          (**(code **)(*DAT_140762620 + 0x220))
                    (DAT_140762620,*(int *)(param_1 + 0xcc) + uVar2,1,&local_res8,0);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xb4));
    }
    (**(code **)(*DAT_140762620 + 0x228))(DAT_140762620,*(undefined8 *)(param_1 + 0x188),0,0);
    fVar3 = ceilf((float)(*(uint *)(param_1 + 0x98) >> 3));
    if (fVar3 < 1.0) {
      fVar3 = 1.0;
    }
    fVar4 = ceilf((float)(*(uint *)(param_1 + 0x9c) >> 3));
    if (fVar4 < 1.0) {
      fVar4 = 1.0;
    }
    fVar5 = ceilf((float)(*(uint *)(param_1 + 0xa0) >> 3));
    fVar6 = 1.0;
    if (1.0 <= fVar5) {
      fVar6 = fVar5;
    }
    (**(code **)(*DAT_140762620 + 0x148))
              (DAT_140762620,(longlong)fVar3 & 0xffffffff,(longlong)fVar4 & 0xffffffff,
               (longlong)fVar6);
    (**(code **)(*DAT_140762620 + 0x218))
              (DAT_140762620,0,*(undefined4 *)(param_1 + 0xcc),&DAT_140762330);
    (**(code **)(*DAT_140762620 + 0x220))
              (DAT_140762620,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xb4),
               &DAT_140762330,0);
    (**(code **)(*DAT_140762620 + 0x228))(DAT_140762620,0,0,0);
    uVar2 = 0;
    if (*(int *)(param_1 + 0xb4) != 0) {
      do {
        if (*(int *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)uVar2 * 0x10) == 0) {
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xc0) + 8 + (ulonglong)uVar2 * 0x10)
                      + 0x50))();
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xb4));
    }
  }
  return;
}



/* FUN_14001c310 @ 14001c310 (8 bytes) */

undefined * FUN_14001c310(void)

{
  return &DAT_140762310;
}



/* FUN_14001c318 @ 14001c318 (301 bytes) */

void FUN_14001c318(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *pvVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 local_res8 [2];
  longlong local_res10;
  undefined1 local_48 [32];
  
  local_res10 = param_2;
  lVar5 = FUN_140017cd8(local_48);
  uVar2 = *(undefined4 *)(lVar5 + 4);
  uVar3 = *(undefined4 *)(lVar5 + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  *(undefined4 *)(lVar5 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  if (*(int *)(lVar5 + 4) != 0) {
    free(*(void **)(lVar5 + 0x10));
  }
  puVar1 = (uint *)(param_1 + 0x38);
  *puVar1 = 0;
  local_res8[0] = 0;
  FUN_14001c694(param_1 + 0x18,local_res8);
  uVar7 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      *puVar1 = *puVar1 + *(int *)(&DAT_140023f50 +
                                  (longlong)
                                  *(int *)((ulonglong)uVar7 * 0x114 + 0x100 +
                                          *(longlong *)(param_1 + 0x10)) * 4);
      FUN_14001c694(param_1 + 0x18,puVar1);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 4));
  }
  pvVar6 = operator_new((ulonglong)*puVar1);
  *(void **)(param_1 + 0x30) = pvVar6;
  uVar8 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      memcpy((void *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x28) + uVar8 * 4) +
                     *(longlong *)(param_1 + 0x30)),
             (void *)(uVar8 * 0x114 + *(longlong *)(param_1 + 0x10) + 0x104),
             (ulonglong)
             *(uint *)(&DAT_140023f50 +
                      (longlong)*(int *)(uVar8 * 0x114 + 0x100 + *(longlong *)(param_1 + 0x10)) * 4)
            );
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 4));
  }
  if (*(int *)(param_2 + 4) != 0) {
    free(*(void **)(param_2 + 0x10));
  }
  return;
}



/* FUN_14001c448 @ 14001c448 (587 bytes) */

undefined8 FUN_14001c448(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 local_48 [48];
  ulonglong uVar6;
  
  uVar7 = 0;
  if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
    free(*(void **)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    free(*(void **)(param_1 + 0xe8));
  }
  *(undefined8 *)(param_1 + 0xdc) = 0;
  FUN_140017cd8(local_48,param_1);
  FUN_14001c318(param_1 + 0xc0,local_48);
  fVar9 = ceilf((float)(*(int *)(param_1 + 0xf8) + 0x260) * 0.0625);
  uVar8 = (ulonglong)(fVar9 * 16.0);
  _Dst = operator_new(uVar8 & 0xffffffff);
  memcpy(_Dst,&DAT_1407623a0,0x260);
  memcpy((void *)((longlong)_Dst + 0x260),*(void **)(param_1 + 0xf0),
         (ulonglong)*(uint *)(param_1 + 0xf8));
  fVar9 = DAT_1407623a0;
  uVar6 = uVar7;
  if (*(int *)(param_1 + 0x60) != 0) {
    do {
      for (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + uVar6 * 8); lVar4 != 0;
          lVar4 = *(longlong *)(lVar4 + 0x10)) {
        (**(code **)(**(longlong **)(lVar4 + 8) + 0x10))();
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0x60));
  }
  uVar6 = uVar7;
  if (*(int *)(param_1 + 0xa4) != 0) {
    do {
      piVar3 = (int *)(uVar6 * 0x10 + *(longlong *)(param_1 + 0xb0));
      if (*piVar3 == 1) {
        lVar4 = *(longlong *)(piVar3 + 2);
        iVar1 = *(int *)(lVar4 + 0xbc);
        if (iVar1 == 1) {
          if (*(char *)(param_1 + 0xb8) != '\0') {
LAB_14001c5be:
            FUN_14001b90c(lVar4,_Dst,uVar8 & 0xffffffff);
          }
        }
        else if ((iVar1 == 0) ||
                (((iVar1 == 2 && (*(float *)(lVar4 + 0xc0) <= fVar9)) &&
                 (fVar9 <= *(float *)(lVar4 + 0xc4))))) goto LAB_14001c5be;
      }
      else if (*piVar3 == 0) {
        lVar4 = *(longlong *)(piVar3 + 2);
        iVar1 = *(int *)(lVar4 + 0xa4);
        if (iVar1 == 1) {
          if (*(char *)(param_1 + 0xb8) != '\0') {
LAB_14001c609:
            FUN_14001c00c(lVar4,_Dst,uVar8 & 0xffffffff);
          }
        }
        else if ((iVar1 == 0) ||
                (((iVar1 == 2 && (*(float *)(lVar4 + 0xa8) <= fVar9)) &&
                 (fVar9 <= *(float *)(lVar4 + 0xac))))) goto LAB_14001c609;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0xa4));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    do {
      for (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + uVar7 * 8); lVar4 != 0;
          lVar4 = *(longlong *)(lVar4 + 0x10)) {
        lVar2 = *(longlong *)(lVar4 + 8);
        if (*(char *)(lVar2 + 8) != '\0') {
          *(bool *)(lVar2 + 9) = *(char *)(lVar2 + 9) == '\0';
        }
      }
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0x60));
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  free(_Dst);
  return *(undefined8 *)(param_1 + 0x98);
}



/* FUN_14001c694 @ 14001c694 (174 bytes) */

void FUN_14001c694(float *param_1,undefined4 *param_2)

{
  void *_Dst;
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(uint)param_1[1];
  if ((uint)param_1[2] <= (uint)param_1[1]) {
    uVar2 = (ulonglong)((float)(uint)param_1[2] * *param_1 + 1.0);
    fVar1 = (float)uVar2;
    if ((uint)param_1[2] <= (uint)fVar1) {
      _Dst = malloc((uVar2 & 0xffffffff) << 2);
      uVar3 = (ulonglong)(uint)param_1[1];
      if (param_1[1] != 0.0) {
        memcpy(_Dst,*(void **)(param_1 + 4),uVar3 << 2);
        free(*(void **)(param_1 + 4));
        uVar3 = (ulonglong)(uint)param_1[1];
      }
      *(void **)(param_1 + 4) = _Dst;
      param_1[2] = fVar1;
    }
  }
  param_1[1] = (float)((int)uVar3 + 1);
  *(undefined4 *)(*(longlong *)(param_1 + 4) + uVar3 * 4) = *param_2;
  return;
}



/* FUN_14001c744 @ 14001c744 (343 bytes) */

float FUN_14001c744(longlong param_1,ulonglong param_2,float param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar5 = 0;
  lVar7 = (param_2 & 0xffffffff) * 0x118;
  fVar10 = ((float)*(uint *)(param_1 + 0x1c) * *(float *)(param_1 + 0x18)) / 60.0;
  uVar1 = *(uint *)(lVar7 + 0x104 + *(longlong *)(param_1 + 0x10));
  if (uVar1 != 0) {
    puVar3 = (uint *)0x0;
    do {
      puVar6 = (uint *)(*(longlong *)(lVar7 + 0x110 + *(longlong *)(param_1 + 0x10)) + uVar5 * 0xc);
      if ((uint)(longlong)(fVar10 * param_3) < *puVar6) break;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      puVar3 = puVar6;
      puVar6 = (uint *)0x0;
    } while (uVar4 < uVar1);
    if (puVar3 != (uint *)0x0) {
      fVar8 = 0.0;
      puVar2 = puVar3;
      if (puVar6 != (uint *)0x0) {
        puVar2 = puVar6;
      }
      fVar9 = (float)*puVar3 / fVar10 + 0.001;
      fVar10 = (float)*puVar2 / fVar10 + 0.001;
      if (fVar9 < fVar10) {
        fVar8 = (param_3 - fVar9) / (fVar10 - fVar9);
      }
      uVar1 = puVar3[2];
      fVar10 = (float)puVar3[1];
      if (uVar1 == 0) {
        return fVar10;
      }
      if (uVar1 != 1) {
        if (uVar1 == 2) {
          fVar8 = (3.0 - (fVar8 + fVar8)) * fVar8 * fVar8;
          return (1.0 - fVar8) * fVar10 + fVar8 * (float)puVar2[1];
        }
        if (uVar1 != 3) {
          if (uVar1 != 4) {
            return fVar10;
          }
          fVar8 = fVar8 * fVar8;
        }
        fVar8 = fVar8 * fVar8;
      }
      return (1.0 - fVar8) * fVar10 + fVar8 * (float)puVar2[1];
    }
  }
  return 0.0;
}



/* FUN_14001c89c @ 14001c89c (492 bytes) */

void FUN_14001c89c(int *param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  byte *_DstBuf;
  void *pvVar5;
  size_t _Count;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  double dVar9;
  FILE *local_res8;
  
  local_res8 = (FILE *)0x0;
  bVar2 = (&DAT_140023da4)[*param_1];
  fopen_s(&local_res8,(char *)(param_1 + 1),"rb");
  if (local_res8 != (FILE *)0x0) {
    fseek(local_res8,0,2);
    lVar3 = ftell(local_res8);
    _Count = (size_t)lVar3;
    rewind(local_res8);
    _DstBuf = (byte *)operator_new(_Count + 1);
    fread(_DstBuf,1,_Count,local_res8);
    fclose(local_res8);
    _DstBuf[_Count] = 0;
    if (_DstBuf != (byte *)0x0) {
      param_1[0x404] = 0;
      pbVar6 = _DstBuf;
      while (pbVar7 = pbVar6, *pbVar6 != 0) {
        for (; ((bVar1 = *pbVar7, bVar1 == 0x20 || (bVar1 == 0x2c)) || (bVar1 == 10));
            pbVar7 = pbVar7 + 1) {
        }
        pbVar6 = pbVar7;
        if (bVar1 != 0) {
          do {
            if ((bVar1 < 0x2d) && ((0x100100000001U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) break;
            pbVar6 = pbVar6 + 1;
            bVar1 = *pbVar6;
          } while (bVar1 != 0);
          if (pbVar7 < pbVar6) {
            param_1[0x404] = param_1[0x404] + 1;
          }
        }
      }
      pvVar5 = operator_new((ulonglong)((uint)bVar2 * param_1[0x404]));
      uVar8 = 0;
      *(void **)(param_1 + 0x402) = pvVar5;
      bVar2 = *_DstBuf;
      pbVar6 = _DstBuf;
      while (bVar2 != 0) {
        for (; ((bVar2 = *pbVar6, bVar2 == 0x20 || (bVar2 == 0x2c)) || (bVar2 == 10));
            pbVar6 = pbVar6 + 1) {
        }
        pbVar7 = pbVar6;
        if (bVar2 != 0) {
          do {
            if (((bVar2 == 0x2c) || (*pbVar7 == 0x20)) || (*pbVar7 == 0)) break;
            pbVar7 = pbVar7 + 1;
            bVar2 = *pbVar7;
          } while (bVar2 != 0);
          if (pbVar6 < pbVar7) {
            bVar2 = *pbVar7;
            *pbVar7 = 0;
            if (*param_1 == 0) {
              iVar4 = atoi((char *)pbVar6);
              *(int *)(*(longlong *)(param_1 + 0x402) + uVar8 * 4) = iVar4;
            }
            else if (*param_1 == 1) {
              dVar9 = atof((char *)pbVar6);
              *(float *)(*(longlong *)(param_1 + 0x402) + uVar8 * 4) = (float)dVar9;
            }
            else {
              if (*param_1 != 2) {
                return;
              }
              iVar4 = atoi((char *)pbVar6);
              *(char *)(uVar8 + *(longlong *)(param_1 + 0x402)) = (char)iVar4;
            }
            *pbVar7 = bVar2;
            uVar8 = (ulonglong)((int)uVar8 + 1);
          }
        }
        pbVar6 = pbVar7;
        bVar2 = *pbVar7;
      }
      free(_DstBuf);
    }
  }
  return;
}



/* FUN_14001ca88 @ 14001ca88 (154 bytes) */

undefined8 FUN_14001ca88(longlong *param_1,void *param_2)

{
  longlong *_Dst;
  byte bVar1;
  uint local_28;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  _Dst = param_1 + 0xc;
  memcpy(_Dst,param_2,0x1018);
  if (param_1[0x20d] == 0) {
    FUN_14001c89c(_Dst);
  }
  local_28 = local_28 & 0xffffff00;
  bVar1 = (&DAT_140023da4)[(int)*_Dst];
  uStack_10 = (undefined4)param_1[0x20d];
  uStack_c = (undefined4)((ulonglong)param_1[0x20d] >> 0x20);
  *(undefined1 *)(param_1 + 1) = 0;
  *(uint *)(param_1 + 2) = local_28;
  *(uint *)((longlong)param_1 + 0x14) = (uint)bVar1;
  *(int *)(param_1 + 3) = (int)param_1[0x20e];
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_14;
  *(undefined4 *)(param_1 + 5) = uStack_10;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_c;
  (**(code **)(*param_1 + 8))(param_1);
  return 1;
}



/* FUN_14001cb24 @ 14001cb24 (16 bytes) */

undefined1 FUN_14001cb24(void)

{
  FUN_14001b39c();
  return 1;
}



/* FUN_14001cb34 @ 14001cb34 (34 bytes) */

void FUN_14001cb34(longlong param_1)

{
  free(*(void **)(param_1 + 0x1068));
  FUN_14001b558(param_1);
  return;
}



/* FUN_14001cb70 @ 14001cb70 (30 bytes) */

void FUN_14001cb70(longlong param_1)

{
  if ((param_1 == DAT_140027040) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  FUN_14001d0e8(param_1);
  return;
}



/* operator_new @ 14001cb90 (60 bytes) */

/* Library Function - Single Match
    void * __ptr64 __cdecl operator new(unsigned __int64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl operator_new(__uint64 param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  
  do {
    pvVar3 = malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
    iVar2 = _callnewh(param_1);
  } while (iVar2 != 0);
  if (param_1 == 0xffffffffffffffff) {
    FUN_14001d394();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_14001d374();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}



/* free @ 14001cbcc (5 bytes) */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x000140021965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* FUN_14001cbd4 @ 14001cbd4 (43 bytes) */

undefined8 * FUN_14001cbd4(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* operator_new @ 14001cc00 (5 bytes) */

void * __cdecl operator_new(__uint64 param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  
  do {
    pvVar3 = malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
    iVar2 = _callnewh(param_1);
  } while (iVar2 != 0);
  if (param_1 == 0xffffffffffffffff) {
    FUN_14001d394();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_14001d374();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}



/* __scrt_acquire_startup_lock @ 14001cc08 (57 bytes) */

/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  bool bVar5;
  
  iVar2 = __scrt_is_ucrt_dll_in_use();
  if (iVar2 == 0) {
LAB_14001cc36:
    uVar4 = 0;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar5 = DAT_140761d28 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar5) {
        pvVar3 = DAT_140761d28;
        pvVar1 = DAT_140761d28;
      }
      DAT_140761d28 = pvVar1;
      UNLOCK();
      if (bVar5) goto LAB_14001cc36;
    } while (StackBase != pvVar3);
    uVar4 = 1;
  }
  return uVar4;
}



/* FUN_14001cc44 @ 14001cc44 (58 bytes) */

undefined1 FUN_14001cc44(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_140761d30 = 1;
  }
  FUN_14001d3d0();
  cVar1 = FUN_14001d9c8();
  if (cVar1 != '\0') {
    cVar1 = FUN_14001d9c8();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_14001d9c8(0);
  }
  return 0;
}



/* __scrt_initialize_onexit_tables @ 14001cc80 (139 bytes) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_140761d31 == '\0') {
    if (1 < param_1) {
      FUN_14001d6b8(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    iVar2 = __scrt_is_ucrt_dll_in_use();
    if ((iVar2 == 0) || (param_1 != 0)) {
      DAT_140761d38 = 0xffffffffffffffff;
      uRam0000000140761d40 = 0xffffffffffffffff;
      _DAT_140761d48 = 0xffffffffffffffff;
      _DAT_140761d50 = 0xffffffffffffffff;
      uRam0000000140761d58 = 0xffffffffffffffff;
      _DAT_140761d60 = 0xffffffffffffffff;
    }
    else {
      iVar2 = _initialize_onexit_table(&DAT_140761d38);
      if ((iVar2 != 0) || (iVar2 = _initialize_onexit_table(&DAT_140761d50), iVar2 != 0)) {
        return 0;
      }
    }
    DAT_140761d31 = '\x01';
  }
  return 1;
}



/* FUN_14001cd0c @ 14001cd0c (150 bytes) */

/* WARNING: Removing unreachable block (ram,0x00014001cd99) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

ulonglong FUN_14001cd0c(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_140000208; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1400002f8;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x140000000U < uVar1)) goto LAB_14001cd82;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_14001cd82:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}



/* __scrt_release_startup_lock @ 14001cda4 (36 bytes) */

/* Library Function - Single Match
    __scrt_release_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if ((iVar1 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_140761d28 = 0;
    UNLOCK();
  }
  return;
}



/* __scrt_uninitialize_crt @ 14001cdc8 (41 bytes) */

/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined1 __scrt_uninitialize_crt(undefined1 param_1,char param_2)

{
  if ((DAT_140761d30 == '\0') || (param_2 == '\0')) {
    FUN_14001d9c8();
    FUN_14001d9c8(param_1);
  }
  return 1;
}



/* _onexit @ 14001cdf4 (58 bytes) */

/* Library Function - Single Match
    _onexit
   
   Library: Visual Studio 2019 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_140761d38 == -1) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_140761d38);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}



/* atexit @ 14001ce30 (23 bytes) */

/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* FUN_14001ce48 @ 14001ce48 (182 bytes) */

void FUN_14001ce48(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  
  _set_app_type(2);
  iVar4 = FUN_14001d9b0();
  _set_fmode(iVar4);
  uVar5 = FUN_1400011f0();
  puVar2 = (undefined4 *)__p__commode();
  *puVar2 = uVar5;
  cVar3 = __scrt_initialize_onexit_tables(1);
  if (cVar3 != '\0') {
    FUN_14001da0c();
    atexit(FUN_14001da48);
    uVar5 = FUN_14001d69c();
    iVar4 = _configure_narrow_argv(uVar5);
    if (iVar4 == 0) {
      FUN_14001d9b8();
      iVar4 = FUN_14001d9f0();
      if (iVar4 != 0) {
        __setusermatherr(FUN_1400011f0);
      }
      _guard_check_icall();
      _guard_check_icall();
      iVar4 = FUN_1400011f0();
      _configthreadlocale(iVar4);
      cVar3 = FUN_14001d9c8();
      if (cVar3 != '\0') {
        _initialize_narrow_environment();
      }
      FUN_1400011f0();
      iVar4 = thunk_FUN_1400011f0();
      if (iVar4 == 0) {
        return;
      }
    }
  }
  FUN_14001d6b8(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* FUN_14001cf00 @ 14001cf00 (16 bytes) */

undefined8 FUN_14001cf00(void)

{
  FUN_14001d9d4();
  return 0;
}



/* FUN_14001cf10 @ 14001cf10 (25 bytes) */

void FUN_14001cf10(void)

{
  undefined4 uVar1;
  
  FUN_14001d898();
  uVar1 = FUN_1400011f0();
  _set_new_mode(uVar1);
  return;
}



/* FUN_14001cf2c @ 14001cf2c (335 bytes) */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

int FUN_14001cf2c(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  
  iVar5 = (int)unaff_RBX;
  cVar2 = FUN_14001cc44(1);
  if (cVar2 == '\0') {
    FUN_14001d6b8(7);
  }
  else {
    bVar1 = false;
    uVar3 = __scrt_acquire_startup_lock();
    iVar5 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar3);
    if (DAT_140761d20 != 1) {
      if (DAT_140761d20 == 0) {
        DAT_140761d20 = 1;
        iVar5 = _initterm_e(&DAT_1400233d8,&DAT_1400233f0);
        if (iVar5 != 0) {
          return 0xff;
        }
        _initterm(&DAT_1400233b8,&DAT_1400233d0);
        DAT_140761d20 = 2;
      }
      else {
        bVar1 = true;
      }
      __scrt_release_startup_lock(uVar3);
      plVar6 = (longlong *)FUN_14001d9fc();
      if ((*plVar6 != 0) && (cVar2 = FUN_14001cd0c(plVar6), cVar2 != '\0')) {
        (*(code *)*plVar6)(0,2);
      }
      plVar6 = (longlong *)FUN_14001da04();
      if ((*plVar6 != 0) && (cVar2 = FUN_14001cd0c(plVar6), cVar2 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar6);
      }
      uVar4 = __scrt_get_show_window_mode();
      uVar7 = _get_narrow_winmain_command_line();
      iVar5 = FUN_140018508(&IMAGE_DOS_HEADER_140000000,0,uVar7,uVar4);
      cVar2 = FUN_14001d844();
      if (cVar2 != '\0') {
        if (!bVar1) {
          _cexit();
        }
        __scrt_uninitialize_crt(1,0);
        return iVar5;
      }
      goto LAB_14001d08d;
    }
  }
  FUN_14001d6b8(7);
LAB_14001d08d:
                    /* WARNING: Subroutine does not return */
  exit(iVar5);
}



/* entry @ 14001d0a0 (18 bytes) */

void entry(void)

{
  __security_init_cookie();
  FUN_14001cf2c();
  return;
}



/* __raise_securityfailure @ 14001d0b4 (52 bytes) */

/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x00014001d0e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(pvVar1,0xc0000409);
  return;
}



/* FUN_14001d0e8 @ 14001d0e8 (211 bytes) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001d0e8(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x14001d113;
  capture_previous_context(&DAT_140761e10);
  _DAT_140761d80 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_140761ea8 = puVar3 + 0x40;
  _DAT_140761e90 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_140761d70 = 0xc0000409;
  _DAT_140761d74 = 1;
  _DAT_140761d88 = 1;
  DAT_140761d90 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_140027040;
  *(undefined8 *)(puVar3 + 0x28) = DAT_140027080;
  *(undefined8 *)(puVar3 + -8) = 0x14001d1b5;
  DAT_140761f08 = _DAT_140761d80;
  __raise_securityfailure(&PTR_DAT_140023440);
  return;
}



/* capture_previous_context @ 14001d1bc (113 bytes) */

/* Library Function - Single Match
    capture_previous_context
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



/* FUN_14001d230 @ 14001d230 (60 bytes) */

undefined8 * FUN_14001d230(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



/* FUN_14001d26c @ 14001d26c (30 bytes) */

undefined8 * FUN_14001d26c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



/* FUN_14001d28c @ 14001d28c (60 bytes) */

undefined8 * FUN_14001d28c(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



/* FUN_14001d2c8 @ 14001d2c8 (30 bytes) */

undefined8 * FUN_14001d2c8(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



/* exception @ 14001d2e8 (50 bytes) */

/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Library: Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  __std_exception_copy(param_1 + 8);
  return this;
}



/* FUN_14001d330 @ 14001d330 (66 bytes) */

undefined8 * FUN_14001d330(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* FUN_14001d374 @ 14001d374 (31 bytes) */

void FUN_14001d374(void)

{
  undefined1 local_28 [40];
  
  FUN_14001d26c(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1400258a8);
}



/* FUN_14001d394 @ 14001d394 (31 bytes) */

void FUN_14001d394(void)

{
  undefined1 local_28 [40];
  
  FUN_14001d2c8(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_140025930);
}



/* FUN_14001d3b4 @ 14001d3b4 (18 bytes) */

char * FUN_14001d3b4(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



/* free @ 14001d3c8 (5 bytes) */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x000140021965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* FUN_14001d3d0 @ 14001d3d0 (714 bytes) */

/* WARNING: Removing unreachable block (ram,0x00014001d4f3) */
/* WARNING: Removing unreachable block (ram,0x00014001d4d6) */
/* WARNING: Removing unreachable block (ram,0x00014001d4a5) */
/* WARNING: Removing unreachable block (ram,0x00014001d40c) */
/* WARNING: Removing unreachable block (ram,0x00014001d3e9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14001d3d0(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    _DAT_1400270a0 = 0xffffffffffffffff;
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_140027098 = 0x8000;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1407622e4 = DAT_1407622e4 | 1;
    }
  }
  uVar10 = 0;
  uVar8 = uVar10;
  uVar9 = uVar10;
  uVar11 = uVar10;
  if (6 < *piVar1) {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = piVar3[1];
    uVar9 = piVar3[2];
    if ((uVar8 >> 9 & 1) != 0) {
      DAT_1407622e4 = DAT_1407622e4 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar11 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar10 = *(uint *)(lVar4 + 4);
    }
  }
  _DAT_140027090 = 1;
  DAT_140027094 = 2;
  uVar6 = DAT_140027088 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    _DAT_140027090 = 2;
    DAT_140027094 = 6;
    uVar6 = DAT_140027088 & 0xffffffffffffffee;
  }
  DAT_140027088 = uVar6;
  if ((uVar5 >> 0x1b & 1) != 0) {
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar7 = (byte)in_XCR0, (bVar7 & 6) == 6)) {
      _DAT_140027090 = 3;
      uVar6 = DAT_140027088;
      uVar5 = DAT_140027094 | 8;
      if ((uVar8 & 0x20) != 0) {
        _DAT_140027090 = 5;
        uVar6 = DAT_140027088 & 0xfffffffffffffffd;
        uVar5 = DAT_140027094 | 0x28;
        if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar7 & 0xe0) == 0xe0)) {
          DAT_140027094 = DAT_140027094 | 0x68;
          _DAT_140027090 = 6;
          uVar6 = DAT_140027088 & 0xffffffffffffffd9;
          uVar5 = DAT_140027094;
        }
      }
      DAT_140027094 = uVar5;
      DAT_140027088 = uVar6;
      if ((uVar9 >> 0x17 & 1) != 0) {
        DAT_140027088 = DAT_140027088 & 0xfffffffffeffffff;
      }
      if (((uVar11 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
        _DAT_1407622e0 = uVar10 & 0x400ff;
        DAT_140027088 = ~((ulonglong)(uVar10 >> 0x10 & 7) | 0x1000028) & DAT_140027088;
        if (1 < _DAT_1407622e0) {
          DAT_140027088 = DAT_140027088 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar11 >> 0x15 & 1) != 0) && ((in_XCR0 >> 0x13 & 1) != 0)) {
      DAT_140027088 = DAT_140027088 & 0xffffffffffffff7f;
    }
  }
  return 0;
}



/* FUN_14001d69c @ 14001d69c (6 bytes) */

undefined8 FUN_14001d69c(void)

{
  return 1;
}



/* __scrt_is_ucrt_dll_in_use @ 14001d6a4 (12 bytes) */

/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_1400270b8 != 0;
}



/* FUN_14001d6b0 @ 14001d6b0 (8 bytes) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001d6b0(void)

{
  _DAT_1407622e8 = 0;
  return;
}



/* FUN_14001d6b8 @ 14001d6b8 (328 bytes) */

void FUN_14001d6b8(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 local_4d8 [152];
  undefined1 *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x14001d6ec;
  FUN_14001d6b0(3);
  *(undefined8 *)(puVar4 + -8) = 0x14001d6fd;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x14001d707;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x14001d721;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x14001d762;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x14001d794;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x14001d7b6;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x14001d7d3;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x14001d7de;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x14001d7ef;
    FUN_14001d6b0(3);
  }
  return;
}



/* __scrt_get_show_window_mode @ 14001d800 (58 bytes) */

/* Library Function - Single Match
    __scrt_get_show_window_mode
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

WORD __scrt_get_show_window_mode(void)

{
  WORD WVar1;
  _STARTUPINFOW local_78;
  
  memset(&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  WVar1 = 10;
  if (((byte)local_78.dwFlags & 1) != 0) {
    WVar1 = local_78.wShowWindow;
  }
  return WVar1;
}



/* thunk_FUN_1400011f0 @ 14001d83c (5 bytes) */

undefined8 thunk_FUN_1400011f0(void)

{
  return 0;
}



/* FUN_14001d844 @ 14001d844 (81 bytes) */

ulonglong FUN_14001d844(void)

{
  HMODULE pHVar1;
  ulonglong uVar2;
  int *piVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 == (HMODULE)0x0) || ((short)pHVar1->unused != 0x5a4d)) ||
      (piVar3 = (int *)((longlong)&pHVar1->unused + (longlong)pHVar1[0xf].unused), *piVar3 != 0x4550
      )) || ((pHVar1 = (HMODULE)0x20b, (short)piVar3[6] != 0x20b || ((uint)piVar3[0x21] < 0xf)))) {
    uVar2 = (ulonglong)pHVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = CONCAT71(2,piVar3[0x3e] != 0);
  }
  return uVar2;
}



/* FUN_14001d898 @ 14001d898 (14 bytes) */

void FUN_14001d898(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014001d89f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUnhandledExceptionFilter(FUN_14001d8a8);
  return;
}



/* FUN_14001d8a8 @ 14001d8a8 (90 bytes) */

undefined8 FUN_14001d8a8(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) {
    if ((piVar1[8] + 0xe66cfae0U < 3) || (piVar1[8] == 0x1994000)) {
      puVar3 = (undefined8 *)__current_exception();
      *puVar3 = piVar1;
      uVar2 = param_1[1];
      puVar3 = (undefined8 *)__current_exception_context();
      *puVar3 = uVar2;
                    /* WARNING: Subroutine does not return */
      terminate();
    }
  }
  return 0;
}



/* __security_init_cookie @ 14001d904 (172 bytes) */

/* Library Function - Single Match
    __security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_140027040 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_140027040 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_140027040 == 0x2b992ddfa232) {
      DAT_140027040 = 0x2b992ddfa233;
    }
  }
  DAT_140027080 = ~DAT_140027040;
  return;
}



/* FUN_14001d9b0 @ 14001d9b0 (6 bytes) */

undefined8 FUN_14001d9b0(void)

{
  return 0x4000;
}



/* FUN_14001d9b8 @ 14001d9b8 (14 bytes) */

void FUN_14001d9b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014001d9bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_1407622f0);
  return;
}



/* FUN_14001d9c8 @ 14001d9c8 (3 bytes) */

undefined1 FUN_14001d9c8(void)

{
  return 1;
}



/* FUN_14001d9cc @ 14001d9cc (8 bytes) */

undefined * FUN_14001d9cc(void)

{
  return &DAT_140762300;
}



/* FUN_14001d9d4 @ 14001d9d4 (27 bytes) */

void FUN_14001d9d4(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_14001c310();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_14001d9cc();
  *puVar1 = *puVar1 | 2;
  return;
}



/* FUN_14001d9f0 @ 14001d9f0 (12 bytes) */

bool FUN_14001d9f0(void)

{
  return DAT_1400270a8 == 0;
}



/* FUN_14001d9fc @ 14001d9fc (8 bytes) */

undefined * FUN_14001d9fc(void)

{
  return &DAT_140762648;
}



/* FUN_14001da04 @ 14001da04 (8 bytes) */

undefined * FUN_14001da04(void)

{
  return &DAT_140762640;
}



/* FUN_14001da0c @ 14001da0c (60 bytes) */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14001da0c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140024cc8; puVar1 < &DAT_140024cc8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



/* FUN_14001da48 @ 14001da48 (60 bytes) */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14001da48(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140024cd8; puVar1 < &DAT_140024cd8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



/* FUN_14001da90 @ 14001da90 (398 bytes) */

undefined8
FUN_14001da90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  size_t sVar3;
  size_t *_Dst;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  
  iVar2 = FUN_140020470(param_2,param_3);
  if (iVar2 == 0) {
    sVar3 = FUN_1400204d0(param_2);
    _Dst = (size_t *)malloc(sVar3);
    if ((_Dst == (size_t *)0x0) && (sVar3 != 0)) {
      uVar4 = 2;
    }
    else {
      memset(_Dst,0,sVar3);
      *param_1 = _Dst;
      *_Dst = sVar3;
      *(undefined4 *)(_Dst + 0x25) = param_4;
      sVar3 = FUN_1400208a0(_Dst,param_2,param_3,_Dst + 0x2e);
      uVar1 = *(ushort *)((longlong)_Dst + 0xc);
      uVar7 = 0;
      _Dst[0x2d] = sVar3;
      *(undefined4 *)(_Dst + 0x26) = 0x3f800000;
      *(undefined4 *)((longlong)_Dst + 0x134) = 0x3e800000;
      *(undefined4 *)(_Dst + 0x27) = 0x3c000000;
      if (uVar1 != 0) {
        do {
          bVar6 = (char)uVar7 + 1;
          lVar5 = uVar7 * 0x130 + _Dst[0x2d];
          *(undefined1 *)(lVar5 + 0x30) = 1;
          *(undefined4 *)(lVar5 + 0x70) = 0;
          *(undefined1 *)(lVar5 + 0x74) = 1;
          *(undefined4 *)(lVar5 + 0x7c) = 0;
          *(undefined1 *)(lVar5 + 0x80) = 1;
          *(undefined4 *)(lVar5 + 0x40) = 0x3f800000;
          *(undefined4 *)(lVar5 + 0x44) = 0x3f800000;
          *(undefined4 *)(lVar5 + 0x34) = 0x3f800000;
          *(undefined4 *)(lVar5 + 0x48) = 0x3f000000;
          *(undefined4 *)(lVar5 + 0x38) = 0x3f000000;
          *(undefined8 *)(lVar5 + 0x128) = 0;
          uVar7 = (ulonglong)bVar6;
        } while ((ushort)bVar6 < *(ushort *)((longlong)_Dst + 0xc));
      }
      _Dst[0x2b] = sVar3 + (ulonglong)uVar1 * 0x130;
      iVar2 = FUN_1400011f0(_Dst);
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        free(_Dst);
        uVar4 = 1;
      }
    }
    return uVar4;
  }
  return 1;
}



/* free @ 14001dc20 (7 bytes) */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x00014001dc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* FUN_14001dc30 @ 14001dc30 (7 bytes) */

void FUN_14001dc30(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x161) = param_2;
  return;
}



/* FUN_14001dc40 @ 14001dc40 (157 bytes) */

void FUN_14001dc40(void)

{
  return;
}



/* FUN_14001dce0 @ 14001dce0 (357 bytes) */

void FUN_14001dce0(longlong param_1,longlong param_2,ushort *param_3,float *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  float fVar7;
  
  if (*(byte *)(param_2 + 0x30) < 2) {
    if ((*(byte *)(param_2 + 0x30) == 1) &&
       (fVar7 = (float)*(ushort *)(param_2 + 2) * 0.015625, *param_4 = fVar7, 1.0 < fVar7)) {
      *param_4 = 1.0;
      return;
    }
  }
  else {
    if (*(char *)(param_2 + 0x36) != '\0') {
      uVar1 = *(ushort *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x33) * 4);
      if (uVar1 <= *param_3) {
        *param_3 = (*(short *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x32) * 4) - uVar1) +
                   *param_3;
      }
    }
    uVar5 = 0;
    bVar4 = 0;
    iVar6 = *(byte *)(param_2 + 0x30) - 2;
    if (0 < iVar6) {
      do {
        bVar4 = (byte)uVar5;
        if ((*(ushort *)(param_2 + uVar5 * 4) <= *param_3) &&
           (*param_3 <= *(ushort *)(param_2 + 4 + uVar5 * 4))) break;
        bVar4 = bVar4 + 1;
        uVar5 = (ulonglong)bVar4;
      } while ((int)(uint)bVar4 < iVar6);
    }
    uVar1 = *param_3;
    uVar5 = (ulonglong)bVar4;
    uVar2 = *(ushort *)(param_2 + uVar5 * 4);
    if (uVar2 < uVar1) {
      uVar3 = *(ushort *)(param_2 + 4 + uVar5 * 4);
      if (uVar1 < uVar3) {
        fVar7 = (float)(int)((uint)uVar1 - (uint)uVar2) / (float)(int)((uint)uVar3 - (uint)uVar2);
        fVar7 = (1.0 - fVar7) * (float)*(ushort *)(param_2 + 2 + uVar5 * 4) +
                (float)*(ushort *)(param_2 + 6 + uVar5 * 4) * fVar7;
      }
      else {
        fVar7 = (float)*(ushort *)(param_2 + 6 + uVar5 * 4);
      }
    }
    else {
      fVar7 = (float)*(ushort *)(param_2 + 2 + uVar5 * 4);
    }
    *param_4 = fVar7 * 0.015625;
    if (((*(char *)(param_1 + 0x3e) == '\0') || (*(char *)(param_2 + 0x35) == '\0')) ||
       (*param_3 != *(ushort *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x31) * 4))) {
      *param_3 = *param_3 + 1;
    }
  }
  return;
}



/* FUN_14001de50 @ 14001de50 (148 bytes) */

void FUN_14001de50(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x96) != '\0') {
      if (*(char *)(param_1 + 0x3e) == '\0') {
        fVar2 = *(float *)(param_1 + 0x40) - (float)*(ushort *)(lVar1 + 0xdc) * 3.0517578e-05;
        *(float *)(param_1 + 0x40) = fVar2;
        if (fVar2 < 0.0) {
          *(undefined4 *)(param_1 + 0x40) = 0;
        }
      }
      FUN_14001dce0(param_1,lVar1 + 0x62,param_1 + 0x4c,param_1 + 0x44);
    }
    if (*(char *)(*(longlong *)(param_1 + 8) + 0xce) != '\0') {
      FUN_14001dce0(param_1,*(longlong *)(param_1 + 8) + 0x9a,param_1 + 0x4e,param_1 + 0x48);
      return;
    }
  }
  return;
}



/* FUN_14001def0 @ 14001def0 (534 bytes) */

ulonglong FUN_14001def0(ulonglong param_1,float param_2,float param_3,float param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  float fVar7;
  undefined1 extraout_var [12];
  undefined1 auVar8 [16];
  float fVar9;
  undefined4 uVar10;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    fVar9 = powf(2.0,(4608.0 - ((param_2 - param_3 * 64.0) - param_4 * 16.0)) / 768.0);
    auVar8._0_4_ = fVar9 * 8363.0;
    auVar8._4_12_ = extraout_var;
    return auVar8._0_8_;
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    fVar9 = 0.0;
    uVar10 = 0;
    if (param_3 != 0.0) {
      param_2 = param_2 * 1024.0;
      bVar2 = 0;
      if (param_2 <= 1753088.0) {
        if ((param_2 < 876544.0) && (bVar2 = 1, param_2 < 438272.0)) {
          do {
            bVar2 = bVar2 + 1;
            param_1 = (ulonglong)(uint)(int)(char)bVar2;
          } while (param_2 < (float)(0xd6000 >> (bVar2 & 0x1f)));
        }
      }
      else {
        bVar2 = 0xff;
        if (3506176.0 < param_2) {
          do {
            bVar2 = bVar2 - 1;
            param_1 = (ulonglong)(uint)-(int)(char)bVar2;
          } while ((float)(uint)(0x1ac000 << ((byte)-(int)(char)bVar2 & 0x1f)) < param_2);
        }
      }
      bVar5 = 0;
      uVar6 = -(int)(char)bVar2;
      do {
        iVar4 = (&DAT_1400234e0)[bVar5];
        iVar3 = (&DAT_1400234e4)[bVar5];
        if ((char)bVar2 < '\x01') {
          if ((char)bVar2 < '\0') {
            param_1 = (ulonglong)uVar6;
            bVar1 = (byte)uVar6;
            iVar4 = iVar4 << (bVar1 & 0x1f);
            iVar3 = iVar3 << (bVar1 & 0x1f);
          }
        }
        else {
          param_1 = (ulonglong)(uint)(int)(char)bVar2;
          iVar4 = iVar4 >> (bVar2 & 0x1f);
          iVar3 = iVar3 >> (bVar2 & 0x1f);
        }
      } while (((param_2 < (float)iVar3) || (bVar1 = bVar5, (float)iVar4 < param_2)) &&
              (bVar5 = bVar5 + 1, bVar1 = 0, bVar5 < 0xc));
      fVar7 = (float)FUN_14001dc40(param_1,(float)((char)bVar2 + 2) * 12.0 + (float)bVar1);
      fVar7 = fVar7 + param_4 * 16.0;
      if (fVar7 != fVar9) {
        uVar10 = 0;
        fVar9 = 7093789.0 / (fVar7 + fVar7);
      }
      return CONCAT44(uVar10,fVar9);
    }
    param_2 = param_4 * 16.0 + param_2;
    if (param_2 != 0.0) {
      fVar9 = 7093789.0 / (param_2 + param_2);
    }
    return (ulonglong)(uint)fVar9;
  }
  return 0;
}



/* FUN_14001e110 @ 14001e110 (525 bytes) */

void FUN_14001e110(longlong param_1,longlong param_2,ulonglong param_3)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  bool bVar5;
  float fVar6;
  
  *(longlong *)(param_1 + 0x148) = *(longlong *)(param_1 + 0x148) + param_3;
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      if (*(float *)(param_1 + 0x140) <= 0.0) {
        FUN_14001f560(param_1);
      }
      *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0x140) - 1.0;
      *(undefined8 *)(param_2 + uVar3 * 8) = 0;
      if ((*(byte *)(param_1 + 0x161) == 0) ||
         (*(byte *)(param_1 + 0x160) < *(byte *)(param_1 + 0x161))) {
        bVar4 = 0;
        if (*(short *)(param_1 + 0xc) != 0) {
          do {
            lVar2 = (ulonglong)bVar4 * 0x130 + *(longlong *)(param_1 + 0x168);
            if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
               (0.0 < *(float *)(lVar2 + 0x20) || *(float *)(lVar2 + 0x20) == 0.0)) {
              fVar6 = (float)FUN_14001f010();
              if ((*(char *)(lVar2 + 0x98) == '\0') &&
                 (*(char *)(*(longlong *)(lVar2 + 8) + 0xe8) == '\0')) {
                *(float *)(param_2 + uVar3 * 8) =
                     fVar6 * *(float *)(lVar2 + 0x128) + *(float *)(param_2 + uVar3 * 8);
                *(float *)(param_2 + 4 + uVar3 * 8) =
                     fVar6 * *(float *)(lVar2 + 300) + *(float *)(param_2 + 4 + uVar3 * 8);
              }
              *(int *)(lVar2 + 0xa4) = *(int *)(lVar2 + 0xa4) + 1;
              fVar6 = *(float *)(lVar2 + 0x128);
              fVar1 = *(float *)(lVar2 + 0x9c);
              if (fVar6 <= fVar1) {
                if (fVar6 < fVar1) {
                  fVar6 = fVar6 + *(float *)(param_1 + 0x138);
                  bVar5 = fVar6 < fVar1;
                  goto LAB_14001e25c;
                }
              }
              else {
                fVar6 = fVar6 - *(float *)(param_1 + 0x138);
                bVar5 = fVar1 < fVar6;
LAB_14001e25c:
                *(float *)(lVar2 + 0x128) = fVar6;
                if (!bVar5 && fVar1 != fVar6) {
                  *(float *)(lVar2 + 0x128) = fVar1;
                }
              }
              fVar6 = *(float *)(lVar2 + 300);
              fVar1 = *(float *)(lVar2 + 0xa0);
              if (fVar6 <= fVar1) {
                if (fVar1 <= fVar6) goto LAB_14001e2b2;
                fVar6 = fVar6 + *(float *)(param_1 + 0x138);
                bVar5 = fVar6 < fVar1;
              }
              else {
                fVar6 = fVar6 - *(float *)(param_1 + 0x138);
                bVar5 = fVar1 < fVar6;
              }
              *(float *)(lVar2 + 300) = fVar6;
              if (!bVar5 && fVar1 != fVar6) {
                *(float *)(lVar2 + 300) = fVar1;
              }
            }
LAB_14001e2b2:
            bVar4 = bVar4 + 1;
          } while ((ushort)bVar4 < *(ushort *)(param_1 + 0xc));
        }
        fVar6 = *(float *)(param_1 + 0x134) * *(float *)(param_1 + 0x130);
        *(float *)(param_2 + uVar3 * 8) = fVar6 * *(float *)(param_2 + uVar3 * 8);
        *(float *)(param_2 + 4 + uVar3 * 8) = fVar6 * *(float *)(param_2 + 4 + uVar3 * 8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return;
}



/* FUN_14001e320 @ 14001e320 (2523 bytes) */

void FUN_14001e320(longlong param_1,float *param_2,byte *param_3)

{
  int iVar1;
  ushort *puVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  float *pfVar6;
  longlong lVar7;
  IMAGE_DOS_HEADER *pIVar8;
  float fVar9;
  float fVar10;
  
  bVar4 = param_3[1];
  if (bVar4 != 0) {
    if (((((*(char *)(*(longlong *)(param_2 + 6) + 3) - 3U & 0xfd) == 0) ||
         ((*(byte *)(*(longlong *)(param_2 + 6) + 2) & 0xf0) == 0xf0)) &&
        (*(longlong *)(param_2 + 2) != 0)) && (lVar7 = *(longlong *)(param_2 + 4), lVar7 != 0)) {
      param_2[0xd] = *(float *)(lVar7 + 0x14);
      param_2[0xe] = *(float *)(lVar7 + 0x20);
      *(undefined1 *)((longlong)param_2 + 0x3e) = 1;
      param_2[0x11] = 1.0;
      param_2[0x10] = 1.0;
      param_2[0x12] = 0.5;
      param_2[0x13] = 0.0;
      param_2[0x1e] = 0.0;
      param_2[0x21] = 0.0;
      *(undefined1 *)((longlong)param_2 + 0x89) = 0;
      *(undefined2 *)(param_2 + 0xf) = 0;
      if (*(char *)(param_2 + 0x1d) != '\0') {
        *(undefined2 *)((longlong)param_2 + 0x76) = 0;
      }
      if (*(char *)(param_2 + 0x20) != '\0') {
        *(undefined1 *)((longlong)param_2 + 0x82) = 0;
      }
      *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_1 + 0x148);
      *(undefined8 *)(*(longlong *)(param_2 + 2) + 0xe0) = *(undefined8 *)(param_1 + 0x148);
      if (*(longlong *)(param_2 + 4) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 4) + 0x28) = *(undefined8 *)(param_1 + 0x148);
      }
    }
    else if ((*param_3 == 0) && (lVar7 = *(longlong *)(param_2 + 4), lVar7 != 0)) {
      param_2[0xd] = *(float *)(lVar7 + 0x14);
      param_2[0xe] = *(float *)(lVar7 + 0x20);
      *(undefined1 *)((longlong)param_2 + 0x3e) = 1;
      param_2[0x11] = 1.0;
      param_2[0x10] = 1.0;
      param_2[0x12] = 0.5;
      param_2[0x13] = 0.0;
      param_2[0x1e] = 0.0;
      param_2[0x21] = 0.0;
      *(undefined1 *)((longlong)param_2 + 0x89) = 0;
      *(undefined2 *)(param_2 + 0xf) = 0;
      if (*(char *)(param_2 + 0x1d) != '\0') {
        *(undefined2 *)((longlong)param_2 + 0x76) = 0;
      }
      if (*(char *)(param_2 + 0x20) != '\0') {
        *(undefined1 *)((longlong)param_2 + 0x82) = 0;
      }
      if (*(int *)(param_1 + 0x14) == 0) {
        fVar9 = 7680.0 - *param_2 * 64.0;
      }
      else if (*(int *)(param_1 + 0x14) == 1) {
        fVar9 = (float)FUN_14001dc40();
      }
      else {
        fVar9 = 0.0;
      }
      param_2[9] = fVar9;
      fVar9 = (float)FUN_14001def0(param_1);
      param_2[10] = fVar9;
      param_2[0xb] = fVar9 / (float)*(uint *)(param_1 + 0x128);
      *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_1 + 0x148);
      if (*(longlong *)(param_2 + 2) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 2) + 0xe0) = *(undefined8 *)(param_1 + 0x148);
      }
      if (*(longlong *)(param_2 + 4) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 4) + 0x28) = *(undefined8 *)(param_1 + 0x148);
      }
    }
    else if (*(ushort *)(param_1 + 0x10) < (ushort)bVar4) {
      param_2[0xd] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = 0.0;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
    }
    else {
      *(ulonglong *)(param_2 + 2) = (ulonglong)bVar4 * 0xf8 + *(longlong *)(param_1 + 0x120) + -0xf8
      ;
    }
  }
  bVar4 = *param_3;
  if ((byte)(bVar4 - 1) < 0x60) {
    puVar2 = *(ushort **)(param_2 + 2);
    if (((*(char *)(*(longlong *)(param_2 + 6) + 3) - 3U & 0xfd) == 0) ||
       ((*(byte *)(*(longlong *)(param_2 + 6) + 2) & 0xf0) == 0xf0)) {
      if (puVar2 != (ushort *)0x0) {
        lVar7 = *(longlong *)(param_2 + 4);
        if (lVar7 != 0) {
          fVar9 = ((float)(int)((int)*(char *)(lVar7 + 0x24) + (uint)bVar4) +
                  (float)(int)*(char *)(lVar7 + 0x18) * 0.0078125) - 1.0;
          *param_2 = fVar9;
          if (*(int *)(param_1 + 0x14) == 0) {
            param_2[0x19] = 7680.0 - fVar9 * 64.0;
          }
          else if (*(int *)(param_1 + 0x14) == 1) {
            fVar9 = (float)FUN_14001dc40();
            param_2[0x19] = fVar9;
          }
          else {
            param_2[0x19] = 0.0;
          }
          goto LAB_14001e938;
        }
        goto LAB_14001e651;
      }
    }
    else if (puVar2 != (ushort *)0x0) {
LAB_14001e651:
      if ((*puVar2 != 0) && ((ushort)*(byte *)((ulonglong)bVar4 + 1 + (longlong)puVar2) < *puVar2))
      {
        pfVar6 = param_2 + 0x2a;
        lVar7 = 0x20;
        do {
          if (((*(longlong *)(param_2 + 2) == 0) ||
              (pcVar3 = *(char **)(param_2 + 4), pcVar3 == (char *)0x0)) ||
             (fVar9 = param_2[8], fVar9 < 0.0)) {
            fVar9 = param_2[0x29];
            if (0x1f < (uint)fVar9) goto LAB_14001e6c4;
            fVar10 = (float)(uint)fVar9 * 0.03125 * (0.0 - param_2[(ulonglong)(uint)fVar9 + 0x2a]) +
                     param_2[(ulonglong)(uint)fVar9 + 0x2a];
          }
          else if (*(int *)(pcVar3 + 4) == 0) {
LAB_14001e6c4:
            fVar10 = 0.0;
          }
          else {
            if (*pcVar3 == '\b') {
              fVar10 = (float)(int)*(char *)(*(longlong *)(pcVar3 + 0x30) +
                                            ((longlong)fVar9 & 0xffffffffU)) * 0.0078125;
            }
            else {
              fVar10 = (float)(int)*(short *)(*(longlong *)(pcVar3 + 0x30) +
                                             ((longlong)fVar9 & 0xffffffffU) * 2) * 3.0517578e-05;
            }
            iVar1 = *(int *)(pcVar3 + 0x1c);
            if (iVar1 == 0) {
              param_2[8] = fVar9 + param_2[0xb];
              if ((float)*(uint *)(pcVar3 + 4) <= fVar9 + param_2[0xb]) {
                param_2[8] = -1.0;
              }
            }
            else if (iVar1 == 1) {
              fVar9 = fVar9 + param_2[0xb];
              param_2[8] = fVar9;
              if ((float)*(uint *)(pcVar3 + 0x10) <= fVar9) {
                do {
                  fVar9 = fVar9 - (float)*(uint *)(pcVar3 + 0xc);
                  param_2[8] = fVar9;
                } while ((float)*(uint *)(pcVar3 + 0x10) <= fVar9);
              }
            }
            else if (iVar1 == 2) {
              if (*(char *)(param_2 + 0xc) == '\0') {
                fVar9 = fVar9 - param_2[0xb];
                param_2[8] = fVar9;
                if (fVar9 <= (float)*(uint *)(pcVar3 + 8)) {
                  *(undefined1 *)(param_2 + 0xc) = 1;
                  fVar9 = (float)(uint)(*(int *)(pcVar3 + 8) * 2) - fVar9;
                  param_2[8] = fVar9;
                }
                if (fVar9 <= 0.0) {
                  *(undefined1 *)(param_2 + 0xc) = 1;
                  param_2[8] = 0.0;
                }
              }
              else {
                fVar9 = fVar9 + param_2[0xb];
                param_2[8] = fVar9;
                if ((float)*(uint *)(pcVar3 + 0x10) <= fVar9) {
                  *(undefined1 *)(param_2 + 0xc) = 0;
                  fVar9 = (float)(uint)(*(int *)(pcVar3 + 0x10) * 2) - fVar9;
                  param_2[8] = fVar9;
                }
                if ((float)*(uint *)(pcVar3 + 4) <= fVar9) {
                  *(undefined1 *)(param_2 + 0xc) = 0;
                  param_2[8] = fVar9 - (float)(*(int *)(pcVar3 + 4) - 1);
                }
              }
            }
            fVar9 = param_2[0x29];
            if ((uint)fVar9 < 0x20) {
              fVar10 = (fVar10 - param_2[(ulonglong)(uint)fVar9 + 0x2a]) *
                       (float)(uint)fVar9 * 0.03125 + param_2[(ulonglong)(uint)fVar9 + 0x2a];
            }
          }
          *pfVar6 = fVar10;
          pfVar6 = pfVar6 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        param_2[0x29] = 0.0;
        lVar7 = (ulonglong)*(byte *)((ulonglong)*param_3 + 1 + (longlong)puVar2) * 0x38 +
                *(longlong *)(puVar2 + 0x78);
        *(longlong *)(param_2 + 4) = lVar7;
        fVar9 = ((float)(int)((int)*(char *)(lVar7 + 0x24) + (uint)*param_3) +
                (float)(int)*(char *)(lVar7 + 0x18) * 0.0078125) - 1.0;
        *param_2 = fVar9;
        param_2[1] = fVar9;
        FUN_1400200f0(param_1,param_2,param_3[1] == 0);
        goto LAB_14001e938;
      }
    }
LAB_14001e935:
    param_2[0xd] = 0.0;
  }
  else if (bVar4 == 0x61) {
    *(undefined1 *)((longlong)param_2 + 0x3e) = 0;
    if ((*(longlong *)(param_2 + 2) == 0) || (*(char *)(*(longlong *)(param_2 + 2) + 0x96) == '\0'))
    goto LAB_14001e935;
  }
LAB_14001e938:
  bVar4 = param_3[2];
  pIVar8 = &IMAGE_DOS_HEADER_140000000;
  fVar9 = 0.015625;
  fVar10 = 255.0;
  switch(bVar4 >> 4) {
  case 5:
    if (0x50 < bVar4) break;
  case 1:
  case 2:
  case 3:
  case 4:
    param_2[0xd] = (float)(int)(bVar4 - 0x10) * 0.015625;
    break;
  case 8:
    FUN_1400202f0(param_2,bVar4 & 0xf);
    break;
  case 9:
    FUN_1400202f0(param_2,bVar4 << 4);
    break;
  case 10:
    *(byte *)((longlong)param_2 + 0x75) = *(byte *)((longlong)param_2 + 0x75) & 0xf | bVar4 << 4;
    break;
  case 0xc:
    param_2[0xe] = (float)((bVar4 & 0xf) << 4 | bVar4 & 0xf) / 255.0;
    break;
  case 0xf:
    if ((bVar4 & 0xf) != 0) {
      *(byte *)(param_2 + 0x18) = bVar4 << 4 | bVar4 & 0xf;
    }
  }
  if (param_3[3] - 1 < 0x21) {
    switch(pIVar8->e_magic +
           *(uint *)(pIVar8[0x3de].e_program + (longlong)(int)(param_3[3] - 1) * 4 + 0x10)) {
    case (char *)0x14001ea03:
      if (param_3[4] != 0) {
        *(byte *)((longlong)param_2 + 0x5a) = param_3[4];
      }
      break;
    case (char *)0x14001ea17:
      if (param_3[4] != 0) {
        *(byte *)((longlong)param_2 + 0x5b) = param_3[4];
      }
      break;
    case (char *)0x14001ea2b:
      if (param_3[4] != 0) {
        *(byte *)(param_2 + 0x18) = param_3[4];
      }
      break;
    case (char *)0x14001ea3f:
      if ((param_3[4] & 0xf) != 0) {
        *(byte *)((longlong)param_2 + 0x75) =
             *(byte *)((longlong)param_2 + 0x75) ^
             (param_3[4] ^ *(byte *)((longlong)param_2 + 0x75)) & 0xf;
      }
      bVar4 = param_3[4];
      if ((bVar4 & 0xf0) != 0) {
        *(byte *)((longlong)param_2 + 0x75) =
             (bVar4 ^ *(byte *)((longlong)param_2 + 0x75)) & 0xf ^ bVar4;
      }
      break;
    case (char *)0x14001ea70:
      if (param_3[4] != 0) {
        *(byte *)((longlong)param_2 + 0x56) = param_3[4];
      }
      break;
    case (char *)0x14001ea84:
      if ((param_3[4] & 0xf) != 0) {
        *(byte *)((longlong)param_2 + 0x81) =
             (*(byte *)((longlong)param_2 + 0x81) ^ param_3[4]) & 0xf ^
             *(byte *)((longlong)param_2 + 0x81);
      }
      bVar4 = param_3[4];
      if ((bVar4 & 0xf0) != 0) {
        *(byte *)((longlong)param_2 + 0x81) =
             (bVar4 ^ *(byte *)((longlong)param_2 + 0x81)) & 0xf ^ bVar4;
      }
      break;
    case (char *)0x14001eac9:
      param_2[0xe] = (float)param_3[4] / fVar10;
      break;
    case (char *)0x14001eae2:
      pcVar3 = *(char **)(param_2 + 4);
      if ((pcVar3 != (char *)0x0) && ((byte)(*param_3 - 1) < 0x60)) {
        uVar5 = (uint)param_3[4] << (*pcVar3 != '\x10') + 7;
        if (uVar5 < *(uint *)(pcVar3 + 4)) {
          param_2[8] = (float)uVar5;
        }
        else {
          param_2[8] = -1.0;
        }
      }
      break;
    case (char *)0x14001eb2f:
      if ((ushort)param_3[4] < *(ushort *)(param_1 + 8)) {
        *(undefined1 *)(param_1 + 0x150) = 1;
        *(byte *)(param_1 + 0x152) = param_3[4];
        *(undefined1 *)(param_1 + 0x153) = 0;
      }
      break;
    case (char *)0x14001eb5a:
      bVar4 = param_3[4];
      if (0x40 < bVar4) {
        bVar4 = 0x40;
      }
      param_2[0xd] = (float)bVar4 * fVar9;
      break;
    case (char *)0x14001eb7c:
      *(undefined1 *)(param_1 + 0x151) = 1;
      *(byte *)(param_1 + 0x153) = (param_3[4] >> 4) * '\n' + (param_3[4] & 0xf);
      break;
    case (char *)0x14001eba7:
      uVar5 = (param_3[4] >> 4) - 1;
      if (uVar5 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x00014001ebc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pIVar8->e_magic +
                  *(uint *)(pIVar8[0x3df].e_program + (longlong)(int)uVar5 * 4 + 0x14)))
                  (pIVar8->e_magic +
                   *(uint *)(pIVar8[0x3df].e_program + (longlong)(int)uVar5 * 4 + 0x14));
        return;
      }
      break;
    case (char *)0x14001ede1:
      bVar4 = param_3[4];
      if (bVar4 != 0) {
        if (bVar4 < 0x20) {
          *(ushort *)(param_1 + 300) = (ushort)bVar4;
        }
        else {
          *(ushort *)(param_1 + 0x12e) = (ushort)bVar4;
        }
      }
      break;
    case (char *)0x14001ee09:
      bVar4 = param_3[4];
      if (0x40 < bVar4) {
        bVar4 = 0x40;
      }
      *(float *)(param_1 + 0x130) = (float)bVar4 * fVar9;
      break;
    case (char *)0x14001ee2e:
      if (param_3[4] != 0) {
        *(byte *)(param_2 + 0x16) = param_3[4];
      }
      break;
    case (char *)0x14001ee42:
      *(ushort *)(param_2 + 0x13) = (ushort)param_3[4];
      *(ushort *)((longlong)param_2 + 0x4e) = (ushort)param_3[4];
      break;
    case (char *)0x14001ee57:
      if (param_3[4] != 0) {
        *(byte *)((longlong)param_2 + 0x59) = param_3[4];
      }
      break;
    case (char *)0x14001ee68:
      bVar4 = param_3[4];
      if (bVar4 != 0) {
        if ((bVar4 & 0xf0) == 0) {
          *(byte *)(param_2 + 0x1a) =
               *(byte *)(param_2 + 0x1a) ^ (bVar4 ^ *(byte *)(param_2 + 0x1a)) & 0xf;
        }
        else {
          *(byte *)(param_2 + 0x1a) = bVar4;
        }
      }
      break;
    case (char *)0x14001ee85:
      if (param_3[4] != 0) {
        *(byte *)(param_2 + 0x22) = param_3[4];
      }
      break;
    case (char *)0x14001ee95:
      bVar4 = param_3[4];
      if (bVar4 >> 4 == 1) {
        if ((bVar4 & 0xf) != 0) {
          *(byte *)((longlong)param_2 + 0x5e) = bVar4 & 0xf;
        }
      }
      else {
        if (bVar4 >> 4 != 2) {
          return;
        }
        if ((bVar4 & 0xf) != 0) {
          *(byte *)((longlong)param_2 + 0x5f) = bVar4 & 0xf;
        }
      }
      FUN_14001f2c0(param_1,param_2);
    }
  }
  return;
}



/* FUN_14001f010 @ 14001f010 (544 bytes) */

float FUN_14001f010(longlong param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  
  if (((*(longlong *)(param_1 + 8) == 0) ||
      (pcVar3 = *(char **)(param_1 + 0x10), pcVar3 == (char *)0x0)) ||
     (fVar4 = *(float *)(param_1 + 0x20), fVar4 < 0.0)) {
    uVar2 = *(uint *)(param_1 + 0xa4);
    if (uVar2 < 0x20) {
      fVar4 = *(float *)(param_1 + 0xa8 + (ulonglong)uVar2 * 4);
      return (float)uVar2 * 0.03125 * (0.0 - fVar4) + fVar4;
    }
  }
  else if (*(int *)(pcVar3 + 4) != 0) {
    if (*pcVar3 == '\b') {
      fVar5 = (float)(int)*(char *)(*(longlong *)(pcVar3 + 0x30) + ((longlong)fVar4 & 0xffffffffU))
              * 0.0078125;
    }
    else {
      fVar5 = (float)(int)*(short *)(*(longlong *)(pcVar3 + 0x30) +
                                    ((longlong)fVar4 & 0xffffffffU) * 2) * 3.0517578e-05;
    }
    iVar1 = *(int *)(pcVar3 + 0x1c);
    if (iVar1 == 0) {
      fVar4 = fVar4 + *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x20) = fVar4;
      if ((float)*(uint *)(pcVar3 + 4) <= fVar4) {
        *(undefined4 *)(param_1 + 0x20) = 0xbf800000;
      }
    }
    else if (iVar1 == 1) {
      fVar4 = fVar4 + *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x20) = fVar4;
      if ((float)*(uint *)(pcVar3 + 0x10) <= fVar4) {
        do {
          fVar4 = fVar4 - (float)*(uint *)(pcVar3 + 0xc);
          *(float *)(param_1 + 0x20) = fVar4;
        } while ((float)*(uint *)(pcVar3 + 0x10) <= fVar4);
      }
    }
    else if (iVar1 == 2) {
      if (*(char *)(param_1 + 0x30) == '\0') {
        fVar4 = fVar4 - *(float *)(param_1 + 0x2c);
        *(float *)(param_1 + 0x20) = fVar4;
        if (fVar4 <= (float)*(uint *)(pcVar3 + 8)) {
          *(undefined1 *)(param_1 + 0x30) = 1;
          fVar4 = (float)(uint)(*(int *)(pcVar3 + 8) * 2) - fVar4;
          *(float *)(param_1 + 0x20) = fVar4;
        }
        if (fVar4 <= 0.0) {
          *(undefined1 *)(param_1 + 0x30) = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
      }
      else {
        fVar4 = fVar4 + *(float *)(param_1 + 0x2c);
        *(float *)(param_1 + 0x20) = fVar4;
        if ((float)*(uint *)(pcVar3 + 0x10) <= fVar4) {
          *(undefined1 *)(param_1 + 0x30) = 0;
          fVar4 = (float)(uint)(*(int *)(pcVar3 + 0x10) * 2) - fVar4;
          *(float *)(param_1 + 0x20) = fVar4;
        }
        if ((float)*(uint *)(pcVar3 + 4) <= fVar4) {
          *(undefined1 *)(param_1 + 0x30) = 0;
          *(float *)(param_1 + 0x20) = fVar4 - (float)(*(int *)(pcVar3 + 4) - 1);
        }
      }
    }
    uVar2 = *(uint *)(param_1 + 0xa4);
    if (uVar2 < 0x20) {
      fVar4 = *(float *)(param_1 + 0xa8 + (ulonglong)uVar2 * 4);
      fVar5 = (fVar5 - fVar4) * (float)uVar2 * 0.03125 + fVar4;
    }
    return fVar5;
  }
  return 0.0;
}



/* FUN_14001f230 @ 14001f230 (129 bytes) */

void FUN_14001f230(longlong param_1,byte param_2)

{
  float fVar1;
  
  if ((param_2 & 0xf0) == 0 || (param_2 & 0xf) == 0) {
    if ((param_2 & 0xf0) == 0) {
      fVar1 = *(float *)(param_1 + 0x38) - (float)(param_2 & 0xf) / 255.0;
      *(float *)(param_1 + 0x38) = fVar1;
      if (fVar1 < 0.0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
    }
    else {
      fVar1 = (float)(param_2 >> 4) / 255.0 + *(float *)(param_1 + 0x38);
      *(float *)(param_1 + 0x38) = fVar1;
      if (1.0 < fVar1) {
        *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
        return;
      }
    }
  }
  return;
}



/* FUN_14001f2c0 @ 14001f2c0 (126 bytes) */

void FUN_14001f2c0(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    param_3 = param_3 * 4.0;
  }
  param_3 = param_3 + *(float *)(param_2 + 0x24);
  *(float *)(param_2 + 0x24) = param_3;
  if (param_3 < 0.0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
    param_3 = 0.0;
  }
  fVar1 = (float)FUN_14001def0(0,param_3);
  *(float *)(param_2 + 0x28) = fVar1;
  *(float *)(param_2 + 0x2c) = fVar1 / (float)*(uint *)(param_1 + 0x128);
  return;
}



/* FUN_14001f340 @ 14001f340 (536 bytes) */

void FUN_14001f340(longlong param_1)

{
  bool bVar1;
  char *pcVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined *puVar6;
  byte bVar7;
  ulonglong uVar8;
  
  if (*(char *)(param_1 + 0x150) == '\0') {
    if (*(char *)(param_1 + 0x151) != '\0') {
      bVar7 = *(char *)(param_1 + 0x13c) + 1;
      *(undefined1 *)(param_1 + 0x151) = 0;
      goto LAB_14001f38a;
    }
  }
  else {
    bVar7 = *(byte *)(param_1 + 0x152);
    *(undefined2 *)(param_1 + 0x150) = 0;
LAB_14001f38a:
    *(undefined1 *)(param_1 + 0x13d) = *(undefined1 *)(param_1 + 0x153);
    *(undefined1 *)(param_1 + 0x153) = 0;
    *(byte *)(param_1 + 0x13c) = bVar7;
    if (*(ushort *)(param_1 + 8) <= (ushort)bVar7) {
      *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(param_1 + 10);
    }
  }
  puVar4 = (ushort *)0x0;
  bVar7 = *(byte *)((ulonglong)*(byte *)(param_1 + 0x13c) + 0x18 + param_1);
  if ((ushort)bVar7 < *(ushort *)(param_1 + 0xe)) {
    puVar4 = (ushort *)((ulonglong)bVar7 * 0x10 + *(longlong *)(param_1 + 0x118));
  }
  uVar3 = *(ushort *)(param_1 + 0xc);
  bVar1 = false;
  uVar8 = 0;
  if (uVar3 != 0) {
    do {
      if (puVar4 == (ushort *)0x0) {
        puVar6 = &DAT_140762308;
      }
      else {
        puVar6 = (undefined *)
                 (((ulonglong)*(byte *)(param_1 + 0x13d) * (ulonglong)uVar3 + uVar8) * 5 +
                 *(longlong *)(puVar4 + 4));
      }
      lVar5 = uVar8 * 0x130 + *(longlong *)(param_1 + 0x168);
      *(undefined **)(lVar5 + 0x18) = puVar6;
      if ((puVar6[3] == '\x0e') && ((puVar6[4] & 0xf0) == 0xd0)) {
        *(byte *)(lVar5 + 0x69) = puVar6[4] & 0xf;
      }
      else {
        FUN_14001e320(param_1,lVar5);
      }
      if ((!bVar1) && (*(char *)(lVar5 + 0x6b) != '\0')) {
        bVar1 = true;
      }
      uVar3 = *(ushort *)(param_1 + 0xc);
      bVar7 = (char)uVar8 + 1;
      uVar8 = (ulonglong)bVar7;
    } while (bVar7 < uVar3);
    if (bVar1) goto LAB_14001f4d1;
  }
  pcVar2 = (char *)((ulonglong)*(byte *)(param_1 + 0x13c) * 0x100 + *(longlong *)(param_1 + 0x158) +
                   (ulonglong)*(byte *)(param_1 + 0x13d));
  *(char *)(param_1 + 0x160) = *pcVar2;
  *pcVar2 = *pcVar2 + '\x01';
LAB_14001f4d1:
  bVar7 = *(char *)(param_1 + 0x13d) + 1;
  *(byte *)(param_1 + 0x13d) = bVar7;
  if ((*(char *)(param_1 + 0x150) == '\0') && (*(char *)(param_1 + 0x151) == '\0')) {
    if (puVar4 == (ushort *)0x0) {
      uVar3 = 0x40;
    }
    else {
      uVar3 = *puVar4;
    }
    if ((uVar3 <= bVar7) || (bVar7 == 0)) {
      bVar7 = *(char *)(param_1 + 0x13c) + 1;
      *(undefined1 *)(param_1 + 0x13d) = *(undefined1 *)(param_1 + 0x153);
      *(byte *)(param_1 + 0x13c) = bVar7;
      *(undefined1 *)(param_1 + 0x153) = 0;
      if (*(ushort *)(param_1 + 8) <= (ushort)bVar7) {
        *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(param_1 + 10);
      }
    }
  }
  return;
}



/* FUN_14001f560 @ 14001f560 (2537 bytes) */

void FUN_14001f560(longlong param_1)

{
  byte bVar1;
  short sVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  char cVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (*(short *)(param_1 + 0x13e) == 0) {
    FUN_14001f340();
  }
  uVar8 = 0;
  if (*(short *)(param_1 + 0xc) != 0) {
    do {
      lVar9 = uVar8 * 0x130 + *(longlong *)(param_1 + 0x168);
      FUN_14001de50(lVar9);
      lVar3 = *(longlong *)(lVar9 + 8);
      if ((lVar3 == 0) || (*(char *)(lVar3 + 0xd9) == '\0')) {
        if (*(float *)(lVar9 + 0x50) != 0.0) {
          *(undefined4 *)(lVar9 + 0x50) = 0;
          fVar14 = (float)FUN_14001def0(param_1);
          goto LAB_14001f71f;
        }
      }
      else {
        fVar14 = 1.0;
        uVar5 = *(ushort *)(lVar9 + 0x3c);
        if (uVar5 < *(byte *)(lVar3 + 0xd8)) {
          fVar14 = (float)uVar5 / (float)*(byte *)(lVar3 + 0xd8) + 0.0;
        }
        bVar7 = *(byte *)(lVar3 + 0xda);
        *(ushort *)(lVar9 + 0x3c) = uVar5 + 1;
        fVar12 = (float)FUN_140020380(*(undefined4 *)(lVar3 + 0xd4),(uint)bVar7 * (uint)uVar5 >> 2);
        *(float *)(lVar9 + 0x50) =
             ((fVar12 * 0.25 * (float)*(byte *)(lVar3 + 0xd9)) / 15.0) * fVar14;
        fVar14 = (float)FUN_14001def0(param_1);
LAB_14001f71f:
        *(float *)(lVar9 + 0x28) = fVar14;
        *(float *)(lVar9 + 0x2c) = fVar14 / (float)*(uint *)(param_1 + 0x128);
      }
      if ((*(char *)(lVar9 + 0x54) != '\0') &&
         ((*(char *)(*(longlong *)(lVar9 + 0x18) + 3) != '\0' ||
          (*(char *)(*(longlong *)(lVar9 + 0x18) + 4) == '\0')))) {
        *(undefined2 *)(lVar9 + 0x54) = 0;
        fVar14 = (float)FUN_14001def0(param_1);
        *(float *)(lVar9 + 0x28) = fVar14;
        *(float *)(lVar9 + 0x2c) = fVar14 / (float)*(uint *)(param_1 + 0x128);
      }
      if (((*(char *)(lVar9 + 0x6c) != '\0') &&
          ((*(char *)(*(longlong *)(lVar9 + 0x18) + 3) - 4U & 0xfd) != 0)) &&
         ((*(byte *)(*(longlong *)(lVar9 + 0x18) + 2) & 0xf0) != 0xb0)) {
        *(undefined1 *)(lVar9 + 0x6c) = 0;
        *(undefined4 *)(lVar9 + 0x78) = 0;
        fVar14 = (float)FUN_14001def0(param_1);
        *(float *)(lVar9 + 0x28) = fVar14;
        *(float *)(lVar9 + 0x2c) = fVar14 / (float)*(uint *)(param_1 + 0x128);
      }
      bVar7 = *(byte *)(*(longlong *)(lVar9 + 0x18) + 2);
      switch(bVar7 >> 4) {
      case 6:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_1400202f0(lVar9,bVar7 & 0xf);
        }
        break;
      case 7:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_1400202f0(lVar9,bVar7 << 4);
        }
        break;
      case 0xb:
        if (*(short *)(param_1 + 0x13e) != 0) {
          *(undefined1 *)(lVar9 + 0x6c) = 0;
          FUN_140020240(param_1,lVar9,*(undefined1 *)(lVar9 + 0x75));
        }
        break;
      case 0xd:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_14001f230(lVar9,bVar7 & 0xf);
        }
        break;
      case 0xe:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_14001f230(lVar9,bVar7 << 4);
        }
        break;
      case 0xf:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_14001fff0(param_1,lVar9);
        }
      }
      uVar4 = *(ulonglong *)(lVar9 + 0x18);
      switch(*(undefined1 *)(uVar4 + 3)) {
      case 0:
        bVar7 = *(byte *)(uVar4 + 4);
        if (bVar7 != 0) {
          uVar6 = (ulonglong)*(ushort *)(param_1 + 300) / 3;
          cVar11 = (char)*(ushort *)(param_1 + 300) + (char)uVar6 * -3;
          if (cVar11 == '\0') {
LAB_14001f93b:
            uVar5 = *(short *)(param_1 + 0x13e) - (short)cVar11;
            uVar6 = (ulonglong)uVar5 / 3;
            uVar10 = (uint)uVar5 + (int)uVar6 * -3;
            uVar4 = (ulonglong)uVar10;
            if (uVar10 == 0) {
              *(undefined2 *)(lVar9 + 0x54) = 0;
            }
            else {
              uVar10 = uVar10 - 1;
              uVar4 = (ulonglong)uVar10;
              if (uVar10 == 0) {
                *(undefined1 *)(lVar9 + 0x54) = 1;
                *(byte *)(lVar9 + 0x55) = bVar7 & 0xf;
              }
              else if (uVar10 == 1) {
                *(byte *)(lVar9 + 0x55) = bVar7 >> 4;
                *(undefined1 *)(lVar9 + 0x54) = 1;
              }
            }
          }
          else if (cVar11 == '\x01') {
LAB_14001f926:
            if (*(short *)(param_1 + 0x13e) != 0) goto LAB_14001f93b;
            *(undefined2 *)(lVar9 + 0x54) = 0;
          }
          else {
            if (cVar11 != '\x02') break;
            if (*(short *)(param_1 + 0x13e) != 1) goto LAB_14001f926;
            *(undefined1 *)(lVar9 + 0x54) = 1;
            *(byte *)(lVar9 + 0x55) = *(byte *)(uVar4 + 4) >> 4;
          }
          fVar14 = (float)FUN_14001def0(param_1,uVar6,uVar4,
                                        *(float *)(lVar9 + 0x78) + *(float *)(lVar9 + 0x50));
          *(float *)(lVar9 + 0x28) = fVar14;
          *(float *)(lVar9 + 0x2c) = fVar14 / (float)*(uint *)(param_1 + 0x128);
        }
        break;
      case 1:
        sVar2 = *(short *)(param_1 + 0x13e);
        goto joined_r0x00014001fa02;
      case 2:
        sVar2 = *(short *)(param_1 + 0x13e);
joined_r0x00014001fa02:
        if (sVar2 != 0) {
          FUN_14001f2c0(param_1,lVar9);
        }
        break;
      case 3:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_14001fff0(param_1,lVar9);
        }
        break;
      case 4:
        if (*(short *)(param_1 + 0x13e) != 0) {
          *(undefined1 *)(lVar9 + 0x6c) = 1;
          FUN_140020240(param_1,lVar9,*(undefined1 *)(lVar9 + 0x75));
        }
        break;
      case 5:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_14001fff0(param_1,lVar9);
          FUN_1400202f0(lVar9,*(undefined1 *)(lVar9 + 0x56));
        }
        break;
      case 6:
        if (*(short *)(param_1 + 0x13e) != 0) {
          *(undefined1 *)(lVar9 + 0x6c) = 1;
          FUN_140020240(param_1,lVar9,*(undefined1 *)(lVar9 + 0x75));
          FUN_1400202f0(lVar9,*(undefined1 *)(lVar9 + 0x56));
        }
        break;
      case 7:
        if (*(short *)(param_1 + 0x13e) != 0) {
          bVar7 = *(byte *)(lVar9 + 0x82);
          bVar1 = *(byte *)(lVar9 + 0x81);
          *(byte *)(lVar9 + 0x82) = bVar7 + 1;
          fVar14 = (float)FUN_140020380(*(undefined4 *)(lVar9 + 0x7c),
                                        (uint)(bVar1 >> 4) * (uint)bVar7);
          *(float *)(lVar9 + 0x84) = (fVar14 * -1.0 * (float)(bVar1 & 0xf)) / 15.0;
        }
        break;
      case 10:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_1400202f0(lVar9,*(undefined1 *)(lVar9 + 0x56));
        }
        break;
      case 0xe:
        bVar7 = *(byte *)(uVar4 + 4);
        bVar1 = bVar7 >> 4;
        if (bVar1 == 9) {
          if (((*(ushort *)(param_1 + 0x13e) != 0) && ((bVar7 & 0xf) != 0)) &&
             ((int)((ulonglong)*(ushort *)(param_1 + 0x13e) %
                   (ulonglong)(longlong)(int)(bVar7 & 0xf)) == 0)) {
            FUN_1400200f0(param_1,lVar9,1);
            FUN_14001de50(lVar9);
          }
        }
        else if (bVar1 == 0xc) {
          if ((ushort)(bVar7 & 0xf) == *(ushort *)(param_1 + 0x13e)) {
            *(undefined4 *)(lVar9 + 0x34) = 0;
          }
        }
        else if ((bVar1 == 0xd) && ((ushort)*(byte *)(lVar9 + 0x69) == *(ushort *)(param_1 + 0x13e))
                ) {
          FUN_14001e320(param_1,lVar9);
          FUN_14001de50(lVar9);
        }
        break;
      case 0x11:
        if (*(short *)(param_1 + 0x13e) != 0) {
          bVar7 = *(byte *)(lVar9 + 0x58);
          if ((bVar7 & 0xf0) == 0 || (bVar7 & 0xf) == 0) {
            if ((bVar7 & 0xf0) == 0) {
              fVar14 = *(float *)(param_1 + 0x130) - (float)(bVar7 & 0xf) * 0.015625;
              *(float *)(param_1 + 0x130) = fVar14;
              if (fVar14 < 0.0) {
                *(undefined4 *)(param_1 + 0x130) = 0;
              }
            }
            else {
              fVar14 = (float)(bVar7 >> 4) * 0.015625 + *(float *)(param_1 + 0x130);
              *(float *)(param_1 + 0x130) = fVar14;
              if (1.0 < fVar14) {
                *(undefined4 *)(param_1 + 0x130) = 0x3f800000;
              }
            }
          }
        }
        break;
      case 0x14:
        if (*(ushort *)(param_1 + 0x13e) == (ushort)*(byte *)(uVar4 + 4)) {
          *(undefined1 *)(lVar9 + 0x3e) = 0;
          if ((*(longlong *)(lVar9 + 8) == 0) ||
             (*(char *)(*(longlong *)(lVar9 + 8) + 0x96) == '\0')) {
            *(undefined4 *)(lVar9 + 0x34) = 0;
          }
        }
        break;
      case 0x19:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_14001f230(lVar9,*(undefined1 *)(lVar9 + 0x59));
        }
        break;
      case 0x1b:
        if (((*(ushort *)(param_1 + 0x13e) != 0) && ((*(byte *)(lVar9 + 0x68) & 0xf) != 0)) &&
           (((int)((ulonglong)*(ushort *)(param_1 + 0x13e) %
                  (ulonglong)(longlong)(int)(*(byte *)(lVar9 + 0x68) & 0xf)) == 0 &&
            ((FUN_1400200f0(param_1,lVar9,9), *(char *)(*(longlong *)(lVar9 + 0x18) + 2) == '\0' &&
             (*(char *)(*(longlong *)(lVar9 + 8) + 0x96) == '\0')))))) {
          uVar4 = (ulonglong)(*(byte *)(lVar9 + 0x68) >> 4);
          fVar12 = *(float *)(&DAT_140023560 + uVar4 * 4) * *(float *)(lVar9 + 0x34) +
                   *(float *)(&DAT_140023520 + uVar4 * 4) * 0.015625;
          fVar14 = 0.0;
          if (0.0 <= fVar12) {
            fVar14 = fVar12;
          }
          fVar12 = 1.0;
          if (fVar14 <= 1.0) {
            fVar12 = fVar14;
          }
          *(float *)(lVar9 + 0x34) = fVar12;
        }
        break;
      case 0x1d:
        if (*(ushort *)(param_1 + 0x13e) != 0) {
          uVar10 = (uint)(*(byte *)(lVar9 + 0x88) >> 4);
          *(bool *)(lVar9 + 0x89) =
               (int)uVar10 <
               (int)(*(ushort *)(param_1 + 0x13e) - 1) %
               (int)((*(byte *)(lVar9 + 0x88) & 0xf) + 2 + uVar10);
        }
      }
      fVar14 = (0.5 - ABS(*(float *)(lVar9 + 0x38) - 0.5)) * (*(float *)(lVar9 + 0x48) - 0.5);
      fVar14 = fVar14 + fVar14 + *(float *)(lVar9 + 0x38);
      if (*(char *)(lVar9 + 0x89) == '\0') {
        fVar13 = *(float *)(lVar9 + 0x84) + *(float *)(lVar9 + 0x34);
        fVar12 = 0.0;
        if (0.0 <= fVar13) {
          fVar12 = fVar13;
        }
        fVar13 = 1.0;
        if (fVar12 <= 1.0) {
          fVar13 = fVar12;
        }
        fVar13 = fVar13 * *(float *)(lVar9 + 0x44) * *(float *)(lVar9 + 0x40);
      }
      else {
        fVar13 = 0.0;
      }
      fVar12 = 1.0 - fVar14;
      if (fVar12 < 0.0) {
        fVar12 = sqrtf(fVar12);
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      *(float *)(lVar9 + 0x9c) = fVar12 * fVar13;
      if (fVar14 < 0.0) {
        fVar14 = sqrtf(fVar14);
      }
      else {
        fVar14 = SQRT(fVar14);
      }
      bVar7 = (char)uVar8 + 1;
      uVar8 = (ulonglong)bVar7;
      *(float *)(lVar9 + 0xa0) = fVar14 * fVar13;
    } while ((ushort)bVar7 < *(ushort *)(param_1 + 0xc));
  }
  *(short *)(param_1 + 0x13e) = *(short *)(param_1 + 0x13e) + 1;
  if ((uint)*(ushort *)(param_1 + 300) + (uint)*(ushort *)(param_1 + 0x154) <=
      (uint)*(ushort *)(param_1 + 0x13e)) {
    *(undefined2 *)(param_1 + 0x13e) = 0;
    *(undefined2 *)(param_1 + 0x154) = 0;
  }
  *(float *)(param_1 + 0x140) =
       (float)*(uint *)(param_1 + 0x128) / ((float)*(ushort *)(param_1 + 0x12e) * 0.4) +
       *(float *)(param_1 + 0x140);
  return;
}



/* FUN_14001fff0 @ 14001fff0 (243 bytes) */

void FUN_14001fff0(longlong param_1,longlong param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 100);
  if (fVar2 == 0.0) {
    return;
  }
  fVar3 = *(float *)(param_2 + 0x24);
  if (fVar3 == fVar2) {
    return;
  }
  if (fVar3 <= fVar2) {
    if (fVar2 <= fVar3) goto LAB_1400200a2;
    if (*(int *)(param_1 + 0x14) == 0) {
      fVar4 = 4.0;
    }
    else {
      fVar4 = 1.0;
    }
    fVar3 = (float)*(byte *)(param_2 + 0x60) * fVar4 + fVar3;
    *(float *)(param_2 + 0x24) = fVar3;
    bVar1 = fVar3 < fVar2;
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
      fVar4 = 4.0;
    }
    else {
      fVar4 = 1.0;
    }
    fVar3 = fVar3 - (float)*(byte *)(param_2 + 0x60) * fVar4;
    *(float *)(param_2 + 0x24) = fVar3;
    bVar1 = fVar2 < fVar3;
  }
  if (!bVar1 && fVar2 != fVar3) {
    *(float *)(param_2 + 0x24) = fVar2;
    fVar3 = fVar2;
  }
LAB_1400200a2:
  fVar2 = (float)FUN_14001def0(param_1,fVar3);
  *(float *)(param_2 + 0x28) = fVar2;
  *(float *)(param_2 + 0x2c) = fVar2 / (float)*(uint *)(param_1 + 0x128);
  return;
}



/* FUN_1400200f0 @ 1400200f0 (324 bytes) */

void FUN_1400200f0(longlong param_1,float *param_2,byte param_3)

{
  longlong lVar1;
  float fVar2;
  
  if ((param_3 & 4) == 0) {
    param_2[8] = 0.0;
    *(undefined1 *)(param_2 + 0xc) = 1;
  }
  lVar1 = *(longlong *)(param_2 + 4);
  if (lVar1 != 0) {
    if ((param_3 & 1) == 0) {
      param_2[0xd] = *(float *)(lVar1 + 0x14);
    }
    param_2[0xe] = *(float *)(lVar1 + 0x20);
  }
  if ((param_3 & 8) == 0) {
    *(undefined1 *)((longlong)param_2 + 0x3e) = 1;
    param_2[0x11] = 1.0;
    param_2[0x10] = 1.0;
    param_2[0x12] = 0.5;
    param_2[0x13] = 0.0;
  }
  param_2[0x1e] = 0.0;
  param_2[0x21] = 0.0;
  *(undefined1 *)((longlong)param_2 + 0x89) = 0;
  *(undefined2 *)(param_2 + 0xf) = 0;
  if (*(char *)(param_2 + 0x1d) != '\0') {
    *(undefined2 *)((longlong)param_2 + 0x76) = 0;
  }
  if (*(char *)(param_2 + 0x20) != '\0') {
    *(undefined1 *)((longlong)param_2 + 0x82) = 0;
  }
  if ((param_3 & 2) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      fVar2 = 7680.0 - *param_2 * 64.0;
    }
    else if (*(int *)(param_1 + 0x14) == 1) {
      fVar2 = (float)FUN_14001dc40(*param_2);
    }
    else {
      fVar2 = 0.0;
    }
    param_2[9] = fVar2;
    fVar2 = (float)FUN_14001def0(param_1,fVar2);
    param_2[10] = fVar2;
    param_2[0xb] = fVar2 / (float)*(uint *)(param_1 + 0x128);
  }
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_1 + 0x148);
  if (*(longlong *)(param_2 + 2) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 2) + 0xe0) = *(undefined8 *)(param_1 + 0x148);
  }
  if (*(longlong *)(param_2 + 4) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 4) + 0x28) = *(undefined8 *)(param_1 + 0x148);
  }
  return;
}



/* FUN_140020240 @ 140020240 (165 bytes) */

void FUN_140020240(longlong param_1,longlong param_2,byte param_3)

{
  float fVar1;
  
  *(short *)(param_2 + 0x76) = *(short *)(param_2 + 0x76) + (ushort)(param_3 >> 4);
  fVar1 = (float)FUN_140020380(*(undefined4 *)(param_2 + 0x70),*(undefined1 *)(param_2 + 0x76));
  *(float *)(param_2 + 0x78) = (fVar1 * -2.0 * (float)(param_3 & 0xf)) / 15.0;
  fVar1 = (float)FUN_14001def0(param_1,*(undefined4 *)(param_2 + 0x24));
  *(float *)(param_2 + 0x28) = fVar1;
  *(float *)(param_2 + 0x2c) = fVar1 / (float)*(uint *)(param_1 + 0x128);
  return;
}



/* FUN_1400202f0 @ 1400202f0 (129 bytes) */

void FUN_1400202f0(longlong param_1,byte param_2)

{
  float fVar1;
  
  if ((param_2 & 0xf0) == 0 || (param_2 & 0xf) == 0) {
    if ((param_2 & 0xf0) == 0) {
      fVar1 = *(float *)(param_1 + 0x34) - (float)(param_2 & 0xf) * 0.015625;
      *(float *)(param_1 + 0x34) = fVar1;
      if (fVar1 < 0.0) {
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
    }
    else {
      fVar1 = (float)(param_2 >> 4) * 0.015625 + *(float *)(param_1 + 0x34);
      *(float *)(param_1 + 0x34) = fVar1;
      if (1.0 < fVar1) {
        *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
        return;
      }
    }
  }
  return;
}



/* FUN_140020380 @ 140020380 (235 bytes) */

ulonglong FUN_140020380(int param_1,byte param_2)

{
  float fVar1;
  undefined4 extraout_XMM0_Db;
  
  param_2 = param_2 & 0x3f;
  if (param_1 == 0) {
    fVar1 = sinf((float)param_2 * 6.283184 * 0.015625);
    return CONCAT44(extraout_XMM0_Db,fVar1) ^ 0x8000000080000000;
  }
  if (param_1 == 1) {
    return (ulonglong)(uint)((float)(int)(0x20 - (uint)param_2) * 0.03125);
  }
  if (param_1 == 2) {
    if (0x1f < param_2) {
      return 0x3f800000;
    }
    return 0xbf800000;
  }
  if (param_1 != 3) {
    if (param_1 != 4) {
      return 0;
    }
    return (ulonglong)(uint)((float)(int)(param_2 - 0x20) * 0.03125);
  }
  DAT_1400270b0 = DAT_1400270b0 * 0x41c64e6d + 0x3039;
  return (ulonglong)(uint)((float)(DAT_1400270b0 >> 0x10 & 0x7fff) * 6.1035156e-05 - 1.0);
}



/* FUN_140020470 @ 140020470 (92 bytes) */

undefined8 FUN_140020470(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x3c) {
    return 4;
  }
  if (((*param_1 == 0x6465646e65747845) && (param_1[1] == 0x3a656c75646f4d20)) &&
     ((char)param_1[2] == ' ')) {
    if (*(char *)((longlong)param_1 + 0x25) != '\x1a') {
      return 2;
    }
    uVar1 = 3;
    if (*(char *)((longlong)param_1 + 0x3b) == '\x01') {
      uVar1 = 3;
      if (*(char *)((longlong)param_1 + 0x3a) == '\x04') {
        uVar1 = 0;
      }
      return uVar1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* FUN_1400204d0 @ 1400204d0 (967 bytes) */

longlong FUN_1400204d0(ulonglong param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ushort uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong local_res18;
  
  uVar15 = 0;
  uVar12 = 0;
  uVar3 = 0;
  uVar20 = uVar15;
  uVar17 = uVar15;
  if (param_2 < (byte *)0x45) {
    uVar2 = 0;
    uVar13 = uVar15;
LAB_140020580:
    uVar14 = (ushort)uVar13;
    uVar6 = uVar3;
LAB_140020583:
    uVar13 = (ulonglong)(uint)uVar6;
    lVar19 = (ulonglong)(uint)uVar6 << 4;
LAB_140020592:
    local_res18 = (ulonglong)uVar3;
    uVar18 = (ulonglong)uVar3;
    lVar19 = lVar19 + local_res18 * 0xf8;
    if ((byte *)0x40 < param_2) goto LAB_1400205b1;
LAB_1400205d3:
    lVar19 = lVar19 + (ulonglong)(uVar12 << 8);
    if (param_2 < (byte *)0x3d) {
      uVar5 = 0;
      goto LAB_140020618;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x44);
    uVar13 = (ulonglong)(ushort)bVar1;
    uVar2 = (ushort)bVar1;
    if (param_2 < (byte *)0x46) goto LAB_140020580;
    uVar14 = CONCAT11(*(undefined1 *)(param_1 + 0x45),bVar1);
    uVar13 = (ulonglong)uVar14;
    uVar2 = uVar14;
    if (param_2 < (byte *)0x47) goto LAB_140020580;
    uVar6 = (ushort)*(byte *)(param_1 + 0x46);
    if (param_2 < (byte *)0x48) goto LAB_140020583;
    uVar6 = CONCAT11(*(undefined1 *)(param_1 + 0x47),*(byte *)(param_1 + 0x46));
    uVar13 = (ulonglong)uVar6;
    lVar19 = (ulonglong)uVar6 * 0x10;
    if (param_2 < (byte *)0x49) goto LAB_140020592;
    uVar3 = (ushort)*(byte *)(param_1 + 0x48);
    if (param_2 < (byte *)0x4a) goto LAB_140020592;
    uVar3 = CONCAT11(*(undefined1 *)(param_1 + 0x49),*(byte *)(param_1 + 0x48));
    local_res18 = (ulonglong)uVar3;
    uVar18 = (ulonglong)uVar3;
    lVar19 = local_res18 * 0xf8 + lVar19;
LAB_1400205b1:
    uVar12 = (uint)*(byte *)(param_1 + 0x40);
    if (param_2 < (byte *)0x42) goto LAB_1400205d3;
    lVar19 = (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x41),*(byte *)(param_1 + 0x40)) * 0x100
             + lVar19;
  }
  uVar5 = (ulonglong)*(byte *)(param_1 + 0x3c);
  if ((((byte *)0x3d < param_2) &&
      (uVar20 = (ulonglong)*(byte *)(param_1 + 0x3d), (byte *)0x3e < param_2)) &&
     (uVar17 = (ulonglong)*(byte *)(param_1 + 0x3e), (byte *)0x3f < param_2)) {
    uVar15 = (ulonglong)*(byte *)(param_1 + 0x3f);
  }
LAB_140020618:
  pbVar16 = (byte *)((((uVar15 << 8 | uVar17) << 8 | uVar20) << 8 | uVar5) + 0x3c);
  if (uVar6 != 0) {
    do {
      pbVar9 = pbVar16 + param_1;
      if (pbVar16 + 5 < param_2) {
        uVar12 = (uint)pbVar9[5];
      }
      else {
        uVar12 = 0;
      }
      if (pbVar16 + 6 < param_2) {
        uVar11 = (uint)pbVar9[6];
      }
      else {
        uVar11 = 0;
      }
      lVar19 = lVar19 + (longlong)(int)((uVar11 << 8 | uVar12) * (uint)uVar14) * 5;
      if (pbVar16 < param_2) {
        uVar12 = (uint)*pbVar9;
      }
      else {
        uVar12 = 0;
      }
      if (pbVar16 + 1 < param_2) {
        uVar11 = (uint)pbVar9[1];
      }
      else {
        uVar11 = 0;
      }
      if (pbVar16 + 2 < param_2) {
        uVar8 = (uint)pbVar9[2];
      }
      else {
        uVar8 = 0;
      }
      if (pbVar16 + 3 < param_2) {
        uVar7 = (uint)pbVar9[3];
      }
      else {
        uVar7 = 0;
      }
      if (pbVar16 + 7 < param_2) {
        uVar10 = (uint)pbVar9[7];
      }
      else {
        uVar10 = 0;
      }
      if (pbVar16 + 8 < param_2) {
        uVar4 = (uint)pbVar9[8];
      }
      else {
        uVar4 = 0;
      }
      pbVar16 = pbVar16 + ((uVar4 << 8 | uVar10) +
                          ((uVar7 << 8 | uVar8) << 0x10 | uVar11 << 8 | uVar12));
      uVar13 = uVar13 - 1;
      uVar18 = local_res18;
    } while (uVar13 != 0);
  }
  if (uVar3 != 0) {
    do {
      uVar12 = 0;
      if (pbVar16 + 0x1b < param_2) {
        uVar3 = (ushort)pbVar16[param_1 + 0x1b];
      }
      else {
        uVar3 = 0;
      }
      pbVar9 = pbVar16 + param_1;
      if (pbVar16 + 0x1c < param_2) {
        uVar14 = (ushort)pbVar9[0x1c];
      }
      else {
        uVar14 = 0;
      }
      uVar3 = uVar14 << 8 | uVar3;
      uVar20 = (ulonglong)uVar3;
      lVar19 = lVar19 + uVar20 * 0x38;
      if (pbVar16 < param_2) {
        uVar11 = (uint)*pbVar9;
      }
      else {
        uVar11 = 0;
      }
      if (pbVar16 + 1 < param_2) {
        uVar8 = (uint)pbVar9[1];
      }
      else {
        uVar8 = 0;
      }
      if (pbVar16 + 2 < param_2) {
        uVar7 = (uint)pbVar9[2];
      }
      else {
        uVar7 = 0;
      }
      if (pbVar16 + 3 < param_2) {
        uVar10 = (uint)pbVar9[3];
      }
      else {
        uVar10 = 0;
      }
      uVar11 = (uVar10 << 8 | uVar7) << 0x10 | uVar8 << 8 | uVar11;
      if (0x106 < uVar11 - 1) {
        uVar11 = 0x107;
      }
      pbVar16 = pbVar16 + uVar11;
      if (uVar3 != 0) {
        pbVar9 = pbVar16 + param_1 + 2;
        do {
          if (pbVar16 < param_2) {
            uVar11 = (uint)pbVar9[-2];
          }
          else {
            uVar11 = 0;
          }
          if (pbVar9 + ~param_1 < param_2) {
            uVar8 = (uint)pbVar9[-1];
          }
          else {
            uVar8 = 0;
          }
          if (pbVar9 + -param_1 < param_2) {
            uVar7 = (uint)*pbVar9;
          }
          else {
            uVar7 = 0;
          }
          if (pbVar9 + (1 - param_1) < param_2) {
            uVar10 = (uint)pbVar9[1];
          }
          else {
            uVar10 = 0;
          }
          pbVar16 = pbVar16 + 0x28;
          pbVar9 = pbVar9 + 0x28;
          uVar11 = (uVar10 << 8 | uVar7) << 0x10 | uVar8 << 8 | uVar11;
          uVar12 = uVar12 + uVar11;
          lVar19 = lVar19 + (ulonglong)uVar11;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      pbVar16 = pbVar16 + uVar12;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  return (ulonglong)uVar2 * 0x130 + 0x170 + lVar19;
}



/* FUN_1400208a0 @ 1400208a0 (4239 bytes) */

void * FUN_1400208a0(longlong param_1,ulonglong param_2,byte *param_3,longlong param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  ushort uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  ushort *puVar16;
  byte bVar17;
  byte bVar18;
  char cVar19;
  int iVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  byte bVar23;
  uint uVar24;
  ulonglong uVar25;
  char *pcVar26;
  ushort uVar27;
  byte *pbVar28;
  uint uVar29;
  uint uVar30;
  void *_Dst;
  ulonglong local_res10;
  void *local_res20;
  
  uVar9 = 0;
  uVar3 = 0;
  uVar25 = uVar9;
  uVar10 = uVar9;
  uVar7 = uVar9;
  uVar6 = uVar9;
  uVar2 = uVar3;
  uVar27 = uVar3;
  uVar12 = uVar3;
  if (((param_3 < (byte *)0x3d) ||
      (uVar25 = (ulonglong)*(byte *)(param_2 + 0x3c), param_3 < (byte *)0x3e)) ||
     (uVar10 = (ulonglong)*(byte *)(param_2 + 0x3d), param_3 < (byte *)0x3f)) {
    local_res10 = 0;
LAB_140020a4a:
    *(ushort *)(param_1 + 8) = uVar2;
LAB_140020a50:
    *(ushort *)(param_1 + 10) = uVar27;
LAB_140020a56:
    *(ushort *)(param_1 + 0xc) = uVar12;
LAB_140020a5a:
    uVar2 = 0;
LAB_140020a5c:
    *(ushort *)(param_1 + 0xe) = uVar2;
LAB_140020a63:
    uVar27 = (ushort)uVar7;
    uVar7 = uVar9;
  }
  else {
    local_res10 = (ulonglong)*(byte *)(param_2 + 0x3e);
    if ((param_3 < (byte *)0x40) ||
       (uVar6 = (ulonglong)*(byte *)(param_2 + 0x3f), param_3 < (byte *)0x41)) goto LAB_140020a4a;
    uVar2 = (ushort)*(byte *)(param_2 + 0x40);
    if (param_3 < (byte *)0x42) goto LAB_140020a4a;
    *(ushort *)(param_1 + 8) = CONCAT11(*(undefined1 *)(param_2 + 0x41),*(byte *)(param_2 + 0x40));
    if (param_3 < (byte *)0x43) goto LAB_140020a50;
    uVar27 = (ushort)*(byte *)(param_2 + 0x42);
    if (param_3 < (byte *)0x44) goto LAB_140020a50;
    *(ushort *)(param_1 + 10) = CONCAT11(*(undefined1 *)(param_2 + 0x43),*(byte *)(param_2 + 0x42));
    if (param_3 < (byte *)0x45) goto LAB_140020a56;
    uVar12 = (ushort)*(byte *)(param_2 + 0x44);
    if (param_3 < (byte *)0x46) goto LAB_140020a56;
    *(ushort *)(param_1 + 0xc) = CONCAT11(*(undefined1 *)(param_2 + 0x45),*(byte *)(param_2 + 0x44))
    ;
    if (param_3 < (byte *)0x47) goto LAB_140020a5a;
    uVar2 = (ushort)*(byte *)(param_2 + 0x46);
    if (param_3 < (byte *)0x48) goto LAB_140020a5c;
    uVar2 = CONCAT11(*(undefined1 *)(param_2 + 0x47),*(byte *)(param_2 + 0x46));
    *(ushort *)(param_1 + 0xe) = uVar2;
    if (param_3 < (byte *)0x49) goto LAB_140020a63;
    uVar27 = (ushort)*(byte *)(param_2 + 0x48);
    uVar7 = (ulonglong)*(byte *)(param_2 + 0x48);
    if (param_3 < (byte *)0x4a) goto LAB_140020a63;
    uVar7 = (ulonglong)*(byte *)(param_2 + 0x49);
  }
  uVar27 = (short)uVar7 << 8 | uVar27;
  *(longlong *)(param_1 + 0x118) = param_4;
  param_4 = param_4 + (ulonglong)uVar2 * 0x10;
  *(longlong *)(param_1 + 0x120) = param_4;
  local_res20 = (void *)(param_4 + (ulonglong)uVar27 * 0xf8);
  *(ushort *)(param_1 + 0x10) = uVar27;
  if (param_3 < (byte *)0x4b) {
    uVar8 = 0;
LAB_140020b05:
    *(uint *)(param_1 + 0x14) = ~uVar8 & 1;
LAB_140020b0f:
    *(ushort *)(param_1 + 300) = uVar3;
  }
  else {
    uVar8 = (uint)*(byte *)(param_2 + 0x4a);
    if (param_3 < (byte *)0x4c) goto LAB_140020b05;
    *(uint *)(param_1 + 0x14) = ~(uint)*(byte *)(param_2 + 0x4a) & 1;
    if (param_3 < (byte *)0x4d) goto LAB_140020b0f;
    uVar3 = (ushort)*(byte *)(param_2 + 0x4c);
    if (param_3 < (byte *)0x4e) goto LAB_140020b0f;
    *(ushort *)(param_1 + 300) = CONCAT11(*(undefined1 *)(param_2 + 0x4d),*(byte *)(param_2 + 0x4c))
    ;
    if ((byte *)0x4e < param_3) {
      uVar9 = (ulonglong)*(byte *)(param_2 + 0x4e);
      uVar2 = (ushort)*(byte *)(param_2 + 0x4e);
      if ((byte *)0x4f < param_3) {
        uVar27 = (ushort)*(byte *)(param_2 + 0x4f);
        goto LAB_140020b1a;
      }
    }
  }
  uVar2 = (ushort)uVar9;
  uVar27 = 0;
LAB_140020b1a:
  *(ushort *)(param_1 + 0x12e) = uVar27 << 8 | uVar2;
  pbVar15 = param_3 + -0x50;
  if (param_3 < (byte *)0x50) {
    pbVar15 = (byte *)0x0;
  }
  if ((byte *)0x100 < pbVar15) {
    pbVar15 = (byte *)0x100;
  }
  memcpy((void *)(param_1 + 0x18),(void *)(param_2 + 0x50),(size_t)pbVar15);
  memset(pbVar15 + param_1 + 0x18,0,0x100 - (longlong)pbVar15);
  uVar2 = 0;
  pbVar15 = (byte *)((((uVar6 << 8 | local_res10) << 8 | uVar10) << 8 | uVar25) + 0x3c);
  _Dst = local_res20;
  if (*(short *)(param_1 + 0xe) != 0) {
    do {
      uVar7 = 0;
      pbVar14 = pbVar15 + param_2;
      uVar12 = 0;
      uVar27 = uVar12;
      if (pbVar15 + 7 < param_3) {
        uVar27 = (ushort)pbVar14[7];
      }
      uVar3 = uVar12;
      if (pbVar15 + 8 < param_3) {
        uVar3 = (ushort)pbVar14[8];
      }
      uVar27 = uVar3 << 8 | uVar27;
      puVar16 = (ushort *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x118));
      uVar3 = uVar12;
      if (pbVar15 + 5 < param_3) {
        uVar3 = (ushort)pbVar14[5];
      }
      if (pbVar15 + 6 < param_3) {
        uVar12 = (ushort)pbVar14[6];
      }
      uVar3 = uVar12 << 8 | uVar3;
      *(void **)(puVar16 + 4) = _Dst;
      *puVar16 = uVar3;
      local_res20 = (void *)((longlong)(int)((uint)uVar3 * (uint)*(ushort *)(param_1 + 0xc)) * 5 +
                            (longlong)_Dst);
      if (pbVar15 < param_3) {
        uVar7 = (ulonglong)*pbVar14;
      }
      uVar10 = 0;
      uVar25 = uVar10;
      if (pbVar15 + 1 < param_3) {
        uVar25 = (ulonglong)pbVar14[1];
      }
      if (pbVar15 + 2 < param_3) {
        uVar10 = (ulonglong)pbVar14[2];
      }
      if (pbVar15 + 3 < param_3) {
        uVar6 = (ulonglong)pbVar14[3];
      }
      else {
        uVar6 = 0;
      }
      uVar7 = ((uVar6 << 8 | uVar10) << 8 | uVar25) << 8 | uVar7;
      if (uVar27 == 0) {
        memset(_Dst,0,(ulonglong)uVar3 * (ulonglong)*(ushort *)(param_1 + 0xc) * 5);
      }
      else {
        uVar12 = 0;
        uVar3 = uVar12;
        if (uVar27 != 0) {
          do {
            pbVar28 = pbVar15 + uVar12 + uVar7;
            pbVar14 = pbVar28 + param_2;
            if (pbVar28 < param_3) {
              bVar18 = *pbVar14;
              pbVar21 = (byte *)((ulonglong)uVar3 * 5 + *(longlong *)(puVar16 + 4));
              if (-1 < (char)bVar18) goto LAB_140020dcb;
              if ((bVar18 & 1) == 0) {
                bVar17 = 0;
                uVar12 = uVar12 + 1;
              }
              else if (pbVar15 + (ushort)(uVar12 + 1) + uVar7 < param_3) {
                bVar17 = (pbVar15 + (ushort)(uVar12 + 1) + uVar7)[param_2];
                uVar12 = uVar12 + 2;
              }
              else {
                bVar17 = 0;
                uVar12 = uVar12 + 2;
              }
              *pbVar21 = bVar17;
              if ((bVar18 & 2) == 0) {
                bVar17 = 0;
              }
              else if (pbVar15 + uVar12 + uVar7 < param_3) {
                bVar17 = (pbVar15 + uVar12 + uVar7)[param_2];
                uVar12 = uVar12 + 1;
              }
              else {
                bVar17 = 0;
                uVar12 = uVar12 + 1;
              }
              pbVar21[1] = bVar17;
              if ((bVar18 & 4) == 0) {
                bVar17 = 0;
              }
              else if (pbVar15 + uVar12 + uVar7 < param_3) {
                bVar17 = (pbVar15 + uVar12 + uVar7)[param_2];
                uVar12 = uVar12 + 1;
              }
              else {
                bVar17 = 0;
                uVar12 = uVar12 + 1;
              }
              pbVar21[2] = bVar17;
              if ((bVar18 & 8) == 0) {
                bVar17 = 0;
              }
              else if (pbVar15 + uVar12 + uVar7 < param_3) {
                bVar17 = (pbVar15 + uVar12 + uVar7)[param_2];
                uVar12 = uVar12 + 1;
              }
              else {
                bVar17 = 0;
                uVar12 = uVar12 + 1;
              }
              pbVar21[3] = bVar17;
              if ((bVar18 & 0x10) == 0) {
                bVar18 = 0;
              }
              else if (pbVar15 + uVar12 + uVar7 < param_3) {
                bVar18 = (pbVar15 + uVar12 + uVar7)[param_2];
                uVar12 = uVar12 + 1;
              }
              else {
                bVar18 = 0;
                uVar12 = uVar12 + 1;
              }
            }
            else {
              bVar18 = 0;
              pbVar21 = (byte *)((ulonglong)uVar3 * 5 + *(longlong *)(puVar16 + 4));
LAB_140020dcb:
              *pbVar21 = bVar18;
              if (pbVar28 + 1 < param_3) {
                bVar18 = pbVar14[1];
              }
              else {
                bVar18 = 0;
              }
              pbVar21[1] = bVar18;
              if (pbVar28 + 2 < param_3) {
                bVar18 = pbVar14[2];
              }
              else {
                bVar18 = 0;
              }
              pbVar21[2] = bVar18;
              if (pbVar28 + 3 < param_3) {
                bVar18 = pbVar14[3];
              }
              else {
                bVar18 = 0;
              }
              pbVar21[3] = bVar18;
              if (pbVar28 + 4 < param_3) {
                bVar18 = pbVar14[4];
              }
              else {
                bVar18 = 0;
              }
              uVar12 = uVar12 + 5;
            }
            pbVar21[4] = bVar18;
            uVar3 = uVar3 + 1;
          } while (uVar12 < uVar27);
        }
      }
      uVar2 = uVar2 + 1;
      pbVar15 = pbVar15 + uVar27 + uVar7;
      _Dst = local_res20;
    } while (uVar2 < *(ushort *)(param_1 + 0xe));
  }
  local_res10._0_2_ = 0;
  if (*(short *)(param_1 + 0x10) != 0) {
    do {
      puVar16 = (ushort *)((ulonglong)(ushort)local_res10 * 0xf8 + *(longlong *)(param_1 + 0x120));
      uVar7 = 0;
      if (pbVar15 < param_3) {
        uVar7 = (ulonglong)pbVar15[param_2];
      }
      uVar30 = 0;
      uVar8 = uVar30;
      if (pbVar15 + 1 < param_3) {
        uVar8 = (uint)pbVar15[param_2 + 1];
      }
      uVar5 = uVar30;
      if (pbVar15 + 2 < param_3) {
        uVar5 = (uint)pbVar15[param_2 + 2];
      }
      if (pbVar15 + 3 < param_3) {
        uVar30 = (uint)pbVar15[param_2 + 3];
      }
      uVar8 = (uVar30 << 8 | uVar5) << 0x10 | uVar8 << 8 | (uint)uVar7;
      if (0x106 < uVar8 - 1) {
        uVar8 = 0x107;
      }
      pbVar14 = pbVar15 + uVar8;
      uVar27 = 0;
      uVar2 = uVar27;
      if (pbVar15 + 0x1b < pbVar14) {
        uVar2 = (ushort)pbVar15[param_2 + 0x1b];
      }
      if (pbVar15 + 0x1c < pbVar14) {
        uVar27 = (ushort)pbVar15[param_2 + 0x1c];
      }
      uVar2 = uVar27 << 8 | uVar2;
      *puVar16 = uVar2;
      if (uVar2 == 0) {
        puVar16[0x78] = 0;
        puVar16[0x79] = 0;
        puVar16[0x7a] = 0;
        puVar16[0x7b] = 0;
      }
      else {
        pbVar28 = pbVar15 + 0x21;
        uVar7 = (longlong)pbVar14 - (longlong)pbVar28;
        if (pbVar14 < pbVar28) {
          uVar7 = 0;
        }
        if (0x60 < uVar7) {
          uVar7 = 0x60;
        }
        memcpy(puVar16 + 1,pbVar28 + param_2,uVar7);
        memset((void *)(uVar7 + (longlong)(puVar16 + 1)),0,0x60 - uVar7);
        if (pbVar15 + 0xe1 < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xe1];
          *(byte *)(puVar16 + 0x49) = bVar18;
          if (0xc < bVar18) {
            *(undefined1 *)(puVar16 + 0x49) = 0xc;
            bVar18 = 0xc;
          }
        }
        else {
          *(undefined1 *)(puVar16 + 0x49) = 0;
          bVar18 = 0;
        }
        if (pbVar15 + 0xe2 < pbVar14) {
          bVar17 = pbVar15[param_2 + 0xe2];
          *(byte *)(puVar16 + 0x65) = bVar17;
          if (0xc < bVar17) {
            *(undefined1 *)(puVar16 + 0x65) = 0xc;
          }
        }
        else {
          *(undefined1 *)(puVar16 + 0x65) = 0;
        }
        bVar17 = 0;
        if (bVar18 != 0) {
          do {
            uVar7 = (ulonglong)bVar17;
            uVar27 = 0;
            uVar2 = uVar27;
            if (pbVar15 + uVar7 * 4 + 0x81 < pbVar14) {
              uVar2 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0x81];
            }
            uVar12 = uVar27;
            if (pbVar15 + uVar7 * 4 + 0x82 < pbVar14) {
              uVar12 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0x82];
            }
            puVar16[uVar7 * 2 + 0x31] = uVar12 << 8 | uVar2;
            uVar2 = 0;
            if (pbVar15 + uVar7 * 4 + 0x83 < pbVar14) {
              uVar2 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0x83];
            }
            if (pbVar15 + uVar7 * 4 + 0x84 < pbVar14) {
              uVar27 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0x84];
            }
            bVar17 = bVar17 + 1;
            puVar16[uVar7 * 2 + 0x32] = uVar27 << 8 | uVar2;
          } while (bVar17 < (byte)puVar16[0x49]);
        }
        if ((char)puVar16[0x65] != '\0') {
          uVar7 = 0;
          do {
            uVar27 = 0;
            uVar2 = uVar27;
            if (pbVar15 + uVar7 * 4 + 0xb1 < pbVar14) {
              uVar2 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0xb1];
            }
            uVar12 = uVar27;
            if (pbVar15 + uVar7 * 4 + 0xb2 < pbVar14) {
              uVar12 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0xb2];
            }
            puVar16[uVar7 * 2 + 0x4d] = uVar12 << 8 | uVar2;
            uVar2 = 0;
            if (pbVar15 + uVar7 * 4 + 0xb3 < pbVar14) {
              uVar2 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0xb3];
            }
            if (pbVar15 + uVar7 * 4 + 0xb4 < pbVar14) {
              uVar27 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0xb4];
            }
            bVar18 = (char)uVar7 + 1;
            puVar16[uVar7 * 2 + 0x4e] = uVar27 << 8 | uVar2;
            uVar7 = (ulonglong)bVar18;
          } while (bVar18 < (byte)puVar16[0x65]);
        }
        if (pbVar15 + 0xe3 < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xe3];
        }
        else {
          bVar18 = 0;
        }
        *(byte *)((longlong)puVar16 + 0x93) = bVar18;
        if (pbVar15 + 0xe4 < pbVar14) {
          uVar8 = (uint)pbVar15[param_2 + 0xe4];
        }
        else {
          uVar8 = 0;
        }
        *(byte *)(puVar16 + 0x4a) = (byte)uVar8;
        if (pbVar15 + 0xe5 < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xe5];
        }
        else {
          bVar18 = 0;
        }
        *(byte *)((longlong)puVar16 + 0x95) = bVar18;
        if (pbVar15 + 0xe6 < pbVar14) {
          bVar17 = pbVar15[param_2 + 0xe6];
        }
        else {
          bVar17 = 0;
        }
        *(byte *)((longlong)puVar16 + 0xcb) = bVar17;
        if (pbVar15 + 0xe7 < pbVar14) {
          bVar17 = pbVar15[param_2 + 0xe7];
        }
        else {
          bVar17 = 0;
        }
        *(byte *)(puVar16 + 0x66) = bVar17;
        if (pbVar15 + 0xe8 < pbVar14) {
          bVar23 = pbVar15[param_2 + 0xe8];
        }
        else {
          bVar23 = 0;
        }
        *(byte *)((longlong)puVar16 + 0xcd) = bVar23;
        if ((byte)puVar16[0x49] != 0) {
          iVar20 = (byte)puVar16[0x49] - 1;
          bVar11 = (byte)uVar8;
          if (iVar20 <= (int)uVar8) {
            bVar11 = (byte)iVar20;
          }
          *(byte *)(puVar16 + 0x4a) = bVar11;
          if (iVar20 <= (int)(uint)bVar18) {
            bVar18 = (byte)iVar20;
          }
          *(byte *)((longlong)puVar16 + 0x95) = bVar18;
        }
        if ((byte)puVar16[0x65] != 0) {
          iVar20 = (byte)puVar16[0x65] - 1;
          if (iVar20 <= (int)(uint)bVar17) {
            bVar17 = (byte)iVar20;
          }
          *(byte *)(puVar16 + 0x66) = bVar17;
          if (iVar20 <= (int)(uint)bVar23) {
            bVar23 = (byte)iVar20;
          }
          *(byte *)((longlong)puVar16 + 0xcd) = bVar23;
        }
        if (pbVar15 + 0xe9 < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xe9];
        }
        else {
          bVar18 = 0;
        }
        *(byte *)(puVar16 + 0x4b) = bVar18 & 1;
        *(byte *)((longlong)puVar16 + 0x97) = bVar18 >> 1 & 1;
        *(byte *)(puVar16 + 0x4c) = bVar18 >> 2 & 1;
        if (pbVar15 + 0xea < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xea];
        }
        else {
          bVar18 = 0;
        }
        *(byte *)(puVar16 + 0x67) = bVar18 & 1;
        *(byte *)((longlong)puVar16 + 0xcf) = bVar18 >> 1 & 1;
        *(byte *)(puVar16 + 0x68) = bVar18 >> 2 & 1;
        if (pbVar15 + 0xeb < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xeb];
          *(uint *)(puVar16 + 0x6a) = (uint)bVar18;
          if (bVar18 == 2) {
            puVar16[0x6a] = 1;
            puVar16[0x6b] = 0;
          }
          else if (bVar18 == 1) {
            puVar16[0x6a] = 2;
            puVar16[0x6b] = 0;
          }
        }
        else {
          puVar16[0x6a] = 0;
          puVar16[0x6b] = 0;
        }
        if (pbVar15 + 0xec < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xec];
        }
        else {
          bVar18 = 0;
        }
        *(byte *)(puVar16 + 0x6c) = bVar18;
        if (pbVar15 + 0xed < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xed];
        }
        else {
          bVar18 = 0;
        }
        *(byte *)((longlong)puVar16 + 0xd9) = bVar18;
        if (pbVar15 + 0xee < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xee];
        }
        else {
          bVar18 = 0;
        }
        *(byte *)(puVar16 + 0x6d) = bVar18;
        uVar27 = 0;
        uVar2 = uVar27;
        if (pbVar15 + 0xef < pbVar14) {
          uVar2 = (ushort)pbVar15[param_2 + 0xef];
        }
        if (pbVar15 + 0xf0 < pbVar14) {
          uVar27 = (ushort)pbVar15[param_2 + 0xf0];
        }
        uVar7 = (ulonglong)*puVar16;
        puVar16[0x6e] = uVar27 << 8 | uVar2;
        *(void **)(puVar16 + 0x78) = local_res20;
        local_res20 = (void *)((longlong)local_res20 + uVar7 * 0x38);
        uVar2 = 0;
        if (*puVar16 != 0) {
          pbVar15 = pbVar14 + param_2 + 2;
          do {
            uVar8 = 0;
            puVar22 = (undefined1 *)((ulonglong)uVar2 * 0x38 + *(longlong *)(puVar16 + 0x78));
            if (pbVar14 < param_3) {
              uVar30 = (uint)pbVar15[-2];
            }
            else {
              uVar30 = 0;
            }
            if (pbVar15 + ~param_2 < param_3) {
              uVar5 = (uint)pbVar15[-1];
            }
            else {
              uVar5 = 0;
            }
            if (pbVar15 + -param_2 < param_3) {
              uVar8 = (uint)*pbVar15;
            }
            if (pbVar15 + (1 - param_2) < param_3) {
              uVar29 = (uint)pbVar15[1];
            }
            else {
              uVar29 = 0;
            }
            uVar13 = 0;
            uVar30 = (uVar29 << 8 | uVar8) << 0x10 | uVar5 << 8 | uVar30;
            *(uint *)(puVar22 + 4) = uVar30;
            uVar8 = uVar13;
            if (pbVar15 + (2 - param_2) < param_3) {
              uVar8 = (uint)pbVar15[2];
            }
            uVar5 = uVar13;
            if (pbVar15 + (3 - param_2) < param_3) {
              uVar5 = (uint)pbVar15[3];
            }
            uVar29 = uVar13;
            if (pbVar15 + (4 - param_2) < param_3) {
              uVar29 = (uint)pbVar15[4];
            }
            if (pbVar15 + (5 - param_2) < param_3) {
              uVar13 = (uint)pbVar15[5];
            }
            uVar24 = 0;
            uVar8 = (uVar13 << 8 | uVar29) << 0x10 | uVar5 << 8 | uVar8;
            *(uint *)(puVar22 + 8) = uVar8;
            uVar5 = uVar24;
            if (pbVar15 + (6 - param_2) < param_3) {
              uVar5 = (uint)pbVar15[6];
            }
            uVar29 = uVar24;
            if (pbVar15 + (7 - param_2) < param_3) {
              uVar29 = (uint)pbVar15[7];
            }
            if (pbVar15 + (8 - param_2) < param_3) {
              uVar24 = (uint)pbVar15[8];
            }
            if (pbVar15 + (9 - param_2) < param_3) {
              uVar13 = (uint)pbVar15[9];
            }
            else {
              uVar13 = 0;
            }
            uVar5 = (uVar13 << 8 | uVar24) << 0x10 | uVar29 << 8 | uVar5;
            bVar18 = 0;
            *(uint *)(puVar22 + 0xc) = uVar5;
            uVar5 = uVar5 + uVar8;
            *(uint *)(puVar22 + 0x10) = uVar5;
            bVar17 = bVar18;
            if (pbVar15 + (10 - param_2) < param_3) {
              bVar17 = pbVar15[10];
            }
            *(float *)(puVar22 + 0x14) = (float)bVar17 * 0.015625;
            if (pbVar15 + (0xb - param_2) < param_3) {
              bVar17 = pbVar15[0xb];
            }
            else {
              bVar17 = 0;
            }
            puVar22[0x18] = bVar17;
            if (uVar30 < uVar8) {
              *(uint *)(puVar22 + 8) = uVar30;
              uVar8 = uVar30;
            }
            if (uVar30 < uVar5) {
              *(uint *)(puVar22 + 0x10) = uVar30;
              uVar5 = uVar30;
            }
            uVar5 = uVar5 - uVar8;
            *(uint *)(puVar22 + 0xc) = uVar5;
            if (pbVar15 + (0xc - param_2) < param_3) {
              bVar17 = pbVar15[0xc];
              if (((bVar17 & 3) == 0) || (uVar5 == 0)) goto LAB_14002170a;
              if ((bVar17 & 3) == 1) {
                *(undefined4 *)(puVar22 + 0x1c) = 1;
              }
              else {
                *(undefined4 *)(puVar22 + 0x1c) = 2;
              }
            }
            else {
              bVar17 = 0;
LAB_14002170a:
              *(undefined4 *)(puVar22 + 0x1c) = 0;
            }
            uVar1 = 8;
            if ((bVar17 & 0x10) != 0) {
              uVar1 = 0x10;
            }
            *puVar22 = uVar1;
            if (pbVar15 + (0xd - param_2) < param_3) {
              bVar18 = pbVar15[0xd];
            }
            *(float *)(puVar22 + 0x20) = (float)bVar18 / 255.0;
            if (pbVar15 + (0xe - param_2) < param_3) {
              bVar18 = pbVar15[0xe];
            }
            else {
              bVar18 = 0;
            }
            puVar22[0x24] = bVar18;
            *(void **)(puVar22 + 0x30) = local_res20;
            local_res20 = (void *)((longlong)local_res20 + (ulonglong)uVar30);
            if ((bVar17 & 0x10) != 0) {
              *(uint *)(puVar22 + 8) = *(uint *)(puVar22 + 8) >> 1;
              *(uint *)(puVar22 + 0x10) = *(uint *)(puVar22 + 0x10) >> 1;
              *(uint *)(puVar22 + 4) = uVar30 >> 1;
              *(uint *)(puVar22 + 0xc) = uVar5 >> 1;
            }
            uVar7 = (ulonglong)*puVar16;
            pbVar14 = pbVar14 + 0x28;
            pbVar15 = pbVar15 + 0x28;
            uVar2 = uVar2 + 1;
          } while (uVar2 < *puVar16);
        }
        uVar25 = 0;
        uVar27 = 0;
        uVar2 = uVar27;
        if ((short)uVar7 != 0) {
          do {
            uVar12 = (ushort)uVar7;
            pcVar26 = (char *)((ulonglong)uVar2 * 0x38 + *(longlong *)(puVar16 + 0x78));
            uVar8 = *(uint *)(pcVar26 + 4);
            uVar7 = (ulonglong)uVar8;
            if (*pcVar26 == '\x10') {
              uVar7 = uVar25;
              uVar10 = uVar25;
              uVar3 = uVar27;
              if (uVar8 != 0) {
                do {
                  pbVar15 = pbVar14 + (uint)((int)uVar7 * 2);
                  uVar12 = uVar27;
                  if (pbVar15 < param_3) {
                    uVar12 = (ushort)pbVar15[param_2];
                  }
                  uVar4 = uVar27;
                  if (pbVar15 + 1 < param_3) {
                    uVar4 = (ushort)pbVar15[param_2 + 1];
                  }
                  uVar30 = (int)uVar7 + 1;
                  uVar3 = uVar3 + (uVar4 << 8 | uVar12);
                  *(ushort *)(uVar10 + *(longlong *)(pcVar26 + 0x30)) = uVar3;
                  uVar7 = (ulonglong)uVar30;
                  uVar10 = uVar10 + 2;
                } while (uVar30 < uVar8);
                uVar12 = *puVar16;
              }
              uVar8 = *(int *)(pcVar26 + 4) * 2;
            }
            else {
              cVar19 = '\0';
              if (uVar8 != 0) {
                pbVar15 = pbVar14 + param_2;
                uVar10 = uVar25;
                do {
                  if (pbVar14 + uVar10 < param_3) {
                    bVar18 = *pbVar15;
                  }
                  else {
                    bVar18 = 0;
                  }
                  cVar19 = cVar19 + bVar18;
                  pbVar15 = pbVar15 + 1;
                  *(char *)(uVar10 + *(longlong *)(pcVar26 + 0x30)) = cVar19;
                  uVar10 = uVar10 + 1;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
                uVar12 = *puVar16;
              }
              uVar8 = *(uint *)(pcVar26 + 4);
            }
            pbVar14 = pbVar14 + uVar8;
            uVar2 = uVar2 + 1;
            uVar7 = (ulonglong)uVar12;
          } while (uVar2 < uVar12);
        }
      }
      local_res10._0_2_ = (ushort)local_res10 + 1;
      pbVar15 = pbVar14;
    } while ((ushort)local_res10 < *(ushort *)(param_1 + 0x10));
  }
  return local_res20;
}



/* __CxxFrameHandler4 @ 14002192f (6 bytes) */

void __CxxFrameHandler4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014002192f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler4();
  return;
}



/* memcpy @ 140021935 (6 bytes) */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140021935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* memset @ 14002193b (6 bytes) */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014002193b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* __std_exception_copy @ 140021947 (6 bytes) */

void __std_exception_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140021947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_exception_copy();
  return;
}



/* __std_exception_destroy @ 14002194d (6 bytes) */

void __std_exception_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014002194d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_exception_destroy();
  return;
}



/* _CxxThrowException @ 140021953 (6 bytes) */

void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x000140021953. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* __current_exception @ 140021959 (6 bytes) */

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140021959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



/* __current_exception_context @ 14002195f (6 bytes) */

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014002195f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



/* free @ 140021965 (6 bytes) */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x000140021965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* malloc @ 14002196b (6 bytes) */

void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014002196b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}



/* terminate @ 140021971 (6 bytes) */

void terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140021971. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



/* sqrtf @ 140021977 (6 bytes) */

float __cdecl sqrtf(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140021977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = sqrtf(_X);
  return fVar1;
}



/* sinf @ 14002197d (6 bytes) */

float __cdecl sinf(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014002197d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = sinf(_X);
  return fVar1;
}



/* powf @ 140021983 (6 bytes) */

float __cdecl powf(float _X,float _Y)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140021983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = powf(_X,_Y);
  return fVar1;
}



/* _callnewh @ 140021989 (6 bytes) */

int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140021989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _callnewh(_Size);
  return iVar1;
}



/* _configure_narrow_argv @ 14002198f (6 bytes) */

void _configure_narrow_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014002198f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _configure_narrow_argv();
  return;
}



/* _initialize_narrow_environment @ 140021995 (6 bytes) */

void _initialize_narrow_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140021995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initialize_narrow_environment();
  return;
}



/* _initialize_onexit_table @ 14002199b (6 bytes) */

void _initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014002199b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initialize_onexit_table();
  return;
}



/* _register_onexit_function @ 1400219a1 (6 bytes) */

void _register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400219a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _register_onexit_function();
  return;
}



/* _crt_atexit @ 1400219a7 (6 bytes) */

void _crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400219a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_atexit();
  return;
}



/* _cexit @ 1400219ad (6 bytes) */

void __cdecl _cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400219ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _cexit();
  return;
}



/* _seh_filter_exe @ 1400219b3 (6 bytes) */

void _seh_filter_exe(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400219b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _seh_filter_exe();
  return;
}



/* _set_app_type @ 1400219b9 (6 bytes) */

void _set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400219b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _set_app_type();
  return;
}



/* __setusermatherr @ 1400219bf (6 bytes) */

void __setusermatherr(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400219bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __setusermatherr();
  return;
}



/* _get_narrow_winmain_command_line @ 1400219c5 (6 bytes) */

void _get_narrow_winmain_command_line(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400219c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _get_narrow_winmain_command_line();
  return;
}



/* _initterm @ 1400219cb (6 bytes) */

void _initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400219cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm();
  return;
}



/* _initterm_e @ 1400219d1 (6 bytes) */

void _initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400219d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm_e();
  return;
}



/* exit @ 1400219d7 (6 bytes) */

void __cdecl exit(int _Code)

{
                    /* WARNING: Could not recover jumptable at 0x0001400219d7. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  exit(_Code);
  return;
}



/* _exit @ 1400219dd (6 bytes) */

void __cdecl _exit(int _Code)

{
                    /* WARNING: Could not recover jumptable at 0x0001400219dd. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _exit(_Code);
  return;
}



/* _set_fmode @ 1400219e3 (6 bytes) */

errno_t __cdecl _set_fmode(int _Mode)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400219e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = _set_fmode(_Mode);
  return eVar1;
}



/* _register_thread_local_exe_atexit_callback @ 1400219ef (6 bytes) */

void _register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400219ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _register_thread_local_exe_atexit_callback();
  return;
}



/* _configthreadlocale @ 1400219f5 (6 bytes) */

int __cdecl _configthreadlocale(int _Flag)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400219f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _configthreadlocale(_Flag);
  return iVar1;
}



/* _set_new_mode @ 1400219fb (6 bytes) */

void _set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400219fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _set_new_mode();
  return;
}



/* __p__commode @ 140021a01 (6 bytes) */

void __p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140021a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __p__commode();
  return;
}



/* __GSHandlerCheck @ 140021a08 (29 bytes) */

/* Library Function - Single Match
    __GSHandlerCheck
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
__GSHandlerCheck(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4,*(undefined8 *)(param_4 + 0x38));
  return 1;
}



/* __GSHandlerCheckCommon @ 140021a28 (91 bytes) */

/* Library Function - Single Match
    __GSHandlerCheckCommon
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __GSHandlerCheckCommon(ulonglong param_1,longlong param_2,uint *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0) {
    param_1 = param_1 + (*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xfffffff0);
  }
  FUN_14001cb70(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}



/* FID_conflict:__GSHandlerCheck_EH @ 140021a84 (127 bytes) */

/* Library Function - Multiple Matches With Different Base Names
    __GSHandlerCheck_EH
    __GSHandlerCheck_EH4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void FID_conflict___GSHandlerCheck_EH
               (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,param_4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    __CxxFrameHandler4(param_1,param_2,param_3,param_4);
  }
  return;
}



/* __chkstk @ 140021b20 (78 bytes) */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = (undefined1 *)StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



/* ceilf @ 140021b6e (6 bytes) */

float __cdecl ceilf(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140021b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = ceilf(_X);
  return fVar1;
}



/* _guard_dispatch_icall @ 140021b90 (2 bytes) */

/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000140021b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* _guard_dispatch_icall @ 140021bb0 (6 bytes) */

/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000140021b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* FUN_140021bb6 @ 140021bb6 (29 bytes) */

void FUN_140021bb6(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}



/* FUN_140021bdf @ 140021bdf (29 bytes) */

void FUN_140021bdf(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}



/* FUN_140021c74 @ 140021c74 (29 bytes) */

void FUN_140021c74(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}



/* FUN_140021d09 @ 140021d09 (29 bytes) */

void FUN_140021d09(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}



/* FUN_140021d9e @ 140021d9e (29 bytes) */

void FUN_140021d9e(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}



/* FUN_140021e33 @ 140021e33 (29 bytes) */

void FUN_140021e33(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}



/* FUN_140021ec8 @ 140021ec8 (29 bytes) */

void FUN_140021ec8(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}



/* FUN_140021f5d @ 140021f5d (29 bytes) */

void FUN_140021f5d(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}



/* FUN_140021ff2 @ 140021ff2 (29 bytes) */

void FUN_140021ff2(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}



/* FUN_140022087 @ 140022087 (29 bytes) */

void FUN_140022087(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}



/* FUN_14002211c @ 14002211c (29 bytes) */

void FUN_14002211c(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}



/* FUN_140022229 @ 140022229 (23 bytes) */

bool FUN_140022229(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



/* FUN_140022241 @ 140022241 (29 bytes) */

void FUN_140022241(undefined8 *param_1)

{
  _seh_filter_exe(*(undefined4 *)*param_1,param_1);
  return;
}



/* FUN_140022260 @ 140022260 (31 bytes) */

void FUN_140022260(void)

{
  if (DAT_140762604 != 0) {
    free(DAT_140762610);
  }
  return;
}



