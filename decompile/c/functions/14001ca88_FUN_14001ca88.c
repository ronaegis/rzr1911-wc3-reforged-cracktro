
undefined8 FUN_14001ca88(longlong *param_1,void *param_2)

{
  longlong *_Dst;
  byte bVar1;
  uint local_28;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  _Dst = param_1 + 0xc;
  memcpy(_Dst,param_2,0x1018);
  if (param_1[0x20d] == 0) {
    FUN_14001c89c(_Dst);
  }
  local_28 = local_28 & 0xffffff00;
  bVar1 = (&DAT_140023da4)[(int)*_Dst];
  uStack_10 = (undefined4)param_1[0x20d];
  uStack_c = (undefined4)((ulonglong)param_1[0x20d] >> 0x20);
  *(undefined1 *)(param_1 + 1) = 0;
  *(uint *)(param_1 + 2) = local_28;
  *(uint *)((longlong)param_1 + 0x14) = (uint)bVar1;
  *(int *)(param_1 + 3) = (int)param_1[0x20e];
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_14;
  *(undefined4 *)(param_1 + 5) = uStack_10;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_c;
  (**(code **)(*param_1 + 8))(param_1);
  return 1;
}

