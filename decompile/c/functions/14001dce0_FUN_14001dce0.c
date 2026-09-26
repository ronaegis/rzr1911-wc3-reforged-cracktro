
void FUN_14001dce0(longlong param_1,longlong param_2,ushort *param_3,float *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  float fVar7;
  
  if (*(byte *)(param_2 + 0x30) < 2) {
    if ((*(byte *)(param_2 + 0x30) == 1) &&
       (fVar7 = (float)*(ushort *)(param_2 + 2) * 0.015625, *param_4 = fVar7, 1.0 < fVar7)) {
      *param_4 = 1.0;
      return;
    }
  }
  else {
    if (*(char *)(param_2 + 0x36) != '\0') {
      uVar1 = *(ushort *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x33) * 4);
      if (uVar1 <= *param_3) {
        *param_3 = (*(short *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x32) * 4) - uVar1) +
                   *param_3;
      }
    }
    uVar5 = 0;
    bVar4 = 0;
    iVar6 = *(byte *)(param_2 + 0x30) - 2;
    if (0 < iVar6) {
      do {
        bVar4 = (byte)uVar5;
        if ((*(ushort *)(param_2 + uVar5 * 4) <= *param_3) &&
           (*param_3 <= *(ushort *)(param_2 + 4 + uVar5 * 4))) break;
        bVar4 = bVar4 + 1;
        uVar5 = (ulonglong)bVar4;
      } while ((int)(uint)bVar4 < iVar6);
    }
    uVar1 = *param_3;
    uVar5 = (ulonglong)bVar4;
    uVar2 = *(ushort *)(param_2 + uVar5 * 4);
    if (uVar2 < uVar1) {
      uVar3 = *(ushort *)(param_2 + 4 + uVar5 * 4);
      if (uVar1 < uVar3) {
        fVar7 = (float)(int)((uint)uVar1 - (uint)uVar2) / (float)(int)((uint)uVar3 - (uint)uVar2);
        fVar7 = (1.0 - fVar7) * (float)*(ushort *)(param_2 + 2 + uVar5 * 4) +
                (float)*(ushort *)(param_2 + 6 + uVar5 * 4) * fVar7;
      }
      else {
        fVar7 = (float)*(ushort *)(param_2 + 6 + uVar5 * 4);
      }
    }
    else {
      fVar7 = (float)*(ushort *)(param_2 + 2 + uVar5 * 4);
    }
    *param_4 = fVar7 * 0.015625;
    if (((*(char *)(param_1 + 0x3e) == '\0') || (*(char *)(param_2 + 0x35) == '\0')) ||
       (*param_3 != *(ushort *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x31) * 4))) {
      *param_3 = *param_3 + 1;
    }
  }
  return;
}

