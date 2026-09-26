
void FUN_140019b94(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      do {
        lVar1 = uVar3 * 0x118 + *(longlong *)(param_1 + 0x10);
        if (*(int *)(lVar1 + 0x104) != 0) {
          free(*(void **)(lVar1 + 0x110));
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 4));
    }
    free(*(void **)(param_1 + 0x10));
  }
  return;
}

