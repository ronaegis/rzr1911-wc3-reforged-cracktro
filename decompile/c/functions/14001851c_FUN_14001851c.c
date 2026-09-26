
float * FUN_14001851c(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float fStack_14;
  
  fStack_14 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  local_18 = (float)*(undefined8 *)param_2;
  fVar3 = sqrtf(fStack_14 * fStack_14 + local_18 * local_18 + param_2[2] * param_2[2]);
  fVar3 = 1.0 / fVar3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = fVar3 * *param_2;
  param_1[1] = fVar3 * fVar1;
  param_1[2] = fVar3 * fVar2;
  return param_1;
}

