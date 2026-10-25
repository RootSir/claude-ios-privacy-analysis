// FUNCTION: FUN_1010b1698
// ENTRY: 0x1010b1698
// MATCHED: [Reattest]


/* WARNING: Function: _objc_release_x23 replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_release_x27 replaced with injection: _objc_release_fixup */

void FUN_1010b1698(void)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  void *pvVar14;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long unaff_x22;
  long lVar20;
  undefined1 uVar21;
  long lVar22;
  long lVar23;
  
  lVar20 = *(long *)(unaff_x22 + 0x9f8);
  lVar22 = *(long *)(unaff_x22 + 0x9d0);
  lVar23 = *(long *)(unaff_x22 + 0x920);
  _swift_release_x8(*(undefined8 *)(unaff_x22 + 0x9b8));
  FUN_1000160d4(lVar22 + 0x98,unaff_x22 + 0x810);
  lVar18 = *(long *)(unaff_x22 + 0x830);
  FUN_100135e98(unaff_x22 + 0x810);
  uVar16 = *(undefined8 *)(lVar22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x878) = *(undefined8 *)(lVar22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x880) = uVar16;
  FUN_1010bae3c(*(undefined8 *)(lVar18 + 0x48));
  FUN_10109a9f8(unaff_x22 + 0x878);
  FUN_10000d48c(unaff_x22 + 0x810);
  lVar20 = *(long *)(lVar23 + lVar20);
  lVar18 = lVar20 + 1;
  uVar1 = lVar18 == 0;
  if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1010b1cc8);
    (*UNRECOVERED_JUMPTABLE)();
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa38);
  lVar20 = *(long *)(unaff_x22 + 0x920);
  *(long *)(lVar20 + *(long *)(unaff_x22 + 0x9f8)) = lVar18;
  FUN_1000f0878(lVar20 + 0x40);
  FUN_1010bb758();
  FUN_1010baf0c();
  FUN_100136328();
  FUN_1010bb2b0();
  FUN_1010baf88();
  FUN_10001638c();
  *(undefined8 *)(unaff_x22 + 0x8f8) = uVar16;
  FUN_10037c7f8();
  FUN_1010bae98();
  lVar18 = unaff_x22 + 0x10;
  FUN_10056a380(lVar18,unaff_x22 + 0x8f8);
  if ((int)lVar18 == 0) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa38);
    *(undefined8 *)(unaff_x22 + 0x900) = uVar16;
    _swift_errorRetain();
    iVar2 = (int)uVar16;
    FUN_1010bb560();
    if (iVar2 != 0) {
      FUN_1010bb254();
      FUN_1010bb698();
      FUN_100922e9c();
      __s10Foundation8URLErrorV4CodeV8rawValueSivg();
      FUN_1010bb6f0();
    }
    lVar18 = 0;
    uVar21 = 3;
    uVar16 = 0xd;
    goto LAB_1010b186c;
  }
  _memcpy((void *)(unaff_x22 + 0x1f8),(void *)(unaff_x22 + 0x10),0x1e1);
  pvVar14 = (void *)(unaff_x22 + 0x10);
  _memcpy((void *)(unaff_x22 + 0x3e0),pvVar14,0x1a0);
  iVar2 = (int)unaff_x22 + 0x1f8;
  FUN_1001b430c();
  uVar1 = true;
  if (iVar2 == 1) {
LAB_1010b17c8:
    lVar18 = 0;
LAB_1010b17cc:
    uVar16 = *(undefined8 *)(unaff_x22 + 0x398);
    uVar21 = 2;
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x420);
    lVar18 = *(long *)(unaff_x22 + 0x428);
    uVar3 = unaff_x22 + 0x420;
    FUN_1001b430c();
    uVar1 = (int)uVar3 == 1;
    if ((bool)uVar1) goto LAB_1010b17c8;
    if (lVar18 == 0) goto LAB_1010b17cc;
    FUN_1001365c4();
    __sScM6sharedScMvgZ();
    FUN_10001f334();
    uVar13 = uVar3;
    _swift_task_isCurrentExecutor();
    if ((uVar13 & 1) == 0) {
      uVar21 = 1;
      _swift_task_reportUnexpectedExecutor
                ("ClaudeTrustedDevice/TrustedDeviceStore.swift",0x2c,1,0x3cf,uVar3,pvVar14);
      _swift_release_x20();
    }
    else {
      _swift_release_x20();
      uVar21 = 1;
    }
  }
  FUN_1010bb700();
  FUN_1010b9fdc(unaff_x22 + 0x1f8);
