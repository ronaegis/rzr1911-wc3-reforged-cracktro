
void FUN_140020240(longlong param_1,longlong param_2,byte param_3)

{
  float fVar1;
  
  *(short *)(param_2 + 0x76) = *(short *)(param_2 + 0x76) + (ushort)(param_3 >> 4);
  fVar1 = (float)FUN_140020380(*(undefined4 *)(param_2 + 0x70),*(undefined1 *)(param_2 + 0x76));
  *(float *)(param_2 + 0x78) = (fVar1 * -2.0 * (float)(param_3 & 0xf)) / 15.0;
  fVar1 = (float)FUN_14001def0(param_1,*(undefined4 *)(param_2 + 0x24));
  *(float *)(param_2 + 0x28) = fVar1;
  *(float *)(param_2 + 0x2c) = fVar1 / (float)*(uint *)(param_1 + 0x128);
  return;
}

