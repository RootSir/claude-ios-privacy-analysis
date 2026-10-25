// FUNCTION: FUN_100abb390
// ENTRY: 0x100abb390
// MATCHED: [addr:0x100abb390]


void FUN_100abb390(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong *unaff_x20;
  ulong uVar10;
  
  uVar3 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar10 = *unaff_x20;
  lVar4 = param_3;
  uVar7 = param_4;
  FUN_100298d60();
  lVar8 = *(long *)(uVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar7 & 1;
  if (SCARRY8(lVar8,uVar9)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100abb4bc);
    (*pcVar2)();
  }
  puVar5 = &DAT_1077a11e0;
  FUN_100004d78(&DAT_1077a11e0,&DAT_105a5e858);
  __ss17_NativeDictionaryV12ensureUnique02isD08capacityS2b_SitF(uVar3,lVar8 + uVar9,puVar5);
  if (((uVar3 & 1) != 0) &&
     (lVar4 = param_3, uVar3 = param_4, FUN_100298d60(), ((uint)uVar7 & 1) != ((uint)uVar3 & 1))) {
    __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(PTR___sSSN_10748f1d8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100abb4cc);
    (*pcVar2)();
  }
  if ((uVar7 & 1) == 0) {
    FUN_1001af95c(lVar4,param_3,param_4,param_1,param_2,uVar10);
    _swift_bridgeObjectRetain(param_4);
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(uVar10 + 0x38) + lVar4 * 0x10);
    uVar6 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_bridgeObjectRelease(uVar6);
  }
  *unaff_x20 = uVar10;
  return;
}

