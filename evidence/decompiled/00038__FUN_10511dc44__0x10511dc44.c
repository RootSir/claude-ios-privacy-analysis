// FUNCTION: FUN_10511dc44
// ENTRY: 0x10511dc44
// MATCHED: [identifierForVendor]


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10511dc44(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_1079d56b8 != -1) {
    _swift_once(&DAT_1079d56b8,FUN_105091f04);
  }
  puVar1 = PTR__OBJC_CLASS___UIDevice_107481178;
  _objc_msgSend(PTR__OBJC_CLASS___UIDevice_107481178,PTR_s_currentDevice_10769d3c8);
  _objc_msgSend();
  if (puVar1 != (undefined *)0x0) {
    __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(param_1,puVar1);
  }
  uVar2 = 0;
  __s10Foundation4UUIDVMa(0);
  FUN_100004dc0(param_1,puVar1 == (undefined *)0x0,1,uVar2);
  return;
}

