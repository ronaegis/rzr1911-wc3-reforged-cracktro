
undefined8 * FUN_1400172f8(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = Zion::Gfx::TextureRuntime::vftable;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 2;
  param_1[3] = 2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 3;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}

