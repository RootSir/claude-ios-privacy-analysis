// FUNCTION: FUN_104fed2cc
// ENTRY: 0x104fed2cc
// MATCHED: [MobileSubstrate, identifierForVendor]


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_104fed2cc(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  time_t tVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uchar local_7c [20];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1074865a8;
  if ((((uint)DAT_108128840 == (uint)param_1) || (DAT_108128840 = (byte)param_1, (uint)param_1 == 0)
      ) || ((DAT_108128841 & 1) != 0)) goto LAB_104fedb10;
  DAT_108128841 = 1;
  puVar5 = PTR__OBJC_CLASS___NSBundle_107485068;
  FUN_1058dbce0();
  FUN_1058cafa0();
  DAT_108128850 = "iOS";
  puVar6 = PTR__OBJC_CLASS___NSProcessInfo_1074851e0;
  FUN_1058e74c0();
  if (puVar6 == (undefined *)0x0) {
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
  }
  else {
    FUN_1058e2540(&local_98,puVar6);
  }
  puVar6 = PTR__OBJC_CLASS___NSString_107485218;
  FUN_105909bc0();
  FUN_1043ca340();
  pcVar14 = "hw.machine";
  DAT_108128858 = puVar6;
  FUN_104fedd30();
  pcVar7 = "hw.model";
  DAT_108128860 = pcVar14;
  FUN_104fedd30();
  pcVar14 = "kern.version";
  DAT_108128868 = pcVar7;
  FUN_104fedd30();
  pcVar7 = "kern.osversion";
  DAT_108128870 = pcVar14;
  FUN_104fedd30();
  iVar1 = 0x642545d;
  DAT_108128878 = pcVar7;
  FUN_104fedf94("MobileSubstrate",0);
  DAT_108128880 = iVar1 != -1;
  pcVar14 = "kern.boottime";
  FUN_104facb78();
  FUN_104fedda4();
  DAT_108128888 = pcVar14;
  tVar8 = _time((time_t *)0x0);
  FUN_104fedda4();
  DAT_108128890 = tVar8;
  FUN_104fedde0();
  FUN_1043ca340();
  puVar6 = puVar5;
  DAT_108128898 = tVar8;
  FUN_1058e1480();
  FUN_1043ca340();
  puVar9 = puVar5;
  DAT_1081288a0 = puVar6;
  FUN_1058e1480();
  FUN_1043ca340();
  puVar6 = puVar5;
  DAT_1081288a8 = puVar9;
  FUN_1058e1480();
  FUN_1043ca340();
  puVar9 = puVar5;
  DAT_1081288b0 = puVar6;
  FUN_1058e1480();
  FUN_1043ca340();
  DAT_1081288b8 = puVar9;
  FUN_1058e1480();
  FUN_1043ca340();
  puVar10 = (undefined8 *)0x0;
  DAT_1081288c0 = puVar5;
  FUN_104fedde0();
  if (puVar10 == (undefined8 *)0x0) {
    uVar13 = 0;
  }
  else {
    puVar11 = puVar10;
    _objc_retainAutorelease();
    FUN_1058a42c0();
    FUN_104fee008();
    if (puVar11 == (undefined8 *)0x0) {
      FUN_1058d8600();
      _objc_retainAutorelease();
      FUN_1058a42c0();
      FUN_104fee008();
      uVar13 = 0;
      puVar11 = puVar10;
      if (puVar10 == (undefined8 *)0x0) goto LAB_104fed61c;
    }
    uVar12 = 0;
    _CFUUIDCreateFromUUIDBytes(0,*puVar11,puVar11[1]);
    uVar13 = 0;
    _CFUUIDCreateString(0,uVar12);
    _CFRelease(uVar12);
    FUN_1043ca340();
  }
LAB_104fed61c:
  iVar1 = 0x63ef886;
  DAT_1081288c8 = uVar13;
  FUN_104fac84c();
  pcVar14 = "hw.cpusubtype";
  FUN_104fac84c();
  if (iVar1 < 0x1000007) {
    if (iVar1 == 7) {
      pcVar14 = "x86";
    }
    else {
      if (iVar1 == 0xc) {
        uVar3 = (int)pcVar14 - 6;
        if ((uVar3 < 7) && ((0x79U >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
          pcVar14 = (&PTR_s_armv6_1073aeb80)[uVar3];
          goto LAB_104fed6d8;
        }
      }
LAB_104fed6bc:
      FUN_10017fee8();
    }
  }
  else if (iVar1 == 0x1000007) {
    pcVar14 = "x86_64";
  }
  else {
    if (iVar1 != 0x100000c) goto LAB_104fed6bc;
    pcVar14 = "arm64";
  }
LAB_104fed6d8:
  DAT_1081288d0 = pcVar14;
  uVar2 = 0x63ef886;
  FUN_104fac84c();
  DAT_1081288d8._0_4_ = uVar2;
  uVar2 = 0x643b22c;
  FUN_104fac84c();
  DAT_1081288d8._4_4_ = uVar2;
  puVar5 = PTR__OBJC_CLASS___NSProcessInfo_1074851e0;
  FUN_1058e74c0();
  FUN_1058e7560();
  FUN_1043ca340();
  puVar6 = PTR__OBJC_CLASS___NSProcessInfo_1074851e0;
  DAT_1081288e0 = puVar5;
  FUN_1058e74c0();
  uVar2 = SUB84(puVar6,0);
  FUN_1058e74a0();
  DAT_1081288e8._0_4_ = uVar2;
  DAT_1081288e8._4_4_ = _getppid();
  puVar5 = PTR__OBJC_CLASS___UIDevice_107481178;
  FUN_1058b5e80();
  puVar6 = puVar5;
  _objc_opt_respondsToSelector();
  puVar9 = PTR__OBJC_CLASS___NSMutableData_107488980;
  if (((ulong)puVar6 & 1) == 0) {
    FUN_1058b6c60();
    puVar5 = puVar9;
    _objc_retainAutorelease();
    FUN_1058df460();
    FUN_104facc70(&DAT_1063ef923,puVar5);
  }
  else {
    FUN_1058b6c60();
    FUN_1058c90a0(puVar5);
    _objc_retainAutorelease(puVar9);
    FUN_1058df460();
    FUN_1058c3380(puVar5);
  }
  FUN_104fede9c(&cf_hw_machine);
  FUN_1058b6a80();
  FUN_1058a95c0(puVar9);
  FUN_104fede9c(&cf_hw_model);
  FUN_1058b6a80();
  FUN_1058a95c0(puVar9);
  puVar5 = PTR__OBJC_CLASS___NSBundle_107485068;
  FUN_1058dbce0();
  FUN_1058ad4e0();
  FUN_1058b6a80();
  if (puVar5 != (undefined *)0x0) {
    FUN_1058a95c0(puVar9);
  }
  puVar5 = puVar9;
  _objc_retainAutorelease();
  FUN_1058ad840();
  FUN_1058d92e0();
  _CC_SHA1(puVar5,(CC_LONG)puVar9,local_7c);
  puVar5 = PTR__OBJC_CLASS___NSMutableString_107485190;
  FUN_105909700();
  lVar17 = 0;
  do {
    FUN_1058a9640(puVar5);
    lVar17 = lVar17 + 1;
  } while (lVar17 != 0x14);
  FUN_1043ca340();
  ppuVar15 = &PTR_PTR_10770ded8;
  DAT_1081288f0 = puVar5;
  _objc_alloc_init();
  iVar1 = (int)ppuVar15;
  ppuVar16 = ppuVar15;
  FUN_1058c5540();
  if ((int)ppuVar16 == 0) {
    FUN_1043ca7c4();
    FUN_1058d8600();
    FUN_1058d5760();
    lVar17 = 0;
    if (((ulong)ppuVar16 & 1) == 0) {
      FUN_1043ca7c4();
      pcVar14 = "unknown";
      if (lVar17 != 0) {
        FUN_1058d8600();
        uVar3 = (uint)lVar17;
        FUN_1058d5760();
        puVar5 = PTR__OBJC_CLASS___NSFileManager_1074850f8;
        FUN_1058b78e0();
        uVar4 = (uint)puVar5;
        FUN_1058bfe20();
        pcVar14 = "app store";
        if ((uVar3 & uVar4 & 1) == 0) {
          pcVar14 = "unknown";
        }
      }
    }
    else {
      pcVar14 = "test";
    }
  }
  else {
    FUN_1058dec80();
    if (((ulong)ppuVar15 & 1) == 0) {
      FUN_1058deca0();
      pcVar14 = "enterprise";
      if (iVar1 == 0) {
        pcVar14 = "adhoc";
      }
    }
    else {
      pcVar14 = "debug";
    }
  }
  pcVar7 = "hw.memsize";
  DAT_1081288f8 = pcVar14;
  FUN_104fac95c();
  param_1 = 0;
  DAT_108128900 = pcVar7;
LAB_104fedb10:
  if (*(long *)PTR____stack_chk_guard_1074865a8 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(param_1);
}

