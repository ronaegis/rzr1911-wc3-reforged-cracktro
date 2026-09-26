
undefined8 FUN_14001c448(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 local_48 [48];
  ulonglong uVar6;
  
  uVar7 = 0;
  if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
    free(*(void **)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    free(*(void **)(param_1 + 0xe8));
  }
  *(undefined8 *)(param_1 + 0xdc) = 0;
  FUN_140017cd8(local_48,param_1);
  FUN_14001c318(param_1 + 0xc0,local_48);
  fVar9 = ceilf((float)(*(int *)(param_1 + 0xf8) + 0x260) * 0.0625);
  uVar8 = (ulonglong)(fVar9 * 16.0);
  _Dst = operator_new(uVar8 & 0xffffffff);
  memcpy(_Dst,&DAT_1407623a0,0x260);
  memcpy((void *)((longlong)_Dst + 0x260),*(void **)(param_1 + 0xf0),
         (ulonglong)*(uint *)(param_1 + 0xf8));
  fVar9 = DAT_1407623a0;
  uVar6 = uVar7;
  if (*(int *)(param_1 + 0x60) != 0) {
    do {
      for (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + uVar6 * 8); lVar4 != 0;
          lVar4 = *(longlong *)(lVar4 + 0x10)) {
        (**(code **)(**(longlong **)(lVar4 + 8) + 0x10))();
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0x60));
  }
  uVar6 = uVar7;
  if (*(int *)(param_1 + 0xa4) != 0) {
    do {
      piVar3 = (int *)(uVar6 * 0x10 + *(longlong *)(param_1 + 0xb0));
      if (*piVar3 == 1) {
        lVar4 = *(longlong *)(piVar3 + 2);
        iVar1 = *(int *)(lVar4 + 0xbc);
        if (iVar1 == 1) {
          if (*(char *)(param_1 + 0xb8) != '\0') {
LAB_14001c5be:
            FUN_14001b90c(lVar4,_Dst,uVar8 & 0xffffffff);
          }
        }
        else if ((iVar1 == 0) ||
                (((iVar1 == 2 && (*(float *)(lVar4 + 0xc0) <= fVar9)) &&
                 (fVar9 <= *(float *)(lVar4 + 0xc4))))) goto LAB_14001c5be;
      }
      else if (*piVar3 == 0) {
        lVar4 = *(longlong *)(piVar3 + 2);
        iVar1 = *(int *)(lVar4 + 0xa4);
        if (iVar1 == 1) {
          if (*(char *)(param_1 + 0xb8) != '\0') {
LAB_14001c609:
            FUN_14001c00c(lVar4,_Dst,uVar8 & 0xffffffff);
          }
        }
        else if ((iVar1 == 0) ||
                (((iVar1 == 2 && (*(float *)(lVar4 + 0xa8) <= fVar9)) &&
                 (fVar9 <= *(float *)(lVar4 + 0xac))))) goto LAB_14001c609;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0xa4));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    do {
      for (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + uVar7 * 8); lVar4 != 0;
          lVar4 = *(longlong *)(lVar4 + 0x10)) {
        lVar2 = *(longlong *)(lVar4 + 8);
        if (*(char *)(lVar2 + 8) != '\0') {
          *(bool *)(lVar2 + 9) = *(char *)(lVar2 + 9) == '\0';
        }
      }
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0x60));
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  free(_Dst);
  return *(undefined8 *)(param_1 + 0x98);
}

