
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

