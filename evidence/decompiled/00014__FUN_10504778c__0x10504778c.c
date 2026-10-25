// FUNCTION: FUN_10504778c
// ENTRY: 0x10504778c
// MATCHED: [TimezoneOffset]


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10504778c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + DAT_1079d9908) + DAT_1079da830);
  _objc_msgSend(lVar1,PTR_s_readTimezoneOffset_1076977b0);
  if (lVar1 == 0) {
    FUN_105047fb8();
  }
  else {
    lVar2 = lVar1;
    _objc_msgSend(lVar1,PTR_s_integerValue_1076a4a50);
    lVar3 = *(long *)(unaff_x20 + DAT_1079d9918);
    _objc_msgSend(lVar3,PTR_s_timezoneOffset_1076977e0);
    if (lVar2 != lVar3) {
      FUN_105047098(lVar1);
    }
  }
  _objc_msgSend(*(undefined8 *)(unaff_x20 + DAT_1079d9910),
                PTR_s_addObserver_selector_name_object_1076996c0);
  return 0;
}

