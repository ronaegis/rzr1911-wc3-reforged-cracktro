
void FUN_14001fff0(longlong param_1,longlong param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 100);
  if (fVar2 == 0.0) {
    return;
  }
  fVar3 = *(float *)(param_2 + 0x24);
  if (fVar3 == fVar2) {
    return;
  }
  if (fVar3 <= fVar2) {
    if (fVar2 <= fVar3) goto LAB_1400200a2;
    if (*(int *)(param_1 + 0x14) == 0) {
      fVar4 = 4.0;
    }
    else {
      fVar4 = 1.0;
    }
    fVar3 = (float)*(byte *)(param_2 + 0x60) * fVar4 + fVar3;
    *(float *)(param_2 + 0x24) = fVar3;
    bVar1 = fVar3 < fVar2;
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
      fVar4 = 4.0;
    }
    else {
      fVar4 = 1.0;
    }
    fVar3 = fVar3 - (float)*(byte *)(param_2 + 0x60) * fVar4;
    *(float *)(param_2 + 0x24) = fVar3;
    bVar1 = fVar2 < fVar3;
  }
  if (!bVar1 && fVar2 != fVar3) {
    *(float *)(param_2 + 0x24) = fVar2;
    fVar3 = fVar2;
  }
LAB_1400200a2:
  fVar2 = (float)FUN_14001def0(param_1,fVar3);
  *(float *)(param_2 + 0x28) = fVar2;
  *(float *)(param_2 + 0x2c) = fVar2 / (float)*(uint *)(param_1 + 0x128);
  return;
}

