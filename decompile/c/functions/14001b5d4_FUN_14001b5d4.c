
undefined8 FUN_14001b5d4(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 8) != '\0') {
    if (param_2 == '\0') {
      if (*(char *)(param_1 + 9) != '\0') goto LAB_14001b5ee;
    }
    else if (*(char *)(param_1 + 9) == '\0') {
LAB_14001b5ee:
      return *(undefined8 *)(param_1 + 0x58);
    }
  }
  return *(undefined8 *)(param_1 + 0x48);
}

