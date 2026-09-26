
float * FUN_14001859c(float *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_78;
  float fStack_74;
  undefined8 local_68;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  
  uVar3 = *(undefined8 *)param_3;
  local_78 = (float)*param_4;
  local_68._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  fStack_74 = (float)((ulonglong)*param_4 >> 0x20);
  local_68._0_4_ = (float)uVar3;
  local_50 = (float)local_68 * fStack_74 - local_78 * local_68._4_4_;
  _local_58 = CONCAT44(local_78 * param_3[2] - (float)local_68 * *(float *)(param_4 + 1),
                       *(float *)(param_4 + 1) * local_68._4_4_ - fStack_74 * param_3[2]);
  local_68 = uVar3;
  FUN_14001851c(&local_68,&local_58);
  fVar6 = local_60;
  fVar5 = local_68._4_4_;
  fVar7 = (float)local_68;
  fStack_74 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  local_78 = (float)*(undefined8 *)param_3;
  local_50 = local_78 * local_68._4_4_ - fStack_74 * (float)local_68;
  _local_58 = CONCAT44(param_3[2] * (float)local_68 - local_78 * local_60,
                       fStack_74 * local_60 - param_3[2] * local_68._4_4_);
  FUN_14001851c(&local_68,&local_58);
  uVar3 = *param_2;
  param_1[2] = *param_3;
  param_1[6] = param_3[1];
  fStack_54 = (float)((ulonglong)uVar3 >> 0x20);
  param_1[10] = param_3[2];
  *param_1 = fVar7;
  param_1[1] = (float)local_68;
  param_1[4] = fVar5;
  param_1[5] = local_68._4_4_;
  param_1[8] = fVar6;
  param_1[9] = local_60;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  local_58 = (float)uVar3;
  fVar1 = *(float *)(param_2 + 1);
  param_1[0xf] = 1.0;
  fVar7 = local_58 * fVar7;
  uVar3 = *param_2;
  local_58 = (float)uVar3;
  fVar8 = local_58 * (float)local_68;
  fVar2 = *(float *)(param_2 + 1);
  param_1[0xc] = -(fStack_54 * fVar5 + fVar7 + fVar1 * fVar6);
  fStack_54 = (float)((ulonglong)uVar3 >> 0x20);
  uVar3 = *param_2;
  uVar4 = *(undefined8 *)param_3;
  local_58 = (float)uVar3;
  local_68._0_4_ = (float)uVar4;
  fVar1 = *(float *)(param_2 + 1);
  fVar7 = param_3[2];
  param_1[0xd] = -(fStack_54 * local_68._4_4_ + fVar8 + fVar2 * local_60);
  fStack_54 = (float)((ulonglong)uVar3 >> 0x20);
  local_68._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  param_1[0xe] = -(fStack_54 * local_68._4_4_ + local_58 * (float)local_68 + fVar1 * fVar7);
  return param_1;
}

