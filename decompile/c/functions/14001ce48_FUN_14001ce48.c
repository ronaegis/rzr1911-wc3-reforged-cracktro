
void FUN_14001ce48(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  
  _set_app_type(2);
  iVar4 = FUN_14001d9b0();
  _set_fmode(iVar4);
  uVar5 = FUN_1400011f0();
  puVar2 = (undefined4 *)__p__commode();
  *puVar2 = uVar5;
  cVar3 = __scrt_initialize_onexit_tables(1);
  if (cVar3 != '\0') {
    FUN_14001da0c();
    atexit(FUN_14001da48);
    uVar5 = FUN_14001d69c();
    iVar4 = _configure_narrow_argv(uVar5);
    if (iVar4 == 0) {
      FUN_14001d9b8();
      iVar4 = FUN_14001d9f0();
      if (iVar4 != 0) {
        __setusermatherr(FUN_1400011f0);
      }
      _guard_check_icall();
      _guard_check_icall();
      iVar4 = FUN_1400011f0();
      _configthreadlocale(iVar4);
      cVar3 = FUN_14001d9c8();
      if (cVar3 != '\0') {
        _initialize_narrow_environment();
      }
      FUN_1400011f0();
      iVar4 = thunk_FUN_1400011f0();
      if (iVar4 == 0) {
        return;
      }
    }
  }
  FUN_14001d6b8(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

