
ulonglong FUN_14001def0(ulonglong param_1,float param_2,float param_3,float param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  float fVar7;
  undefined1 extraout_var [12];
  undefined1 auVar8 [16];
  float fVar9;
  undefined4 uVar10;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    fVar9 = powf(2.0,(4608.0 - ((param_2 - param_3 * 64.0) - param_4 * 16.0)) / 768.0);
    auVar8._0_4_ = fVar9 * 8363.0;
    auVar8._4_12_ = extraout_var;
    return auVar8._0_8_;
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    fVar9 = 0.0;
    uVar10 = 0;
    if (param_3 != 0.0) {
      param_2 = param_2 * 1024.0;
      bVar2 = 0;
      if (param_2 <= 1753088.0) {
        if ((param_2 < 876544.0) && (bVar2 = 1, param_2 < 438272.0)) {
          do {
            bVar2 = bVar2 + 1;
            param_1 = (ulonglong)(uint)(int)(char)bVar2;
          } while (param_2 < (float)(0xd6000 >> (bVar2 & 0x1f)));
        }
      }
      else {
        bVar2 = 0xff;
        if (3506176.0 < param_2) {
          do {
            bVar2 = bVar2 - 1;
            param_1 = (ulonglong)(uint)-(int)(char)bVar2;
          } while ((float)(uint)(0x1ac000 << ((byte)-(int)(char)bVar2 & 0x1f)) < param_2);
        }
      }
      bVar5 = 0;
      uVar6 = -(int)(char)bVar2;
      do {
        iVar4 = (&DAT_1400234e0)[bVar5];
        iVar3 = (&DAT_1400234e4)[bVar5];
        if ((char)bVar2 < '\x01') {
          if ((char)bVar2 < '\0') {
            param_1 = (ulonglong)uVar6;
            bVar1 = (byte)uVar6;
            iVar4 = iVar4 << (bVar1 & 0x1f);
            iVar3 = iVar3 << (bVar1 & 0x1f);
          }
        }
        else {
          param_1 = (ulonglong)(uint)(int)(char)bVar2;
          iVar4 = iVar4 >> (bVar2 & 0x1f);
          iVar3 = iVar3 >> (bVar2 & 0x1f);
        }
      } while (((param_2 < (float)iVar3) || (bVar1 = bVar5, (float)iVar4 < param_2)) &&
              (bVar5 = bVar5 + 1, bVar1 = 0, bVar5 < 0xc));
      fVar7 = (float)FUN_14001dc40(param_1,(float)((char)bVar2 + 2) * 12.0 + (float)bVar1);
      fVar7 = fVar7 + param_4 * 16.0;
      if (fVar7 != fVar9) {
        uVar10 = 0;
        fVar9 = 7093789.0 / (fVar7 + fVar7);
      }
      return CONCAT44(uVar10,fVar9);
    }
    param_2 = param_4 * 16.0 + param_2;
    if (param_2 != 0.0) {
      fVar9 = 7093789.0 / (param_2 + param_2);
    }
    return (ulonglong)(uint)fVar9;
  }
  return 0;
}

