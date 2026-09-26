
void FUN_14001b150(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,byte param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_140027040 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_40 = (uint)param_5 * param_3;
  local_14 = 1;
  local_48 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  (**(code **)(*DAT_140762620 + 0x180))(DAT_140762620,*(undefined8 *)(param_1 + 0x38),0,&local_28);
  FUN_14001cb70(local_10 ^ (ulonglong)auStack_68);
  return;
}

