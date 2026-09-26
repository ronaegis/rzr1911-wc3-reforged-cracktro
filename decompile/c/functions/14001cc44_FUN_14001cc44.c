
undefined1 FUN_14001cc44(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_140761d30 = 1;
  }
  FUN_14001d3d0();
  cVar1 = FUN_14001d9c8();
  if (cVar1 != '\0') {
    cVar1 = FUN_14001d9c8();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_14001d9c8(0);
  }
  return 0;
}

