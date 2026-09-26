
undefined4 * FUN_140017e9c(undefined4 *param_1)

{
  void *pvVar1;
  
  param_1[1] = 0;
  *param_1 = 0x3fce147b;
  param_1[2] = 8;
  pvVar1 = malloc(0x80);
  *(void **)(param_1 + 4) = pvVar1;
  return param_1;
}

