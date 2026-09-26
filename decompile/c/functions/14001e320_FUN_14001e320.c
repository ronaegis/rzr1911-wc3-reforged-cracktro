
void FUN_14001e320(longlong param_1,float *param_2,byte *param_3)

{
  int iVar1;
  ushort *puVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  float *pfVar6;
  longlong lVar7;
  IMAGE_DOS_HEADER *pIVar8;
  float fVar9;
  float fVar10;
  
  bVar4 = param_3[1];
  if (bVar4 != 0) {
    if (((((*(char *)(*(longlong *)(param_2 + 6) + 3) - 3U & 0xfd) == 0) ||
         ((*(byte *)(*(longlong *)(param_2 + 6) + 2) & 0xf0) == 0xf0)) &&
        (*(longlong *)(param_2 + 2) != 0)) && (lVar7 = *(longlong *)(param_2 + 4), lVar7 != 0)) {
      param_2[0xd] = *(float *)(lVar7 + 0x14);
      param_2[0xe] = *(float *)(lVar7 + 0x20);
      *(undefined1 *)((longlong)param_2 + 0x3e) = 1;
      param_2[0x11] = 1.0;
      param_2[0x10] = 1.0;
      param_2[0x12] = 0.5;
      param_2[0x13] = 0.0;
      param_2[0x1e] = 0.0;
      param_2[0x21] = 0.0;
      *(undefined1 *)((longlong)param_2 + 0x89) = 0;
      *(undefined2 *)(param_2 + 0xf) = 0;
      if (*(char *)(param_2 + 0x1d) != '\0') {
        *(undefined2 *)((longlong)param_2 + 0x76) = 0;
      }
      if (*(char *)(param_2 + 0x20) != '\0') {
        *(undefined1 *)((longlong)param_2 + 0x82) = 0;
      }
      *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_1 + 0x148);
      *(undefined8 *)(*(longlong *)(param_2 + 2) + 0xe0) = *(undefined8 *)(param_1 + 0x148);
      if (*(longlong *)(param_2 + 4) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 4) + 0x28) = *(undefined8 *)(param_1 + 0x148);
      }
    }
    else if ((*param_3 == 0) && (lVar7 = *(longlong *)(param_2 + 4), lVar7 != 0)) {
      param_2[0xd] = *(float *)(lVar7 + 0x14);
      param_2[0xe] = *(float *)(lVar7 + 0x20);
      *(undefined1 *)((longlong)param_2 + 0x3e) = 1;
      param_2[0x11] = 1.0;
      param_2[0x10] = 1.0;
      param_2[0x12] = 0.5;
      param_2[0x13] = 0.0;
      param_2[0x1e] = 0.0;
      param_2[0x21] = 0.0;
      *(undefined1 *)((longlong)param_2 + 0x89) = 0;
      *(undefined2 *)(param_2 + 0xf) = 0;
      if (*(char *)(param_2 + 0x1d) != '\0') {
        *(undefined2 *)((longlong)param_2 + 0x76) = 0;
      }
      if (*(char *)(param_2 + 0x20) != '\0') {
        *(undefined1 *)((longlong)param_2 + 0x82) = 0;
      }
      if (*(int *)(param_1 + 0x14) == 0) {
        fVar9 = 7680.0 - *param_2 * 64.0;
      }
      else if (*(int *)(param_1 + 0x14) == 1) {
        fVar9 = (float)FUN_14001dc40();
      }
      else {
        fVar9 = 0.0;
      }
      param_2[9] = fVar9;
      fVar9 = (float)FUN_14001def0(param_1);
      param_2[10] = fVar9;
      param_2[0xb] = fVar9 / (float)*(uint *)(param_1 + 0x128);
      *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_1 + 0x148);
      if (*(longlong *)(param_2 + 2) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 2) + 0xe0) = *(undefined8 *)(param_1 + 0x148);
      }
      if (*(longlong *)(param_2 + 4) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 4) + 0x28) = *(undefined8 *)(param_1 + 0x148);
      }
    }
    else if (*(ushort *)(param_1 + 0x10) < (ushort)bVar4) {
      param_2[0xd] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = 0.0;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
    }
    else {
      *(ulonglong *)(param_2 + 2) = (ulonglong)bVar4 * 0xf8 + *(longlong *)(param_1 + 0x120) + -0xf8
      ;
    }
  }
  bVar4 = *param_3;
  if ((byte)(bVar4 - 1) < 0x60) {
    puVar2 = *(ushort **)(param_2 + 2);
    if (((*(char *)(*(longlong *)(param_2 + 6) + 3) - 3U & 0xfd) == 0) ||
       ((*(byte *)(*(longlong *)(param_2 + 6) + 2) & 0xf0) == 0xf0)) {
      if (puVar2 != (ushort *)0x0) {
        lVar7 = *(longlong *)(param_2 + 4);
        if (lVar7 != 0) {
          fVar9 = ((float)(int)((int)*(char *)(lVar7 + 0x24) + (uint)bVar4) +
                  (float)(int)*(char *)(lVar7 + 0x18) * 0.0078125) - 1.0;
          *param_2 = fVar9;
          if (*(int *)(param_1 + 0x14) == 0) {
            param_2[0x19] = 7680.0 - fVar9 * 64.0;
          }
          else if (*(int *)(param_1 + 0x14) == 1) {
            fVar9 = (float)FUN_14001dc40();
            param_2[0x19] = fVar9;
          }
          else {
            param_2[0x19] = 0.0;
          }
          goto LAB_14001e938;
        }
        goto LAB_14001e651;
      }
    }
    else if (puVar2 != (ushort *)0x0) {
LAB_14001e651:
      if ((*puVar2 != 0) && ((ushort)*(byte *)((ulonglong)bVar4 + 1 + (longlong)puVar2) < *puVar2))
      {
        pfVar6 = param_2 + 0x2a;
        lVar7 = 0x20;
        do {
          if (((*(longlong *)(param_2 + 2) == 0) ||
              (pcVar3 = *(char **)(param_2 + 4), pcVar3 == (char *)0x0)) ||
             (fVar9 = param_2[8], fVar9 < 0.0)) {
            fVar9 = param_2[0x29];
            if (0x1f < (uint)fVar9) goto LAB_14001e6c4;
            fVar10 = (float)(uint)fVar9 * 0.03125 * (0.0 - param_2[(ulonglong)(uint)fVar9 + 0x2a]) +
                     param_2[(ulonglong)(uint)fVar9 + 0x2a];
          }
          else if (*(int *)(pcVar3 + 4) == 0) {
LAB_14001e6c4:
            fVar10 = 0.0;
          }
          else {
            if (*pcVar3 == '\b') {
              fVar10 = (float)(int)*(char *)(*(longlong *)(pcVar3 + 0x30) +
                                            ((longlong)fVar9 & 0xffffffffU)) * 0.0078125;
            }
            else {
              fVar10 = (float)(int)*(short *)(*(longlong *)(pcVar3 + 0x30) +
                                             ((longlong)fVar9 & 0xffffffffU) * 2) * 3.0517578e-05;
            }
            iVar1 = *(int *)(pcVar3 + 0x1c);
            if (iVar1 == 0) {
              param_2[8] = fVar9 + param_2[0xb];
              if ((float)*(uint *)(pcVar3 + 4) <= fVar9 + param_2[0xb]) {
                param_2[8] = -1.0;
              }
            }
            else if (iVar1 == 1) {
              fVar9 = fVar9 + param_2[0xb];
              param_2[8] = fVar9;
              if ((float)*(uint *)(pcVar3 + 0x10) <= fVar9) {
                do {
                  fVar9 = fVar9 - (float)*(uint *)(pcVar3 + 0xc);
                  param_2[8] = fVar9;
                } while ((float)*(uint *)(pcVar3 + 0x10) <= fVar9);
              }
            }
            else if (iVar1 == 2) {
              if (*(char *)(param_2 + 0xc) == '\0') {
                fVar9 = fVar9 - param_2[0xb];
                param_2[8] = fVar9;
                if (fVar9 <= (float)*(uint *)(pcVar3 + 8)) {
                  *(undefined1 *)(param_2 + 0xc) = 1;
                  fVar9 = (float)(uint)(*(int *)(pcVar3 + 8) * 2) - fVar9;
                  param_2[8] = fVar9;
                }
                if (fVar9 <= 0.0) {
                  *(undefined1 *)(param_2 + 0xc) = 1;
                  param_2[8] = 0.0;
                }
              }
              else {
                fVar9 = fVar9 + param_2[0xb];
                param_2[8] = fVar9;
                if ((float)*(uint *)(pcVar3 + 0x10) <= fVar9) {
                  *(undefined1 *)(param_2 + 0xc) = 0;
                  fVar9 = (float)(uint)(*(int *)(pcVar3 + 0x10) * 2) - fVar9;
                  param_2[8] = fVar9;
                }
                if ((float)*(uint *)(pcVar3 + 4) <= fVar9) {
                  *(undefined1 *)(param_2 + 0xc) = 0;
                  param_2[8] = fVar9 - (float)(*(int *)(pcVar3 + 4) - 1);
                }
              }
            }
            fVar9 = param_2[0x29];
            if ((uint)fVar9 < 0x20) {
              fVar10 = (fVar10 - param_2[(ulonglong)(uint)fVar9 + 0x2a]) *
                       (float)(uint)fVar9 * 0.03125 + param_2[(ulonglong)(uint)fVar9 + 0x2a];
            }
          }
          *pfVar6 = fVar10;
          pfVar6 = pfVar6 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        param_2[0x29] = 0.0;
        lVar7 = (ulonglong)*(byte *)((ulonglong)*param_3 + 1 + (longlong)puVar2) * 0x38 +
                *(longlong *)(puVar2 + 0x78);
        *(longlong *)(param_2 + 4) = lVar7;
        fVar9 = ((float)(int)((int)*(char *)(lVar7 + 0x24) + (uint)*param_3) +
                (float)(int)*(char *)(lVar7 + 0x18) * 0.0078125) - 1.0;
        *param_2 = fVar9;
        param_2[1] = fVar9;
        FUN_1400200f0(param_1,param_2,param_3[1] == 0);
        goto LAB_14001e938;
      }
    }
LAB_14001e935:
    param_2[0xd] = 0.0;
  }
  else if (bVar4 == 0x61) {
    *(undefined1 *)((longlong)param_2 + 0x3e) = 0;
    if ((*(longlong *)(param_2 + 2) == 0) || (*(char *)(*(longlong *)(param_2 + 2) + 0x96) == '\0'))
    goto LAB_14001e935;
  }
LAB_14001e938:
  bVar4 = param_3[2];
  pIVar8 = &IMAGE_DOS_HEADER_140000000;
  fVar9 = 0.015625;
  fVar10 = 255.0;
  switch(bVar4 >> 4) {
  case 5:
    if (0x50 < bVar4) break;
  case 1:
  case 2:
  case 3:
  case 4:
    param_2[0xd] = (float)(int)(bVar4 - 0x10) * 0.015625;
    break;
  case 8:
    FUN_1400202f0(param_2,bVar4 & 0xf);
    break;
  case 9:
    FUN_1400202f0(param_2,bVar4 << 4);
    break;
  case 10:
    *(byte *)((longlong)param_2 + 0x75) = *(byte *)((longlong)param_2 + 0x75) & 0xf | bVar4 << 4;
    break;
  case 0xc:
    param_2[0xe] = (float)((bVar4 & 0xf) << 4 | bVar4 & 0xf) / 255.0;
    break;
  case 0xf:
    if ((bVar4 & 0xf) != 0) {
      *(byte *)(param_2 + 0x18) = bVar4 << 4 | bVar4 & 0xf;
    }
  }
  if (param_3[3] - 1 < 0x21) {
    switch(pIVar8->e_magic +
           *(uint *)(pIVar8[0x3de].e_program + (longlong)(int)(param_3[3] - 1) * 4 + 0x10)) {
    case (char *)0x14001ea03:
      if (param_3[4] != 0) {
        *(byte *)((longlong)param_2 + 0x5a) = param_3[4];
      }
      break;
    case (char *)0x14001ea17:
      if (param_3[4] != 0) {
        *(byte *)((longlong)param_2 + 0x5b) = param_3[4];
      }
      break;
    case (char *)0x14001ea2b:
      if (param_3[4] != 0) {
        *(byte *)(param_2 + 0x18) = param_3[4];
      }
      break;
    case (char *)0x14001ea3f:
      if ((param_3[4] & 0xf) != 0) {
        *(byte *)((longlong)param_2 + 0x75) =
             *(byte *)((longlong)param_2 + 0x75) ^
             (param_3[4] ^ *(byte *)((longlong)param_2 + 0x75)) & 0xf;
      }
      bVar4 = param_3[4];
      if ((bVar4 & 0xf0) != 0) {
        *(byte *)((longlong)param_2 + 0x75) =
             (bVar4 ^ *(byte *)((longlong)param_2 + 0x75)) & 0xf ^ bVar4;
      }
      break;
    case (char *)0x14001ea70:
      if (param_3[4] != 0) {
        *(byte *)((longlong)param_2 + 0x56) = param_3[4];
      }
      break;
    case (char *)0x14001ea84:
      if ((param_3[4] & 0xf) != 0) {
        *(byte *)((longlong)param_2 + 0x81) =
             (*(byte *)((longlong)param_2 + 0x81) ^ param_3[4]) & 0xf ^
             *(byte *)((longlong)param_2 + 0x81);
      }
      bVar4 = param_3[4];
      if ((bVar4 & 0xf0) != 0) {
        *(byte *)((longlong)param_2 + 0x81) =
             (bVar4 ^ *(byte *)((longlong)param_2 + 0x81)) & 0xf ^ bVar4;
      }
      break;
    case (char *)0x14001eac9:
      param_2[0xe] = (float)param_3[4] / fVar10;
      break;
    case (char *)0x14001eae2:
      pcVar3 = *(char **)(param_2 + 4);
      if ((pcVar3 != (char *)0x0) && ((byte)(*param_3 - 1) < 0x60)) {
        uVar5 = (uint)param_3[4] << (*pcVar3 != '\x10') + 7;
        if (uVar5 < *(uint *)(pcVar3 + 4)) {
          param_2[8] = (float)uVar5;
        }
        else {
          param_2[8] = -1.0;
        }
      }
      break;
    case (char *)0x14001eb2f:
      if ((ushort)param_3[4] < *(ushort *)(param_1 + 8)) {
        *(undefined1 *)(param_1 + 0x150) = 1;
        *(byte *)(param_1 + 0x152) = param_3[4];
        *(undefined1 *)(param_1 + 0x153) = 0;
      }
      break;
    case (char *)0x14001eb5a:
      bVar4 = param_3[4];
      if (0x40 < bVar4) {
        bVar4 = 0x40;
      }
      param_2[0xd] = (float)bVar4 * fVar9;
      break;
    case (char *)0x14001eb7c:
      *(undefined1 *)(param_1 + 0x151) = 1;
      *(byte *)(param_1 + 0x153) = (param_3[4] >> 4) * '\n' + (param_3[4] & 0xf);
      break;
    case (char *)0x14001eba7:
      uVar5 = (param_3[4] >> 4) - 1;
      if (uVar5 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x00014001ebc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pIVar8->e_magic +
                  *(uint *)(pIVar8[0x3df].e_program + (longlong)(int)uVar5 * 4 + 0x14)))
                  (pIVar8->e_magic +
                   *(uint *)(pIVar8[0x3df].e_program + (longlong)(int)uVar5 * 4 + 0x14));
        return;
      }
      break;
    case (char *)0x14001ede1:
      bVar4 = param_3[4];
      if (bVar4 != 0) {
        if (bVar4 < 0x20) {
          *(ushort *)(param_1 + 300) = (ushort)bVar4;
        }
        else {
          *(ushort *)(param_1 + 0x12e) = (ushort)bVar4;
        }
      }
      break;
    case (char *)0x14001ee09:
      bVar4 = param_3[4];
      if (0x40 < bVar4) {
        bVar4 = 0x40;
      }
      *(float *)(param_1 + 0x130) = (float)bVar4 * fVar9;
      break;
    case (char *)0x14001ee2e:
      if (param_3[4] != 0) {
        *(byte *)(param_2 + 0x16) = param_3[4];
      }
      break;
    case (char *)0x14001ee42:
      *(ushort *)(param_2 + 0x13) = (ushort)param_3[4];
      *(ushort *)((longlong)param_2 + 0x4e) = (ushort)param_3[4];
      break;
    case (char *)0x14001ee57:
      if (param_3[4] != 0) {
        *(byte *)((longlong)param_2 + 0x59) = param_3[4];
      }
      break;
    case (char *)0x14001ee68:
      bVar4 = param_3[4];
      if (bVar4 != 0) {
        if ((bVar4 & 0xf0) == 0) {
          *(byte *)(param_2 + 0x1a) =
               *(byte *)(param_2 + 0x1a) ^ (bVar4 ^ *(byte *)(param_2 + 0x1a)) & 0xf;
        }
        else {
          *(byte *)(param_2 + 0x1a) = bVar4;
        }
      }
      break;
    case (char *)0x14001ee85:
      if (param_3[4] != 0) {
        *(byte *)(param_2 + 0x22) = param_3[4];
      }
      break;
    case (char *)0x14001ee95:
      bVar4 = param_3[4];
      if (bVar4 >> 4 == 1) {
        if ((bVar4 & 0xf) != 0) {
          *(byte *)((longlong)param_2 + 0x5e) = bVar4 & 0xf;
        }
      }
      else {
        if (bVar4 >> 4 != 2) {
          return;
        }
        if ((bVar4 & 0xf) != 0) {
          *(byte *)((longlong)param_2 + 0x5f) = bVar4 & 0xf;
        }
      }
      FUN_14001f2c0(param_1,param_2);
    }
  }
  return;
}

