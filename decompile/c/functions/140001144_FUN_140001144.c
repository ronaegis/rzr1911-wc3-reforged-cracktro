
undefined4 * FUN_140001144(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  
  *param_1 = 0x3fce147b;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  uVar1 = *(uint *)(param_2 + 8);
  param_1[2] = uVar1;
  pvVar2 = malloc((ulonglong)uVar1);
  *(void **)(param_1 + 4) = pvVar2;
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      *(undefined1 *)(uVar4 + *(longlong *)(param_1 + 4)) =
           *(undefined1 *)(uVar4 + *(longlong *)(param_2 + 0x10));
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar1 = param_1[1];
    } while (uVar3 < uVar1);
    if ((uVar1 != 0) && (*(char *)((ulonglong)(uVar1 - 1) + *(longlong *)(param_1 + 4)) == '\0')) {
      return param_1;
    }
  }
  local_res8[0] = 0;
  FUN_1400180f4(param_1,local_res8);
  return param_1;
}

