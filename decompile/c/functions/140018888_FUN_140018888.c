
float * FUN_140018888(float *param_1)

{
  float fVar1;
  void *_Dst;
  float fVar2;
  ulonglong uVar3;
  
  param_1[1] = 0.0;
  *param_1 = 1.61;
  param_1[2] = 1.12104e-44;
  _Dst = malloc(8);
  *(void **)(param_1 + 4) = _Dst;
  fVar1 = param_1[1];
  if ((uint)param_1[2] <= (uint)fVar1) {
    uVar3 = (ulonglong)((float)(uint)param_1[2] * *param_1 + 1.0);
    fVar2 = (float)uVar3;
    if ((uint)param_1[2] <= (uint)fVar2) {
      _Dst = malloc(uVar3 & 0xffffffff);
      fVar1 = param_1[1];
      if (fVar1 != 0.0) {
        memcpy(_Dst,*(void **)(param_1 + 4),(ulonglong)(uint)fVar1);
        free(*(void **)(param_1 + 4));
        fVar1 = param_1[1];
      }
      *(void **)(param_1 + 4) = _Dst;
      param_1[2] = fVar2;
    }
  }
  param_1[1] = (float)((int)fVar1 + 1);
  *(undefined1 *)((ulonglong)(uint)fVar1 + (longlong)_Dst) = 0;
  return param_1;
}

