
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

int FUN_14001cf2c(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  
  iVar5 = (int)unaff_RBX;
  cVar2 = FUN_14001cc44(1);
  if (cVar2 == '\0') {
    FUN_14001d6b8(7);
  }
  else {
    bVar1 = false;
    uVar3 = __scrt_acquire_startup_lock();
    iVar5 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar3);
    if (DAT_140761d20 != 1) {
      if (DAT_140761d20 == 0) {
        DAT_140761d20 = 1;
        iVar5 = _initterm_e(&DAT_1400233d8,&DAT_1400233f0);
        if (iVar5 != 0) {
          return 0xff;
        }
        _initterm(&DAT_1400233b8,&DAT_1400233d0);
        DAT_140761d20 = 2;
      }
      else {
        bVar1 = true;
      }
      __scrt_release_startup_lock(uVar3);
      plVar6 = (longlong *)FUN_14001d9fc();
      if ((*plVar6 != 0) && (cVar2 = FUN_14001cd0c(plVar6), cVar2 != '\0')) {
        (*(code *)*plVar6)(0,2);
      }
      plVar6 = (longlong *)FUN_14001da04();
      if ((*plVar6 != 0) && (cVar2 = FUN_14001cd0c(plVar6), cVar2 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar6);
      }
      uVar4 = __scrt_get_show_window_mode();
      uVar7 = _get_narrow_winmain_command_line();
      iVar5 = FUN_140018508(&IMAGE_DOS_HEADER_140000000,0,uVar7,uVar4);
      cVar2 = FUN_14001d844();
      if (cVar2 != '\0') {
        if (!bVar1) {
          _cexit();
        }
        __scrt_uninitialize_crt(1,0);
        return iVar5;
      }
      goto LAB_14001d08d;
    }
  }
  FUN_14001d6b8(7);
LAB_14001d08d:
                    /* WARNING: Subroutine does not return */
  exit(iVar5);
}

