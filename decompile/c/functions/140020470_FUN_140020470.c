
undefined8 FUN_140020470(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x3c) {
    return 4;
  }
  if (((*param_1 == 0x6465646e65747845) && (param_1[1] == 0x3a656c75646f4d20)) &&
     ((char)param_1[2] == ' ')) {
    if (*(char *)((longlong)param_1 + 0x25) != '\x1a') {
      return 2;
    }
    uVar1 = 3;
    if (*(char *)((longlong)param_1 + 0x3b) == '\x01') {
      uVar1 = 3;
      if (*(char *)((longlong)param_1 + 0x3a) == '\x04') {
        uVar1 = 0;
      }
      return uVar1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

