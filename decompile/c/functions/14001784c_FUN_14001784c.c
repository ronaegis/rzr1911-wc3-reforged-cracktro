
undefined4 * FUN_14001784c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_140001144(param_1 + 2,param_2 + 2);
  FUN_140001144(param_1 + 8,param_2 + 8);
  FUN_140001144(param_1 + 0xe,param_2 + 0xe);
  FUN_140001144(param_1 + 0x14,param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  return param_1;
}

