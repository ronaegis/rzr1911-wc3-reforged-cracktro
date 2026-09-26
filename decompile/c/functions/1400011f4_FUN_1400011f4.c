
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

