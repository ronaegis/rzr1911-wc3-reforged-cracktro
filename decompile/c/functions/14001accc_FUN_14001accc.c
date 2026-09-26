
void FUN_14001accc(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = param_2[1];
  param_1[2] = *param_2;
  param_1[3] = lVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar3 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 4) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(int *)(param_1 + 5) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  param_1[6] = param_2[4];
  *(undefined1 *)(param_1 + 1) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014001acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}

