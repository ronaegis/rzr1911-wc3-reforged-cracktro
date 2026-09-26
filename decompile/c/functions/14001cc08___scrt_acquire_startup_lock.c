
/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  bool bVar5;
  
  iVar2 = __scrt_is_ucrt_dll_in_use();
  if (iVar2 == 0) {
LAB_14001cc36:
    uVar4 = 0;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar5 = DAT_140761d28 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar5) {
        pvVar3 = DAT_140761d28;
        pvVar1 = DAT_140761d28;
      }
      DAT_140761d28 = pvVar1;
      UNLOCK();
      if (bVar5) goto LAB_14001cc36;
    } while (StackBase != pvVar3);
    uVar4 = 1;
  }
  return uVar4;
}

