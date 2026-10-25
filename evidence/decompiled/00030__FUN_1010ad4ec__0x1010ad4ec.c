// FUNCTION: FUN_1010ad4ec
// ENTRY: 0x1010ad4ec
// MATCHED: [reattest]


/* WARNING: Function: _objc_release_x20 replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_release_x8 replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001010ad588) */
/* WARNING: Removing unreachable block (ram,0x0001010ad59c) */
/* WARNING: Removing unreachable block (ram,0x0001010ad5b0) */
/* WARNING: Removing unreachable block (ram,0x0001010addf0) */
/* WARNING: Removing unreachable block (ram,0x0001010ad6cc) */

undefined1 FUN_1010ad4ec(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined *local_238;
  undefined *local_230;
  undefined *local_228;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_128 [24];
  undefined8 local_110;
  long lStack_108;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  
  lVar3 = 0;
  __s2os6LoggerVMa();
  lVar18 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_107486550)(*(undefined8 *)(lVar18 + 0x40));
  (*(code *)PTR____chkstk_darwin_107486550)();
  lVar17 = (long)&local_250 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar16 = *(long *)(unaff_x20 + 0x38);
  FUN_1013dbdfc(param_1[2],param_1[3]);
  FUN_1000160d4(lVar16 + 0x70,local_128);
  lVar4 = lStack_108;
  uVar2 = local_110;
  FUN_10000f09c(local_128,local_110);
  uVar20 = *param_1;
  uVar15 = param_1[1];
  local_80 = *(undefined8 *)(lVar16 + 0x20);
  uVar22 = *(undefined8 *)(lVar16 + 0x28);
  pcVar19 = *(code **)(lVar4 + 0x10);
  puStack_78 = (undefined1 *)uVar22;
  _swift_bridgeObjectRetain(uVar22);
  local_250 = uVar15;
  uStack_248 = uVar20;
  (*pcVar19)(uVar20,uVar15,&local_80,&DAT_1070b4f48,&PTR_PTR_1070b4cb0,uVar2,lVar4);
  _swift_bridgeObjectRelease(uVar22);
  FUN_10000d48c(local_128);
  FUN_1000160d4(lVar16 + 0x70,local_128);
  lVar4 = lStack_108;
  uVar20 = local_110;
  FUN_10000f09c(local_128,local_110);
  local_80 = *(undefined8 *)(lVar16 + 0x30);
  puStack_78 = *(undefined1 **)(lVar16 + 0x38);
  (**(code **)(lVar4 + 0x18))(&local_80,&DAT_1070b4f48,&PTR_PTR_1070b4cb0,uVar20,lVar4);
  FUN_10000d48c(local_128);
  puVar21 = (undefined1 *)param_1[7];
  uVar20 = param_1[6];
  local_80 = uVar20;
  puStack_78 = puVar21;
  if (puVar21 != (undefined1 *)0x0) {
    FUN_1000160d4(lVar16 + 0x70,local_128);
    lVar4 = lStack_108;
    uVar22 = local_110;
    FUN_10000f09c(local_128,local_110);
    local_90 = *(undefined8 *)(lVar16 + 0x30);
    uVar15 = *(undefined8 *)(lVar16 + 0x38);
    pcVar19 = *(code **)(lVar4 + 0x10);
    puStack_88 = (undefined1 *)uVar15;
    _swift_bridgeObjectRetain(uVar15);
    (*pcVar19)(uVar20,puVar21,&local_90,&DAT_1070b4f48,&PTR_PTR_1070b4cb0,uVar22,lVar4);
    _swift_bridgeObjectRelease(uVar15);
    FUN_10000d48c(local_128);
  }
  FUN_1000160d4(lVar16 + 0x70,local_128);
  lVar4 = lStack_108;
  uVar20 = local_110;
  FUN_10000f09c(local_128,local_110);
  local_90 = *(undefined8 *)(lVar16 + 0x40);
  puStack_88 = *(undefined1 **)(lVar16 + 0x48);
  (**(code **)(lVar4 + 0x18))(&local_90,&DAT_1070b4f48,&PTR_PTR_1070b4cb0,uVar20,lVar4);
  FUN_10000d48c(local_128);
  puVar21 = (undefined1 *)param_1[5];
  uVar20 = param_1[4];
  local_90 = uVar20;
  puStack_88 = puVar21;
  if (puVar21 != (undefined1 *)0x0) {
    FUN_1000160d4(lVar16 + 0x70,local_128);
    FUN_10000f09c(local_128,local_110);
    local_1e8 = *(undefined8 *)(lVar16 + 0x40);
    uVar15 = *(undefined8 *)(lVar16 + 0x48);
    pcVar19 = *(code **)(lStack_108 + 0x10);
    uStack_1e0 = uVar15;
    _swift_bridgeObjectRetain(uVar15);
    (*pcVar19)(uVar20,puVar21,&local_1e8,&DAT_1070b4f48,&PTR_PTR_1070b4cb0,local_110,lStack_108);
    _swift_bridgeObjectRelease(uVar15);
    FUN_10000d48c(local_128);
  }
  if (DAT_1077d13c8 != -1) {
    _swift_once(&DAT_1077d13c8,FUN_1010aa198);
  }
  lVar4 = lVar3;
  FUN_100005ebc(lVar3,&DAT_1077d13d0);
  (**(code **)(lVar18 + 0x10))(lVar17,lVar4,lVar3);
  puVar5 = &DAT_1070820b8;
  _swift_allocObject(&DAT_1070820b8,0x50,7);
  uVar20 = *param_1;
  uVar22 = param_1[3];
  uVar15 = param_1[2];
  *(undefined8 *)(puVar5 + 0x18) = param_1[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar20;
  *(undefined8 *)(puVar5 + 0x28) = uVar22;
  *(undefined8 *)(puVar5 + 0x20) = uVar15;
  uVar20 = param_1[4];
  uVar22 = param_1[7];
  uVar15 = param_1[6];
  *(undefined8 *)(puVar5 + 0x38) = param_1[5];
  *(undefined8 *)(puVar5 + 0x30) = uVar20;
  *(undefined8 *)(puVar5 + 0x48) = uVar22;
  *(undefined8 *)(puVar5 + 0x40) = uVar15;
  puVar6 = &DAT_1070820e0;
  _swift_allocObject(&DAT_1070820e0,0x50,7);
  uVar20 = *param_1;
  uVar22 = param_1[3];
  uVar15 = param_1[2];
  *(undefined8 *)(puVar6 + 0x18) = param_1[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar20;
  *(undefined8 *)(puVar6 + 0x28) = uVar22;
  *(undefined8 *)(puVar6 + 0x20) = uVar15;
  uVar20 = param_1[4];
  uVar22 = param_1[7];
  uVar15 = param_1[6];
  *(undefined8 *)(puVar6 + 0x38) = param_1[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar20;
  *(undefined8 *)(puVar6 + 0x48) = uVar22;
  *(undefined8 *)(puVar6 + 0x40) = uVar15;
  FUN_1010ba348(param_1,local_128);
  puVar7 = &DAT_107082108;
  _swift_allocObject(&DAT_107082108,0x50,7);
  uVar20 = *param_1;
  uVar22 = param_1[3];
  uVar15 = param_1[2];
  *(undefined8 *)(puVar7 + 0x18) = param_1[1];
  *(undefined8 *)(puVar7 + 0x10) = uVar20;
  *(undefined8 *)(puVar7 + 0x28) = uVar22;
  *(undefined8 *)(puVar7 + 0x20) = uVar15;
  uVar20 = param_1[4];
  uVar22 = param_1[7];
  uVar15 = param_1[6];
  *(undefined8 *)(puVar7 + 0x38) = param_1[5];
  *(undefined8 *)(puVar7 + 0x30) = uVar20;
  *(undefined8 *)(puVar7 + 0x48) = uVar22;
  *(undefined8 *)(puVar7 + 0x40) = uVar15;
  FUN_1010ba348(param_1,local_128);
  FUN_1010ba348(param_1,local_128);
  __s2os6LoggerV9logObjectSo03OS_a1_C0Cvg();
  puVar8 = param_1;
  __sSo13os_log_type_ta0A0E4infoABvgZ();
  local_240 = CONCAT44(local_240._4_4_,(int)puVar8);
  puVar9 = &DAT_107082130;
  _swift_allocObject(&DAT_107082130,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_1010ba338;
  *(undefined **)(puVar9 + 0x18) = puVar5;
  puVar10 = &DAT_107082158;
  _swift_allocObject(&DAT_107082158,0x20,7);
  *(code **)(puVar10 + 0x10) = thunk_FUN_1001ff24c;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  puVar11 = &DAT_107082180;
  _swift_allocObject(&DAT_107082180,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_1010ba340;
  *(undefined **)(puVar11 + 0x18) = puVar6;
  puVar12 = &DAT_1070821a8;
  _swift_allocObject(&DAT_1070821a8,0x20,7);
  *(code **)(puVar12 + 0x10) = thunk_FUN_1001ff24c;
  *(undefined **)(puVar12 + 0x18) = puVar11;
  puVar13 = &DAT_1070821d0;
  _swift_allocObject(&DAT_1070821d0,0x20,7);
  *(code **)(puVar13 + 0x10) = FUN_1010ba3c0;
  *(undefined **)(puVar13 + 0x18) = puVar7;
  puVar7 = &DAT_1070821f8;
  _swift_allocObject(&DAT_1070821f8,0x20,7);
  *(code **)(puVar7 + 0x10) = thunk_FUN_1001ff24c;
  *(undefined **)(puVar7 + 0x18) = puVar13;
  puVar13 = &DAT_1077d1608;
  FUN_100004d78(&DAT_1077d1608,&DAT_105aae9b8);
  _swift_initStackObject();
  *(undefined8 *)(puVar13 + 0x18) = 0x12;
  *(undefined8 *)(puVar13 + 0x10) = 9;
  *(code **)(puVar13 + 0x20) = FUN_100c0a8d8;
  *(undefined8 *)(puVar13 + 0x28) = 0;
  *(code **)(puVar13 + 0x30) = FUN_1001fef84;
  *(undefined8 *)(puVar13 + 0x38) = 0;
  *(code **)(puVar13 + 0x40) = thunk_FUN_1010b9ea8;
  *(undefined **)(puVar13 + 0x48) = puVar10;
  *(code **)(puVar13 + 0x50) = FUN_100c0a8d8;
  *(undefined8 *)(puVar13 + 0x58) = 0;
  *(code **)(puVar13 + 0x60) = FUN_1001fef84;
  *(undefined8 *)(puVar13 + 0x68) = 0;
  *(code **)(puVar13 + 0x70) = thunk_FUN_1010b9ea8;
  *(undefined **)(puVar13 + 0x78) = puVar12;
  *(code **)(puVar13 + 0x80) = FUN_100c0a8d8;
  *(undefined8 *)(puVar13 + 0x88) = 0;
  *(code **)(puVar13 + 0x90) = FUN_1001fef84;
  *(undefined8 *)(puVar13 + 0x98) = 0;
  *(code **)(puVar13 + 0xa0) = thunk_FUN_1010b9ea8;
  *(undefined **)(puVar13 + 0xa8) = puVar7;
  _swift_retain_x8(puVar5);
  local_228 = puVar9;
  _swift_retain_x21();
  local_238 = puVar6;
  _swift_retain_x27();
  local_230 = puVar11;
  _swift_retain_x26();
  _swift_retain_x25();
  _swift_retain_x28();
  _swift_retain_x20();
  _swift_retain_x23();
  _swift_retain_x26();
  _swift_release_x24();
  uVar1 = (uint)local_240 & 0xff;
  puVar8 = param_1;
  _os_log_type_enabled(param_1,uVar1);
  if ((int)puVar8 == 0) {
    (**(code **)(lVar18 + 8))(lVar17,lVar3);
    _swift_release_x20(param_1,0);
    _swift_release_x8(local_228);
    _swift_release_x8(puVar5);
    _swift_release_x23();
    _swift_release_x8(local_230);
    _swift_release_x8(local_238);
    _swift_release_x26();
    _swift_release_x28();
    _swift_release_x25();
  }
  else {
    puVar14 = (undefined4 *)&LAB_00000020;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    uVar15 = 0x60;
    _swift_slowAlloc(0x60,0xffffffffffffffff);
    *puVar14 = 0x8220302;
    uVar20 = uStack_248;
    local_240 = uVar15;
    local_1e8 = uVar15;
    FUN_1010b85d4(uStack_248,local_250,&local_1e8);
    *(undefined8 *)(puVar14 + 1) = uVar20;
    *(undefined2 *)(puVar14 + 3) = 0x822;
    uVar20 = 0x6c696e;
    if (puStack_78 != (undefined1 *)0x0) {
      uVar20 = local_80;
    }
    puVar21 = &DAT_e300000000000000;
    if (puStack_78 != (undefined1 *)0x0) {
      puVar21 = puStack_78;
    }
    FUN_10005f560(&local_80,local_128,&DAT_1077d1648,&DAT_105aaea28);
    FUN_1010b85d4(uVar20,puVar21,&local_1e8);
    _swift_bridgeObjectRelease(puVar21);
    *(undefined8 *)((long)puVar14 + 0xe) = uVar20;
    *(undefined2 *)((long)puVar14 + 0x16) = 0x822;
    uVar20 = 0x6c696e;
    if (puStack_88 != (undefined1 *)0x0) {
      uVar20 = local_90;
    }
    puVar21 = &DAT_e300000000000000;
    if (puStack_88 != (undefined1 *)0x0) {
      puVar21 = puStack_88;
    }
    FUN_10005f560(&local_90,local_128,&DAT_1077d1648,&DAT_105aaea28);
    FUN_1010b85d4(uVar20,puVar21,&local_1e8);
    _swift_bridgeObjectRelease(puVar21);
    *(undefined8 *)(puVar14 + 6) = uVar20;
    _swift_release_x28();
    _swift_release_x26();
    _swift_release_x23();
    _swift_release_x20();
    _swift_release_x25();
    _swift_release_x8(local_230);
    _swift_release_x8(local_238);
    _swift_release_x8(local_228);
    _swift_release_x8(puVar5);
    __os_log_impl(0x100000000,param_1,uVar1,
                  "Trusted device enrolled deviceId=%{public}s reattestKid=%{public}s deviceBindingKid=%{public}s"
                  ,puVar14,0x20);
    uVar20 = local_240;
    _swift_arrayDestroy(local_240,3,PTR___sypN_1074919c0 + 8);
    _swift_slowDealloc(uVar20,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
    (**(code **)(lVar18 + 8))(lVar17,lVar3);
  }
  puVar5 = &DAT_105aaec90;
  puVar7 = puVar5;
  _swift_getKeyPath(&DAT_105aaec90);
  puVar6 = &DAT_1077d1380;
  FUN_10000c2cc(&DAT_1077d1380,FUN_1010b8f20,&TargetProtocolConformanceDescriptor_105aae6f0);
  __s11Observation0A9RegistrarV6access_7keyPathyx_s03KeyE0Cyxq_GtAA10ObservableRzr0_lF
            (local_128,puVar7,puVar6);
  _swift_release_x23();
  _swift_getKeyPath(&DAT_105aaec90);
  __s11Observation0A9RegistrarV7willSet_7keyPathyx_s03KeyF0Cyxq_GtAA10ObservableRzr0_lF
            (local_128,puVar5,puVar6);
  _swift_release_x22();
  if (!SCARRY8(*(long *)(unaff_x20 + DAT_1077d13a0),1)) {
    *(long *)(unaff_x20 + DAT_1077d13a0) = *(long *)(unaff_x20 + DAT_1077d13a0) + 1;
    puVar5 = &DAT_105aaec90;
    _swift_getKeyPath(&DAT_105aaec90);
    __s11Observation0A9RegistrarV6didSet_7keyPathyx_s03KeyF0Cyxq_GtAA10ObservableRzr0_lF
              (local_128,puVar5,puVar6);
    _swift_release_x22();
    if (!SCARRY8(*(long *)(unaff_x20 + DAT_1077d13b0),1)) {
      *(long *)(unaff_x20 + DAT_1077d13b0) = *(long *)(unaff_x20 + DAT_1077d13b0) + 1;
      FUN_1010b1dc4(local_128);
      local_1e8 = 0;
      FUN_1002a57f0(&local_1e8,local_128,PTR___sSiN_10748f7a0,&PTR_PTR_106fb1b98);
      return 1;
    }
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x1010adfb8);
    (*pcVar19)();
  }
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x1010adfb4);
  (*pcVar19)();
}

