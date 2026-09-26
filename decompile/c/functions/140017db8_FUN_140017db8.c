
void FUN_140017db8(float *param_1,float param_2)

{
  longlong lVar1;
  void *_Dst;
  float fVar2;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = param_1[1];
  if ((uint)fVar2 < (uint)param_2) {
    if ((uint)param_1[2] < (uint)param_2) {
      fVar5 = (float)(uint)param_1[2] * *param_1 + 1.0;
      fVar6 = (float)(uint)param_2;
      if ((float)(uint)param_2 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar5 = (float)(longlong)fVar6;
      if ((uint)param_1[2] <= (uint)fVar5) {
        _Dst = malloc(((longlong)fVar6 & 0xffffffffU) << 4);
        fVar2 = param_1[1];
        if (fVar2 != 0.0) {
          memcpy(_Dst,*(void **)(param_1 + 4),(ulonglong)(uint)fVar2 << 4);
          free(*(void **)(param_1 + 4));
          fVar2 = param_1[1];
        }
        *(void **)(param_1 + 4) = _Dst;
        param_1[2] = fVar5;
      }
    }
    if ((uint)fVar2 < (uint)param_2) {
      lVar4 = (ulonglong)(uint)fVar2 << 4;
      uVar3 = (ulonglong)(uint)((int)param_2 - (int)fVar2);
      do {
        lVar1 = *(longlong *)(param_1 + 4);
        *(undefined8 *)(lVar1 + lVar4) = 0;
        *(undefined8 *)(lVar1 + 8 + lVar4) = 0;
        lVar4 = lVar4 + 0x10;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  param_1[1] = param_2;
  return;
}

