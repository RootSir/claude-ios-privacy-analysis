// FUNCTION: FUN_10440fb28
// ENTRY: 0x10440fb28
// MATCHED: [AppAttest]


/* WARNING: Function: _objc_release_x8 replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_release_x21 replaced with injection: _objc_release_fixup */

void FUN_10440fb28(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 local_d8 [8];
  ulong uStack_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [8];
  undefined1 local_b8 [40];
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  ulong *puStack_68;
  
  uVar2 = param_1;
  FUN_10440e1fc();
  if ((uVar2 & 1) == 0) {
    local_88 = 0;
    local_80 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x19);
    _swift_bridgeObjectRelease(local_80);
    local_88 = param_2;
    local_80 = param_3;
    _swift_bridgeObjectRetain(param_3);
    __sSS6appendyySSF(0xd000000000000017,0x80000001063f3560);
    uVar8 = local_80;
    FUN_104410170(local_88,local_80);
    _swift_bridgeObjectRelease(uVar8);
    return;
  }
  FUN_104412648();
  puVar3 = (ulong *)&DAT_107944408;
  FUN_100004d78(&DAT_107944408,&DAT_105df6250);
  puVar6 = puVar3;
  _swift_dynamicCast();
  if (((ulong)puVar6 & 1) == 0) {
    local_90 = param_1;
    _swift_errorRetain(param_1);
    puVar4 = &DAT_107944410;
    FUN_100004d78(&DAT_107944410,&DAT_105df4d70);
    puVar5 = local_b8;
    puVar6 = &local_90;
    _swift_dynamicCast(puVar5,puVar6,puVar3,puVar4,0xe);
    if (((ulong)puVar5 & 1) != 0) {
      FUN_10000f1f0(local_b8,&local_88);
      FUN_10000f09c(&local_88,local_70);
      (*(code *)puStack_68[8])(local_70);
      if (((uint)puStack_68 & 0xff) != 1) {
        puVar6 = (ulong *)0x0;
        FUN_10000d48c();
        goto LAB_10440fce4;
      }
      FUN_10000d48c(&local_88);
      puVar6 = puStack_68;
    }
    FUN_10441660c(param_1);
    _swift_bridgeObjectRetain();
  }
LAB_10440fce4:
  FUN_104412648();
  FUN_1044126c4();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_104412648();
    FUN_104410acc(0);
    iVar1 = (int)local_b8;
    FUN_1044126c4();
    if (iVar1 == 0) {
      uVar8 = *(undefined8 *)(unaff_x20 + 0x150);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x158);
      lVar7 = unaff_x20 + 0x138;
      FUN_1000f0878(lVar7);
      puVar6 = (ulong *)PTR___swiftEmptyArrayStorage_1074919e0;
      FUN_10035e0b0(lVar7,3,param_1,PTR___swiftEmptyArrayStorage_1074919e0,
                    "ClaudeDeviceCheck/AppAttestEnroller.swift",0x29,2,0x168,uVar8,uVar9);
      _swift_bridgeObjectRelease();
    }
    else {
      puVar6 = (ulong *)0x0;
    }
  }
  FUN_104412648();
  FUN_1044126c4();
  if (((ulong)puVar6 & 1) == 0) {
    _swift_getErrorValue(param_1,auStack_c0,local_d8);
    FUN_101407df4(uStack_d0,local_c8);
    if ((uStack_d0 & 1) == 0) {
      FUN_104412648();
      uVar8 = 0;
      FUN_104410acc(0);
      puVar5 = local_b8;
      _swift_dynamicCast(puVar5,&local_88,puVar3,uVar8,6);
      if ((int)puVar5 != 0) {
        puVar4 = &DAT_107944258;
        FUN_10000c2cc(&DAT_107944258,FUN_104410acc,&TargetProtocolConformanceDescriptor_105df4c58);
        __s10Foundation21_BridgedStoredNSErrorPAAE4code4CodeQzvg(&local_90,uVar8,puVar4);
        if (local_90 == 4) goto LAB_10440fe24;
      }
      FUN_10441255c();
      FUN_10440eab0();
    }
  }
LAB_10440fe24:
  local_88 = 0;
  local_80 = 0xe000000000000000;
  FUN_10145bbac();
  FUN_100aa0410();
  __ss11_StringGutsV4growyySiF(0x12);
  _swift_bridgeObjectRelease(local_80);
  local_88 = param_2;
  local_80 = param_3;
  _swift_bridgeObjectRetain(param_3);
  uVar8 = 0x2064656c69616620;
  uVar9 = 0xe900000000000028;
  __sSS6appendyySSF(0x2064656c69616620,0xe900000000000028);
  FUN_10145bbac();
  FUN_10440b868();
  FUN_10145bbac();
  FUN_100aa38c0();
  __sSS6appendyySSF(uVar8,uVar9);
  _swift_bridgeObjectRelease(uVar9);
  __sSS6appendyySSF(0x203b29,&DAT_e300000000000000);
  __sSS6appendyySSF(param_4,param_5);
  uVar8 = local_80;
  FUN_10145bbac();
  FUN_10440ff10();
  FUN_10145bbac();
  FUN_100aa38c0();
  _swift_bridgeObjectRelease(uVar8);
  FUN_10145bbac();
  FUN_100aa38c0();
  return;
}

