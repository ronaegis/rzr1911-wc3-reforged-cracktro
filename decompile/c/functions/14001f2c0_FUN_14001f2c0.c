
void FUN_14001f2c0(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    param_3 = param_3 * 4.0;
  }
  param_3 = param_3 + *(float *)(param_2 + 0x24);
  *(float *)(param_2 + 0x24) = param_3;
  if (param_3 < 0.0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
    param_3 = 0.0;
  }
  fVar1 = (float)FUN_14001def0(0,param_3);
  *(float *)(param_2 + 0x28) = fVar1;
  *(float *)(param_2 + 0x2c) = fVar1 / (float)*(uint *)(param_1 + 0x128);
  return;
}

