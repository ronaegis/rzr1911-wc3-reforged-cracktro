
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

