
/* WARNING: Removing unreachable block (ram,0x00014001d4f3) */
/* WARNING: Removing unreachable block (ram,0x00014001d4d6) */
/* WARNING: Removing unreachable block (ram,0x00014001d4a5) */
/* WARNING: Removing unreachable block (ram,0x00014001d40c) */
/* WARNING: Removing unreachable block (ram,0x00014001d3e9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14001d3d0(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    _DAT_1400270a0 = 0xffffffffffffffff;
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_140027098 = 0x8000;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1407622e4 = DAT_1407622e4 | 1;
    }
  }
  uVar10 = 0;
  uVar8 = uVar10;
  uVar9 = uVar10;
  uVar11 = uVar10;
  if (6 < *piVar1) {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = piVar3[1];
    uVar9 = piVar3[2];
    if ((uVar8 >> 9 & 1) != 0) {
      DAT_1407622e4 = DAT_1407622e4 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar11 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar10 = *(uint *)(lVar4 + 4);
    }
  }
  _DAT_140027090 = 1;
  DAT_140027094 = 2;
  uVar6 = DAT_140027088 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    _DAT_140027090 = 2;
    DAT_140027094 = 6;
    uVar6 = DAT_140027088 & 0xffffffffffffffee;
  }
  DAT_140027088 = uVar6;
  if ((uVar5 >> 0x1b & 1) != 0) {
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar7 = (byte)in_XCR0, (bVar7 & 6) == 6)) {
      _DAT_140027090 = 3;
      uVar6 = DAT_140027088;
      uVar5 = DAT_140027094 | 8;
      if ((uVar8 & 0x20) != 0) {
        _DAT_140027090 = 5;
        uVar6 = DAT_140027088 & 0xfffffffffffffffd;
        uVar5 = DAT_140027094 | 0x28;
        if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar7 & 0xe0) == 0xe0)) {
          DAT_140027094 = DAT_140027094 | 0x68;
          _DAT_140027090 = 6;
          uVar6 = DAT_140027088 & 0xffffffffffffffd9;
          uVar5 = DAT_140027094;
        }
      }
      DAT_140027094 = uVar5;
      DAT_140027088 = uVar6;
      if ((uVar9 >> 0x17 & 1) != 0) {
        DAT_140027088 = DAT_140027088 & 0xfffffffffeffffff;
      }
      if (((uVar11 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
        _DAT_1407622e0 = uVar10 & 0x400ff;
        DAT_140027088 = ~((ulonglong)(uVar10 >> 0x10 & 7) | 0x1000028) & DAT_140027088;
        if (1 < _DAT_1407622e0) {
          DAT_140027088 = DAT_140027088 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar11 >> 0x15 & 1) != 0) && ((in_XCR0 >> 0x13 & 1) != 0)) {
      DAT_140027088 = DAT_140027088 & 0xffffffffffffff7f;
    }
  }
  return 0;
}

