
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001a544(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *_Memory;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined1 local_a0 [24];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_140027040 ^ (ulonglong)auStack_c8;
  lVar4 = param_1;
  local_a8 = param_1;
  FUN_14001a794(param_1,param_1);
  lVar3 = FUN_140001144(local_a0,lVar4 + 0x260);
  uVar1 = *(undefined4 *)(lVar3 + 4);
  _DAT_140762608 = *(undefined4 *)(lVar3 + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined4 *)(lVar3 + 8) = 0;
  *(undefined4 *)(lVar3 + 4) = 0;
  _Memory = DAT_140762610;
  bVar5 = DAT_140762604 != 0;
  DAT_140762604 = uVar1;
  DAT_140762610 = (void *)uVar2;
  if (bVar5) {
    free(_Memory);
  }
  if (*(int *)(lVar3 + 4) != 0) {
    free(*(void **)(lVar3 + 0x10));
  }
  DAT_140762618 = *(undefined8 *)(param_1 + 0x278);
  DAT_140762620 = *(undefined8 *)(param_1 + 0x280);
  memset(&local_88,0,0x34);
  local_88 = 0x300000015;
  uStack_80 = 0x300000003;
  local_6c = 0;
  uStack_64 = 0;
  local_70 = 1;
  local_74 = 1;
  local_5c = 0xff7fffff;
  local_58 = 0x7f7fffff;
  local_78 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0xb8))
            (*(longlong **)(param_1 + 0x278),&local_88,local_50);
  local_88 = CONCAT44(4,(undefined4)local_88);
  uStack_80 = 0x400000004;
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0xb8))
            (*(longlong **)(param_1 + 0x278),&local_88,local_48);
  local_88 = CONCAT44(1,(undefined4)local_88);
  uStack_80 = 0x100000001;
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0xb8))
            (*(longlong **)(param_1 + 0x278),&local_88,local_40);
  local_88 = 0x300000000;
  uStack_80 = 0x300000003;
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0xb8))
            (*(longlong **)(param_1 + 0x278),&local_88,local_38);
  local_88 = CONCAT44(4,(undefined4)local_88);
  uStack_80 = 0x400000004;
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0xb8))
            (*(longlong **)(param_1 + 0x278),&local_88,local_30);
  local_88 = CONCAT44(1,(undefined4)local_88);
  uStack_80 = 0x100000001;
  (**(code **)(**(longlong **)(param_1 + 0x278) + 0xb8))
            (*(longlong **)(param_1 + 0x278),&local_88,local_28);
  (**(code **)(**(longlong **)(param_1 + 0x280) + 0xd0))
            (*(longlong **)(param_1 + 0x280),0,6,local_50);
  (**(code **)(**(longlong **)(param_1 + 0x280) + 0x50))
            (*(longlong **)(param_1 + 0x280),0,6,local_50);
  (**(code **)(**(longlong **)(param_1 + 0x280) + 0x230))
            (*(longlong **)(param_1 + 0x280),0,6,local_50);
  if (*(int *)(lVar4 + 0x264) != 0) {
    free(*(void **)(lVar4 + 0x270));
  }
  FUN_14001cb70(local_20 ^ (ulonglong)auStack_c8);
  return;
}

