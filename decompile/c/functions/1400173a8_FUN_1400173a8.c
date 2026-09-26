
undefined8 * FUN_1400173a8(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 4;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = Zion::Gfx::BufferDataRuntime::vftable;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  memset((void *)((longlong)param_1 + 0x66),0,0xffe);
  param_1[0x20d] = 0;
  *(undefined4 *)(param_1 + 0x20e) = 0;
  return param_1;
}

