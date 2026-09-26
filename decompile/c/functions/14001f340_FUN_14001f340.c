
void FUN_14001f340(longlong param_1)

{
  bool bVar1;
  char *pcVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined *puVar6;
  byte bVar7;
  ulonglong uVar8;
  
  if (*(char *)(param_1 + 0x150) == '\0') {
    if (*(char *)(param_1 + 0x151) != '\0') {
      bVar7 = *(char *)(param_1 + 0x13c) + 1;
      *(undefined1 *)(param_1 + 0x151) = 0;
      goto LAB_14001f38a;
    }
  }
  else {
    bVar7 = *(byte *)(param_1 + 0x152);
    *(undefined2 *)(param_1 + 0x150) = 0;
LAB_14001f38a:
    *(undefined1 *)(param_1 + 0x13d) = *(undefined1 *)(param_1 + 0x153);
    *(undefined1 *)(param_1 + 0x153) = 0;
    *(byte *)(param_1 + 0x13c) = bVar7;
    if (*(ushort *)(param_1 + 8) <= (ushort)bVar7) {
      *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(param_1 + 10);
    }
  }
  puVar4 = (ushort *)0x0;
  bVar7 = *(byte *)((ulonglong)*(byte *)(param_1 + 0x13c) + 0x18 + param_1);
  if ((ushort)bVar7 < *(ushort *)(param_1 + 0xe)) {
    puVar4 = (ushort *)((ulonglong)bVar7 * 0x10 + *(longlong *)(param_1 + 0x118));
  }
  uVar3 = *(ushort *)(param_1 + 0xc);
  bVar1 = false;
  uVar8 = 0;
  if (uVar3 != 0) {
    do {
      if (puVar4 == (ushort *)0x0) {
        puVar6 = &DAT_140762308;
      }
      else {
        puVar6 = (undefined *)
                 (((ulonglong)*(byte *)(param_1 + 0x13d) * (ulonglong)uVar3 + uVar8) * 5 +
                 *(longlong *)(puVar4 + 4));
      }
      lVar5 = uVar8 * 0x130 + *(longlong *)(param_1 + 0x168);
      *(undefined **)(lVar5 + 0x18) = puVar6;
      if ((puVar6[3] == '\x0e') && ((puVar6[4] & 0xf0) == 0xd0)) {
        *(byte *)(lVar5 + 0x69) = puVar6[4] & 0xf;
      }
      else {
        FUN_14001e320(param_1,lVar5);
      }
      if ((!bVar1) && (*(char *)(lVar5 + 0x6b) != '\0')) {
        bVar1 = true;
      }
      uVar3 = *(ushort *)(param_1 + 0xc);
      bVar7 = (char)uVar8 + 1;
      uVar8 = (ulonglong)bVar7;
    } while (bVar7 < uVar3);
    if (bVar1) goto LAB_14001f4d1;
  }
  pcVar2 = (char *)((ulonglong)*(byte *)(param_1 + 0x13c) * 0x100 + *(longlong *)(param_1 + 0x158) +
                   (ulonglong)*(byte *)(param_1 + 0x13d));
  *(char *)(param_1 + 0x160) = *pcVar2;
  *pcVar2 = *pcVar2 + '\x01';
LAB_14001f4d1:
  bVar7 = *(char *)(param_1 + 0x13d) + 1;
  *(byte *)(param_1 + 0x13d) = bVar7;
  if ((*(char *)(param_1 + 0x150) == '\0') && (*(char *)(param_1 + 0x151) == '\0')) {
    if (puVar4 == (ushort *)0x0) {
      uVar3 = 0x40;
    }
    else {
      uVar3 = *puVar4;
    }
    if ((uVar3 <= bVar7) || (bVar7 == 0)) {
      bVar7 = *(char *)(param_1 + 0x13c) + 1;
      *(undefined1 *)(param_1 + 0x13d) = *(undefined1 *)(param_1 + 0x153);
      *(byte *)(param_1 + 0x13c) = bVar7;
      *(undefined1 *)(param_1 + 0x153) = 0;
      if (*(ushort *)(param_1 + 8) <= (ushort)bVar7) {
        *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(param_1 + 10);
      }
    }
  }
  return;
}

