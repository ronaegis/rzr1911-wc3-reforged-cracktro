
undefined8 FUN_14001b668(int *param_1)

{
  if (((*(longlong *)(param_1 + 0x1c) != 0) && (*(longlong *)(param_1 + 0x1e) != 0)) ||
     (*(longlong *)(param_1 + 0x20) != 0)) {
    if (*param_1 == 0) {
      (**(code **)(*DAT_140762618 + 0x60))
                (DAT_140762618,*(longlong *)(param_1 + 0x1c),param_1[0x22],0,param_1 + 0x26);
      (**(code **)(*DAT_140762618 + 0x78))
                (DAT_140762618,*(undefined8 *)(param_1 + 0x1e),param_1[0x23],0,param_1 + 0x28);
    }
    else if (*param_1 == 1) {
      (**(code **)(*DAT_140762618 + 0x90))
                (DAT_140762618,*(undefined8 *)(param_1 + 0x20),param_1[0x24],0,param_1 + 0x2a);
    }
  }
  return 1;
}

