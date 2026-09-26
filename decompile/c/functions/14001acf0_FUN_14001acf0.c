
void FUN_14001acf0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_b8 [32];
  uint local_98 [6];
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_68;
  undefined8 local_64;
  uint local_5c;
  uint local_58;
  ulonglong local_54;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_140027040 ^ (ulonglong)auStack_b8;
  uVar4 = *(uint *)(param_1 + 0x14);
  if ((0 < *(int *)(param_1 + 0x10)) && (uVar4 < *(uint *)(param_1 + 0x18))) {
    uVar4 = *(uint *)(param_1 + 0x18);
  }
  if ((1 < *(int *)(param_1 + 0x10)) && (uVar4 < *(uint *)(param_1 + 0x1c))) {
    uVar4 = *(uint *)(param_1 + 0x1c);
  }
  uVar6 = 1;
  if ((*(char *)(param_1 + 0x28) == '\0') ||
     (*(int *)(param_1 + 0x2c) == 5 || *(int *)(param_1 + 0x2c) == 6)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 1;
    if (1 < (int)uVar4) {
      do {
        uVar4 = uVar4 >> 1;
        if (uVar4 == 0) {
          uVar5 = uVar5 + 1;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (1 < uVar4);
    }
  }
  uVar4 = *(uint *)(&DAT_140023da8 + (longlong)*(int *)(param_1 + 0x2c) * 4);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    memset(&local_68,0,0x20);
    local_68 = *(uint *)(param_1 + 0x14);
    if (*(uint *)(param_1 + 0x14) == 0) {
      local_68 = uVar6;
    }
    local_58 = 0;
    local_64 = CONCAT44(1,uVar5);
    uVar6 = 0x88;
    if (1 < (int)uVar5) {
      uVar6 = 0xa8;
    }
    local_54 = (ulonglong)uVar6;
    local_4c = (uint)(1 < uVar5);
    local_5c = uVar4;
    (**(code **)(*DAT_140762618 + 0x20))(DAT_140762618,&local_68,0,param_1 + 0x38);
    if (*(char *)(param_1 + 8) != '\0') {
      (**(code **)(*DAT_140762618 + 0x20))(DAT_140762618,&local_68,0,param_1 + 0x40);
    }
  }
  else if (iVar1 == 1) {
    memset(&local_68,0,0x2c);
    local_5c = 1;
    local_68 = *(uint *)(param_1 + 0x14);
    if (*(uint *)(param_1 + 0x14) == 0) {
      local_68 = uVar6;
    }
    local_54 = 1;
    local_4c = 0;
    uVar2 = *(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) == 0) {
      uVar2 = uVar6;
    }
    local_64 = CONCAT44(uVar5,uVar2);
    local_44 = 0;
    local_48 = 0x40;
    if (1 < *(int *)(param_1 + 0x2c) - 5U) {
      local_48 = 0xa8;
    }
    local_40 = (uint)(1 < uVar5);
    local_58 = uVar4;
    (**(code **)(*DAT_140762618 + 0x28))(DAT_140762618,&local_68,0,param_1 + 0x38);
    if (*(char *)(param_1 + 8) != '\0') {
      (**(code **)(*DAT_140762618 + 0x28))(DAT_140762618,&local_68,0,param_1 + 0x40);
    }
  }
  else if (iVar1 == 2) {
    memset(&local_68,0,0x24);
    local_68 = *(uint *)(param_1 + 0x14);
    if (*(uint *)(param_1 + 0x14) == 0) {
      local_68 = 1;
    }
    uVar2 = *(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) == 0) {
      uVar2 = uVar6;
    }
    local_4c = 0;
    uVar3 = *(uint *)(param_1 + 0x1c);
    if (*(uint *)(param_1 + 0x1c) == 0) {
      uVar3 = uVar6;
    }
    local_64 = CONCAT44(uVar3,uVar2);
    uVar6 = 0x88;
    if (1 < (int)uVar5) {
      uVar6 = 0xa8;
    }
    local_54 = (ulonglong)uVar6 << 0x20;
    local_48 = (uint)(1 < uVar5);
    local_5c = uVar5;
    local_58 = uVar4;
    (**(code **)(*DAT_140762618 + 0x30))(DAT_140762618,&local_68,0,param_1 + 0x38);
    if (*(char *)(param_1 + 8) != '\0') {
      (**(code **)(*DAT_140762618 + 0x30))(DAT_140762618,&local_68,0,param_1 + 0x40);
    }
  }
  if (*(int *)(param_1 + 0x2c) == 5 || *(int *)(param_1 + 0x2c) == 6) {
    memset(&local_68,0,0x18);
    local_64 = CONCAT44(local_64._4_4_,3);
    local_5c = 0;
    local_68 = uVar4;
    (**(code **)(*DAT_140762618 + 0x50))
              (DAT_140762618,*(undefined8 *)(param_1 + 0x38),&local_68,param_1 + 0x60);
  }
  else {
    memset(local_98,0,0x14);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      local_98[1] = 2;
      local_98[2] = 0;
    }
    else if (iVar1 == 1) {
      local_98[1] = 4;
      local_98[2] = 0;
    }
    else if (iVar1 == 2) {
      local_98[4] = *(undefined4 *)(param_1 + 0x1c);
      local_98[1] = 8;
      local_98[2] = 0;
      local_98[3] = 0;
    }
    local_98[0] = uVar4;
    (**(code **)(*DAT_140762618 + 0x40))
              (DAT_140762618,*(undefined8 *)(param_1 + 0x38),local_98,param_1 + 0x48);
    if (*(char *)(param_1 + 8) != '\0') {
      (**(code **)(*DAT_140762618 + 0x40))
                (DAT_140762618,*(undefined8 *)(param_1 + 0x40),local_98,param_1 + 0x68);
    }
    memset(&local_68,0,0x18);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      local_64 = 2;
      local_5c = uVar5;
    }
    else if (iVar1 == 1) {
      local_64 = 4;
      local_5c = uVar5;
    }
    else if (iVar1 == 2) {
      local_64 = 8;
      local_5c = uVar5;
    }
    local_68 = uVar4;
    (**(code **)(*DAT_140762618 + 0x38))
              (DAT_140762618,*(undefined8 *)(param_1 + 0x38),&local_68,param_1 + 0x50);
    if (*(char *)(param_1 + 8) != '\0') {
      (**(code **)(*DAT_140762618 + 0x38))
                (DAT_140762618,*(undefined8 *)(param_1 + 0x40),&local_68,param_1 + 0x70);
    }
    if (*(int *)(param_1 + 0x10) == 1) {
      memset(&local_80,0,0x14);
      if (*(int *)(param_1 + 0x10) == 0) {
        local_7c = 2;
      }
      else {
        local_7c = 8;
        if (*(int *)(param_1 + 0x10) == 1) {
          local_7c = 4;
        }
      }
      local_78 = 0;
      local_80 = uVar4;
      (**(code **)(*DAT_140762618 + 0x48))
                (DAT_140762618,*(undefined8 *)(param_1 + 0x38),&local_80,param_1 + 0x58);
      if (*(char *)(param_1 + 8) != '\0') {
        (**(code **)(*DAT_140762618 + 0x48))
                  (DAT_140762618,*(undefined8 *)(param_1 + 0x40),&local_80,param_1 + 0x78);
      }
    }
  }
  FUN_14001cb70(local_38 ^ (ulonglong)auStack_b8);
  return;
}

