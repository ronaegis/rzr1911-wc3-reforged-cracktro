
void FUN_1400180f4(float *param_1,undefined1 *param_2)

{
  void *_Dst;
  float fVar1;
  ulonglong uVar2;
  ulonglong _Size;
  
  _Size = (ulonglong)(uint)param_1[1];
  if ((uint)param_1[2] <= (uint)param_1[1]) {
    uVar2 = (ulonglong)((float)(uint)param_1[2] * *param_1 + 1.0);
    fVar1 = (float)uVar2;
    if ((uint)param_1[2] <= (uint)fVar1) {
      _Dst = malloc(uVar2 & 0xffffffff);
      _Size = (ulonglong)(uint)param_1[1];
      if (param_1[1] != 0.0) {
        memcpy(_Dst,*(void **)(param_1 + 4),_Size);
        free(*(void **)(param_1 + 4));
        _Size = (ulonglong)(uint)param_1[1];
      }
      *(void **)(param_1 + 4) = _Dst;
      param_1[2] = fVar1;
    }
  }
  param_1[1] = (float)((int)_Size + 1);
  *(undefined1 *)(_Size + *(longlong *)(param_1 + 4)) = *param_2;
  return;
}

