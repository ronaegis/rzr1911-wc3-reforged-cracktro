
void FUN_140017a74(float *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *_Dst;
  undefined8 *puVar2;
  float fVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(uint)param_1[1];
  if ((uint)param_1[2] <= (uint)param_1[1]) {
    uVar4 = (ulonglong)((float)(uint)param_1[2] * *param_1 + 1.0);
    fVar3 = (float)uVar4;
    if ((uint)param_1[2] <= (uint)fVar3) {
      _Dst = malloc((uVar4 & 0xffffffff) << 4);
      uVar5 = (ulonglong)(uint)param_1[1];
      if (param_1[1] != 0.0) {
        memcpy(_Dst,*(void **)(param_1 + 4),uVar5 << 4);
        free(*(void **)(param_1 + 4));
        uVar5 = (ulonglong)(uint)param_1[1];
      }
      *(void **)(param_1 + 4) = _Dst;
      param_1[2] = fVar3;
    }
  }
  param_1[1] = (float)((int)uVar5 + 1);
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)(uVar5 * 0x10 + *(longlong *)(param_1 + 4));
  *puVar2 = *param_2;
  puVar2[1] = uVar1;
  return;
}

