// FUNCTION: FUN_1010b1098
// ENTRY: 0x1010b1098
// MATCHED: [Reattest]


/* WARNING: Function: _objc_release_x20 replaced with injection: _objc_release_fixup */

void FUN_1010b1098(void)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  code *extraout_x8;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar13 = *(long *)(unaff_x22 + 0xa38);
  uVar3 = (undefined4)*(undefined8 *)(unaff_x22 + 0xa30);
  lVar14 = *(long *)(unaff_x22 + 0x9d0);
  FUN_1010bb96c();
  FUN_1000160d4(lVar14 + 0x70,unaff_x22 + 0x770);
  lVar16 = *(long *)(unaff_x22 + 0x790);
  FUN_10000f09c(unaff_x22 + 0x770,*(undefined8 *)(unaff_x22 + 0x788));
  uVar12 = *(undefined8 *)(lVar14 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x8b8) = *(undefined8 *)(lVar14 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x8c0) = uVar12;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 0x10);
  _swift_bridgeObjectRetain();
  FUN_1000d8920();
  FUN_10001f27c();
  (*UNRECOVERED_JUMPTABLE)();
  if (lVar13 == 0) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x9f0);
    lVar13 = *(long *)(unaff_x22 + 0x9e0);
    FUN_10001683c();
    FUN_10000cbe4();
    uVar2 = lVar13 == 0;
    if (!(bool)uVar2) {
      uVar12 = 0;
    }
    _swift_bridgeObjectRelease(uVar12);
    FUN_10000d48c(unaff_x22 + 0x770);
    FUN_1010bae18();
    if (!(bool)uVar2) {
      FUN_1010bacf4();
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa30);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xa28);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x978);
    lVar13 = *(long *)(unaff_x22 + 0x960);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x958);
    FUN_1010bb200();
    FUN_1002d8e54(uVar11);
    (**(code **)(lVar13 + 0x10))(uVar15);
    puVar8 = &DAT_107081ac8;
    FUN_10001ef00();
    *(undefined8 *)(puVar8 + 0x10) = uVar18;
    *(undefined8 *)(puVar8 + 0x18) = uVar12;
    puVar9 = &DAT_107081af0;
    FUN_10001ef00();
    *(code **)(puVar9 + 0x10) = FUN_100167290;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    _swift_bridgeObjectRetain();
    uVar4 = (uint)uVar12;
    _swift_retain_x19();
    __s2os6LoggerV9logObjectSo03OS_a1_C0Cvg();
    FUN_100480e28();
    puVar8 = &DAT_107081b18;
    FUN_10001ef00();
    *(code **)(puVar8 + 0x10) = FUN_1010ba088;
    *(undefined **)(puVar8 + 0x18) = puVar9;
    puVar9 = &DAT_107081b40;
    FUN_10001ef00();
    *(code **)(puVar9 + 0x10) = thunk_FUN_1001ff24c;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    puVar8 = puVar9;
    FUN_1010bad50();
    FUN_10000f518();
    FUN_1010badbc(3);
    *(code **)(puVar8 + 0x40) = thunk_FUN_1010b9ea8;
    *(undefined **)(puVar8 + 0x48) = puVar9;
    _swift_retain_x23();
    _swift_retain_x25();
    _swift_retain_x26();
    _swift_release_x27();
    _os_log_type_enabled(uVar15,uVar4 & 0xff);
    if ((int)uVar15 == 0) {
      FUN_1010bb5d0(*(undefined8 *)(unaff_x22 + 0x978));
      _swift_release_x26(0);
      _swift_release_x25();
      _swift_release_x23();
      _swift_release_x19();
    }
    else {
      uVar18 = *(undefined8 *)(unaff_x22 + 0xa30);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xa28);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x978);
      lVar14 = *(long *)(unaff_x22 + 0x960);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x958);
      puVar10 = (undefined4 *)&DAT_0000000c;
      FUN_10037c760();
      puVar7 = puVar10;
      FUN_100518490();
      *puVar10 = 0x8220102;
      *(undefined8 *)(unaff_x22 + 0x8e8) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x8f0) = uVar18;
      FUN_10010d6b4();
      lVar13 = unaff_x22 + 0x8e8;
      __sSS10describingSSx_tclufC(lVar13,PTR___sSSN_10748f1d8);
      FUN_1010b85d4();
      FUN_1000604fc();
      *(long *)(puVar10 + 1) = lVar13;
      _swift_release_x25();
      _swift_release_x26();
      _swift_release_x23();
      _swift_release_x19();
      FUN_10037c924();
      __os_log_impl();
      FUN_10000d48c(puVar7);
      FUN_1002006d4(puVar7);
      FUN_1002006d4(puVar10);
      (**(code **)(lVar14 + 8))(uVar15,uVar12);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0xa18);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa10);
    FUN_1010bb424();
    FUN_1010bb1c4(9);
    FUN_1010bb20c();
    FUN_1002a822c(uVar12);
    FUN_10000cc0c();
    FUN_100136ba0();
    FUN_100060360();
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa30);
    lVar13 = *(long *)(unaff_x22 + 0x9f8);
    lVar16 = *(long *)(unaff_x22 + 0x9d0);
    lVar17 = *(long *)(unaff_x22 + 0x920);
    FUN_10001683c();
    _swift_bridgeObjectRelease_n(uVar12,2);
    FUN_10000d48c(unaff_x22 + 0x770);
    FUN_1000160d4(lVar16 + 0x98,unaff_x22 + 0x720);
    lVar14 = *(long *)(unaff_x22 + 0x740);
    FUN_10000f09c(unaff_x22 + 0x720,*(undefined8 *)(unaff_x22 + 0x738));
    uVar12 = *(undefined8 *)(lVar16 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x8d8) = *(undefined8 *)(lVar16 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x8e0) = uVar12;
    FUN_1010bae3c(*(undefined8 *)(lVar14 + 0x48));
    (*extraout_x8)(unaff_x22 + 0x8d8);
    FUN_10000d48c(unaff_x22 + 0x720);
    lVar14 = *(long *)(lVar17 + lVar13);
    lVar13 = lVar14 + 1;
    bVar1 = lVar13 == 0;
    if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1010b1698);
      (*UNRECOVERED_JUMPTABLE)();
    }
    *(long *)(*(long *)(unaff_x22 + 0x920) + *(long *)(unaff_x22 + 0x9f8)) = lVar13;
    FUN_1010bae18();
    if (!bVar1) {
      FUN_1010bacf4();
    }
    lVar13 = *(long *)(unaff_x22 + 0x960);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x958);
    FUN_1010bb200();
    FUN_1002d8e54(uVar12);
    FUN_1010bb434(*(undefined8 *)(lVar13 + 0x10));
    puVar8 = &DAT_107081a50;
    FUN_10000f518(&DAT_107081a50,0x14);
    *(undefined4 *)(puVar8 + 0x10) = uVar3;
    puVar5 = puVar8;
    __s2os6LoggerV9logObjectSo03OS_a1_C0Cvg();
    puVar6 = puVar5;
    __sSo13os_log_type_ta0A0E5errorABvgZ();
    puVar9 = &DAT_107081a78;
    FUN_10001ef00();
    *(code **)(puVar9 + 0x10) = thunk_FUN_1003335d0;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    puVar8 = &DAT_107081aa0;
    FUN_10001ef00();
    *(code **)(puVar8 + 0x10) = FUN_1010ba040;
    *(undefined **)(puVar8 + 0x18) = puVar9;
    puVar9 = puVar8;
    FUN_1010bad50();
    FUN_10000f518();
    *(undefined8 *)(puVar9 + 0x18) = 6;
    *(undefined8 *)(puVar9 + 0x10) = 3;
    *(code **)(puVar9 + 0x20) = FUN_100333e84;
    *(undefined8 *)(puVar9 + 0x28) = 0;
    *(code **)(puVar9 + 0x30) = FUN_100333e94;
    *(undefined8 *)(puVar9 + 0x38) = 0;
    *(code **)(puVar9 + 0x40) = thunk_FUN_100333fb8;
    *(undefined **)(puVar9 + 0x48) = puVar8;
    FUN_1000166c8(puVar8);
    _swift_retain_x23();
    _swift_retain_x25();
    _swift_release_x21();
    _os_log_type_enabled(puVar5,(uint)puVar6 & 0xff);
    if ((int)puVar5 == 0) {
      FUN_1010bb6b8();
      FUN_1010bb874(0);
      _swift_release_x25();
      _swift_release_x23();
    }
    else {
      puVar7 = (undefined4 *)&DAT_00000008;
      FUN_10037c760();
      *puVar7 = 0x4000100;
      _swift_release_x23();
      puVar7[1] = uVar3;
      _swift_release_x25();
      FUN_1010bb874();
      FUN_10037c924();
      __os_log_impl();
      FUN_1002006d4(puVar7);
      FUN_1010bb6b8(0);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0xa08);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa00);
    FUN_1010bb424(*(undefined8 *)(unaff_x22 + 0x9f0));
    FUN_1010bb1c4(0xc);
    FUN_1010bb20c();
    FUN_1000664bc();
    FUN_1002a822c();
    FUN_10000cb94();
    FUN_100060360(uVar12);
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x9a8));
  FUN_1000d8778();
  FUN_10010d6cc();
  FUN_100136010();
  FUN_1001365cc();
  FUN_100136d14();
  FUN_100136c3c();
  FUN_1001b60cc();
                    /* WARNING: Could not recover jumptable at 0x0001010b1690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

