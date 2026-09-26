
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

