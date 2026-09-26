
void FUN_140017bcc(float *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *_Dst;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  float fVar7;
  ulonglong uVar8;
  
  uVar5 = (ulonglong)(uint)param_1[1];
  if ((uint)param_1[2] <= (uint)param_1[1]) {
    uVar8 = (ulonglong)((float)(uint)param_1[2] * *param_1 + 1.0);
    fVar7 = (float)uVar8;
    if ((uint)param_1[2] <= (uint)fVar7) {
      _Dst = malloc((uVar8 & 0xffffffff) * 0x114);
      uVar5 = (ulonglong)(uint)param_1[1];
      if (param_1[1] != 0.0) {
        memcpy(_Dst,*(void **)(param_1 + 4),uVar5 * 0x114);
        free(*(void **)(param_1 + 4));
        uVar5 = (ulonglong)(uint)param_1[1];
      }
      *(void **)(param_1 + 4) = _Dst;
      param_1[2] = fVar7;
    }
  }
  param_1[1] = (float)((int)uVar5 + 1);
  lVar3 = 2;
  puVar2 = (undefined8 *)(uVar5 * 0x114 + *(longlong *)(param_1 + 4));
  do {
    puVar6 = param_2;
    puVar4 = puVar2;
    uVar1 = puVar6[1];
    *puVar4 = *puVar6;
    puVar4[1] = uVar1;
    uVar1 = puVar6[3];
    puVar4[2] = puVar6[2];
    puVar4[3] = uVar1;
    uVar1 = puVar6[5];
    puVar4[4] = puVar6[4];
    puVar4[5] = uVar1;
    uVar1 = puVar6[7];
    puVar4[6] = puVar6[6];
    puVar4[7] = uVar1;
    uVar1 = puVar6[9];
    puVar4[8] = puVar6[8];
    puVar4[9] = uVar1;
    uVar1 = puVar6[0xb];
    puVar4[10] = puVar6[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar6[0xd];
    puVar4[0xc] = puVar6[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar6[0xf];
    puVar4[0xe] = puVar6[0xe];
    puVar4[0xf] = uVar1;
    lVar3 = lVar3 + -1;
    puVar2 = puVar4 + 0x10;
    param_2 = puVar6 + 0x10;
  } while (lVar3 != 0);
  uVar1 = puVar6[0x11];
  puVar4[0x10] = puVar6[0x10];
  puVar4[0x11] = uVar1;
  *(undefined4 *)(puVar4 + 0x12) = *(undefined4 *)(puVar6 + 0x12);
  return;
}

