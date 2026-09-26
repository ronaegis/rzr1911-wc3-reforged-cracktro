
void FUN_14001c694(float *param_1,undefined4 *param_2)

{
  void *_Dst;
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(uint)param_1[1];
  if ((uint)param_1[2] <= (uint)param_1[1]) {
    uVar2 = (ulonglong)((float)(uint)param_1[2] * *param_1 + 1.0);
    fVar1 = (float)uVar2;
    if ((uint)param_1[2] <= (uint)fVar1) {
      _Dst = malloc((uVar2 & 0xffffffff) << 2);
      uVar3 = (ulonglong)(uint)param_1[1];
      if (param_1[1] != 0.0) {
        memcpy(_Dst,*(void **)(param_1 + 4),uVar3 << 2);
        free(*(void **)(param_1 + 4));
        uVar3 = (ulonglong)(uint)param_1[1];
      }
      *(void **)(param_1 + 4) = _Dst;
      param_1[2] = fVar1;
    }
  }
  param_1[1] = (float)((int)uVar3 + 1);
  *(undefined4 *)(*(longlong *)(param_1 + 4) + uVar3 * 4) = *param_2;
  return;
}

