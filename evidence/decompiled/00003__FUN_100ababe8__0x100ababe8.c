// FUNCTION: FUN_100ababe8
// ENTRY: 0x100ababe8
// MATCHED: [addr:0x100abb0b0, addr:0x100abac64]


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release_x20 replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_release_x22 replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_release_x23 replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_release_x21 replaced with injection: _objc_release_fixup */

undefined * FUN_100ababe8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined *local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_107486550)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = PTR___swiftEmptyArrayStorage_1074919e0;
  FUN_100037948();
  __sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfC();
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  local_70 = *(undefined8 *)(unaff_x20 + 0x18);
  local_88 = puVar10;
  uStack_68 = uVar7;
  FUN_100abb4cc("Anthropic-Client-Platform",&local_70,&local_b0);
  _swift_bridgeObjectRetain(uVar7);
  FUN_100abb91c();
  FUN_100abb910();
  FUN_100abb508(&local_70);
  FUN_1001b63bc("Anthropic-Client-OS-Version");
  FUN_100abb91c();
  FUN_100abb910();
  FUN_1000604fc();
  FUN_1001b63bc();
  FUN_100abb910();
  FUN_1000604fc();
  lVar12 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 8);
  local_80 = uVar7;
  lStack_78 = lVar12;
  FUN_1001b63bc("Anthropic-Device-ID");
  FUN_100abb91c();
  FUN_100abb928(uVar7);
  puVar8 = &local_80;
  FUN_100abb53c();
  (**(code **)(unaff_x20 + 0x50))();
  puVar4 = puVar8;
  if (lVar12 != 0) {
    FUN_10031e284();
    uVar7 = *puVar4;
    puVar4 = (undefined8 *)puVar4[1];
    _swift_bridgeObjectRetain(puVar4);
    _swift_bridgeObjectRetain(lVar12);
    FUN_100abb390(puVar8,lVar12,uVar7,puVar4);
    FUN_10001683c();
    _swift_bridgeObjectRelease();
  }
  FUN_10031e29c();
  uVar7 = *puVar4;
  uVar2 = puVar4[1];
  pcVar1 = *(code **)(unaff_x20 + 0x60);
  uVar5 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  (*pcVar1)(lVar11);
  __s10Foundation4UUIDV10uuidStringSSvg();
  lVar9 = lVar12;
  __sSS10lowercasedSSyF();
  _swift_bridgeObjectRelease(lVar12);
  (**(code **)(lVar13 + 8))(lVar11,lVar3);
  _swift_bridgeObjectRetain(lVar9);
  lVar3 = lVar9;
  FUN_100abb390(uVar5,lVar9,uVar7,uVar2);
  _swift_bridgeObjectRelease(lVar9);
  FUN_1000604fc();
  puVar10 = PTR__OBJC_CLASS___NSBundle_107485068;
  FUN_1058dbce0();
  FUN_1058cafa0();
  if (puVar10 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    FUN_100037948();
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
  }
  lVar12 = 0;
  FUN_100abb934();
  FUN_1058ad4e0();
  if (lVar12 == 0) {
    lVar12 = 0;
    lVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar6 = puVar10;
  FUN_100abb0f0(puVar10,lVar12,lVar3);
  lVar3 = lVar12;
  FUN_1000604fc();
  _swift_bridgeObjectRelease();
  if (lVar12 != 0) {
    FUN_100abb93c("Anthropic-Client-App");
    FUN_100abb91c();
    FUN_100abb390();
    FUN_10005fb54();
    puVar10 = puVar6;
    lVar3 = lVar12;
  }
  FUN_100abb934();
  FUN_1058cafa0();
  uVar7 = 0;
  if (puVar10 == (undefined *)0x0) {
    uStack_a8 = 0;
    local_b0 = 0;
    local_98 = 0;
    uStack_a0 = 0;
LAB_100abaf90:
    puVar4 = &local_b0;
    FUN_100abb570();
  }
  else {
    FUN_100037948(0);
    FUN_100abb948();
    puVar4 = (undefined8 *)0xd00000000000001a;
    lVar3 = -0x7ffffffef9cf4630;
    FUN_100abb1a0(&local_b0,0xd00000000000001a,0x800000010630b9d0,uVar7);
    FUN_10005fb54();
    if (local_98 == 0) goto LAB_100abaf90;
    FUN_100abb8f4();
    lVar12 = lStack_b8;
    puVar8 = local_c0;
    if (((ulong)puVar4 & 1) != 0) {
      _swift_bridgeObjectRetain("Anthropic-Client-Version",lStack_b8);
      FUN_100abb91c();
      FUN_100abb390();
      FUN_10001683c();
      puVar4 = puVar8;
      lVar3 = lVar12;
    }
  }
  FUN_100abb934();
  FUN_1058cafa0();
  puVar8 = (undefined8 *)0x0;
  if (puVar4 == (undefined8 *)0x0) {
    uStack_a8 = 0;
    local_b0 = 0;
    local_98 = 0;
    uStack_a0 = 0;
  }
  else {
    FUN_100037948();
    FUN_100abb948();
    lVar3 = -0x109190968c8d9aaa;
    FUN_100abb1a0(&local_b0,0x656c646e75424643,0xef6e6f6973726556,puVar8);
    _swift_bridgeObjectRelease();
    if (local_98 != 0) {
      FUN_100abb8f4();
      if (((ulong)puVar8 & 1) != 0) {
        FUN_100abb93c("Anthropic-Client-Build");
        FUN_100abb91c();
        FUN_100abb390(local_c0);
        FUN_10005fb54();
        puVar8 = local_c0;
        lVar3 = lStack_b8;
      }
      goto LAB_100abb050;
    }
  }
  puVar8 = &local_b0;
  FUN_100abb570(puVar8);
LAB_100abb050:
  if ((*(byte *)(unaff_x20 + 0x48) & 1) != 0) {
    FUN_100abba6c();
    if (lVar3 != 0) {
      _swift_bridgeObjectRetain(lVar3);
      FUN_100abb390(puVar8,lVar3,0x726f687475412d58,0xef6e6f6974617a69);
      _swift_bridgeObjectRelease(lVar3);
    }
    FUN_100abb928(0x5355,0xe200000000000000);
  }
  return local_88;
}

