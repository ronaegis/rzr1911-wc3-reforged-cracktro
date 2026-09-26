
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001d0e8(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x14001d113;
  capture_previous_context(&DAT_140761e10);
  _DAT_140761d80 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_140761ea8 = puVar3 + 0x40;
  _DAT_140761e90 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_140761d70 = 0xc0000409;
  _DAT_140761d74 = 1;
  _DAT_140761d88 = 1;
  DAT_140761d90 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_140027040;
  *(undefined8 *)(puVar3 + 0x28) = DAT_140027080;
  *(undefined8 *)(puVar3 + -8) = 0x14001d1b5;
  DAT_140761f08 = _DAT_140761d80;
  __raise_securityfailure(&PTR_DAT_140023440);
  return;
}

