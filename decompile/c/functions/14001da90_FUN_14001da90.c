
undefined8
FUN_14001da90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  size_t sVar3;
  size_t *_Dst;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  
  iVar2 = FUN_140020470(param_2,param_3);
  if (iVar2 == 0) {
    sVar3 = FUN_1400204d0(param_2);
    _Dst = (size_t *)malloc(sVar3);
    if ((_Dst == (size_t *)0x0) && (sVar3 != 0)) {
      uVar4 = 2;
    }
    else {
      memset(_Dst,0,sVar3);
      *param_1 = _Dst;
      *_Dst = sVar3;
      *(undefined4 *)(_Dst + 0x25) = param_4;
      sVar3 = FUN_1400208a0(_Dst,param_2,param_3,_Dst + 0x2e);
      uVar1 = *(ushort *)((longlong)_Dst + 0xc);
      uVar7 = 0;
      _Dst[0x2d] = sVar3;
      *(undefined4 *)(_Dst + 0x26) = 0x3f800000;
      *(undefined4 *)((longlong)_Dst + 0x134) = 0x3e800000;
      *(undefined4 *)(_Dst + 0x27) = 0x3c000000;
      if (uVar1 != 0) {
        do {
          bVar6 = (char)uVar7 + 1;
          lVar5 = uVar7 * 0x130 + _Dst[0x2d];
          *(undefined1 *)(lVar5 + 0x30) = 1;
          *(undefined4 *)(lVar5 + 0x70) = 0;
          *(undefined1 *)(lVar5 + 0x74) = 1;
          *(undefined4 *)(lVar5 + 0x7c) = 0;
          *(undefined1 *)(lVar5 + 0x80) = 1;
          *(undefined4 *)(lVar5 + 0x40) = 0x3f800000;
          *(undefined4 *)(lVar5 + 0x44) = 0x3f800000;
          *(undefined4 *)(lVar5 + 0x34) = 0x3f800000;
          *(undefined4 *)(lVar5 + 0x48) = 0x3f000000;
          *(undefined4 *)(lVar5 + 0x38) = 0x3f000000;
          *(undefined8 *)(lVar5 + 0x128) = 0;
          uVar7 = (ulonglong)bVar6;
        } while ((ushort)bVar6 < *(ushort *)((longlong)_Dst + 0xc));
      }
      _Dst[0x2b] = sVar3 + (ulonglong)uVar1 * 0x130;
      iVar2 = FUN_1400011f0(_Dst);
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        free(_Dst);
        uVar4 = 1;
      }
    }
    return uVar4;
  }
  return 1;
}

