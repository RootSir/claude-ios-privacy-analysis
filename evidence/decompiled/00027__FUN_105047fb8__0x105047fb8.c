// FUNCTION: FUN_105047fb8
// ENTRY: 0x105047fb8
// MATCHED: [TimezoneOffset]


void FUN_105047fb8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + DAT_1079d9908);
  uVar1 = *(undefined8 *)(unaff_x20 + DAT_1079d9918);
  _objc_msgSend(uVar1,PTR_s_timezoneOffset_1076977e0);
  _objc_msgSend(*(undefined8 *)(lVar2 + DAT_1079da830),PTR_s_storeTimezoneOffset__1076977c0,uVar1);
  return;
}

