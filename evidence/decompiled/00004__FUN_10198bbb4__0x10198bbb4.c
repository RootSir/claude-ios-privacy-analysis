// FUNCTION: FUN_10198bbb4
// ENTRY: 0x10198bbb4
// MATCHED: [Bootstrap]


/* WARNING: Function: _objc_release_x19 replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_release_x20 replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010198bcb4) */
/* WARNING: Removing unreachable block (ram,0x00010198bcb8) */
/* WARNING: Removing unreachable block (ram,0x00010198bcbc) */
/* WARNING: Removing unreachable block (ram,0x00010198bfc8) */
/* WARNING: Removing unreachable block (ram,0x00010198bdcc) */
/* WARNING: Removing unreachable block (ram,0x00010198bfec) */

void FUN_10198bbb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined4 *unaff_x27;
  undefined8 local_68 [2];
  
  lVar13 = *(long *)(unaff_x22 + 0x150);
  uVar9 = *(ulong *)(unaff_x22 + 0x140);
  FUN_10198c2d0(*(undefined8 *)(unaff_x22 + 0x130),uVar9,*(undefined8 *)(unaff_x22 + 0xe0),
                *(undefined8 *)(unaff_x22 + 0xe8),0,unaff_x22 + 200);
  if (lVar13 == 0) {
    __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
    if ((uVar9 & 1) == 0) {
      uVar9 = **(ulong **)(unaff_x22 + 0x140);
      bVar5 = uVar9 == *(ulong *)(unaff_x22 + 0xf0);
      bVar6 = (*(ulong **)(unaff_x22 + 0x140))[1] == *(ulong *)(unaff_x22 + 0xf8);
      uVar4 = bVar5 && bVar6;
      if ((bVar5 && bVar6) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar9 & 1) != 0)) {
        FUN_10198cdc4();
        FUN_10198ce0c();
        FUN_1018db4a0();
        FUN_10198cd90();
        if (!(bool)uVar4) {
          FUN_10198ccfc();
        }
        uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
        FUN_10198ccbc();
        uVar7 = 0x711f888;
        FUN_10001ef00();
        FUN_10198cd34();
        __s2os6LoggerV9logObjectSo03OS_a1_C0Cvg();
        FUN_10198cde8();
        puVar10 = &DAT_10711f8b0;
        FUN_10001ef00();
        *(code **)(puVar10 + 0x10) = FUN_100aca2bc;
        *(undefined8 *)(puVar10 + 0x18) = uVar3;
        puVar11 = &DAT_10711f8d8;
        FUN_10001ef00();
        *(code **)(puVar11 + 0x10) = thunk_FUN_10003475c;
        *(undefined **)(puVar11 + 0x18) = puVar10;
        FUN_10198cce8();
        iVar8 = (int)puVar11;
        _swift_initStackObject();
        FUN_100b92bf4(3);
        FUN_10198cdf8(thunk_FUN_101984960);
        _swift_retain_x23();
        _swift_retain_x24();
        _swift_release_x25();
        FUN_100480d7c();
        uVar14 = *(undefined8 *)(unaff_x22 + 0x128);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
        lVar13 = *(long *)(unaff_x22 + 0x118);
        if (iVar8 == 0) {
          FUN_10198cd84();
          _swift_release_x24(0);
          _swift_release_x23();
          _swift_release_x19();
        }
        else {
          uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
          uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
          uVar12 = 0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          FUN_1002006e0();
          *unaff_x27 = 0x8200102;
          local_68[0] = uVar12;
          FUN_10198c568(uVar1,uVar2,local_68);
          FUN_10198cdf0();
          _swift_release_x24();
          _swift_release_x19();
          FUN_10037c924();
          FUN_100480c58(uVar7);
          FUN_10000d48c(uVar12);
          FUN_1002006d4(uVar12);
          FUN_1002006d4();
          (**(code **)(lVar13 + 8))(uVar14,uVar3);
        }
      }
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
    FUN_10002fab0();
    FUN_100387c68(uVar3,uVar14,FUN_10080c080);
    FUN_1000085a4();
    FUN_1000d8778();
    FUN_10010d6cc();
    FUN_100136010();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    FUN_10198ca88();
    FUN_10198cdac();
    FUN_10002fab0();
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x140));
    FUN_1000085a4();
    FUN_10010d6cc();
    FUN_100136010();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010198c10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

