
float FUN_14001f010(longlong param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  
  if (((*(longlong *)(param_1 + 8) == 0) ||
      (pcVar3 = *(char **)(param_1 + 0x10), pcVar3 == (char *)0x0)) ||
     (fVar4 = *(float *)(param_1 + 0x20), fVar4 < 0.0)) {
    uVar2 = *(uint *)(param_1 + 0xa4);
    if (uVar2 < 0x20) {
      fVar4 = *(float *)(param_1 + 0xa8 + (ulonglong)uVar2 * 4);
      return (float)uVar2 * 0.03125 * (0.0 - fVar4) + fVar4;
    }
  }
  else if (*(int *)(pcVar3 + 4) != 0) {
    if (*pcVar3 == '\b') {
      fVar5 = (float)(int)*(char *)(*(longlong *)(pcVar3 + 0x30) + ((longlong)fVar4 & 0xffffffffU))
              * 0.0078125;
    }
    else {
      fVar5 = (float)(int)*(short *)(*(longlong *)(pcVar3 + 0x30) +
                                    ((longlong)fVar4 & 0xffffffffU) * 2) * 3.0517578e-05;
    }
    iVar1 = *(int *)(pcVar3 + 0x1c);
    if (iVar1 == 0) {
      fVar4 = fVar4 + *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x20) = fVar4;
      if ((float)*(uint *)(pcVar3 + 4) <= fVar4) {
        *(undefined4 *)(param_1 + 0x20) = 0xbf800000;
      }
    }
    else if (iVar1 == 1) {
      fVar4 = fVar4 + *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x20) = fVar4;
      if ((float)*(uint *)(pcVar3 + 0x10) <= fVar4) {
        do {
          fVar4 = fVar4 - (float)*(uint *)(pcVar3 + 0xc);
          *(float *)(param_1 + 0x20) = fVar4;
        } while ((float)*(uint *)(pcVar3 + 0x10) <= fVar4);
      }
    }
    else if (iVar1 == 2) {
      if (*(char *)(param_1 + 0x30) == '\0') {
        fVar4 = fVar4 - *(float *)(param_1 + 0x2c);
        *(float *)(param_1 + 0x20) = fVar4;
        if (fVar4 <= (float)*(uint *)(pcVar3 + 8)) {
          *(undefined1 *)(param_1 + 0x30) = 1;
          fVar4 = (float)(uint)(*(int *)(pcVar3 + 8) * 2) - fVar4;
          *(float *)(param_1 + 0x20) = fVar4;
        }
        if (fVar4 <= 0.0) {
          *(undefined1 *)(param_1 + 0x30) = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
      }
      else {
        fVar4 = fVar4 + *(float *)(param_1 + 0x2c);
        *(float *)(param_1 + 0x20) = fVar4;
        if ((float)*(uint *)(pcVar3 + 0x10) <= fVar4) {
          *(undefined1 *)(param_1 + 0x30) = 0;
          fVar4 = (float)(uint)(*(int *)(pcVar3 + 0x10) * 2) - fVar4;
          *(float *)(param_1 + 0x20) = fVar4;
        }
        if ((float)*(uint *)(pcVar3 + 4) <= fVar4) {
          *(undefined1 *)(param_1 + 0x30) = 0;
          *(float *)(param_1 + 0x20) = fVar4 - (float)(*(int *)(pcVar3 + 4) - 1);
        }
      }
    }
    uVar2 = *(uint *)(param_1 + 0xa4);
    if (uVar2 < 0x20) {
      fVar4 = *(float *)(param_1 + 0xa8 + (ulonglong)uVar2 * 4);
      fVar5 = (fVar5 - fVar4) * (float)uVar2 * 0.03125 + fVar4;
    }
    return fVar5;
  }
  return 0.0;
}

