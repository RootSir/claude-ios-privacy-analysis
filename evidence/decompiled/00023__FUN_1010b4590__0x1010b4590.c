// FUNCTION: FUN_1010b4590
// ENTRY: 0x1010b4590
// MATCHED: [Reattest]


/* WARNING: Function: _objc_release_x20 replaced with injection: _objc_release_fixup */

void FUN_1010b4590(void)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  long extraout_x9;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x30;
  
  FUN_100169ba8();
  if (((*(char *)(unaff_x22 + 0xa0) == '\x01') && (FUN_1010bba28(), extraout_x9 == 0)) &&
     (uVar2 = *(long *)(extraout_x8 + *(long *)(unaff_x22 + 0x80)) == *(long *)(unaff_x22 + 0x88),
     (bool)uVar2)) {
    FUN_1010bb6a8();
    lVar1 = *(long *)(unaff_x22 + 0x30);
    FUN_100135e98(unaff_x22 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x23 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x23 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
    FUN_1010bae3c(*(undefined8 *)(lVar1 + 0x20));
    uVar4 = unaff_x22 + 0x38;
    FUN_10109a9f8();
    iVar3 = (int)unaff_x22 + 0x10;
    FUN_10000d48c();
    if ((uVar4 & 1) != 0) {
      FUN_1010bae18();
      if (!(bool)uVar2) {
        FUN_1010bacf4();
      }
      FUN_1010bad24();
      __s2os6LoggerV9logObjectSo03OS_a1_C0Cvg();
      FUN_100480e28();
      FUN_10049f1a0();
      if (iVar3 == 0) {
        FUN_100480c90();
        plVar6 = (long *)0x0;
      }
      else {
        uVar5 = 2;
        FUN_10037c760(2);
        FUN_100480e30();
        FUN_1010bafac();
        FUN_1002006d4(uVar5);
        plVar6 = (long *)0x0;
        FUN_100480c90();
      }
      FUN_1010bb360();
      *(long **)(unaff_x22 + 0x98) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_1010b46cc;
      FUN_100169b94(0,0,unaff_x30);
      FUN_1010b083c();
      return;
    }
  }
  FUN_10015d138();
  FUN_1010bb944();
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  FUN_100169b94(UNRECOVERED_JUMPTABLE,unaff_x30);
                    /* WARNING: Could not recover jumptable at 0x0001010b4688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

