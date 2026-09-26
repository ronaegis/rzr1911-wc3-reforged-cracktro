
void FUN_14001f560(longlong param_1)

{
  byte bVar1;
  short sVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  char cVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (*(short *)(param_1 + 0x13e) == 0) {
    FUN_14001f340();
  }
  uVar8 = 0;
  if (*(short *)(param_1 + 0xc) != 0) {
    do {
      lVar9 = uVar8 * 0x130 + *(longlong *)(param_1 + 0x168);
      FUN_14001de50(lVar9);
      lVar3 = *(longlong *)(lVar9 + 8);
      if ((lVar3 == 0) || (*(char *)(lVar3 + 0xd9) == '\0')) {
        if (*(float *)(lVar9 + 0x50) != 0.0) {
          *(undefined4 *)(lVar9 + 0x50) = 0;
          fVar14 = (float)FUN_14001def0(param_1);
          goto LAB_14001f71f;
        }
      }
      else {
        fVar14 = 1.0;
        uVar5 = *(ushort *)(lVar9 + 0x3c);
        if (uVar5 < *(byte *)(lVar3 + 0xd8)) {
          fVar14 = (float)uVar5 / (float)*(byte *)(lVar3 + 0xd8) + 0.0;
        }
        bVar7 = *(byte *)(lVar3 + 0xda);
        *(ushort *)(lVar9 + 0x3c) = uVar5 + 1;
        fVar12 = (float)FUN_140020380(*(undefined4 *)(lVar3 + 0xd4),(uint)bVar7 * (uint)uVar5 >> 2);
        *(float *)(lVar9 + 0x50) =
             ((fVar12 * 0.25 * (float)*(byte *)(lVar3 + 0xd9)) / 15.0) * fVar14;
        fVar14 = (float)FUN_14001def0(param_1);
LAB_14001f71f:
        *(float *)(lVar9 + 0x28) = fVar14;
        *(float *)(lVar9 + 0x2c) = fVar14 / (float)*(uint *)(param_1 + 0x128);
      }
      if ((*(char *)(lVar9 + 0x54) != '\0') &&
         ((*(char *)(*(longlong *)(lVar9 + 0x18) + 3) != '\0' ||
          (*(char *)(*(longlong *)(lVar9 + 0x18) + 4) == '\0')))) {
        *(undefined2 *)(lVar9 + 0x54) = 0;
        fVar14 = (float)FUN_14001def0(param_1);
        *(float *)(lVar9 + 0x28) = fVar14;
        *(float *)(lVar9 + 0x2c) = fVar14 / (float)*(uint *)(param_1 + 0x128);
      }
      if (((*(char *)(lVar9 + 0x6c) != '\0') &&
          ((*(char *)(*(longlong *)(lVar9 + 0x18) + 3) - 4U & 0xfd) != 0)) &&
         ((*(byte *)(*(longlong *)(lVar9 + 0x18) + 2) & 0xf0) != 0xb0)) {
        *(undefined1 *)(lVar9 + 0x6c) = 0;
        *(undefined4 *)(lVar9 + 0x78) = 0;
        fVar14 = (float)FUN_14001def0(param_1);
        *(float *)(lVar9 + 0x28) = fVar14;
        *(float *)(lVar9 + 0x2c) = fVar14 / (float)*(uint *)(param_1 + 0x128);
      }
      bVar7 = *(byte *)(*(longlong *)(lVar9 + 0x18) + 2);
      switch(bVar7 >> 4) {
      case 6:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_1400202f0(lVar9,bVar7 & 0xf);
        }
        break;
      case 7:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_1400202f0(lVar9,bVar7 << 4);
        }
        break;
      case 0xb:
        if (*(short *)(param_1 + 0x13e) != 0) {
          *(undefined1 *)(lVar9 + 0x6c) = 0;
          FUN_140020240(param_1,lVar9,*(undefined1 *)(lVar9 + 0x75));
        }
        break;
      case 0xd:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_14001f230(lVar9,bVar7 & 0xf);
        }
        break;
      case 0xe:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_14001f230(lVar9,bVar7 << 4);
        }
        break;
      case 0xf:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_14001fff0(param_1,lVar9);
        }
      }
      uVar4 = *(ulonglong *)(lVar9 + 0x18);
      switch(*(undefined1 *)(uVar4 + 3)) {
      case 0:
        bVar7 = *(byte *)(uVar4 + 4);
        if (bVar7 != 0) {
          uVar6 = (ulonglong)*(ushort *)(param_1 + 300) / 3;
          cVar11 = (char)*(ushort *)(param_1 + 300) + (char)uVar6 * -3;
          if (cVar11 == '\0') {
LAB_14001f93b:
            uVar5 = *(short *)(param_1 + 0x13e) - (short)cVar11;
            uVar6 = (ulonglong)uVar5 / 3;
            uVar10 = (uint)uVar5 + (int)uVar6 * -3;
            uVar4 = (ulonglong)uVar10;
            if (uVar10 == 0) {
              *(undefined2 *)(lVar9 + 0x54) = 0;
            }
            else {
              uVar10 = uVar10 - 1;
              uVar4 = (ulonglong)uVar10;
              if (uVar10 == 0) {
                *(undefined1 *)(lVar9 + 0x54) = 1;
                *(byte *)(lVar9 + 0x55) = bVar7 & 0xf;
              }
              else if (uVar10 == 1) {
                *(byte *)(lVar9 + 0x55) = bVar7 >> 4;
                *(undefined1 *)(lVar9 + 0x54) = 1;
              }
            }
          }
          else if (cVar11 == '\x01') {
LAB_14001f926:
            if (*(short *)(param_1 + 0x13e) != 0) goto LAB_14001f93b;
            *(undefined2 *)(lVar9 + 0x54) = 0;
          }
          else {
            if (cVar11 != '\x02') break;
            if (*(short *)(param_1 + 0x13e) != 1) goto LAB_14001f926;
            *(undefined1 *)(lVar9 + 0x54) = 1;
            *(byte *)(lVar9 + 0x55) = *(byte *)(uVar4 + 4) >> 4;
          }
          fVar14 = (float)FUN_14001def0(param_1,uVar6,uVar4,
                                        *(float *)(lVar9 + 0x78) + *(float *)(lVar9 + 0x50));
          *(float *)(lVar9 + 0x28) = fVar14;
          *(float *)(lVar9 + 0x2c) = fVar14 / (float)*(uint *)(param_1 + 0x128);
        }
        break;
      case 1:
        sVar2 = *(short *)(param_1 + 0x13e);
        goto joined_r0x00014001fa02;
      case 2:
        sVar2 = *(short *)(param_1 + 0x13e);
joined_r0x00014001fa02:
        if (sVar2 != 0) {
          FUN_14001f2c0(param_1,lVar9);
        }
        break;
      case 3:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_14001fff0(param_1,lVar9);
        }
        break;
      case 4:
        if (*(short *)(param_1 + 0x13e) != 0) {
          *(undefined1 *)(lVar9 + 0x6c) = 1;
          FUN_140020240(param_1,lVar9,*(undefined1 *)(lVar9 + 0x75));
        }
        break;
      case 5:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_14001fff0(param_1,lVar9);
          FUN_1400202f0(lVar9,*(undefined1 *)(lVar9 + 0x56));
        }
        break;
      case 6:
        if (*(short *)(param_1 + 0x13e) != 0) {
          *(undefined1 *)(lVar9 + 0x6c) = 1;
          FUN_140020240(param_1,lVar9,*(undefined1 *)(lVar9 + 0x75));
          FUN_1400202f0(lVar9,*(undefined1 *)(lVar9 + 0x56));
        }
        break;
      case 7:
        if (*(short *)(param_1 + 0x13e) != 0) {
          bVar7 = *(byte *)(lVar9 + 0x82);
          bVar1 = *(byte *)(lVar9 + 0x81);
          *(byte *)(lVar9 + 0x82) = bVar7 + 1;
          fVar14 = (float)FUN_140020380(*(undefined4 *)(lVar9 + 0x7c),
                                        (uint)(bVar1 >> 4) * (uint)bVar7);
          *(float *)(lVar9 + 0x84) = (fVar14 * -1.0 * (float)(bVar1 & 0xf)) / 15.0;
        }
        break;
      case 10:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_1400202f0(lVar9,*(undefined1 *)(lVar9 + 0x56));
        }
        break;
      case 0xe:
        bVar7 = *(byte *)(uVar4 + 4);
        bVar1 = bVar7 >> 4;
        if (bVar1 == 9) {
          if (((*(ushort *)(param_1 + 0x13e) != 0) && ((bVar7 & 0xf) != 0)) &&
             ((int)((ulonglong)*(ushort *)(param_1 + 0x13e) %
                   (ulonglong)(longlong)(int)(bVar7 & 0xf)) == 0)) {
            FUN_1400200f0(param_1,lVar9,1);
            FUN_14001de50(lVar9);
          }
        }
        else if (bVar1 == 0xc) {
          if ((ushort)(bVar7 & 0xf) == *(ushort *)(param_1 + 0x13e)) {
            *(undefined4 *)(lVar9 + 0x34) = 0;
          }
        }
        else if ((bVar1 == 0xd) && ((ushort)*(byte *)(lVar9 + 0x69) == *(ushort *)(param_1 + 0x13e))
                ) {
          FUN_14001e320(param_1,lVar9);
          FUN_14001de50(lVar9);
        }
        break;
      case 0x11:
        if (*(short *)(param_1 + 0x13e) != 0) {
          bVar7 = *(byte *)(lVar9 + 0x58);
          if ((bVar7 & 0xf0) == 0 || (bVar7 & 0xf) == 0) {
            if ((bVar7 & 0xf0) == 0) {
              fVar14 = *(float *)(param_1 + 0x130) - (float)(bVar7 & 0xf) * 0.015625;
              *(float *)(param_1 + 0x130) = fVar14;
              if (fVar14 < 0.0) {
                *(undefined4 *)(param_1 + 0x130) = 0;
              }
            }
            else {
              fVar14 = (float)(bVar7 >> 4) * 0.015625 + *(float *)(param_1 + 0x130);
              *(float *)(param_1 + 0x130) = fVar14;
              if (1.0 < fVar14) {
                *(undefined4 *)(param_1 + 0x130) = 0x3f800000;
              }
            }
          }
        }
        break;
      case 0x14:
        if (*(ushort *)(param_1 + 0x13e) == (ushort)*(byte *)(uVar4 + 4)) {
          *(undefined1 *)(lVar9 + 0x3e) = 0;
          if ((*(longlong *)(lVar9 + 8) == 0) ||
             (*(char *)(*(longlong *)(lVar9 + 8) + 0x96) == '\0')) {
            *(undefined4 *)(lVar9 + 0x34) = 0;
          }
        }
        break;
      case 0x19:
        if (*(short *)(param_1 + 0x13e) != 0) {
          FUN_14001f230(lVar9,*(undefined1 *)(lVar9 + 0x59));
        }
        break;
      case 0x1b:
        if (((*(ushort *)(param_1 + 0x13e) != 0) && ((*(byte *)(lVar9 + 0x68) & 0xf) != 0)) &&
           (((int)((ulonglong)*(ushort *)(param_1 + 0x13e) %
                  (ulonglong)(longlong)(int)(*(byte *)(lVar9 + 0x68) & 0xf)) == 0 &&
            ((FUN_1400200f0(param_1,lVar9,9), *(char *)(*(longlong *)(lVar9 + 0x18) + 2) == '\0' &&
             (*(char *)(*(longlong *)(lVar9 + 8) + 0x96) == '\0')))))) {
          uVar4 = (ulonglong)(*(byte *)(lVar9 + 0x68) >> 4);
          fVar12 = *(float *)(&DAT_140023560 + uVar4 * 4) * *(float *)(lVar9 + 0x34) +
                   *(float *)(&DAT_140023520 + uVar4 * 4) * 0.015625;
          fVar14 = 0.0;
          if (0.0 <= fVar12) {
            fVar14 = fVar12;
          }
          fVar12 = 1.0;
          if (fVar14 <= 1.0) {
            fVar12 = fVar14;
          }
          *(float *)(lVar9 + 0x34) = fVar12;
        }
        break;
      case 0x1d:
        if (*(ushort *)(param_1 + 0x13e) != 0) {
          uVar10 = (uint)(*(byte *)(lVar9 + 0x88) >> 4);
          *(bool *)(lVar9 + 0x89) =
               (int)uVar10 <
               (int)(*(ushort *)(param_1 + 0x13e) - 1) %
               (int)((*(byte *)(lVar9 + 0x88) & 0xf) + 2 + uVar10);
        }
      }
      fVar14 = (0.5 - ABS(*(float *)(lVar9 + 0x38) - 0.5)) * (*(float *)(lVar9 + 0x48) - 0.5);
      fVar14 = fVar14 + fVar14 + *(float *)(lVar9 + 0x38);
      if (*(char *)(lVar9 + 0x89) == '\0') {
        fVar13 = *(float *)(lVar9 + 0x84) + *(float *)(lVar9 + 0x34);
        fVar12 = 0.0;
        if (0.0 <= fVar13) {
          fVar12 = fVar13;
        }
        fVar13 = 1.0;
        if (fVar12 <= 1.0) {
          fVar13 = fVar12;
        }
        fVar13 = fVar13 * *(float *)(lVar9 + 0x44) * *(float *)(lVar9 + 0x40);
      }
      else {
        fVar13 = 0.0;
      }
      fVar12 = 1.0 - fVar14;
      if (fVar12 < 0.0) {
        fVar12 = sqrtf(fVar12);
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      *(float *)(lVar9 + 0x9c) = fVar12 * fVar13;
      if (fVar14 < 0.0) {
        fVar14 = sqrtf(fVar14);
      }
      else {
        fVar14 = SQRT(fVar14);
      }
      bVar7 = (char)uVar8 + 1;
      uVar8 = (ulonglong)bVar7;
      *(float *)(lVar9 + 0xa0) = fVar14 * fVar13;
    } while ((ushort)bVar7 < *(ushort *)(param_1 + 0xc));
  }
  *(short *)(param_1 + 0x13e) = *(short *)(param_1 + 0x13e) + 1;
  if ((uint)*(ushort *)(param_1 + 300) + (uint)*(ushort *)(param_1 + 0x154) <=
      (uint)*(ushort *)(param_1 + 0x13e)) {
    *(undefined2 *)(param_1 + 0x13e) = 0;
    *(undefined2 *)(param_1 + 0x154) = 0;
  }
  *(float *)(param_1 + 0x140) =
       (float)*(uint *)(param_1 + 0x128) / ((float)*(ushort *)(param_1 + 0x12e) * 0.4) +
       *(float *)(param_1 + 0x140);
  return;
}

