
undefined8 FUN_14001819c(undefined8 param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 2) {
    PostQuitMessage(0);
  }
  else if ((param_2 != 5) && ((param_2 != 0x112 || ((param_3 & 0xfff0) != 0xf100)))) {
                    /* WARNING: Could not recover jumptable at 0x0001400181c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = DefWindowProcW();
    return uVar1;
  }
  return 0;
}

