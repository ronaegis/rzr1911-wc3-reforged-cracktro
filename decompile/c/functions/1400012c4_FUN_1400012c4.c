
undefined4 * FUN_1400012c4(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_140001020(param_1 + 2,"vertex_main");
  FUN_140001020(param_1 + 8,"pixel_main");
  FUN_140001020(param_1 + 0xe,"kernel_main");
  FUN_140001020(param_1 + 0x14,&DAT_14002364c);
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}

