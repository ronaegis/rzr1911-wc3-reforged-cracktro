
float * FUN_1400187f4(float *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  
  param_3 = param_3 - (longlong)param_1;
  lVar7 = 4;
  pfVar3 = param_1;
  do {
    lVar5 = 4;
    pfVar4 = pfVar3;
    do {
      fVar10 = 0.0;
      pfVar9 = (float *)(param_3 + (longlong)pfVar4);
      lVar6 = 4;
      pfVar8 = (float *)((param_2 - (longlong)param_1) + (longlong)pfVar3);
      do {
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        fVar2 = *pfVar9;
        pfVar9 = pfVar9 + 4;
        fVar10 = fVar10 + fVar1 * fVar2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      *pfVar4 = fVar10;
      pfVar4 = pfVar4 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    pfVar3 = pfVar3 + 4;
    param_3 = param_3 + -0x10;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return param_1;
}

