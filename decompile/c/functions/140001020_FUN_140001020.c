
float * FUN_140001020(float *param_1,char *param_2)

{
  char cVar1;
  void *pvVar2;
  float fVar3;
  ulonglong uVar4;
  float fVar5;
  size_t _Size;
  
  param_1[1] = 0.0;
  *param_1 = 1.61;
  param_1[2] = 1.12104e-44;
  pvVar2 = malloc(8);
  _Size = 0;
  *(void **)(param_1 + 4) = pvVar2;
  cVar1 = *param_2;
  while (fVar5 = (float)_Size, cVar1 != '\0') {
    _Size = (size_t)((int)fVar5 + 1);
    cVar1 = param_2[_Size];
  }
  fVar3 = (float)((int)fVar5 + 1);
  if ((uint)param_1[2] <= (uint)fVar3) {
    pvVar2 = malloc((ulonglong)(uint)fVar3);
    if (param_1[1] != 0.0) {
      memcpy(pvVar2,*(void **)(param_1 + 4),(ulonglong)(uint)param_1[1]);
      free(*(void **)(param_1 + 4));
    }
    *(void **)(param_1 + 4) = pvVar2;
    param_1[2] = fVar3;
  }
  memcpy(pvVar2,param_2,_Size);
  param_1[1] = fVar5;
  if ((uint)param_1[2] <= (uint)fVar5) {
    uVar4 = (ulonglong)((float)(uint)param_1[2] * *param_1 + 1.0);
    fVar3 = (float)uVar4;
    if ((uint)param_1[2] <= (uint)fVar3) {
      pvVar2 = malloc(uVar4 & 0xffffffff);
      fVar5 = param_1[1];
      if (fVar5 != 0.0) {
        memcpy(pvVar2,*(void **)(param_1 + 4),(ulonglong)(uint)fVar5);
        free(*(void **)(param_1 + 4));
        fVar5 = param_1[1];
      }
      *(void **)(param_1 + 4) = pvVar2;
      param_1[2] = fVar3;
    }
  }
  param_1[1] = (float)((int)fVar5 + 1);
  *(undefined1 *)((ulonglong)(uint)fVar5 + *(longlong *)(param_1 + 4)) = 0;
  return param_1;
}

