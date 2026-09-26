
void FUN_1400181dc(longlong param_1)

{
  undefined8 *puVar1;
  int nWidth;
  int iVar2;
  int iVar3;
  HMODULE pHVar4;
  HICON pHVar5;
  HWND pHVar6;
  undefined1 auStackY_118 [32];
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78 [2];
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  tagRECT local_38;
  ulonglong local_28;
  
  nWidth = DAT_1401857dc;
  iVar3 = DAT_1401857d8;
  local_28 = DAT_140027040 ^ (ulonglong)auStackY_118;
  pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
  pHVar5 = LoadIconW(pHVar4,(LPCWSTR)0x65);
  pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
  ((WNDCLASSEXW *)(param_1 + 0x30))->cbSize = 0x50;
  *(undefined4 *)(param_1 + 0x34) = 0x40;
  *(code **)(param_1 + 0x38) = FUN_14001819c;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(HMODULE *)(param_1 + 0x48) = pHVar4;
  *(HICON *)(param_1 + 0x50) = pHVar5;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(wchar_t **)(param_1 + 0x70) = L"DemoTemplate";
  *(undefined8 *)(param_1 + 0x78) = 0;
  RegisterClassExW((WNDCLASSEXW *)(param_1 + 0x30));
  pHVar6 = CreateWindowExW(0,*(LPCWSTR *)(param_1 + 0x70),L"RZR_D_Cracktro_03-Warcraft3_Reforged",
                           0x90000000,0,0,nWidth,iVar3,(HWND)0x0,(HMENU)0x0,
                           *(HINSTANCE *)(param_1 + 0x48),(LPVOID)0x0);
  *(HWND *)(param_1 + 0x28) = pHVar6;
  pHVar6 = GetDesktopWindow();
  GetClientRect(pHVar6,&local_38);
  SetWindowPos(*(HWND *)(param_1 + 0x28),(HWND)0x0,(local_38.right - nWidth) / 2,
               (local_38.bottom - iVar3) / 2,0,0,5);
  local_a0 = (longlong *)0x0;
  puVar1 = (undefined8 *)(param_1 + 8);
  local_98 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  local_88 = 0;
  local_b0 = 0xb000;
  iVar2 = D3D11CreateDevice(0,1,0,0);
  if (-1 < iVar2) {
    (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,&DAT_140023d40,&local_a0);
    (**(code **)(*local_a0 + 0x38))(local_a0,&local_98);
    (**(code **)(*local_98 + 0x30))(local_98,&DAT_140023d60,&local_90);
    local_60 = 0x1c;
    local_58 = 1;
    local_4c = 2;
    local_40 = 0;
    local_68 = nWidth;
    local_64 = iVar3;
    local_50 = 0x20;
    local_44 = 4;
    iVar3 = (**(code **)(*local_90 + 0xc0))(local_90,*puVar1,&local_68,0);
    if (-1 < iVar3) {
      *(undefined8 *)(param_1 + 0x18) = local_88;
      local_b8 = (longlong *)0x0;
      local_80 = (longlong *)0x0;
      local_a8 = (longlong *)0x0;
      DCompositionCreateDevice(0,&DAT_140023d70,&local_b8);
      (**(code **)(*local_b8 + 0x30))(local_b8,*(undefined8 *)(param_1 + 0x28),1,&local_80);
      (**(code **)(*local_b8 + 0x38))(local_b8,&local_a8);
      (**(code **)(*local_a8 + 0x78))(local_a8,*(undefined8 *)(param_1 + 0x18));
      (**(code **)(*local_80 + 0x18))(local_80,local_a8);
      (**(code **)(*local_b8 + 0x18))();
      local_78[0] = 0;
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                (*(longlong **)(param_1 + 0x18),0,&DAT_140023d50,local_78);
      (**(code **)(*(longlong *)*puVar1 + 0x48))((longlong *)*puVar1,local_78[0],0,param_1 + 0x20);
      ShowWindow(*(HWND *)(param_1 + 0x28),10);
      UpdateWindow(*(HWND *)(param_1 + 0x28));
      ShowCursor(0);
      pHVar6 = GetConsoleWindow();
      ShowWindow(pHVar6,0);
    }
  }
  FUN_14001cb70(local_28 ^ (ulonglong)auStackY_118);
  return;
}

