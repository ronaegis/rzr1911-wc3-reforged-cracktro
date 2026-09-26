
uint * FUN_140017b28(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 8);
  if (uVar2 != 0) {
    for (puVar6 = *(uint **)(*plVar1 + ((ulonglong)*param_2 % (ulonglong)uVar2) * 8);
        puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 4)) {
      if (*puVar6 == *param_2) {
        if (puVar6 != (uint *)0x0) goto LAB_140017bb1;
        break;
      }
    }
  }
  uVar3 = *param_2;
  puVar6 = (uint *)operator_new(0x18);
  uVar5 = *(undefined8 *)(*plVar1 + ((ulonglong)uVar3 % (ulonglong)uVar2) * 8);
  uVar4 = *param_2;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = uVar4;
  *(undefined8 *)(puVar6 + 4) = uVar5;
  *(uint **)(*plVar1 + ((ulonglong)uVar3 % (ulonglong)uVar2) * 8) = puVar6;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
LAB_140017bb1:
  return puVar6 + 2;
}

