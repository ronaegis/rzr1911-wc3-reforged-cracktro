
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

