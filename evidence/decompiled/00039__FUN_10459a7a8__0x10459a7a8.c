// FUNCTION: FUN_10459a7a8
// ENTRY: 0x10459a7a8
// MATCHED: [addr:0x10459a984]


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined * FUN_10459a7a8(float param_1,undefined8 param_2,long param_3)

{
  ifaddrs **ppiVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  char *pcVar7;
  sockaddr *psVar8;
  ifaddrs *piVar9;
  undefined1 auStack_a4 [4];
  ifaddrs *local_a0;
  char acStack_98 [48];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1074865a8;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_107488988;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_107488988);
  FUN_105905b00(&PTR_PTR_1076ff3c0);
  FUN_1058ef7c0();
  FUN_105904420(puVar3);
  if (param_3 != 0) {
    _objc_alloc(PTR__OBJC_CLASS___NSArray_107488918);
    FUN_1058cf920();
    FUN_105904420(puVar3);
  }
  puVar4 = PTR__OBJC_CLASS___UIDevice_107481178;
  FUN_1058b5e80();
  puVar5 = puVar4;
  FUN_1058d4d20();
  if ((int)puVar5 != 0) {
    FUN_1058abd40(puVar4);
    if (0.0 <= param_1) {
      FUN_1058e1180((double)param_1,PTR__OBJC_CLASS___NSNumber_1074851b8);
      FUN_105904420(puVar3);
    }
    puVar5 = puVar4;
    FUN_1058abd60();
    if (puVar5 < &LAB_00000004) {
      puVar6 = (&PTR_cf_UIDeviceBatteryStateUnknown_10734eb38)[(long)puVar5];
      FUN_10459e928();
      if (puVar6 != (undefined *)0x0) {
        FUN_105904420(puVar3);
      }
    }
  }
  puVar5 = puVar4;
  FUN_1058d65e0();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1074851b8;
  if ((int)puVar5 != 0) {
    FUN_1058e7d40(puVar4);
    FUN_1058e1160(puVar6);
    FUN_105904420(puVar3);
  }
  iVar2 = _getifaddrs(&local_a0);
  if (iVar2 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_107488978;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_107488978);
    piVar9 = local_a0;
    if (local_a0 == (ifaddrs *)0x0) {
      local_a0 = (ifaddrs *)0x0;
    }
    else {
      do {
        pcVar7 = PTR__OBJC_CLASS___NSString_107485218;
        if ((piVar9->ifa_flags & 9) == 1) {
          _inet_ntoa((in_addr)*(in_addr_t *)(piVar9->ifa_addr->sa_data + 2));
          FUN_105909c00();
          _objc_retainAutorelease();
          FUN_1058a42c0();
          iVar2 = _inet_pton(2,pcVar7,auStack_a4);
          if ((iVar2 == 1) || (iVar2 = _inet_pton(0x1e,pcVar7,acStack_98), iVar2 == 1)) {
            puVar6 = PTR__OBJC_CLASS___NSString_107485218;
            psVar8 = piVar9->ifa_addr;
            if (psVar8->sa_family == '\x1e') {
              pcVar7 = _inet_ntop(0x1e,psVar8->sa_data + 6,acStack_98,0x2e);
              puVar6 = PTR__OBJC_CLASS___NSString_107485218;
              if (pcVar7 != (char *)0x0) goto LAB_10459aa78;
            }
            else if (psVar8->sa_family == '\x02') {
              _inet_ntoa((in_addr)*(in_addr_t *)(psVar8->sa_data + 2));
LAB_10459aa78:
              FUN_105909c00(puVar6);
              FUN_1058a6a20(puVar4);
            }
          }
        }
        ppiVar1 = &piVar9->ifa_next;
        piVar9 = *ppiVar1;
      } while (*ppiVar1 != (ifaddrs *)0x0);
    }
    _free(local_a0);
  }
  FUN_105904420(puVar3);
  if (*(long *)PTR____stack_chk_guard_1074865a8 == local_68) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

