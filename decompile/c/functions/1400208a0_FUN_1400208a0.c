
void * FUN_1400208a0(longlong param_1,ulonglong param_2,byte *param_3,longlong param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  ushort uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  ushort *puVar16;
  byte bVar17;
  byte bVar18;
  char cVar19;
  int iVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  byte bVar23;
  uint uVar24;
  ulonglong uVar25;
  char *pcVar26;
  ushort uVar27;
  byte *pbVar28;
  uint uVar29;
  uint uVar30;
  void *_Dst;
  ulonglong local_res10;
  void *local_res20;
  
  uVar9 = 0;
  uVar3 = 0;
  uVar25 = uVar9;
  uVar10 = uVar9;
  uVar7 = uVar9;
  uVar6 = uVar9;
  uVar2 = uVar3;
  uVar27 = uVar3;
  uVar12 = uVar3;
  if (((param_3 < (byte *)0x3d) ||
      (uVar25 = (ulonglong)*(byte *)(param_2 + 0x3c), param_3 < (byte *)0x3e)) ||
     (uVar10 = (ulonglong)*(byte *)(param_2 + 0x3d), param_3 < (byte *)0x3f)) {
    local_res10 = 0;
LAB_140020a4a:
    *(ushort *)(param_1 + 8) = uVar2;
LAB_140020a50:
    *(ushort *)(param_1 + 10) = uVar27;
LAB_140020a56:
    *(ushort *)(param_1 + 0xc) = uVar12;
LAB_140020a5a:
    uVar2 = 0;
LAB_140020a5c:
    *(ushort *)(param_1 + 0xe) = uVar2;
LAB_140020a63:
    uVar27 = (ushort)uVar7;
    uVar7 = uVar9;
  }
  else {
    local_res10 = (ulonglong)*(byte *)(param_2 + 0x3e);
    if ((param_3 < (byte *)0x40) ||
       (uVar6 = (ulonglong)*(byte *)(param_2 + 0x3f), param_3 < (byte *)0x41)) goto LAB_140020a4a;
    uVar2 = (ushort)*(byte *)(param_2 + 0x40);
    if (param_3 < (byte *)0x42) goto LAB_140020a4a;
    *(ushort *)(param_1 + 8) = CONCAT11(*(undefined1 *)(param_2 + 0x41),*(byte *)(param_2 + 0x40));
    if (param_3 < (byte *)0x43) goto LAB_140020a50;
    uVar27 = (ushort)*(byte *)(param_2 + 0x42);
    if (param_3 < (byte *)0x44) goto LAB_140020a50;
    *(ushort *)(param_1 + 10) = CONCAT11(*(undefined1 *)(param_2 + 0x43),*(byte *)(param_2 + 0x42));
    if (param_3 < (byte *)0x45) goto LAB_140020a56;
    uVar12 = (ushort)*(byte *)(param_2 + 0x44);
    if (param_3 < (byte *)0x46) goto LAB_140020a56;
    *(ushort *)(param_1 + 0xc) = CONCAT11(*(undefined1 *)(param_2 + 0x45),*(byte *)(param_2 + 0x44))
    ;
    if (param_3 < (byte *)0x47) goto LAB_140020a5a;
    uVar2 = (ushort)*(byte *)(param_2 + 0x46);
    if (param_3 < (byte *)0x48) goto LAB_140020a5c;
    uVar2 = CONCAT11(*(undefined1 *)(param_2 + 0x47),*(byte *)(param_2 + 0x46));
    *(ushort *)(param_1 + 0xe) = uVar2;
    if (param_3 < (byte *)0x49) goto LAB_140020a63;
    uVar27 = (ushort)*(byte *)(param_2 + 0x48);
    uVar7 = (ulonglong)*(byte *)(param_2 + 0x48);
    if (param_3 < (byte *)0x4a) goto LAB_140020a63;
    uVar7 = (ulonglong)*(byte *)(param_2 + 0x49);
  }
  uVar27 = (short)uVar7 << 8 | uVar27;
  *(longlong *)(param_1 + 0x118) = param_4;
  param_4 = param_4 + (ulonglong)uVar2 * 0x10;
  *(longlong *)(param_1 + 0x120) = param_4;
  local_res20 = (void *)(param_4 + (ulonglong)uVar27 * 0xf8);
  *(ushort *)(param_1 + 0x10) = uVar27;
  if (param_3 < (byte *)0x4b) {
    uVar8 = 0;
LAB_140020b05:
    *(uint *)(param_1 + 0x14) = ~uVar8 & 1;
LAB_140020b0f:
    *(ushort *)(param_1 + 300) = uVar3;
  }
  else {
    uVar8 = (uint)*(byte *)(param_2 + 0x4a);
    if (param_3 < (byte *)0x4c) goto LAB_140020b05;
    *(uint *)(param_1 + 0x14) = ~(uint)*(byte *)(param_2 + 0x4a) & 1;
    if (param_3 < (byte *)0x4d) goto LAB_140020b0f;
    uVar3 = (ushort)*(byte *)(param_2 + 0x4c);
    if (param_3 < (byte *)0x4e) goto LAB_140020b0f;
    *(ushort *)(param_1 + 300) = CONCAT11(*(undefined1 *)(param_2 + 0x4d),*(byte *)(param_2 + 0x4c))
    ;
    if ((byte *)0x4e < param_3) {
      uVar9 = (ulonglong)*(byte *)(param_2 + 0x4e);
      uVar2 = (ushort)*(byte *)(param_2 + 0x4e);
      if ((byte *)0x4f < param_3) {
        uVar27 = (ushort)*(byte *)(param_2 + 0x4f);
        goto LAB_140020b1a;
      }
    }
  }
  uVar2 = (ushort)uVar9;
  uVar27 = 0;
LAB_140020b1a:
  *(ushort *)(param_1 + 0x12e) = uVar27 << 8 | uVar2;
  pbVar15 = param_3 + -0x50;
  if (param_3 < (byte *)0x50) {
    pbVar15 = (byte *)0x0;
  }
  if ((byte *)0x100 < pbVar15) {
    pbVar15 = (byte *)0x100;
  }
  memcpy((void *)(param_1 + 0x18),(void *)(param_2 + 0x50),(size_t)pbVar15);
  memset(pbVar15 + param_1 + 0x18,0,0x100 - (longlong)pbVar15);
  uVar2 = 0;
  pbVar15 = (byte *)((((uVar6 << 8 | local_res10) << 8 | uVar10) << 8 | uVar25) + 0x3c);
  _Dst = local_res20;
  if (*(short *)(param_1 + 0xe) != 0) {
    do {
      uVar7 = 0;
      pbVar14 = pbVar15 + param_2;
      uVar12 = 0;
      uVar27 = uVar12;
      if (pbVar15 + 7 < param_3) {
        uVar27 = (ushort)pbVar14[7];
      }
      uVar3 = uVar12;
      if (pbVar15 + 8 < param_3) {
        uVar3 = (ushort)pbVar14[8];
      }
      uVar27 = uVar3 << 8 | uVar27;
      puVar16 = (ushort *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x118));
      uVar3 = uVar12;
      if (pbVar15 + 5 < param_3) {
        uVar3 = (ushort)pbVar14[5];
      }
      if (pbVar15 + 6 < param_3) {
        uVar12 = (ushort)pbVar14[6];
      }
      uVar3 = uVar12 << 8 | uVar3;
      *(void **)(puVar16 + 4) = _Dst;
      *puVar16 = uVar3;
      local_res20 = (void *)((longlong)(int)((uint)uVar3 * (uint)*(ushort *)(param_1 + 0xc)) * 5 +
                            (longlong)_Dst);
      if (pbVar15 < param_3) {
        uVar7 = (ulonglong)*pbVar14;
      }
      uVar10 = 0;
      uVar25 = uVar10;
      if (pbVar15 + 1 < param_3) {
        uVar25 = (ulonglong)pbVar14[1];
      }
      if (pbVar15 + 2 < param_3) {
        uVar10 = (ulonglong)pbVar14[2];
      }
      if (pbVar15 + 3 < param_3) {
        uVar6 = (ulonglong)pbVar14[3];
      }
      else {
        uVar6 = 0;
      }
      uVar7 = ((uVar6 << 8 | uVar10) << 8 | uVar25) << 8 | uVar7;
      if (uVar27 == 0) {
        memset(_Dst,0,(ulonglong)uVar3 * (ulonglong)*(ushort *)(param_1 + 0xc) * 5);
      }
      else {
        uVar12 = 0;
        uVar3 = uVar12;
        if (uVar27 != 0) {
          do {
            pbVar28 = pbVar15 + uVar12 + uVar7;
            pbVar14 = pbVar28 + param_2;
            if (pbVar28 < param_3) {
              bVar18 = *pbVar14;
              pbVar21 = (byte *)((ulonglong)uVar3 * 5 + *(longlong *)(puVar16 + 4));
              if (-1 < (char)bVar18) goto LAB_140020dcb;
              if ((bVar18 & 1) == 0) {
                bVar17 = 0;
                uVar12 = uVar12 + 1;
              }
              else if (pbVar15 + (ushort)(uVar12 + 1) + uVar7 < param_3) {
                bVar17 = (pbVar15 + (ushort)(uVar12 + 1) + uVar7)[param_2];
                uVar12 = uVar12 + 2;
              }
              else {
                bVar17 = 0;
                uVar12 = uVar12 + 2;
              }
              *pbVar21 = bVar17;
              if ((bVar18 & 2) == 0) {
                bVar17 = 0;
              }
              else if (pbVar15 + uVar12 + uVar7 < param_3) {
                bVar17 = (pbVar15 + uVar12 + uVar7)[param_2];
                uVar12 = uVar12 + 1;
              }
              else {
                bVar17 = 0;
                uVar12 = uVar12 + 1;
              }
              pbVar21[1] = bVar17;
              if ((bVar18 & 4) == 0) {
                bVar17 = 0;
              }
              else if (pbVar15 + uVar12 + uVar7 < param_3) {
                bVar17 = (pbVar15 + uVar12 + uVar7)[param_2];
                uVar12 = uVar12 + 1;
              }
              else {
                bVar17 = 0;
                uVar12 = uVar12 + 1;
              }
              pbVar21[2] = bVar17;
              if ((bVar18 & 8) == 0) {
                bVar17 = 0;
              }
              else if (pbVar15 + uVar12 + uVar7 < param_3) {
                bVar17 = (pbVar15 + uVar12 + uVar7)[param_2];
                uVar12 = uVar12 + 1;
              }
              else {
                bVar17 = 0;
                uVar12 = uVar12 + 1;
              }
              pbVar21[3] = bVar17;
              if ((bVar18 & 0x10) == 0) {
                bVar18 = 0;
              }
              else if (pbVar15 + uVar12 + uVar7 < param_3) {
                bVar18 = (pbVar15 + uVar12 + uVar7)[param_2];
                uVar12 = uVar12 + 1;
              }
              else {
                bVar18 = 0;
                uVar12 = uVar12 + 1;
              }
            }
            else {
              bVar18 = 0;
              pbVar21 = (byte *)((ulonglong)uVar3 * 5 + *(longlong *)(puVar16 + 4));
LAB_140020dcb:
              *pbVar21 = bVar18;
              if (pbVar28 + 1 < param_3) {
                bVar18 = pbVar14[1];
              }
              else {
                bVar18 = 0;
              }
              pbVar21[1] = bVar18;
              if (pbVar28 + 2 < param_3) {
                bVar18 = pbVar14[2];
              }
              else {
                bVar18 = 0;
              }
              pbVar21[2] = bVar18;
              if (pbVar28 + 3 < param_3) {
                bVar18 = pbVar14[3];
              }
              else {
                bVar18 = 0;
              }
              pbVar21[3] = bVar18;
              if (pbVar28 + 4 < param_3) {
                bVar18 = pbVar14[4];
              }
              else {
                bVar18 = 0;
              }
              uVar12 = uVar12 + 5;
            }
            pbVar21[4] = bVar18;
            uVar3 = uVar3 + 1;
          } while (uVar12 < uVar27);
        }
      }
      uVar2 = uVar2 + 1;
      pbVar15 = pbVar15 + uVar27 + uVar7;
      _Dst = local_res20;
    } while (uVar2 < *(ushort *)(param_1 + 0xe));
  }
  local_res10._0_2_ = 0;
  if (*(short *)(param_1 + 0x10) != 0) {
    do {
      puVar16 = (ushort *)((ulonglong)(ushort)local_res10 * 0xf8 + *(longlong *)(param_1 + 0x120));
      uVar7 = 0;
      if (pbVar15 < param_3) {
        uVar7 = (ulonglong)pbVar15[param_2];
      }
      uVar30 = 0;
      uVar8 = uVar30;
      if (pbVar15 + 1 < param_3) {
        uVar8 = (uint)pbVar15[param_2 + 1];
      }
      uVar5 = uVar30;
      if (pbVar15 + 2 < param_3) {
        uVar5 = (uint)pbVar15[param_2 + 2];
      }
      if (pbVar15 + 3 < param_3) {
        uVar30 = (uint)pbVar15[param_2 + 3];
      }
      uVar8 = (uVar30 << 8 | uVar5) << 0x10 | uVar8 << 8 | (uint)uVar7;
      if (0x106 < uVar8 - 1) {
        uVar8 = 0x107;
      }
      pbVar14 = pbVar15 + uVar8;
      uVar27 = 0;
      uVar2 = uVar27;
      if (pbVar15 + 0x1b < pbVar14) {
        uVar2 = (ushort)pbVar15[param_2 + 0x1b];
      }
      if (pbVar15 + 0x1c < pbVar14) {
        uVar27 = (ushort)pbVar15[param_2 + 0x1c];
      }
      uVar2 = uVar27 << 8 | uVar2;
      *puVar16 = uVar2;
      if (uVar2 == 0) {
        puVar16[0x78] = 0;
        puVar16[0x79] = 0;
        puVar16[0x7a] = 0;
        puVar16[0x7b] = 0;
      }
      else {
        pbVar28 = pbVar15 + 0x21;
        uVar7 = (longlong)pbVar14 - (longlong)pbVar28;
        if (pbVar14 < pbVar28) {
          uVar7 = 0;
        }
        if (0x60 < uVar7) {
          uVar7 = 0x60;
        }
        memcpy(puVar16 + 1,pbVar28 + param_2,uVar7);
        memset((void *)(uVar7 + (longlong)(puVar16 + 1)),0,0x60 - uVar7);
        if (pbVar15 + 0xe1 < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xe1];
          *(byte *)(puVar16 + 0x49) = bVar18;
          if (0xc < bVar18) {
            *(undefined1 *)(puVar16 + 0x49) = 0xc;
            bVar18 = 0xc;
          }
        }
        else {
          *(undefined1 *)(puVar16 + 0x49) = 0;
          bVar18 = 0;
        }
        if (pbVar15 + 0xe2 < pbVar14) {
          bVar17 = pbVar15[param_2 + 0xe2];
          *(byte *)(puVar16 + 0x65) = bVar17;
          if (0xc < bVar17) {
            *(undefined1 *)(puVar16 + 0x65) = 0xc;
          }
        }
        else {
          *(undefined1 *)(puVar16 + 0x65) = 0;
        }
        bVar17 = 0;
        if (bVar18 != 0) {
          do {
            uVar7 = (ulonglong)bVar17;
            uVar27 = 0;
            uVar2 = uVar27;
            if (pbVar15 + uVar7 * 4 + 0x81 < pbVar14) {
              uVar2 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0x81];
            }
            uVar12 = uVar27;
            if (pbVar15 + uVar7 * 4 + 0x82 < pbVar14) {
              uVar12 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0x82];
            }
            puVar16[uVar7 * 2 + 0x31] = uVar12 << 8 | uVar2;
            uVar2 = 0;
            if (pbVar15 + uVar7 * 4 + 0x83 < pbVar14) {
              uVar2 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0x83];
            }
            if (pbVar15 + uVar7 * 4 + 0x84 < pbVar14) {
              uVar27 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0x84];
            }
            bVar17 = bVar17 + 1;
            puVar16[uVar7 * 2 + 0x32] = uVar27 << 8 | uVar2;
          } while (bVar17 < (byte)puVar16[0x49]);
        }
        if ((char)puVar16[0x65] != '\0') {
          uVar7 = 0;
          do {
            uVar27 = 0;
            uVar2 = uVar27;
            if (pbVar15 + uVar7 * 4 + 0xb1 < pbVar14) {
              uVar2 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0xb1];
            }
            uVar12 = uVar27;
            if (pbVar15 + uVar7 * 4 + 0xb2 < pbVar14) {
              uVar12 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0xb2];
            }
            puVar16[uVar7 * 2 + 0x4d] = uVar12 << 8 | uVar2;
            uVar2 = 0;
            if (pbVar15 + uVar7 * 4 + 0xb3 < pbVar14) {
              uVar2 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0xb3];
            }
            if (pbVar15 + uVar7 * 4 + 0xb4 < pbVar14) {
              uVar27 = (ushort)pbVar15[param_2 + uVar7 * 4 + 0xb4];
            }
            bVar18 = (char)uVar7 + 1;
            puVar16[uVar7 * 2 + 0x4e] = uVar27 << 8 | uVar2;
            uVar7 = (ulonglong)bVar18;
          } while (bVar18 < (byte)puVar16[0x65]);
        }
        if (pbVar15 + 0xe3 < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xe3];
        }
        else {
          bVar18 = 0;
        }
        *(byte *)((longlong)puVar16 + 0x93) = bVar18;
        if (pbVar15 + 0xe4 < pbVar14) {
          uVar8 = (uint)pbVar15[param_2 + 0xe4];
        }
        else {
          uVar8 = 0;
        }
        *(byte *)(puVar16 + 0x4a) = (byte)uVar8;
        if (pbVar15 + 0xe5 < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xe5];
        }
        else {
          bVar18 = 0;
        }
        *(byte *)((longlong)puVar16 + 0x95) = bVar18;
        if (pbVar15 + 0xe6 < pbVar14) {
          bVar17 = pbVar15[param_2 + 0xe6];
        }
        else {
          bVar17 = 0;
        }
        *(byte *)((longlong)puVar16 + 0xcb) = bVar17;
        if (pbVar15 + 0xe7 < pbVar14) {
          bVar17 = pbVar15[param_2 + 0xe7];
        }
        else {
          bVar17 = 0;
        }
        *(byte *)(puVar16 + 0x66) = bVar17;
        if (pbVar15 + 0xe8 < pbVar14) {
          bVar23 = pbVar15[param_2 + 0xe8];
        }
        else {
          bVar23 = 0;
        }
        *(byte *)((longlong)puVar16 + 0xcd) = bVar23;
        if ((byte)puVar16[0x49] != 0) {
          iVar20 = (byte)puVar16[0x49] - 1;
          bVar11 = (byte)uVar8;
          if (iVar20 <= (int)uVar8) {
            bVar11 = (byte)iVar20;
          }
          *(byte *)(puVar16 + 0x4a) = bVar11;
          if (iVar20 <= (int)(uint)bVar18) {
            bVar18 = (byte)iVar20;
          }
          *(byte *)((longlong)puVar16 + 0x95) = bVar18;
        }
        if ((byte)puVar16[0x65] != 0) {
          iVar20 = (byte)puVar16[0x65] - 1;
          if (iVar20 <= (int)(uint)bVar17) {
            bVar17 = (byte)iVar20;
          }
          *(byte *)(puVar16 + 0x66) = bVar17;
          if (iVar20 <= (int)(uint)bVar23) {
            bVar23 = (byte)iVar20;
          }
          *(byte *)((longlong)puVar16 + 0xcd) = bVar23;
        }
        if (pbVar15 + 0xe9 < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xe9];
        }
        else {
          bVar18 = 0;
        }
        *(byte *)(puVar16 + 0x4b) = bVar18 & 1;
        *(byte *)((longlong)puVar16 + 0x97) = bVar18 >> 1 & 1;
        *(byte *)(puVar16 + 0x4c) = bVar18 >> 2 & 1;
        if (pbVar15 + 0xea < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xea];
        }
        else {
          bVar18 = 0;
        }
        *(byte *)(puVar16 + 0x67) = bVar18 & 1;
        *(byte *)((longlong)puVar16 + 0xcf) = bVar18 >> 1 & 1;
        *(byte *)(puVar16 + 0x68) = bVar18 >> 2 & 1;
        if (pbVar15 + 0xeb < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xeb];
          *(uint *)(puVar16 + 0x6a) = (uint)bVar18;
          if (bVar18 == 2) {
            puVar16[0x6a] = 1;
            puVar16[0x6b] = 0;
          }
          else if (bVar18 == 1) {
            puVar16[0x6a] = 2;
            puVar16[0x6b] = 0;
          }
        }
        else {
          puVar16[0x6a] = 0;
          puVar16[0x6b] = 0;
        }
        if (pbVar15 + 0xec < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xec];
        }
        else {
          bVar18 = 0;
        }
        *(byte *)(puVar16 + 0x6c) = bVar18;
        if (pbVar15 + 0xed < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xed];
        }
        else {
          bVar18 = 0;
        }
        *(byte *)((longlong)puVar16 + 0xd9) = bVar18;
        if (pbVar15 + 0xee < pbVar14) {
          bVar18 = pbVar15[param_2 + 0xee];
        }
        else {
          bVar18 = 0;
        }
        *(byte *)(puVar16 + 0x6d) = bVar18;
        uVar27 = 0;
        uVar2 = uVar27;
        if (pbVar15 + 0xef < pbVar14) {
          uVar2 = (ushort)pbVar15[param_2 + 0xef];
        }
        if (pbVar15 + 0xf0 < pbVar14) {
          uVar27 = (ushort)pbVar15[param_2 + 0xf0];
        }
        uVar7 = (ulonglong)*puVar16;
        puVar16[0x6e] = uVar27 << 8 | uVar2;
        *(void **)(puVar16 + 0x78) = local_res20;
        local_res20 = (void *)((longlong)local_res20 + uVar7 * 0x38);
        uVar2 = 0;
        if (*puVar16 != 0) {
          pbVar15 = pbVar14 + param_2 + 2;
          do {
            uVar8 = 0;
            puVar22 = (undefined1 *)((ulonglong)uVar2 * 0x38 + *(longlong *)(puVar16 + 0x78));
            if (pbVar14 < param_3) {
              uVar30 = (uint)pbVar15[-2];
            }
            else {
              uVar30 = 0;
            }
            if (pbVar15 + ~param_2 < param_3) {
              uVar5 = (uint)pbVar15[-1];
            }
            else {
              uVar5 = 0;
            }
            if (pbVar15 + -param_2 < param_3) {
              uVar8 = (uint)*pbVar15;
            }
            if (pbVar15 + (1 - param_2) < param_3) {
              uVar29 = (uint)pbVar15[1];
            }
            else {
              uVar29 = 0;
            }
            uVar13 = 0;
            uVar30 = (uVar29 << 8 | uVar8) << 0x10 | uVar5 << 8 | uVar30;
            *(uint *)(puVar22 + 4) = uVar30;
            uVar8 = uVar13;
            if (pbVar15 + (2 - param_2) < param_3) {
              uVar8 = (uint)pbVar15[2];
            }
            uVar5 = uVar13;
            if (pbVar15 + (3 - param_2) < param_3) {
              uVar5 = (uint)pbVar15[3];
            }
            uVar29 = uVar13;
            if (pbVar15 + (4 - param_2) < param_3) {
              uVar29 = (uint)pbVar15[4];
            }
            if (pbVar15 + (5 - param_2) < param_3) {
              uVar13 = (uint)pbVar15[5];
            }
            uVar24 = 0;
            uVar8 = (uVar13 << 8 | uVar29) << 0x10 | uVar5 << 8 | uVar8;
            *(uint *)(puVar22 + 8) = uVar8;
            uVar5 = uVar24;
            if (pbVar15 + (6 - param_2) < param_3) {
              uVar5 = (uint)pbVar15[6];
            }
            uVar29 = uVar24;
            if (pbVar15 + (7 - param_2) < param_3) {
              uVar29 = (uint)pbVar15[7];
            }
            if (pbVar15 + (8 - param_2) < param_3) {
              uVar24 = (uint)pbVar15[8];
            }
            if (pbVar15 + (9 - param_2) < param_3) {
              uVar13 = (uint)pbVar15[9];
            }
            else {
              uVar13 = 0;
            }
            uVar5 = (uVar13 << 8 | uVar24) << 0x10 | uVar29 << 8 | uVar5;
            bVar18 = 0;
            *(uint *)(puVar22 + 0xc) = uVar5;
            uVar5 = uVar5 + uVar8;
            *(uint *)(puVar22 + 0x10) = uVar5;
            bVar17 = bVar18;
            if (pbVar15 + (10 - param_2) < param_3) {
              bVar17 = pbVar15[10];
            }
            *(float *)(puVar22 + 0x14) = (float)bVar17 * 0.015625;
            if (pbVar15 + (0xb - param_2) < param_3) {
              bVar17 = pbVar15[0xb];
            }
            else {
              bVar17 = 0;
            }
            puVar22[0x18] = bVar17;
            if (uVar30 < uVar8) {
              *(uint *)(puVar22 + 8) = uVar30;
              uVar8 = uVar30;
            }
            if (uVar30 < uVar5) {
              *(uint *)(puVar22 + 0x10) = uVar30;
              uVar5 = uVar30;
            }
            uVar5 = uVar5 - uVar8;
            *(uint *)(puVar22 + 0xc) = uVar5;
            if (pbVar15 + (0xc - param_2) < param_3) {
              bVar17 = pbVar15[0xc];
              if (((bVar17 & 3) == 0) || (uVar5 == 0)) goto LAB_14002170a;
              if ((bVar17 & 3) == 1) {
                *(undefined4 *)(puVar22 + 0x1c) = 1;
              }
              else {
                *(undefined4 *)(puVar22 + 0x1c) = 2;
              }
            }
            else {
              bVar17 = 0;
LAB_14002170a:
              *(undefined4 *)(puVar22 + 0x1c) = 0;
            }
            uVar1 = 8;
            if ((bVar17 & 0x10) != 0) {
              uVar1 = 0x10;
            }
            *puVar22 = uVar1;
            if (pbVar15 + (0xd - param_2) < param_3) {
              bVar18 = pbVar15[0xd];
            }
            *(float *)(puVar22 + 0x20) = (float)bVar18 / 255.0;
            if (pbVar15 + (0xe - param_2) < param_3) {
              bVar18 = pbVar15[0xe];
            }
            else {
              bVar18 = 0;
            }
            puVar22[0x24] = bVar18;
            *(void **)(puVar22 + 0x30) = local_res20;
            local_res20 = (void *)((longlong)local_res20 + (ulonglong)uVar30);
            if ((bVar17 & 0x10) != 0) {
              *(uint *)(puVar22 + 8) = *(uint *)(puVar22 + 8) >> 1;
              *(uint *)(puVar22 + 0x10) = *(uint *)(puVar22 + 0x10) >> 1;
              *(uint *)(puVar22 + 4) = uVar30 >> 1;
              *(uint *)(puVar22 + 0xc) = uVar5 >> 1;
            }
            uVar7 = (ulonglong)*puVar16;
            pbVar14 = pbVar14 + 0x28;
            pbVar15 = pbVar15 + 0x28;
            uVar2 = uVar2 + 1;
          } while (uVar2 < *puVar16);
        }
        uVar25 = 0;
        uVar27 = 0;
        uVar2 = uVar27;
        if ((short)uVar7 != 0) {
          do {
            uVar12 = (ushort)uVar7;
            pcVar26 = (char *)((ulonglong)uVar2 * 0x38 + *(longlong *)(puVar16 + 0x78));
            uVar8 = *(uint *)(pcVar26 + 4);
            uVar7 = (ulonglong)uVar8;
            if (*pcVar26 == '\x10') {
              uVar7 = uVar25;
              uVar10 = uVar25;
              uVar3 = uVar27;
              if (uVar8 != 0) {
                do {
                  pbVar15 = pbVar14 + (uint)((int)uVar7 * 2);
                  uVar12 = uVar27;
                  if (pbVar15 < param_3) {
                    uVar12 = (ushort)pbVar15[param_2];
                  }
                  uVar4 = uVar27;
                  if (pbVar15 + 1 < param_3) {
                    uVar4 = (ushort)pbVar15[param_2 + 1];
                  }
                  uVar30 = (int)uVar7 + 1;
                  uVar3 = uVar3 + (uVar4 << 8 | uVar12);
                  *(ushort *)(uVar10 + *(longlong *)(pcVar26 + 0x30)) = uVar3;
                  uVar7 = (ulonglong)uVar30;
                  uVar10 = uVar10 + 2;
                } while (uVar30 < uVar8);
                uVar12 = *puVar16;
              }
              uVar8 = *(int *)(pcVar26 + 4) * 2;
            }
            else {
              cVar19 = '\0';
              if (uVar8 != 0) {
                pbVar15 = pbVar14 + param_2;
                uVar10 = uVar25;
                do {
                  if (pbVar14 + uVar10 < param_3) {
                    bVar18 = *pbVar15;
                  }
                  else {
                    bVar18 = 0;
                  }
                  cVar19 = cVar19 + bVar18;
                  pbVar15 = pbVar15 + 1;
                  *(char *)(uVar10 + *(longlong *)(pcVar26 + 0x30)) = cVar19;
                  uVar10 = uVar10 + 1;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
                uVar12 = *puVar16;
              }
              uVar8 = *(uint *)(pcVar26 + 4);
            }
            pbVar14 = pbVar14 + uVar8;
            uVar2 = uVar2 + 1;
            uVar7 = (ulonglong)uVar12;
          } while (uVar2 < uVar12);
        }
      }
      local_res10._0_2_ = (ushort)local_res10 + 1;
      pbVar15 = pbVar14;
    } while ((ushort)local_res10 < *(ushort *)(param_1 + 0x10));
  }
  return local_res20;
}

