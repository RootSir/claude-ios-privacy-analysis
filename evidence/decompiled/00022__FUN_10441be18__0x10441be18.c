// FUNCTION: FUN_10441be18
// ENTRY: 0x10441be18
// MATCHED: [DeviceCheck]


void FUN_10441be18(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x70);
  lVar1 = *(long *)(unaff_x22 + 0x10);
  _swift_release_x8(*(undefined8 *)(unaff_x22 + 0x38));
  uVar5 = *(undefined8 *)(lVar1 + 0xb8);
  uVar2 = *(undefined8 *)(lVar1 + 0xc0);
  FUN_10000f09c(lVar1 + 0xa0,uVar5);
  uVar3 = uVar5;
  FUN_100187788(uVar5,uVar2);
  FUN_10035e0b0(3,uVar4,uVar3,"ClaudeDeviceCheck/DeviceCheckTokenReporter.swift",0x30,2,0x44,uVar5,
                uVar2);
  _swift_bridgeObjectRelease(uVar3);
  FUN_10441c344();
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  if ((uVar4 & 1) == 0) {
    FUN_10441c120(0x20b8dfa69d000000,0xf3f);
  }
  _swift_errorRelease(uVar5);
  FUN_100159758();
                    /* WARNING: Could not recover jumptable at 0x00010441bef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

