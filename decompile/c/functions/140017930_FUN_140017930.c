
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

