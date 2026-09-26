
longlong FUN_1400204d0(ulonglong param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ushort uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong local_res18;
  
  uVar15 = 0;
  uVar12 = 0;
  uVar3 = 0;
  uVar20 = uVar15;
  uVar17 = uVar15;
  if (param_2 < (byte *)0x45) {
    uVar2 = 0;
    uVar13 = uVar15;
LAB_140020580:
    uVar14 = (ushort)uVar13;
    uVar6 = uVar3;
LAB_140020583:
    uVar13 = (ulonglong)(uint)uVar6;
    lVar19 = (ulonglong)(uint)uVar6 << 4;
LAB_140020592:
    local_res18 = (ulonglong)uVar3;
    uVar18 = (ulonglong)uVar3;
    lVar19 = lVar19 + local_res18 * 0xf8;
    if ((byte *)0x40 < param_2) goto LAB_1400205b1;
LAB_1400205d3:
    lVar19 = lVar19 + (ulonglong)(uVar12 << 8);
    if (param_2 < (byte *)0x3d) {
      uVar5 = 0;
      goto LAB_140020618;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x44);
    uVar13 = (ulonglong)(ushort)bVar1;
    uVar2 = (ushort)bVar1;
    if (param_2 < (byte *)0x46) goto LAB_140020580;
    uVar14 = CONCAT11(*(undefined1 *)(param_1 + 0x45),bVar1);
    uVar13 = (ulonglong)uVar14;
    uVar2 = uVar14;
    if (param_2 < (byte *)0x47) goto LAB_140020580;
    uVar6 = (ushort)*(byte *)(param_1 + 0x46);
    if (param_2 < (byte *)0x48) goto LAB_140020583;
    uVar6 = CONCAT11(*(undefined1 *)(param_1 + 0x47),*(byte *)(param_1 + 0x46));
    uVar13 = (ulonglong)uVar6;
    lVar19 = (ulonglong)uVar6 * 0x10;
    if (param_2 < (byte *)0x49) goto LAB_140020592;
    uVar3 = (ushort)*(byte *)(param_1 + 0x48);
    if (param_2 < (byte *)0x4a) goto LAB_140020592;
    uVar3 = CONCAT11(*(undefined1 *)(param_1 + 0x49),*(byte *)(param_1 + 0x48));
    local_res18 = (ulonglong)uVar3;
    uVar18 = (ulonglong)uVar3;
    lVar19 = local_res18 * 0xf8 + lVar19;
LAB_1400205b1:
    uVar12 = (uint)*(byte *)(param_1 + 0x40);
    if (param_2 < (byte *)0x42) goto LAB_1400205d3;
    lVar19 = (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x41),*(byte *)(param_1 + 0x40)) * 0x100
             + lVar19;
  }
  uVar5 = (ulonglong)*(byte *)(param_1 + 0x3c);
  if ((((byte *)0x3d < param_2) &&
      (uVar20 = (ulonglong)*(byte *)(param_1 + 0x3d), (byte *)0x3e < param_2)) &&
     (uVar17 = (ulonglong)*(byte *)(param_1 + 0x3e), (byte *)0x3f < param_2)) {
    uVar15 = (ulonglong)*(byte *)(param_1 + 0x3f);
  }
