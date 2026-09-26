
void FUN_14001f230(longlong param_1,byte param_2)

{
  float fVar1;
  
  if ((param_2 & 0xf0) == 0 || (param_2 & 0xf) == 0) {
    if ((param_2 & 0xf0) == 0) {
      fVar1 = *(float *)(param_1 + 0x38) - (float)(param_2 & 0xf) / 255.0;
      *(float *)(param_1 + 0x38) = fVar1;
      if (fVar1 < 0.0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
    }
    else {
      fVar1 = (float)(param_2 >> 4) / 255.0 + *(float *)(param_1 + 0x38);
      *(float *)(param_1 + 0x38) = fVar1;
      if (1.0 < fVar1) {
        *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
        return;
      }
    }
  }
  return;
}

