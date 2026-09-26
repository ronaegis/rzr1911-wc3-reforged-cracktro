
void FUN_140018030(float *param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *_Dst;
  float fVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(uint)param_1[1];
  if ((uint)param_1[2] <= (uint)param_1[1]) {
    uVar3 = (ulonglong)((float)(uint)param_1[2] * *param_1 + 1.0);
    fVar2 = (float)uVar3;
    if ((uint)param_1[2] <= (uint)fVar2) {
      _Dst = malloc((uVar3 & 0xffffffff) * 0xc);
      uVar4 = (ulonglong)(uint)param_1[1];
      if (param_1[1] != 0.0) {
        memcpy(_Dst,*(void **)(param_1 + 4),uVar4 * 0xc);
        free(*(void **)(param_1 + 4));
        uVar4 = (ulonglong)(uint)param_1[1];
      }
      *(void **)(param_1 + 4) = _Dst;
      param_1[2] = fVar2;
    }
  }
  lVar1 = *(longlong *)(param_1 + 4);
  param_1[1] = (float)((int)uVar4 + 1);
  *(undefined8 *)(lVar1 + uVar4 * 0xc) = *param_2;
  *(undefined4 *)(lVar1 + 8 + uVar4 * 0xc) = *(undefined4 *)(param_2 + 1);
  return;
}