LAB_1010b186c:
  FUN_1010bae18();
  if (!(bool)uVar1) {
    FUN_1010bacf4();
  }
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa38);
  lVar20 = *(long *)(unaff_x22 + 0x960);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x958);
  FUN_1010bb200();
  FUN_1002d8e54(uVar19);
  FUN_1010bb434(*(undefined8 *)(lVar20 + 0x10));
  puVar4 = &DAT_107081938;
  FUN_100021e0c();
  *(undefined8 *)(puVar4 + 0x10) = uVar17;
  FUN_10037c7f8();
  FUN_100030ab0();
  FUN_1000238f4();
  puVar5 = &DAT_107081960;
  FUN_10000f518(&DAT_107081960,0x21);
  *(undefined8 *)(puVar5 + 0x10) = uVar16;
  *(long *)(puVar5 + 0x18) = lVar18;
  puVar5[0x20] = uVar21;
  puVar6 = puVar5;
  FUN_1010bb700();
  __s2os6LoggerV9logObjectSo03OS_a1_C0Cvg();
  puVar7 = puVar6;
  __sSo13os_log_type_ta0A0E5errorABvgZ();
  puVar8 = &DAT_107081988;
  FUN_10001ef00();
  *(code **)(puVar8 + 0x10) = thunk_FUN_1010ba574;
  *(undefined **)(puVar8 + 0x18) = puVar4;
  puVar9 = &DAT_1070819b0;
  FUN_10001ef00();
  *(code **)(puVar9 + 0x10) = FUN_1000269f0;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  puVar8 = &DAT_1070819d8;
  FUN_10001ef00();
  *(code **)(puVar8 + 0x10) = FUN_10003475c;
  *(undefined **)(puVar8 + 0x18) = puVar9;
  puVar8 = &DAT_107081a00;
  FUN_10001ef00();
  *(code **)(puVar8 + 0x10) = thunk_FUN_1010ba09c;
  *(undefined **)(puVar8 + 0x18) = puVar5;
  puVar5 = &DAT_107081a28;
  FUN_10001ef00();
  *(code **)(puVar5 + 0x10) = thunk_FUN_1001ff24c;
  *(undefined **)(puVar5 + 0x18) = puVar8;
  puVar8 = puVar5;
  FUN_1010bad50();
  FUN_10000f518();
  *(undefined8 *)(puVar8 + 0x18) = 0xc;
  *(undefined8 *)(puVar8 + 0x10) = 6;
  FUN_10037c950(FUN_100034724);
  FUN_1010bb768();
  *(code **)(puVar8 + 0x70) = thunk_FUN_1010b9ea8;
  *(undefined **)(puVar8 + 0x78) = puVar5;
  _swift_retain_x23();
  _swift_retain_x27();
  _swift_retain_x24();
  _swift_retain_x26();
  _swift_retain_x28();
  _swift_retain_x20();
  _swift_retain_x21();
  _swift_release_x19();
  _os_log_type_enabled(puVar6,(uint)puVar7 & 0xff);
  if ((int)puVar6 == 0) {
    FUN_1010bb5d0(*(undefined8 *)(unaff_x22 + 0x970));
    _swift_release_x20(0);
    _swift_release_x24();
    FUN_100474250();
    _swift_release_x23();
    _swift_release_x21();
    _swift_release_x28();
    _swift_release_x26();
    FUN_100aa38c0(uVar16,lVar18,uVar21);
  }
  else {
    uVar17 = *(undefined8 *)(unaff_x22 + 0xa38);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x970);
    lVar22 = *(long *)(unaff_x22 + 0x960);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x958);
    puVar10 = (undefined4 *)0x16;
    FUN_10037c760();
    puVar11 = (undefined8 *)&DAT_00000008;
    FUN_10037c760();
    puVar12 = puVar11;
    FUN_100518490();
    *puVar10 = 0x8400202;
    _swift_errorRetain(uVar17);
    __swift_stdlib_bridgeErrorToNSError();
    *(undefined8 *)(puVar10 + 1) = uVar17;
    *puVar11 = uVar17;
    *(undefined2 *)(puVar10 + 3) = 0x822;
    *(undefined8 *)(unaff_x22 + 0x850) = uVar16;
    *(long *)(unaff_x22 + 0x858) = lVar18;
    *(undefined1 *)(unaff_x22 + 0x860) = uVar21;
    FUN_100aa0410(uVar16,lVar18,uVar21);
    lVar20 = unaff_x22 + 0x850;
    __sSS10describingSSx_tclufC(lVar20,&DAT_107081230);
    FUN_1010bb710();
    FUN_10001683c();
    *(long *)((long)puVar10 + 0xe) = lVar20;
    _swift_release_x28();
    _swift_release_x21();
    _swift_release_x20();
    _swift_release_x26();
    FUN_100aa38c0(uVar16,lVar18,uVar21);
    _swift_release_x24();
    FUN_100474250();
    _swift_release_x8(puVar4);
    FUN_10037c924();
    FUN_1010bb2a8();
    FUN_1010bba5c();
    FUN_1010bb6c8();
    FUN_1002006d4(puVar11);
    FUN_10000d48c(puVar12);
    FUN_1002006d4(puVar12);
    FUN_1002006d4(puVar10);
    (**(code **)(lVar22 + 8))(uVar15,uVar19);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0xa08);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa00);
  FUN_1010bb424(*(undefined8 *)(unaff_x22 + 0x9f0));
  FUN_10040b200();
  FUN_1010aff78();
  FUN_1010bb8a8();
  FUN_10011b494();
  FUN_10040b200();
  FUN_100aa38c0();
  FUN_10005fb1c();
  FUN_100060360(uVar16);
  FUN_1010bb214();
  FUN_1000085a4();
  FUN_1000d8778();
  FUN_10010d6cc();
  FUN_100136010();
  FUN_1001365cc();
  FUN_100136d14();
  FUN_1001364ac();
                    /* WARNING: Could not recover jumptable at 0x0001010b1c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

