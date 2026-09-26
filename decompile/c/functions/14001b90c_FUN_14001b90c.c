
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001b90c(longlong param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  __uint64 _Var4;
  undefined8 *_Memory;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_1f8 [32];
  ulonglong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  int local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_158;
  uint local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined1 local_134;
  ulonglong local_48;
  
  local_48 = DAT_140027040 ^ (ulonglong)auStack_1f8;
  uVar7 = 0;
  if ((*(longlong *)(param_1 + 0x1a8) != 0) && (*(longlong *)(param_1 + 0x1a0) != 0)) {
    if (DAT_140761ba4 != param_3) {
      DAT_140761ba0 = 1;
      DAT_140761ba4 = param_3;
      FUN_14001b558(&PTR_vftable_140761b40);
      DAT_140761b50 = DAT_140761ba0;
      _DAT_140761b51 = DAT_140761ba1;
      DAT_140761b53 = DAT_140761ba3;
      _DAT_140761b54 = DAT_140761ba4;
      _DAT_140761b58 = _DAT_140761ba8;
      uRam0000000140761b60 = uRam0000000140761bb0;
      DAT_140761b48 = 0;
      _DAT_140761b68 = DAT_140761bb8;
      (**(code **)(PTR_vftable_140761b40 + 8))(&PTR_vftable_140761b40);
    }
    local_1c8 = 0;
    local_1d0 = 0;
    local_1d8 = param_2;
    (**(code **)(*DAT_140762620 + 0x180))(DAT_140762620,DAT_140761b70,0,0);
    local_1a0 = 0;
    local_19c = 0;
    local_198 = (float)*(uint *)(**(longlong **)(param_1 + 0xd8) + 0x14);
    local_190 = 0;
    local_18c = 0x3f800000;
    local_194 = (float)*(uint *)(**(longlong **)(param_1 + 0xd8) + 0x18);
    (**(code **)(*DAT_140762620 + 0x160))(DAT_140762620,1,&local_1a0);
    uVar6 = *(uint *)(param_1 + 0xcc);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)(int)uVar6;
    _Var4 = SUB168(ZEXT816(8) * auVar3,0);
    if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
      _Var4 = 0xffffffffffffffff;
    }
    _Memory = (undefined8 *)operator_new(_Var4);
    if (uVar6 != 0) {
      uVar12 = (ulonglong)uVar6;
      uVar9 = uVar7;
      puVar11 = _Memory;
      do {
        plVar2 = *(longlong **)(uVar9 + *(longlong *)(param_1 + 0xd8));
        uVar5 = (**(code **)(*plVar2 + 0x38))(plVar2,0);
        *puVar11 = uVar5;
        if (*(char *)(param_1 + 0xa8) != '\0') {
          (**(code **)(*DAT_140762620 + 400))(DAT_140762620,uVar5,param_1 + 0x98);
        }
        uVar9 = uVar9 + 0x10;
        puVar11 = puVar11 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uVar10 = 1;
    uVar9 = uVar7;
    if (((*(char *)(param_1 + 0xa9) != '\0') && (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0))
       && (uVar9 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x40))(),
          *(char *)(param_1 + 0xa8) != '\0')) {
      local_1d8 = local_1d8 & 0xffffffffffffff00;
      (**(code **)(*DAT_140762620 + 0x1a8))(DAT_140762620,uVar9,1,0x3f800000);
    }
    (**(code **)(*DAT_140762620 + 0x108))(DAT_140762620,uVar6,_Memory,uVar9);
    local_1b8 = (longlong *)0x0;
    local_188 = 3;
    local_180 = 0;
    local_174 = 0;
    local_178 = 0;
    local_184 = (-(uint)(*(char *)(param_1 + 0xaa) != '\0') & 2) + 1;
    local_170 = 1;
    uStack_168 = 0;
    (**(code **)(*DAT_140762618 + 0xb0))(DAT_140762618,&local_188,&local_1b8);
    (**(code **)(*DAT_140762620 + 0x158))(DAT_140762620,local_1b8);
    (**(code **)(*DAT_140762620 + 0xc0))
              (DAT_140762620,
               *(undefined4 *)(&DAT_140023d90 + (longlong)*(int *)(param_1 + 0xb0) * 4));
    local_1b0 = (longlong *)0x0;
    memset(&local_158,0,0x108);
    local_150 = (uint)*(byte *)(param_1 + 0xab);
    iVar1 = *(int *)(param_1 + 0xac);
    local_158 = 0;
    local_134 = 0xf;
    if (iVar1 == 0) {
      local_148 = 0x100000002;
      uStack_140 = 0x200000002;
      local_14c = 2;
      local_138 = uVar10;
    }
    else if (iVar1 == 1) {
      local_148 = 0x100000006;
      uStack_140 = 0x200000008;
      local_14c = 5;
      local_138 = uVar10;
    }
    else if (iVar1 == 2) {
      local_148 = 0x100000006;
      uStack_140 = 0x100000002;
      local_14c = 5;
      local_138 = uVar10;
    }
    else if (iVar1 == 3) {
      local_148 = 0x100000004;
      uStack_140 = 0x600000001;
      local_14c = uVar10;
      local_138 = uVar10;
    }
    (**(code **)(*DAT_140762618 + 0xa0))(DAT_140762618,&local_158,&local_1b0);
    (**(code **)(*DAT_140762620 + 0x118))(DAT_140762620,local_1b0,0,0xffffffff);
    (**(code **)(*DAT_140762620 + 0x38))(DAT_140762620,8,1,&DAT_140761b70);
    (**(code **)(*DAT_140762620 + 0x80))(DAT_140762620,8,1,&DAT_140761b70);
    uVar9 = uVar7;
    if (*(int *)(param_1 + 0xf4) != 0) {
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x100) + 8 + uVar9 * 0x10);
        if (plVar2 != (longlong *)0x0) {
          local_1a8 = (**(code **)(*plVar2 + 0x30))(plVar2,1);
          (**(code **)(*DAT_140762620 + 200))(DAT_140762620,uVar9,1,&local_1a8);
          (**(code **)(*DAT_140762620 + 0x40))(DAT_140762620,uVar9,1,&local_1a8);
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(param_1 + 0xf4));
    }
    (**(code **)(*DAT_140762620 + 0x58))(DAT_140762620,*(undefined8 *)(param_1 + 0x1a0),0,0);
    (**(code **)(*DAT_140762620 + 0x48))(DAT_140762620,*(undefined8 *)(param_1 + 0x1a8),0,0);
    local_1d8 = local_1d8 & 0xffffffff00000000;
    (**(code **)(*DAT_140762620 + 0xa8))
              (DAT_140762620,*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8),0);
    (**(code **)(*DAT_140762620 + 200))
              (DAT_140762620,0,*(undefined4 *)(param_1 + 0xf4),&DAT_140762330);
    (**(code **)(*DAT_140762620 + 0x40))
              (DAT_140762620,0,*(undefined4 *)(param_1 + 0xf4),&DAT_140762330);
    (**(code **)(*DAT_140762620 + 0x108))(DAT_140762620,uVar6,&DAT_140762330,0);
    (**(code **)(*DAT_140762620 + 0x58))(DAT_140762620,0,0,0);
    (**(code **)(*DAT_140762620 + 0x48))(DAT_140762620,0,0,0);
    free(_Memory);
    (**(code **)(*local_1b8 + 0x10))();
    (**(code **)(*local_1b0 + 0x10))();
    if (*(int *)(param_1 + 0xcc) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xd8) + uVar7 * 0x10) + 0x50))();
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_1 + 0xcc));
    }
  }
  FUN_14001cb70(local_48 ^ (ulonglong)auStack_1f8);
  return;
}

