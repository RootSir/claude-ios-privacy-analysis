// FUNCTION: FUN_1050d20e4
// ENTRY: 0x1050d20e4
// MATCHED: [identifierForVendor]


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1050d20e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar3 = 0;
  local_68 = param_3;
  __s10Foundation4DateVMa();
  (*(code *)PTR____chkstk_darwin_107486550)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_1079d7728;
  FUN_105009c00();
  (*(code *)PTR____chkstk_darwin_107486550)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_107486550)();
  lVar3 = lVar8 - extraout_x12;
  _swift_getObjectType(param_1);
  uVar2 = (uint)param_1;
  (**(code **)(param_2 + 8))();
  puVar4 = PTR__OBJC_CLASS___UIDevice_107481178;
  _objc_msgSend(PTR__OBJC_CLASS___UIDevice_107481178,PTR_s_currentDevice_10769d3c8);
  puVar5 = puVar4;
  _objc_msgSend();
  bVar1 = puVar5 == (undefined *)0x0;
  if (bVar1) {
    __s10Foundation4UUIDVMa();
  }
  else {
    __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(lVar8);
    puVar5 = (undefined *)0x0;
    __s10Foundation4UUIDVMa();
  }
  FUN_100004dc0(lVar8,bVar1,1,puVar5);
  FUN_1050d2c08(lVar8,lVar3);
  __s10Foundation4UUIDVMa(0);
  uVar6 = 1;
  lVar8 = lVar3;
  FUN_100004ff0(lVar3,1,puVar5);
  if ((int)lVar8 == 1) {
    FUN_105009c88(lVar3);
    lVar8 = 0;
    uVar6 = 0;
  }
  else {
    __s10Foundation4UUIDV10uuidStringSSvg();
    (**(code **)(*(long *)(puVar5 + -8) + 8))(lVar3,puVar5);
  }
  _swift_bridgeObjectRetain(param_4);
  puVar5 = PTR_s_systemVersion_1076b2a28;
  _objc_msgSend(puVar4,PTR_s_systemVersion_1076b2a28);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  FUN_105119bb4(puVar7,0);
  FUN_1050a2dac(0);
  _objc_allocWithZone();
  FUN_1050a2c28(local_68,param_4,puVar4,puVar5,lVar8,uVar6,uVar2 & 1,puVar7);
  return local_68;
}

