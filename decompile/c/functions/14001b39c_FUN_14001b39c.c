
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14001b39c(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 local_38;
  int local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x18);
  fVar4 = ceilf((float)(uint)(iVar2 * *(int *)(param_1 + 0x14)) * 0.0625);
  _DAT_14076262c = 0;
  puVar1 = (undefined8 *)(param_1 + 0x30);
  _DAT_140762628 = (undefined4)(longlong)(fVar4 * 16.0);
  _DAT_140762634 = 0;
  _DAT_140762630 = (-(uint)(*(char *)(param_1 + 0x10) != '\0') & 0xffffff7c) + 0x88;
  _DAT_140762638 = ~-(uint)(*(char *)(param_1 + 0x10) != '\0') & 0x40;
  _DAT_14076263c = *(undefined4 *)(param_1 + 0x14);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    memset(&local_38,0,0x10);
    local_38 = *(undefined8 *)(param_1 + 0x28);
    puVar3 = &local_38;
  }
  (**(code **)(*DAT_140762618 + 0x18))(DAT_140762618,&DAT_140762628,puVar3,puVar1);
  if (*(char *)(param_1 + 0x10) == '\0') {
    memset(&local_20,0,0x18);
    local_20 = 0;
    local_1c = 1;
    local_14 = iVar2;
    (**(code **)(*DAT_140762618 + 0x38))(DAT_140762618,*puVar1,&local_20,param_1 + 0x48);
    memset(&local_38,0,0x14);
    local_38 = 0x100000000;
    local_2c = iVar2;
    (**(code **)(*DAT_140762618 + 0x40))(DAT_140762618,*puVar1,&local_38,param_1 + 0x40);
    if (*(char *)(param_1 + 8) != '\0') {
      puVar1 = (undefined8 *)(param_1 + 0x38);
      (**(code **)(*DAT_140762618 + 0x18))(DAT_140762618,&DAT_140762628,0,puVar1);
      (**(code **)(*DAT_140762618 + 0x38))(DAT_140762618,*puVar1,&local_20,param_1 + 0x58);
      (**(code **)(*DAT_140762618 + 0x40))(DAT_140762618,*puVar1,&local_38,param_1 + 0x50);
    }
  }
  return 1;
}

