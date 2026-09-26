
ulonglong FUN_140020380(int param_1,byte param_2)

{
  float fVar1;
  undefined4 extraout_XMM0_Db;
  
  param_2 = param_2 & 0x3f;
  if (param_1 == 0) {
    fVar1 = sinf((float)param_2 * 6.283184 * 0.015625);
    return CONCAT44(extraout_XMM0_Db,fVar1) ^ 0x8000000080000000;
  }
  if (param_1 == 1) {
    return (ulonglong)(uint)((float)(int)(0x20 - (uint)param_2) * 0.03125);
  }
  if (param_1 == 2) {
    if (0x1f < param_2) {
      return 0x3f800000;
    }
    return 0xbf800000;
  }
  if (param_1 != 3) {
    if (param_1 != 4) {
      return 0;
    }
    return (ulonglong)(uint)((float)(int)(param_2 - 0x20) * 0.03125);
  }
  DAT_1400270b0 = DAT_1400270b0 * 0x41c64e6d + 0x3039;
  return (ulonglong)(uint)((float)(DAT_1400270b0 >> 0x10 & 0x7fff) * 6.1035156e-05 - 1.0);
}

