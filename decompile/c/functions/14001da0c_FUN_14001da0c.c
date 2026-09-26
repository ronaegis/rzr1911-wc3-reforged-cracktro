
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14001da0c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140024cc8; puVar1 < &DAT_140024cc8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}

