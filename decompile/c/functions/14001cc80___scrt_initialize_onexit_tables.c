
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_140761d31 == '\0') {
    if (1 < param_1) {
      FUN_14001d6b8(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    iVar2 = __scrt_is_ucrt_dll_in_use();
    if ((iVar2 == 0) || (param_1 != 0)) {
      DAT_140761d38 = 0xffffffffffffffff;
      uRam0000000140761d40 = 0xffffffffffffffff;
      _DAT_140761d48 = 0xffffffffffffffff;
      _DAT_140761d50 = 0xffffffffffffffff;
      uRam0000000140761d58 = 0xffffffffffffffff;
      _DAT_140761d60 = 0xffffffffffffffff;
    }
    else {
      iVar2 = _initialize_onexit_table(&DAT_140761d38);
      if ((iVar2 != 0) || (iVar2 = _initialize_onexit_table(&DAT_140761d50), iVar2 != 0)) {
        return 0;
      }
    }
    DAT_140761d31 = '\x01';
  }
  return 1;
}

