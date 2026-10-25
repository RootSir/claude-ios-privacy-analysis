// FUNCTION @ 0x100abb0f0 size=176

undefined1  [16] FUN_100abb0f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  uVar2 = 0;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    uVar3 = 0;
    lVar1 = -0x2fffffffffffffe4;
    FUN_100298d60(0xd00000000000001c);
    if ((uVar3 & 1) != 0) {
      FUN_100036bf8(*(long *)(param_1 + 0x38) + lVar1 * 0x20,auStack_50);
      _swift_dynamicCast(&local_60,auStack_50,PTR___sypN_1074919c0 + 8,PTR___sSSN_10748f1d8,6);
      if ((uVar2 & 1) != 0) goto LAB_100abb184;
    }
  }
  _swift_bridgeObjectRetain(param_3);
  local_60 = param_2;
  uStack_58 = param_3;
LAB_100abb184:
  auVar4._8_8_ = uStack_58;
  auVar4._0_8_ = local_60;
  return auVar4;
}


