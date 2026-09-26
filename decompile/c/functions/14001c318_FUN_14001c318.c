
void FUN_14001c318(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *pvVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 local_res8 [2];
  longlong local_res10;
  undefined1 local_48 [32];
  
  local_res10 = param_2;
  lVar5 = FUN_140017cd8(local_48);
  uVar2 = *(undefined4 *)(lVar5 + 4);
  uVar3 = *(undefined4 *)(lVar5 + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  *(undefined4 *)(lVar5 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  if (*(int *)(lVar5 + 4) != 0) {
    free(*(void **)(lVar5 + 0x10));
  }
  puVar1 = (uint *)(param_1 + 0x38);
  *puVar1 = 0;
  local_res8[0] = 0;
  FUN_14001c694(param_1 + 0x18,local_res8);
  uVar7 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      *puVar1 = *puVar1 + *(int *)(&DAT_140023f50 +
                                  (longlong)
                                  *(int *)((ulonglong)uVar7 * 0x114 + 0x100 +
                                          *(longlong *)(param_1 + 0x10)) * 4);
      FUN_14001c694(param_1 + 0x18,puVar1);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 4));
  }
  pvVar6 = operator_new((ulonglong)*puVar1);
  *(void **)(param_1 + 0x30) = pvVar6;
  uVar8 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      memcpy((void *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x28) + uVar8 * 4) +
                     *(longlong *)(param_1 + 0x30)),
             (void *)(uVar8 * 0x114 + *(longlong *)(param_1 + 0x10) + 0x104),
             (ulonglong)
             *(uint *)(&DAT_140023f50 +
                      (longlong)*(int *)(uVar8 * 0x114 + 0x100 + *(longlong *)(param_1 + 0x10)) * 4)
            );
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 4));
  }
  if (*(int *)(param_2 + 4) != 0) {
    free(*(void **)(param_2 + 0x10));
  }
  return;
}

