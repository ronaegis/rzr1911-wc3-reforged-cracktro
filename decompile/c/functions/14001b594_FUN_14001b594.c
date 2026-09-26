
undefined8 FUN_14001b594(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 8) != '\0') {
    if (param_2 == '\0') {
      if (*(char *)(param_1 + 9) != '\0') goto LAB_14001b5ae;
    }
    else if (*(char *)(param_1 + 9) == '\0') {
LAB_14001b5ae:
      return *(undefined8 *)(param_1 + 0x38);
    }
  }
  return *(undefined8 *)(param_1 + 0x30);
}

