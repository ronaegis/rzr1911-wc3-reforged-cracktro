
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001c00c(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 0x188) != 0) {
    if (DAT_140761ba4 != param_3) {
      DAT_140761ba0 = 1;
      DAT_140761ba4 = param_3;
      FUN_14001b558(&PTR_vftable_140761b40);
      DAT_140761b50 = DAT_140761ba0;
      _DAT_140761b51 = DAT_140761ba1;
      DAT_140761b53 = DAT_140761ba3;
      _DAT_140761b54 = DAT_140761ba4;
      _DAT_140761b58 = _DAT_140761ba8;
      uRam0000000140761b5c = uRam0000000140761bac;
      uRam0000000140761b60 = uRam0000000140761bb0;
      uRam0000000140761b64 = uRam0000000140761bb4;
      DAT_140761b48 = 0;
      _DAT_140761b68 = DAT_140761bb8;
      (**(code **)(PTR_vftable_140761b40 + 8))(&PTR_vftable_140761b40);
    }
    (**(code **)(*DAT_140762620 + 0x180))(DAT_140762620,DAT_140761b70,0,0,param_2,0,0);
    (**(code **)(*DAT_140762620 + 0x238))(DAT_140762620,8,1,&DAT_140761b70);
    uVar2 = 0;
    if (*(int *)(param_1 + 0xcc) != 0) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd8) + 8 + (ulonglong)uVar2 * 0x10);
        if (plVar1 != (longlong *)0x0) {
          local_res8 = (**(code **)(*plVar1 + 0x30))(plVar1,1);
          (**(code **)(*DAT_140762620 + 0x218))(DAT_140762620,uVar2,1,&local_res8);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xcc));
    }
    uVar2 = 0;
    if (*(int *)(param_1 + 0xb4) != 0) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 8 + (ulonglong)uVar2 * 0x10);
        if (plVar1 != (longlong *)0x0) {
          local_res8 = (**(code **)(*plVar1 + 0x28))(plVar1,0);
          (**(code **)(*DAT_140762620 + 0x220))
                    (DAT_140762620,*(int *)(param_1 + 0xcc) + uVar2,1,&local_res8,0);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xb4));
    }
    (**(code **)(*DAT_140762620 + 0x228))(DAT_140762620,*(undefined8 *)(param_1 + 0x188),0,0);
    fVar3 = ceilf((float)(*(uint *)(param_1 + 0x98) >> 3));
    if (fVar3 < 1.0) {
      fVar3 = 1.0;
    }
    fVar4 = ceilf((float)(*(uint *)(param_1 + 0x9c) >> 3));
    if (fVar4 < 1.0) {
      fVar4 = 1.0;
    }
    fVar5 = ceilf((float)(*(uint *)(param_1 + 0xa0) >> 3));
    fVar6 = 1.0;
    if (1.0 <= fVar5) {
      fVar6 = fVar5;
    }
    (**(code **)(*DAT_140762620 + 0x148))
              (DAT_140762620,(longlong)fVar3 & 0xffffffff,(longlong)fVar4 & 0xffffffff,
               (longlong)fVar6);
    (**(code **)(*DAT_140762620 + 0x218))
              (DAT_140762620,0,*(undefined4 *)(param_1 + 0xcc),&DAT_140762330);
    (**(code **)(*DAT_140762620 + 0x220))
              (DAT_140762620,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xb4),
               &DAT_140762330,0);
    (**(code **)(*DAT_140762620 + 0x228))(DAT_140762620,0,0,0);
    uVar2 = 0;
    if (*(int *)(param_1 + 0xb4) != 0) {
      do {
        if (*(int *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)uVar2 * 0x10) == 0) {
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xc0) + 8 + (ulonglong)uVar2 * 0x10)
                      + 0x50))();
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xb4));
    }
  }
  return;
}

