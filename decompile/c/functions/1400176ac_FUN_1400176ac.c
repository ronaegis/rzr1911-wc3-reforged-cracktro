
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

