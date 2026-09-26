
void FUN_14001c89c(int *param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  byte *_DstBuf;
  void *pvVar5;
  size_t _Count;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  double dVar9;
  FILE *local_res8;
  
  local_res8 = (FILE *)0x0;
  bVar2 = (&DAT_140023da4)[*param_1];
  fopen_s(&local_res8,(char *)(param_1 + 1),"rb");
  if (local_res8 != (FILE *)0x0) {
    fseek(local_res8,0,2);
    lVar3 = ftell(local_res8);
    _Count = (size_t)lVar3;
    rewind(local_res8);
    _DstBuf = (byte *)operator_new(_Count + 1);
    fread(_DstBuf,1,_Count,local_res8);
    fclose(local_res8);
    _DstBuf[_Count] = 0;
    if (_DstBuf != (byte *)0x0) {
      param_1[0x404] = 0;
      pbVar6 = _DstBuf;
      while (pbVar7 = pbVar6, *pbVar6 != 0) {
        for (; ((bVar1 = *pbVar7, bVar1 == 0x20 || (bVar1 == 0x2c)) || (bVar1 == 10));
            pbVar7 = pbVar7 + 1) {
        }
        pbVar6 = pbVar7;
        if (bVar1 != 0) {
          do {
            if ((bVar1 < 0x2d) && ((0x100100000001U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) break;
            pbVar6 = pbVar6 + 1;
            bVar1 = *pbVar6;
          } while (bVar1 != 0);
          if (pbVar7 < pbVar6) {
            param_1[0x404] = param_1[0x404] + 1;
          }
        }
      }
      pvVar5 = operator_new((ulonglong)((uint)bVar2 * param_1[0x404]));
      uVar8 = 0;
      *(void **)(param_1 + 0x402) = pvVar5;
      bVar2 = *_DstBuf;
      pbVar6 = _DstBuf;
      while (bVar2 != 0) {
        for (; ((bVar2 = *pbVar6, bVar2 == 0x20 || (bVar2 == 0x2c)) || (bVar2 == 10));
            pbVar6 = pbVar6 + 1) {
        }
        pbVar7 = pbVar6;
        if (bVar2 != 0) {
          do {
            if (((bVar2 == 0x2c) || (*pbVar7 == 0x20)) || (*pbVar7 == 0)) break;
            pbVar7 = pbVar7 + 1;
            bVar2 = *pbVar7;
          } while (bVar2 != 0);
          if (pbVar6 < pbVar7) {
            bVar2 = *pbVar7;
            *pbVar7 = 0;
            if (*param_1 == 0) {
              iVar4 = atoi((char *)pbVar6);
              *(int *)(*(longlong *)(param_1 + 0x402) + uVar8 * 4) = iVar4;
            }
            else if (*param_1 == 1) {
              dVar9 = atof((char *)pbVar6);
              *(float *)(*(longlong *)(param_1 + 0x402) + uVar8 * 4) = (float)dVar9;
            }
            else {
              if (*param_1 != 2) {
                return;
              }
              iVar4 = atoi((char *)pbVar6);
              *(char *)(uVar8 + *(longlong *)(param_1 + 0x402)) = (char)iVar4;
            }
            *pbVar7 = bVar2;
            uVar8 = (ulonglong)((int)uVar8 + 1);
          }
        }
        pbVar6 = pbVar7;
        bVar2 = *pbVar7;
      }
      free(_DstBuf);
    }
  }
  return;
}

