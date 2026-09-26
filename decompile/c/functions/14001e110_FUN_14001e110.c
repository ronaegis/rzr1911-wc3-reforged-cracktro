
void FUN_14001e110(longlong param_1,longlong param_2,ulonglong param_3)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  bool bVar5;
  float fVar6;
  
  *(longlong *)(param_1 + 0x148) = *(longlong *)(param_1 + 0x148) + param_3;
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      if (*(float *)(param_1 + 0x140) <= 0.0) {
        FUN_14001f560(param_1);
      }
      *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0x140) - 1.0;
      *(undefined8 *)(param_2 + uVar3 * 8) = 0;
      if ((*(byte *)(param_1 + 0x161) == 0) ||
         (*(byte *)(param_1 + 0x160) < *(byte *)(param_1 + 0x161))) {
        bVar4 = 0;
        if (*(short *)(param_1 + 0xc) != 0) {
          do {
            lVar2 = (ulonglong)bVar4 * 0x130 + *(longlong *)(param_1 + 0x168);
            if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
               (0.0 < *(float *)(lVar2 + 0x20) || *(float *)(lVar2 + 0x20) == 0.0)) {
              fVar6 = (float)FUN_14001f010();
              if ((*(char *)(lVar2 + 0x98) == '\0') &&
                 (*(char *)(*(longlong *)(lVar2 + 8) + 0xe8) == '\0')) {
                *(float *)(param_2 + uVar3 * 8) =
                     fVar6 * *(float *)(lVar2 + 0x128) + *(float *)(param_2 + uVar3 * 8);
                *(float *)(param_2 + 4 + uVar3 * 8) =
                     fVar6 * *(float *)(lVar2 + 300) + *(float *)(param_2 + 4 + uVar3 * 8);
              }
              *(int *)(lVar2 + 0xa4) = *(int *)(lVar2 + 0xa4) + 1;
              fVar6 = *(float *)(lVar2 + 0x128);
              fVar1 = *(float *)(lVar2 + 0x9c);
              if (fVar6 <= fVar1) {
                if (fVar6 < fVar1) {
                  fVar6 = fVar6 + *(float *)(param_1 + 0x138);
                  bVar5 = fVar6 < fVar1;
                  goto LAB_14001e25c;
                }
              }
              else {
                fVar6 = fVar6 - *(float *)(param_1 + 0x138);
                bVar5 = fVar1 < fVar6;
LAB_14001e25c:
                *(float *)(lVar2 + 0x128) = fVar6;
                if (!bVar5 && fVar1 != fVar6) {
                  *(float *)(lVar2 + 0x128) = fVar1;
                }
              }
              fVar6 = *(float *)(lVar2 + 300);
              fVar1 = *(float *)(lVar2 + 0xa0);
              if (fVar6 <= fVar1) {
                if (fVar1 <= fVar6) goto LAB_14001e2b2;
                fVar6 = fVar6 + *(float *)(param_1 + 0x138);
                bVar5 = fVar6 < fVar1;
              }
              else {
                fVar6 = fVar6 - *(float *)(param_1 + 0x138);
                bVar5 = fVar1 < fVar6;
              }
              *(float *)(lVar2 + 300) = fVar6;
              if (!bVar5 && fVar1 != fVar6) {
                *(float *)(lVar2 + 300) = fVar1;
              }
            }
LAB_14001e2b2:
            bVar4 = bVar4 + 1;
          } while ((ushort)bVar4 < *(ushort *)(param_1 + 0xc));
        }
        fVar6 = *(float *)(param_1 + 0x134) * *(float *)(param_1 + 0x130);
        *(float *)(param_2 + uVar3 * 8) = fVar6 * *(float *)(param_2 + uVar3 * 8);
        *(float *)(param_2 + 4 + uVar3 * 8) = fVar6 * *(float *)(param_2 + 4 + uVar3 * 8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return;
}

