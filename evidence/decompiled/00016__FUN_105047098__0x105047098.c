// FUNCTION: FUN_105047098
// ENTRY: 0x105047098
// MATCHED: [TimezoneOffset]


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_105047098(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long local_e8 [3];
  undefined8 local_d0;
  undefined *local_48;
  
  if (param_1 == 0) {
    param_1 = *(long *)(*(long *)(unaff_x20 + DAT_1079d9908) + DAT_1079da830);
    _objc_msgSend(param_1,PTR_s_readTimezoneOffset_1076977b0);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + DAT_1079d9918);
  _objc_msgSend(uVar5,PTR_s_timezoneOffset_1076977e0);
  puVar2 = &DAT_1079d7bb0;
  FUN_105009c00();
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(undefined8 *)(puVar2 + 0x20) = 0x6e6f69746361;
  *(undefined1 **)(puVar2 + 0x28) = &LAB_e600000000000000;
  puVar1 = PTR___sSSN_10748f1d8;
  *(undefined8 *)(puVar2 + 0x30) = 0x454e4f5a454d4954;
  *(undefined8 *)(puVar2 + 0x38) = 0xef45474e4148435f;
  *(undefined **)(puVar2 + 0x78) = PTR___ss5Int64VN_107491208;
  *(undefined **)(puVar2 + 0x48) = puVar1;
  *(undefined8 *)(puVar2 + 0x50) = 0xd000000000000018;
  *(undefined8 *)(puVar2 + 0x58) = 0x80000001064307f0;
  *(undefined8 *)(puVar2 + 0x60) = uVar5;
  __sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfC();
  local_48 = puVar2;
  if (param_1 != 0) {
    uVar5 = 0;
    FUN_100015f18(0,&DAT_1079d7830,&PTR__OBJC_CLASS___NSNumber_1074851b8);
    local_e8[0] = param_1;
    local_d0 = uVar5;
    FUN_105016164(local_e8,&DAT_d000000000000019,0x8000000106430810);
  }
  puVar2 = local_48;
  ppuVar3 = &PTR_PTR_107702840;
  _objc_allocWithZone(&PTR_PTR_107702840);
  uVar5 = 2;
  FUN_1050483a4(2,0x652e656369766564,0xec000000746e6576,puVar2,ppuVar3);
  FUN_105016534(0x6d6574737973,&LAB_e600000000000000,uVar5);
  lVar4 = unaff_x20 + DAT_1079d98f8;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 != 0) {
    _objc_msgSend();
    _swift_unknownObjectRelease(lVar4);
  }
  FUN_105047fb8();
  return 0;
}

