
void FUN_140019c14(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  HANDLE hThread;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  mmtime_tag local_38;
  ulonglong local_28;
  
  local_28 = DAT_140027040 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  hThread = GetCurrentThread();
  SetThreadPriority(hThread,0xf);
  uVar4 = 0;
  cVar1 = *(char *)(lVar2 + 0x8051);
  while (cVar1 == '\0') {
    local_38.u = (_union_1042)0x0;
    local_38.wType = 4;
    waveOutGetPosition(*(HWAVEOUT *)(lVar2 + 0x30),&local_38,0xc);
    uVar5 = local_38.u.ms >> 3;
    if ((uVar4 < uVar5) && (uVar6 = uVar5 - uVar4, uVar6 != 0)) {
      do {
        uVar3 = 0x1000;
        if ((uVar4 & 0xfffff000) != (uVar5 & 0xfffff000)) {
          uVar3 = 0x1000 - (uVar4 & 0xfff);
        }
        if (uVar6 <= uVar3) {
          uVar3 = uVar6;
        }
        FUN_14001e110(*(undefined8 *)(lVar2 + 0x8038),
                      lVar2 + 0x38 + (ulonglong)((uVar4 & 0xfff) * 2) * 4,uVar3);
        uVar4 = uVar4 + uVar3;
        uVar6 = uVar6 - uVar3;
      } while (uVar6 != 0);
    }
    Sleep(5);
    cVar1 = *(char *)(lVar2 + 0x8051);
  }
  _Cnd_do_broadcast_at_thread_exit();
  free(param_1);
  FUN_14001cb70(local_28 ^ (ulonglong)auStack_58);
  return;
}

