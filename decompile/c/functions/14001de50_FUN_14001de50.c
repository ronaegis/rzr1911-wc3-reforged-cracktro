
void FUN_14001de50(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x96) != '\0') {
      if (*(char *)(param_1 + 0x3e) == '\0') {
        fVar2 = *(float *)(param_1 + 0x40) - (float)*(ushort *)(lVar1 + 0xdc) * 3.0517578e-05;
        *(float *)(param_1 + 0x40) = fVar2;
        if (fVar2 < 0.0) {
          *(undefined4 *)(param_1 + 0x40) = 0;
        }
      }
      FUN_14001dce0(param_1,lVar1 + 0x62,param_1 + 0x4c,param_1 + 0x44);
    }
    if (*(char *)(*(longlong *)(param_1 + 8) + 0xce) != '\0') {
      FUN_14001dce0(param_1,*(longlong *)(param_1 + 8) + 0x9a,param_1 + 0x4e,param_1 + 0x48);
      return;
    }
  }
  return;
}

