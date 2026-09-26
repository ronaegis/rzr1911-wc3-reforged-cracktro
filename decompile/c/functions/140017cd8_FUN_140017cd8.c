
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

