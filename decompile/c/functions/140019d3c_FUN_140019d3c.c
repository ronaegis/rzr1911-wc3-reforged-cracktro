
float * FUN_140019d3c(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  fVar20 = param_2[9];
  fVar3 = param_2[0xd];
  fVar4 = param_2[3];
  fVar5 = param_2[5];
  fVar6 = param_2[7];
  fVar7 = param_2[0xe];
  fVar8 = param_2[0xf];
  fVar9 = param_2[0xb];
  fVar25 = param_2[10];
  fVar34 = param_2[1];
  fVar10 = param_2[6];
  fVar26 = (((param_2[5] * fVar25 * fVar8 - fVar9 * param_2[5] * fVar7) -
            param_2[6] * fVar20 * fVar8) + fVar6 * fVar20 * fVar7 + fVar3 * param_2[6] * fVar9) -
           fVar3 * fVar6 * fVar25;
  *param_1 = fVar26;
  fVar11 = param_2[2];
  fVar12 = param_2[5];
  param_1[1] = ((((fVar34 * fVar9 * fVar7 - fVar34 * fVar25 * fVar8) + fVar8 * fVar11 * fVar20) -
                fVar7 * fVar4 * fVar20) - fVar9 * fVar11 * fVar3) + fVar25 * fVar4 * fVar3;
  fVar13 = param_2[6];
  fVar14 = *param_2;
  param_1[2] = (((fVar8 * fVar34 * fVar10 - fVar7 * fVar34 * fVar6) - fVar8 * fVar11 * fVar12) +
                fVar7 * fVar4 * fVar5 + fVar6 * fVar11 * fVar3) - param_2[6] * fVar4 * fVar3;
  fVar3 = param_2[8];
  fVar7 = param_2[0xe];
  fVar15 = param_2[4];
  fVar16 = param_2[0xc];
  fVar17 = param_2[7];
  param_1[3] = ((((fVar25 * fVar34 * fVar6 - fVar9 * fVar34 * fVar10) + fVar9 * fVar11 * fVar12) -
                fVar25 * fVar4 * fVar5) - fVar6 * fVar11 * fVar20) + fVar13 * fVar4 * fVar20;
  fVar23 = ((((fVar7 * fVar15 * fVar9 - fVar8 * fVar15 * fVar25) + fVar8 * fVar3 * fVar13) -
            fVar7 * fVar3 * fVar6) - fVar9 * fVar16 * fVar13) + param_2[10] * fVar16 * fVar17;
  fVar19 = fVar14 * param_2[10];
  param_1[4] = fVar23;
  fVar31 = fVar3 * param_2[2];
  fVar21 = fVar16 * param_2[2];
  fVar35 = fVar16 * param_2[3];
  fVar36 = fVar3 * param_2[3];
  fVar27 = fVar14 * param_2[6];
  fVar32 = fVar14 * param_2[7];
  fVar20 = param_2[0xf];
  fVar28 = fVar15 * param_2[2];
  fVar33 = fVar15 * param_2[3];
  param_1[5] = (((param_2[0xf] * fVar19 - fVar7 * fVar14 * fVar9) - param_2[0xf] * fVar31) +
                fVar7 * fVar36 + param_2[0xb] * fVar21) - param_2[10] * fVar35;
  fVar4 = param_2[0xb];
  fVar5 = param_2[4];
  fVar7 = param_2[9];
  param_1[6] = ((((param_2[0xe] * fVar32 - fVar20 * fVar27) + fVar20 * fVar28) -
                param_2[0xe] * fVar33) - param_2[7] * fVar21) + param_2[6] * fVar35;
  fVar20 = param_2[8];
  fVar29 = fVar20 * param_2[5];
  fVar8 = param_2[5];
  param_1[7] = (((fVar4 * fVar27 - param_2[10] * fVar32) - fVar4 * fVar28) + param_2[10] * fVar33 +
               param_2[7] * fVar31) - param_2[6] * fVar36;
  fVar20 = fVar20 * fVar34;
  fVar4 = param_2[0xd];
  fVar10 = *param_2;
  fVar24 = param_2[4] * fVar34;
  fVar11 = param_2[0xb];
  fVar22 = fVar10 * param_2[9];
  fVar12 = param_2[0xf];
  fVar34 = param_2[0xc] * fVar34;
  fVar37 = (((param_2[0xf] * fVar5 * fVar7 - param_2[0xd] * fVar15 * fVar9) - param_2[0xf] * fVar29)
            + param_2[0xd] * fVar3 * fVar6 + fVar11 * fVar16 * fVar8) - param_2[9] * fVar16 * fVar17
  ;
  param_1[8] = fVar37;
  fVar30 = fVar10 * param_2[5];
  fVar6 = param_2[0xf];
  fVar17 = param_2[0xd];
  param_1[9] = ((((fVar4 * fVar14 * fVar9 - fVar12 * fVar22) + fVar12 * fVar20) -
                param_2[0xd] * fVar36) - fVar11 * fVar34) + param_2[9] * fVar35;
  fVar4 = param_2[9];
  param_1[10] = (((fVar6 * fVar30 - fVar17 * fVar32) - fVar6 * fVar24) + param_2[0xd] * fVar33 +
                param_2[7] * fVar34) - param_2[5] * fVar35;
  fVar6 = param_2[9];
  fVar9 = param_2[0xd];
  fVar11 = param_2[0xe];
  param_1[0xb] = ((((fVar4 * fVar32 - param_2[0xb] * fVar30) + param_2[0xb] * fVar24) -
                  fVar6 * fVar33) - param_2[7] * fVar20) + param_2[5] * fVar36;
  fVar4 = param_2[10];
  fVar25 = ((((fVar9 * fVar15 * fVar25 - fVar11 * fVar5 * fVar7) + fVar11 * fVar29) -
            fVar9 * fVar3 * fVar13) - fVar4 * fVar16 * fVar8) + fVar6 * fVar16 * fVar13;
  param_1[0xc] = fVar25;
  param_1[0xd] = (((fVar11 * fVar22 - fVar9 * fVar19) - fVar11 * fVar20) + fVar9 * fVar31 +
                 fVar4 * fVar34) - param_2[9] * fVar21;
  fVar3 = param_2[6];
  fVar5 = param_2[5];
  fVar6 = param_2[9];
  param_1[0xe] = ((((fVar9 * fVar27 - fVar11 * fVar30) + fVar11 * fVar24) - fVar9 * fVar28) -
                 fVar3 * fVar34) + fVar5 * fVar21;
  fVar7 = param_2[2];
  lVar18 = 0;
  fVar8 = param_2[1];
  param_1[0xf] = (((fVar4 * fVar30 - fVar6 * fVar27) - fVar4 * fVar24) + fVar6 * fVar28 +
                 fVar3 * fVar20) - fVar5 * fVar31;
  fVar20 = 1.0 / (fVar8 * fVar23 + fVar10 * fVar26 + fVar7 * fVar37 + param_2[3] * fVar25);
  do {
    pfVar1 = param_1 + lVar18;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
    fVar5 = pfVar1[3];
    pfVar2 = param_1 + lVar18;
    *pfVar2 = *pfVar1 * fVar20;
    pfVar2[1] = fVar3 * fVar20;
    pfVar2[2] = fVar4 * fVar20;
    pfVar2[3] = fVar5 * fVar20;
    lVar18 = lVar18 + 4;
  } while (lVar18 < 0x10);
  return param_1;
}

