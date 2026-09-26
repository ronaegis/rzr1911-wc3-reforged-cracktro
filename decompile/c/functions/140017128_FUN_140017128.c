
undefined8 * FUN_140017128(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = 0x3fce147b;
  *(undefined4 *)(param_1 + 1) = 8;
  pvVar1 = malloc(0x8a0);
  param_1[2] = pvVar1;
  param_1[3] = 0x3fce147b;
  *(undefined4 *)(param_1 + 4) = 8;
  pvVar1 = malloc(0x40);
  param_1[5] = pvVar1;
  param_1[6] = 0x3fce147b;
  *(undefined4 *)(param_1 + 7) = 8;
  pvVar1 = malloc(0x40);
  param_1[8] = pvVar1;
  *(undefined4 *)(param_1 + 9) = 1;
  *(undefined4 *)(param_1 + 10) = 0x3f400000;
  param_1[0xc] = 0x10;
  pvVar1 = malloc(0x80);
  param_1[0xb] = pvVar1;
  memset(pvVar1,0,0x80);
  *(undefined4 *)(param_1 + 0xd) = 0x3f400000;
  param_1[0xf] = 0x10;
  pvVar1 = malloc(0x80);
  param_1[0xe] = pvVar1;
  memset(pvVar1,0,0x80);
  *(undefined4 *)(param_1 + 0x10) = 0x3f400000;
  param_1[0x12] = 0x10;
  pvVar1 = malloc(0x80);
  param_1[0x11] = pvVar1;
  memset(pvVar1,0,0x80);
  param_1[0x13] = 0;
  param_1[0x14] = 0x3fce147b;
  *(undefined4 *)(param_1 + 0x15) = 8;
  pvVar1 = malloc(0x80);
  param_1[0x16] = pvVar1;
  param_1[0x18] = 0x3fce147b;
  *(undefined4 *)(param_1 + 0x19) = 8;
  pvVar1 = malloc(0x8a0);
  param_1[0x1a] = pvVar1;
  param_1[0x1b] = 0x3fce147b;
  *(undefined4 *)(param_1 + 0x1c) = 8;
  pvVar1 = malloc(0x20);
  param_1[0x1d] = pvVar1;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  return param_1;
}

