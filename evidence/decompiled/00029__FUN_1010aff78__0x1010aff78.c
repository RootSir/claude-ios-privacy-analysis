// FUNCTION: FUN_1010aff78
// ENTRY: 0x1010aff78
// MATCHED: [Reattest]


/* WARNING: Function: _objc_release_x21 replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_release_x20 replaced with injection: _objc_release_fixup */

void FUN_1010aff78(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,undefined1 *param_7,undefined8 param_8,
                  undefined4 param_9)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  long extraout_x8;
  long unaff_x20;
  long lVar28;
  undefined *puVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined *local_2a0;
  undefined *local_298;
  undefined *local_290;
  long local_288;
  undefined8 local_1c8 [35];
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined8 local_78;
  ushort local_70;
  
  lVar2 = 0;
  __s2os6LoggerVMa();
  lVar28 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_107486550)(*(undefined8 *)(lVar28 + 0x40));
  lVar31 = (long)&local_2c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (DAT_1077d13c8 != -1) {
    _swift_once(&DAT_1077d13c8,FUN_1010aa198);
    lVar2 = lVar3;
  }
  lVar4 = lVar2;
  FUN_100005ebc(lVar2,&DAT_1077d13d0);
  (**(code **)(lVar28 + 0x10))(lVar31,lVar4,lVar2);
  puVar5 = &DAT_107081b68;
  _swift_allocObject(&DAT_107081b68,0x21,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  puVar5[0x20] = (char)param_3;
  puVar6 = &DAT_107081b90;
  local_288 = lVar28;
  _swift_allocObject(&DAT_107081b90,0x11,7);
  puVar6[0x10] = param_9._1_1_;
  puVar7 = &DAT_107081bb8;
  _swift_allocObject(&DAT_107081bb8,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = param_6;
  *(undefined1 **)(puVar7 + 0x18) = param_7;
  puVar8 = &DAT_107081be0;
  _swift_allocObject(&DAT_107081be0,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = param_4;
  *(undefined1 **)(puVar8 + 0x18) = param_5;
  puVar9 = &DAT_107081c08;
  _swift_allocObject(&DAT_107081c08,0x19,7);
  *(undefined8 *)(puVar9 + 0x10) = param_8;
  puVar9[0x18] = (byte)param_9;
  FUN_100aa0410(param_1,param_2,param_3);
  _swift_bridgeObjectRetain(param_5);
  puVar10 = param_7;
  _swift_bridgeObjectRetain();
  __s2os6LoggerV9logObjectSo03OS_a1_C0Cvg();
  puVar11 = puVar10;
  __sSo13os_log_type_ta0A0E4infoABvgZ();
  puVar12 = &DAT_107081c30;
  _swift_allocObject(&DAT_107081c30,0x20,7);
  *(code **)(puVar12 + 0x10) = FUN_1010ba09c;
  *(undefined **)(puVar12 + 0x18) = puVar5;
  puVar29 = &DAT_107081c58;
  _swift_allocObject(&DAT_107081c58,0x20,7);
  *(code **)(puVar29 + 0x10) = thunk_FUN_1001ff24c;
  *(undefined **)(puVar29 + 0x18) = puVar12;
  puVar13 = &DAT_107081c80;
  _swift_allocObject(&DAT_107081c80,0x20,7);
  *(code **)(puVar13 + 0x10) = FUN_1010ba0d4;
  *(undefined **)(puVar13 + 0x18) = puVar6;
  puVar14 = &DAT_107081ca8;
  _swift_allocObject(&DAT_107081ca8,0x20,7);
  *(code **)(puVar14 + 0x10) = thunk_FUN_1001ff24c;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  puVar15 = &DAT_107081cd0;
  _swift_allocObject(&DAT_107081cd0,0x20,7);
  *(code **)(puVar15 + 0x10) = FUN_1010ba0dc;
  *(undefined **)(puVar15 + 0x18) = puVar7;
  puVar16 = &DAT_107081cf8;
  _swift_allocObject(&DAT_107081cf8,0x20,7);
  *(code **)(puVar16 + 0x10) = thunk_FUN_1001ff24c;
  *(undefined **)(puVar16 + 0x18) = puVar15;
  puVar17 = &DAT_107081d20;
  _swift_allocObject(&DAT_107081d20,0x20,7);
  *(code **)(puVar17 + 0x10) = thunk_FUN_1010ba0dc;
  *(undefined **)(puVar17 + 0x18) = puVar8;
  puVar18 = &DAT_107081d48;
  _swift_allocObject(&DAT_107081d48,0x20,7);
  *(code **)(puVar18 + 0x10) = thunk_FUN_1001ff24c;
  *(undefined **)(puVar18 + 0x18) = puVar17;
  puVar19 = &DAT_107081d70;
  _swift_allocObject(&DAT_107081d70,0x20,7);
  *(code **)(puVar19 + 0x10) = FUN_1010ba0f0;
  *(undefined **)(puVar19 + 0x18) = puVar9;
  puVar20 = &DAT_107081d98;
  _swift_allocObject(&DAT_107081d98,0x20,7);
  *(code **)(puVar20 + 0x10) = thunk_FUN_10047fe18;
  *(undefined **)(puVar20 + 0x18) = puVar19;
  puVar21 = &DAT_1077d1608;
  FUN_100004d78(&DAT_1077d1608,&DAT_105aae9b8);
  _swift_initStackObject();
  *(undefined8 *)(puVar21 + 0x18) = 0x1e;
  *(undefined8 *)(puVar21 + 0x10) = 0xf;
  *(code **)(puVar21 + 0x20) = FUN_100c0a8d8;
  *(undefined8 *)(puVar21 + 0x28) = 0;
  *(code **)(puVar21 + 0x30) = FUN_1001fef84;
  *(undefined8 *)(puVar21 + 0x38) = 0;
  *(code **)(puVar21 + 0x40) = thunk_FUN_1010b9ea8;
  *(undefined **)(puVar21 + 0x48) = puVar29;
  *(code **)(puVar21 + 0x50) = FUN_100c0a8d8;
  *(undefined8 *)(puVar21 + 0x58) = 0;
  *(code **)(puVar21 + 0x60) = FUN_1001fef84;
  *(undefined8 *)(puVar21 + 0x68) = 0;
  *(code **)(puVar21 + 0x70) = thunk_FUN_1010b9ea8;
  *(undefined **)(puVar21 + 0x78) = puVar14;
  *(code **)(puVar21 + 0x80) = FUN_100c0a8d8;
  *(undefined8 *)(puVar21 + 0x88) = 0;
  *(code **)(puVar21 + 0x90) = FUN_1001fef84;
  *(undefined8 *)(puVar21 + 0x98) = 0;
  *(code **)(puVar21 + 0xa0) = thunk_FUN_1010b9ea8;
  *(undefined **)(puVar21 + 0xa8) = puVar16;
  *(code **)(puVar21 + 0xb0) = FUN_100c0a8d8;
  *(undefined8 *)(puVar21 + 0xb8) = 0;
  *(code **)(puVar21 + 0xc0) = FUN_1001fef84;
  *(undefined8 *)(puVar21 + 200) = 0;
  *(code **)(puVar21 + 0xd0) = thunk_FUN_1010b9ea8;
  *(undefined **)(puVar21 + 0xd8) = puVar18;
  *(code **)(puVar21 + 0xe0) = FUN_100333e84;
  *(undefined8 *)(puVar21 + 0xe8) = 0;
  *(code **)(puVar21 + 0xf0) = FUN_1001fef84;
  *(undefined8 *)(puVar21 + 0xf8) = 0;
  *(code **)(puVar21 + 0x100) = thunk_FUN_100333f80;
  *(undefined **)(puVar21 + 0x108) = puVar20;
  _swift_retain_n(puVar20,2);
  _swift_retain_x8(puVar5);
  _swift_retain_x8(puVar12);
  _swift_retain_x8(puVar6);
  local_290 = puVar13;
  _swift_retain_x27();
  _swift_retain_x8(puVar7);
  local_298 = puVar15;
  _swift_retain_x23();
  _swift_retain_x8(puVar8);
  local_2a0 = puVar17;
  _swift_retain_x26();
  _swift_retain_x26();
  _swift_retain_x28();
  _swift_retain_x21();
  _swift_retain_x8(puVar14);
  _swift_retain_x22();
  _swift_retain_x24();
  _swift_release_x20();
  puVar22 = puVar10;
  _os_log_type_enabled(puVar10,(uint)puVar11 & 0xff);
  if ((int)puVar22 == 0) {
    (**(code **)(local_288 + 8))(lVar31,lVar3);
    _swift_release_x26();
    _swift_release_x28();
    _swift_release_x21();
    _swift_release_x23();
    _swift_release_x22();
    _swift_release_x27();
    _swift_release_n(puVar20,2);
    _swift_release_x8(puVar5);
    _swift_release_x8(puVar12);
    _swift_release_x8(puVar6);
    _swift_release_x8(local_290);
    _swift_release_x8(puVar7);
    _swift_release_x8(local_298);
    _swift_release_x8(puVar8);
    _swift_release_x8(local_2a0);
  }
  else {
    puVar23 = (undefined4 *)&DAT_00000034;
    local_2c0 = puVar29;
    local_2b8 = puVar19;
    local_2b0 = puVar20;
    local_2a8 = puVar18;
    _swift_slowAlloc(0x34,0xffffffffffffffff);
    uVar24 = 0x80;
    _swift_slowAlloc(0x80,0xffffffffffffffff);
    *puVar23 = 0x8220502;
    local_a0 = CONCAT71(local_a0._1_7_,(char)param_3);
    local_1c8[0] = uVar24;
    local_b0 = param_1;
    uStack_a8 = param_2;
    FUN_100aa0410();
    puVar29 = &DAT_107081230;
    puVar30 = &local_b0;
    __sSS10describingSSx_tclufC(puVar30,&DAT_107081230);
    FUN_1010b85d4();
    _swift_bridgeObjectRelease(puVar29);
    *(undefined8 **)(puVar23 + 1) = puVar30;
    *(undefined2 *)(puVar23 + 3) = 0x822;
    puVar30 = (undefined8 *)0x6c696e;
    puVar29 = &DAT_e300000000000000;
    if (param_9._1_1_ != '\v') {
      uVar25 = 0;
      __sScMMa();
      __sScM6sharedScMvgZ();
      puVar29 = PTR___sScMScAsWP_107492968;
      __sScA15unownedExecutorScevgTj(uVar25,PTR___sScMScAsWP_107492968);
      uVar26 = uVar25;
      _swift_task_isCurrentExecutor();
      if ((uVar26 & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("ClaudeTrustedDevice/TrustedDeviceStore.swift",0x2c,1,0x434,uVar25,puVar29);
      }
      local_b0 = CONCAT71(local_b0._1_7_,param_9._1_1_);
      puVar29 = &DAT_107080ed0;
      puVar30 = &local_b0;
      __sSS10describingSSx_tclufC(puVar30,&DAT_107080ed0);
      _swift_release_x24();
    }
    FUN_1010b85d4(puVar30,puVar29,local_1c8);
    _swift_bridgeObjectRelease(puVar29);
    *(undefined8 **)((long)puVar23 + 0xe) = puVar30;
    *(undefined2 *)((long)puVar23 + 0x16) = 0x822;
    uVar27 = 0x6c696e;
    if (param_7 != (undefined1 *)0x0) {
      uVar27 = param_6;
    }
    puVar22 = &DAT_e300000000000000;
    if (param_7 != (undefined1 *)0x0) {
      puVar22 = param_7;
    }
    _swift_bridgeObjectRetain(param_7);
    FUN_1010b85d4(uVar27,puVar22,local_1c8);
    _swift_bridgeObjectRelease(puVar22);
    *(undefined8 *)(puVar23 + 6) = uVar27;
    *(undefined2 *)(puVar23 + 8) = 0x822;
    uVar27 = 0x6c696e;
    if (param_5 != (undefined1 *)0x0) {
      uVar27 = param_4;
    }
    puVar22 = &DAT_e300000000000000;
    if (param_5 != (undefined1 *)0x0) {
      puVar22 = param_5;
    }
    _swift_bridgeObjectRetain(param_5);
    FUN_1010b85d4(uVar27,puVar22,local_1c8);
    _swift_bridgeObjectRelease(puVar22);
    *(undefined8 *)((long)puVar23 + 0x22) = uVar27;
    *(undefined2 *)((long)puVar23 + 0x2a) = 0x800;
    _swift_release_x8(puVar9);
    uVar27 = 0;
    if ((byte)param_9 != 1) {
      uVar27 = param_8;
    }
    *(undefined8 *)(puVar23 + 0xb) = uVar27;
    _swift_release_x8(puVar5);
    _swift_release_x8(puVar12);
    _swift_release_x8(puVar6);
    _swift_release_x8(local_290);
    _swift_release_x8(puVar7);
    _swift_release_x8(local_298);
    _swift_release_x8(puVar8);
    _swift_release_x8(local_2a0);
    _swift_release_x8(local_2c0);
    _swift_release_x8(puVar14);
    _swift_release_x8(puVar16);
    _swift_release_x8(local_2a8);
    _swift_release_n(local_2b0,2);
    _swift_release_x8(local_2b8);
    __os_log_impl(0x100000000,puVar10,(uint)puVar11 & 0xff,
                  "Reattest outcome=%{public}s trigger=%{public}s kid=%{public}s challenge=%{public}s osError=%ld"
                  ,puVar23,0x34);
    _swift_arrayDestroy(uVar24,4,PTR___sypN_1074919c0 + 8);
    _swift_slowDealloc(uVar24,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar23,0xffffffffffffffff,0xffffffffffffffff);
    (**(code **)(local_288 + 8))(lVar31,lVar3);
  }
  pcVar1 = *(code **)(unaff_x20 + 0x68);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x90);
  lVar3 = *(long *)(unaff_x20 + 0x98);
  FUN_10000f09c(unaff_x20 + 0x78,uVar24);
  (**(code **)(lVar3 + 8))(uVar24,lVar3);
  local_a0 = param_3 & 0xff;
  local_70 = (byte)param_9 & 1 | (ushort)((int)uVar24 << 8) & 0x3ff | 0x2000;
  local_b0 = param_1;
  uStack_a8 = param_2;
  local_98 = param_4;
  puStack_90 = param_5;
  local_88 = param_6;
  puStack_80 = param_7;
  local_78 = param_8;
  (*pcVar1)(&local_b0);
  return;
}

