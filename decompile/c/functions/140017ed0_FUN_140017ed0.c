
void FUN_140017ed0(float *param_1)

{
  void *pvVar1;
  longlong lVar2;
  float fVar3;
  ulonglong uVar4;
  void *_Dst;
  float fVar5;
  
  fVar3 = param_1[1];
  uVar4 = (ulonglong)(uint)fVar3;
  if ((uint)fVar3 < 0x69) {
    if ((uint)fVar3 < 0x68) {
      if ((uint)param_1[2] < 0x68) {
        fVar5 = (float)(uint)param_1[2] * *param_1 + 1.0;
        fVar3 = 104.0;
        if (104.0 <= fVar5) {
          fVar3 = fVar5;
        }
        fVar5 = (float)(longlong)fVar3;
        if ((uint)param_1[2] <= (uint)fVar5) {
          pvVar1 = malloc(((longlong)fVar3 & 0xffffffffU) * 0x118);
          uVar4 = (ulonglong)(uint)param_1[1];
          if (param_1[1] != 0.0) {
            memcpy(pvVar1,*(void **)(param_1 + 4),uVar4 * 0x118);
            free(*(void **)(param_1 + 4));
            uVar4 = (ulonglong)(uint)param_1[1];
          }
          *(void **)(param_1 + 4) = pvVar1;
          param_1[2] = fVar5;
          if (0x67 < (uint)uVar4) goto LAB_140018003;
        }
      }
      lVar2 = uVar4 * 0x118;
      uVar4 = (ulonglong)(0x68 - (int)uVar4);
      do {
        _Dst = (void *)(*(longlong *)(param_1 + 4) + lVar2);
        memset(_Dst,0,0x118);
        *(undefined4 *)((longlong)_Dst + 0x104) = 0;
        *(undefined4 *)((longlong)_Dst + 0x100) = 0x3fce147b;
        *(undefined4 *)((longlong)_Dst + 0x108) = 8;
        pvVar1 = malloc(0x60);
        lVar2 = lVar2 + 0x118;
        *(void **)((longlong)_Dst + 0x110) = pvVar1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    uVar4 = 0x68;
    do {
      lVar2 = uVar4 * 0x118 + *(longlong *)(param_1 + 4);
      if (*(int *)(lVar2 + 0x104) != 0) {
        free(*(void **)(lVar2 + 0x110));
      }
      fVar3 = (float)((int)uVar4 + 1);
      uVar4 = (ulonglong)(uint)fVar3;
    } while ((uint)fVar3 < (uint)param_1[1]);
  }
LAB_140018003:
  param_1[1] = 1.45735e-43;
  return;
}

