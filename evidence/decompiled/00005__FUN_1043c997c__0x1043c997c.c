// FUNCTION: FUN_1043c997c
// ENTRY: 0x1043c997c
// MATCHED: [identifierForVendor]


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1043c997c(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  time_t tVar11;
  void *pvVar12;
  int *piVar13;
  undefined8 uVar14;
  char *pcVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  int local_e4;
  uchar local_e0 [40];
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1074865a8;
  uVar3 = (uint)param_1;
  do {
    if ((uint)DAT_10808ed68 != (uVar3 ^ 1)) {
      bVar2 = false;
      ClearExclusiveLocal();
      if (uVar3 == 0) goto LAB_1043ca1e8;
      goto LAB_1043c99e8;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x10808ed68,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_10808ed68 = (byte)param_1;
    }
  } while (cVar1 != '\0');
  bVar2 = true;
  if (uVar3 != 0) {
LAB_1043c99e8:
    if ((bVar2) && ((DAT_10808ed69 & 1) == 0)) {
      DAT_10808ed69 = 1;
      puVar6 = PTR__OBJC_CLASS___NSBundle_107485068;
      FUN_1058dbce0();
      FUN_1058cafa0();
      lVar7 = 0;
      __dyld_get_image_header();
      puVar8 = PTR__OBJC_CLASS___UIDevice_107481178;
      FUN_1058b5e80();
      FUN_10590b6a0();
      FUN_1043ca340();
      puVar9 = PTR__OBJC_CLASS___UIDevice_107481178;
      DAT_10808ed70 = puVar8;
      FUN_1058b5e80();
      FUN_10590b740();
      FUN_1043ca340();
      pcVar15 = "hw.machine";
      DAT_10808ed78 = puVar9;
      FUN_1043ca360();
      pcVar10 = "hw.model";
      DAT_10808ed80 = pcVar15;
      FUN_1043ca360();
      pcVar15 = "kern.version";
      DAT_10808ed88 = pcVar10;
      FUN_1043ca360();
      pcVar10 = "kern.osversion";
      DAT_10808ed90 = pcVar15;
      FUN_1043ca360();
      DAT_10808ed98 = pcVar10;
      if (DAT_10808ee48 != -1) {
        FUN_10588a64c();
      }
      DAT_10808eda0._0_1_ = DAT_10808ee40;
      DAT_10808eda0._1_1_ = 0;
      tVar11 = _time((time_t *)0x0);
      pvVar12 = _malloc(0x40);
      FUN_1043cc438(tVar11,pvVar12,0x40);
      puVar8 = PTR__OBJC_CLASS___NSBundle_107485068;
      DAT_10808eda8 = pvVar12;
      FUN_1058dbce0();
      puVar9 = puVar8;
      FUN_1058cafa0();
      FUN_1058ad5a0();
      FUN_1058e1480(puVar9);
      FUN_1059097a0();
      FUN_1043ca340();
      puVar9 = puVar6;
      DAT_10808edb0 = puVar8;
      FUN_1058e1480();
      FUN_1043ca340();
      puVar8 = puVar6;
      DAT_10808edb8 = puVar9;
      FUN_1058e1480();
      FUN_1043ca340();
      puVar9 = puVar6;
      DAT_10808edc0 = puVar8;
      FUN_1058e1480();
      FUN_1043ca340();
      puVar8 = puVar6;
      DAT_10808edc8 = puVar9;
      FUN_1058e1480();
      FUN_1043ca340();
      DAT_10808edd0 = puVar8;
      FUN_1058e1480();
      FUN_1043ca340();
      local_e4 = 0;
      piVar13 = &local_e4;
      DAT_10808edd8 = puVar6;
      FUN_1043cb1ac();
      uVar17 = 0;
      if ((piVar13 != (int *)0x0) && (local_e4 != 0)) {
        piVar13 = *(int **)piVar13;
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        local_e0[0x18] = '\0';
        local_e0[0x19] = '\0';
        local_e0[0x1a] = '\0';
        local_e0[0x1b] = '\0';
        local_e0[0x1c] = '\0';
        local_e0[0x1d] = '\0';
        local_e0[0x1e] = '\0';
        local_e0[0x1f] = '\0';
        local_e0[0x10] = '\0';
        local_e0[0x11] = '\0';
        local_e0[0x12] = '\0';
        local_e0[0x13] = '\0';
        local_e0[0x14] = '\0';
        local_e0[0x15] = '\0';
        local_e0[0x16] = '\0';
        local_e0[0x17] = '\0';
        local_b8 = (undefined8 *)0x0;
        local_e0[0x20] = '\0';
        local_e0[0x21] = '\0';
        local_e0[0x22] = '\0';
        local_e0[0x23] = '\0';
        local_e0[0x24] = '\0';
        local_e0[0x25] = '\0';
        local_e0[0x26] = '\0';
        local_e0[0x27] = '\0';
        local_e0[8] = '\0';
        local_e0[9] = '\0';
        local_e0[10] = '\0';
        local_e0[0xb] = '\0';
        local_e0[0xc] = '\0';
        local_e0[0xd] = '\0';
        local_e0[0xe] = '\0';
        local_e0[0xf] = '\0';
        local_e0[0] = '\0';
        local_e0[1] = '\0';
        local_e0[2] = '\0';
        local_e0[3] = '\0';
        local_e0[4] = '\0';
        local_e0[5] = '\0';
        local_e0[6] = '\0';
        local_e0[7] = '\0';
        FUN_1043ccb4c(piVar13,0,local_e0);
        uVar17 = 0;
        if (((int)piVar13 != 0) && (local_b8 != (undefined8 *)0x0)) {
          uVar14 = 0;
          _CFUUIDCreateFromUUIDBytes(0,*local_b8,local_b8[1]);
          uVar17 = 0;
          _CFUUIDCreateString(0,uVar14);
          _CFRelease(uVar14);
          FUN_1043ca340();
          piVar13 = (int *)0x0;
        }
      }
      DAT_10808ede0 = uVar17;
      FUN_1043ca3d0();
      DAT_10808ede8 = piVar13;
      uVar4 = 0x63ef886;
      FUN_1043d2520();
      DAT_10808ee00 = uVar4;
      uVar4 = 0x643b22c;
      FUN_1043d2520();
      DAT_10808ee04 = uVar4;
      DAT_10808ee08 = *(undefined8 *)(lVar7 + 4);
      puVar6 = PTR__OBJC_CLASS___NSTimeZone_1074889d8;
      FUN_1058da100();
      FUN_1058a4d20();
      FUN_1043ca340();
      puVar8 = PTR__OBJC_CLASS___NSProcessInfo_1074851e0;
      DAT_10808ee10 = puVar6;
      FUN_1058e74c0();
      FUN_1058e7560();
      FUN_1043ca340();
      puVar6 = PTR__OBJC_CLASS___NSProcessInfo_1074851e0;
      DAT_10808ee18 = puVar8;
      FUN_1058e74c0();
      uVar4 = SUB84(puVar6,0);
      FUN_1058e74a0();
      DAT_10808ee20._0_4_ = uVar4;
      DAT_10808ee20._4_4_ = _getppid();
      puVar6 = PTR__OBJC_CLASS___UIDevice_107481178;
      FUN_1058b5e80();
      _objc_opt_respondsToSelector();
      puVar8 = PTR__OBJC_CLASS___NSMutableData_107488980;
      if (((ulong)puVar6 & 1) == 0) {
        FUN_1058b6c60();
        puVar6 = puVar8;
        _objc_retainAutorelease();
        FUN_1058df460();
        FUN_1043d26f4(&DAT_1063ef923,puVar6);
      }
      else {
        FUN_1058b6c60();
        puVar6 = PTR__OBJC_CLASS___UIDevice_107481178;
        FUN_1058b5e80(PTR__OBJC_CLASS___UIDevice_107481178);
        FUN_1058c90a0();
        _objc_retainAutorelease(puVar8);
        FUN_1058df460();
        FUN_1058c3380(puVar6);
      }
      FUN_1043ca6cc(&cf_hw_machine);
      FUN_1058b6a80();
      FUN_1058a95c0(puVar8);
      FUN_1043ca6cc(&cf_hw_model);
      FUN_1058b6a80();
      FUN_1058a95c0(puVar8);
      pcVar15 = (char *)0x0;
      FUN_1043ca3d0();
      _strlen(pcVar15);
      FUN_1058a95a0(puVar8);
      puVar6 = PTR__OBJC_CLASS___NSBundle_107485068;
      FUN_1058dbce0();
      FUN_1058ad4e0();
      FUN_1058b6a80();
      if (puVar6 != (undefined *)0x0) {
        FUN_1058a95c0(puVar8);
      }
      puVar6 = puVar8;
      _objc_retainAutorelease();
      FUN_1058ad840();
      FUN_1058d92e0();
      _CC_SHA1(puVar6,(CC_LONG)puVar8,local_e0);
      puVar6 = PTR__OBJC_CLASS___NSMutableString_107485190;
      FUN_105909700();
      lVar18 = 0;
      do {
        FUN_1058a9640(puVar6);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x14);
      FUN_1043ca340();
      uVar16 = 0;
      DAT_10808ee28 = puVar6;
      FUN_1043ca7c4();
      FUN_1058d8600();
      FUN_1058d5760();
      lVar18 = 0;
      if ((uVar16 & 1) == 0) {
        FUN_1043ca7c4();
        pcVar15 = "unknown";
        if (lVar18 != 0) {
          FUN_1058d8600();
          uVar3 = (uint)lVar18;
          FUN_1058d5760();
          puVar6 = PTR__OBJC_CLASS___NSFileManager_1074850f8;
          FUN_1058b78e0();
          uVar5 = (uint)puVar6;
          FUN_1058bfe20();
          pcVar15 = "app store";
          if ((uVar3 & uVar5 & 1) == 0) {
            pcVar15 = "unknown";
          }
        }
      }
      else {
        pcVar15 = "test";
      }
      pcVar10 = "hw.memsize";
      DAT_10808ee30 = pcVar15;
      FUN_1043d25bc();
      pcVar15 = (char *)(ulong)*(uint *)(lVar7 + 4);
      DAT_10808ee38 = pcVar10;
      FUN_1043ca420(pcVar15,*(undefined4 *)(lVar7 + 8));
      DAT_10808edf0 = "";
      if (pcVar15 != (char *)0x0) {
        DAT_10808edf0 = pcVar15;
      }
      DAT_10808edf8 = "21.0.0 (clang-2100.3.34.2)";
      param_1 = 0;
    }
  }
LAB_1043ca1e8:
  if (*(long *)PTR____stack_chk_guard_1074865a8 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(param_1);
  }
  return;
}

