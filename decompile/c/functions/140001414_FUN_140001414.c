
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