LAB_140020618:
  pbVar16 = (byte *)((((uVar15 << 8 | uVar17) << 8 | uVar20) << 8 | uVar5) + 0x3c);
  if (uVar6 != 0) {
    do {
      pbVar9 = pbVar16 + param_1;
      if (pbVar16 + 5 < param_2) {
        uVar12 = (uint)pbVar9[5];
      }
      else {
        uVar12 = 0;
      }
      if (pbVar16 + 6 < param_2) {
        uVar11 = (uint)pbVar9[6];
      }
      else {
        uVar11 = 0;
      }
      lVar19 = lVar19 + (longlong)(int)((uVar11 << 8 | uVar12) * (uint)uVar14) * 5;
      if (pbVar16 < param_2) {
        uVar12 = (uint)*pbVar9;
      }
      else {
        uVar12 = 0;
      }
      if (pbVar16 + 1 < param_2) {
        uVar11 = (uint)pbVar9[1];
      }
      else {
        uVar11 = 0;
      }
      if (pbVar16 + 2 < param_2) {
        uVar8 = (uint)pbVar9[2];
      }
      else {
        uVar8 = 0;
      }
      if (pbVar16 + 3 < param_2) {
        uVar7 = (uint)pbVar9[3];
      }
      else {
        uVar7 = 0;
      }
      if (pbVar16 + 7 < param_2) {
        uVar10 = (uint)pbVar9[7];
      }
      else {
        uVar10 = 0;
      }
      if (pbVar16 + 8 < param_2) {
        uVar4 = (uint)pbVar9[8];
      }
      else {
        uVar4 = 0;
      }
      pbVar16 = pbVar16 + ((uVar4 << 8 | uVar10) +
                          ((uVar7 << 8 | uVar8) << 0x10 | uVar11 << 8 | uVar12));
      uVar13 = uVar13 - 1;
      uVar18 = local_res18;
    } while (uVar13 != 0);
  }
  if (uVar3 != 0) {
    do {
      uVar12 = 0;
      if (pbVar16 + 0x1b < param_2) {
        uVar3 = (ushort)pbVar16[param_1 + 0x1b];
      }
      else {
        uVar3 = 0;
      }
      pbVar9 = pbVar16 + param_1;
      if (pbVar16 + 0x1c < param_2) {
        uVar14 = (ushort)pbVar9[0x1c];
      }
      else {
        uVar14 = 0;
      }
      uVar3 = uVar14 << 8 | uVar3;
      uVar20 = (ulonglong)uVar3;
      lVar19 = lVar19 + uVar20 * 0x38;
      if (pbVar16 < param_2) {
        uVar11 = (uint)*pbVar9;
      }
      else {
        uVar11 = 0;
      }
      if (pbVar16 + 1 < param_2) {
        uVar8 = (uint)pbVar9[1];
      }
      else {
        uVar8 = 0;
      }
      if (pbVar16 + 2 < param_2) {
        uVar7 = (uint)pbVar9[2];
      }
      else {
        uVar7 = 0;
      }
      if (pbVar16 + 3 < param_2) {
        uVar10 = (uint)pbVar9[3];
      }
      else {
        uVar10 = 0;
      }
      uVar11 = (uVar10 << 8 | uVar7) << 0x10 | uVar8 << 8 | uVar11;
      if (0x106 < uVar11 - 1) {
        uVar11 = 0x107;
      }
      pbVar16 = pbVar16 + uVar11;
      if (uVar3 != 0) {
        pbVar9 = pbVar16 + param_1 + 2;
        do {
          if (pbVar16 < param_2) {
            uVar11 = (uint)pbVar9[-2];
          }
          else {
            uVar11 = 0;
          }
          if (pbVar9 + ~param_1 < param_2) {
            uVar8 = (uint)pbVar9[-1];
          }
          else {
            uVar8 = 0;
          }
          if (pbVar9 + -param_1 < param_2) {
            uVar7 = (uint)*pbVar9;
          }
          else {
            uVar7 = 0;
          }
          if (pbVar9 + (1 - param_1) < param_2) {
            uVar10 = (uint)pbVar9[1];
          }
          else {
            uVar10 = 0;
          }
          pbVar16 = pbVar16 + 0x28;
          pbVar9 = pbVar9 + 0x28;
          uVar11 = (uVar10 << 8 | uVar7) << 0x10 | uVar8 << 8 | uVar11;
          uVar12 = uVar12 + uVar11;
          lVar19 = lVar19 + (ulonglong)uVar11;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      pbVar16 = pbVar16 + uVar12;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  return (ulonglong)uVar2 * 0x130 + 0x170 + lVar19;
}

