
void FUN_1400200f0(longlong param_1,float *param_2,byte param_3)

{
  longlong lVar1;
  float fVar2;
  
  if ((param_3 & 4) == 0) {
    param_2[8] = 0.0;
    *(undefined1 *)(param_2 + 0xc) = 1;
  }
  lVar1 = *(longlong *)(param_2 + 4);
  if (lVar1 != 0) {
    if ((param_3 & 1) == 0) {
      param_2[0xd] = *(float *)(lVar1 + 0x14);
    }
    param_2[0xe] = *(float *)(lVar1 + 0x20);
  }
  if ((param_3 & 8) == 0) {
    *(undefined1 *)((longlong)param_2 + 0x3e) = 1;
    param_2[0x11] = 1.0;
    param_2[0x10] = 1.0;
    param_2[0x12] = 0.5;
    param_2[0x13] = 0.0;
  }
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
  if ((param_3 & 2) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      fVar2 = 7680.0 - *param_2 * 64.0;
    }
    else if (*(int *)(param_1 + 0x14) == 1) {
      fVar2 = (float)FUN_14001dc40(*param_2);
    }
    else {
      fVar2 = 0.0;
    }
    param_2[9] = fVar2;
    fVar2 = (float)FUN_14001def0(param_1,fVar2);
    param_2[10] = fVar2;
    param_2[0xb] = fVar2 / (float)*(uint *)(param_1 + 0x128);
  }
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_1 + 0x148);
  if (*(longlong *)(param_2 + 2) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 2) + 0xe0) = *(undefined8 *)(param_1 + 0x148);
  }
  if (*(longlong *)(param_2 + 4) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 4) + 0x28) = *(undefined8 *)(param_1 + 0x148);
  }
  return;
}

