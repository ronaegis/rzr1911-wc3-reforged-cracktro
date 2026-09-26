
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

