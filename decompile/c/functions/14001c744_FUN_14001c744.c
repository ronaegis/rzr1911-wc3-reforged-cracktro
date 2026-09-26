
float FUN_14001c744(longlong param_1,ulonglong param_2,float param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar5 = 0;
  lVar7 = (param_2 & 0xffffffff) * 0x118;
  fVar10 = ((float)*(uint *)(param_1 + 0x1c) * *(float *)(param_1 + 0x18)) / 60.0;
  uVar1 = *(uint *)(lVar7 + 0x104 + *(longlong *)(param_1 + 0x10));
  if (uVar1 != 0) {
    puVar3 = (uint *)0x0;
    do {
      puVar6 = (uint *)(*(longlong *)(lVar7 + 0x110 + *(longlong *)(param_1 + 0x10)) + uVar5 * 0xc);
      if ((uint)(longlong)(fVar10 * param_3) < *puVar6) break;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      puVar3 = puVar6;
      puVar6 = (uint *)0x0;
    } while (uVar4 < uVar1);
    if (puVar3 != (uint *)0x0) {
      fVar8 = 0.0;
      puVar2 = puVar3;
      if (puVar6 != (uint *)0x0) {
        puVar2 = puVar6;
      }
      fVar9 = (float)*puVar3 / fVar10 + 0.001;
      fVar10 = (float)*puVar2 / fVar10 + 0.001;
      if (fVar9 < fVar10) {
        fVar8 = (param_3 - fVar9) / (fVar10 - fVar9);
      }
      uVar1 = puVar3[2];
      fVar10 = (float)puVar3[1];
      if (uVar1 == 0) {
        return fVar10;
      }
      if (uVar1 != 1) {
        if (uVar1 == 2) {
          fVar8 = (3.0 - (fVar8 + fVar8)) * fVar8 * fVar8;
          return (1.0 - fVar8) * fVar10 + fVar8 * (float)puVar2[1];
        }
        if (uVar1 != 3) {
          if (uVar1 != 4) {
            return fVar10;
          }
          fVar8 = fVar8 * fVar8;
        }
        fVar8 = fVar8 * fVar8;
      }
      return (1.0 - fVar8) * fVar10 + fVar8 * (float)puVar2[1];
    }
  }
  return 0.0;
}

