// FUNCTION @ 0x1043c1a94 size=3032

void FUN_1043c1a94(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  code *local_18e0;
  code *local_18d8;
  code *local_18d0;
  code *local_18c8;
  code *local_18c0;
  code *pcStack_18b8;
  code *local_18b0;
  code *pcStack_18a8;
  code *local_18a0;
  code *pcStack_1898;
  code *local_1890;
  code *pcStack_1888;
  code *local_1880;
  code *pcStack_1878;
  code *local_1870;
  code *local_1868;
  code *local_1860;
  undefined1 *local_1858;
  undefined1 auStack_1850 [28];
  uint local_1834;
  undefined8 local_1830;
  undefined8 uStack_1828;
  undefined8 local_1820;
  undefined8 uStack_1818;
  undefined8 local_1810;
  undefined8 local_1808;
  undefined8 local_1800;
  undefined8 uStack_17f8;
  undefined8 local_17f0;
  undefined8 local_17e8;
  long local_17e0;
  long lStack_17d8;
  long local_17d0;
  long local_17c8;
  undefined1 auStack_550 [8];
  undefined1 *local_548;
  long local_70;
  
  (*(code *)PTR____chkstk_darwin_107486550)();
  local_70 = *(long *)PTR____stack_chk_guard_1074865a8;
  iVar4 = (int)auStack_1850;
  FUN_1043cd700();
  if (iVar4 != 0) {
    FUN_1043c5420();
    local_18e0 = FUN_1043c2944;
    local_18d8 = FUN_1043c294c;
    local_18d0 = FUN_1043c2954;
    local_18c8 = FUN_1043c295c;
    local_18c0 = FUN_1043c2964;
    pcStack_18b8 = FUN_1043c2970;
    local_18b0 = FUN_1043c2ae8;
    pcStack_18a8 = FUN_1043c2be8;
    local_18a0 = FUN_1043c2bf0;
    pcStack_1898 = FUN_1043c2bf8;
    local_1890 = FUN_1043c2c00;
    pcStack_1888 = FUN_1043c2c08;
    local_1880 = FUN_1043c2c10;
    pcStack_1878 = FUN_1043c266c;
    local_1870 = FUN_1043c2db0;
    local_1868 = FUN_1043c2db8;
    local_1858 = auStack_550;
    local_1860 = FUN_1043c2dc0;
    local_548 = auStack_1850;
    FUN_1043ce218(auStack_550,1,FUN_1043c0d60,auStack_1850);
    (*local_1870)(&local_18e0,"report");
    FUN_1043c0d90(&local_18e0,"standard",param_1 + 0xc,*(undefined8 *)(param_1 + 0x1d8));
    FUN_1043cd7d8(auStack_1850);
    if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
      local_1834 = 0;
      puVar5 = &local_1834;
      FUN_1043cb1ac();
      (*local_1868)(&local_18e0,"binary_images");
      if (local_1834 != 0) {
        uVar11 = 0;
        puVar5 = puVar5 + 2;
        do {
          uVar6 = *(undefined8 *)(puVar5 + -2);
          lStack_17d8 = 0;
          local_17e0 = 0;
          local_17c8 = 0;
          local_17d0 = 0;
          uStack_17f8 = 0;
          local_1800 = 0;
          local_17e8 = 0;
          local_17f0 = 0;
          uStack_1818 = 0;
          local_1820 = 0;
          local_1808 = 0;
          local_1810 = 0;
          uStack_1828 = 0;
          local_1830 = 0;
          FUN_1043ccb4c(uVar6,*(undefined8 *)puVar5,&local_1830);
          if ((int)uVar6 != 0) {
            (*local_1870)(&local_18e0,0);
            (*local_18c8)(&local_18e0,"image_addr",local_1830);
            (*local_18c8)(&local_18e0,"image_vmaddr",uStack_1828);
            (*local_18c8)(&local_18e0,"image_size",local_1820);
            (*local_18c0)(&local_18e0,"name",local_1810);
            (*local_1880)(&local_18e0,"uuid",local_1808);
            (*local_18d0)(&local_18e0,"cpu_type",(long)(int)local_1800);
            (*local_18d0)(&local_18e0,"cpu_subtype",(long)local_1800._4_4_);
            (*local_18c8)(&local_18e0,"major_version",uStack_17f8);
            (*local_18c8)(&local_18e0,"minor_version",local_17f0);
            (*local_18c8)(&local_18e0,"revision_version",local_17e8);
            if (local_17e0 != 0) {
              (*local_18c0)(&local_18e0,"crash_info_message");
            }
            if (lStack_17d8 != 0) {
              (*local_18c0)(&local_18e0,"crash_info_message2");
            }
            if (local_17d0 != 0) {
              (*local_18c0)(&local_18e0,"crash_info_backtrace");
            }
            if (local_17c8 != 0) {
              (*local_18c0)(&local_18e0,"crash_info_signature");
            }
            (*local_1860)(&local_18e0);
          }
          puVar5 = puVar5 + 6;
          uVar11 = uVar11 + 1;
        } while (uVar11 < local_1834);
      }
      (*local_1860)(&local_18e0);
      FUN_1043cd7d8(auStack_1850);
    }
    (*local_1870)(&local_18e0,"process");
    if (*(long *)(param_1 + 0x220) != 0) {
      (*local_1870)(&local_18e0,"last_dealloced_nsexception");
      (*local_18c8)(&local_18e0,"address",*(undefined8 *)(param_1 + 0x220));
      (*local_18c0)(&local_18e0,"name",*(undefined8 *)(param_1 + 0x228));
      (*local_18c0)(&local_18e0,"reason",*(undefined8 *)(param_1 + 0x230));
      FUN_1043c2dc8(&local_18e0,*(undefined8 *)(param_1 + 0x230));
      (*local_1860)(&local_18e0);
    }
    (*local_1860)(&local_18e0);
    FUN_1043cd7d8(auStack_1850);
    (*local_1870)(&local_18e0,"system");
    (*local_18c0)(&local_18e0,"system_name",*(undefined8 *)(param_1 + 0x128));
    (*local_18c0)(&local_18e0,"system_version",*(undefined8 *)(param_1 + 0x130));
    (*local_18c0)(&local_18e0,"machine",*(undefined8 *)(param_1 + 0x138));
    (*local_18c0)(&local_18e0,"model",*(undefined8 *)(param_1 + 0x140));
    (*local_18c0)(&local_18e0,"kernel_version",*(undefined8 *)(param_1 + 0x148));
    (*local_18c0)(&local_18e0,"os_version",*(undefined8 *)(param_1 + 0x150));
    (*local_18e0)(&local_18e0,"jailbroken",*(undefined1 *)(param_1 + 0x158));
    (*local_18e0)(&local_18e0,"proc_translated",*(undefined1 *)(param_1 + 0x159));
    (*local_18c0)(&local_18e0,"boot_time",*(undefined8 *)(param_1 + 0x160));
    (*local_18c0)(&local_18e0,"app_start_time",*(undefined8 *)(param_1 + 0x168));
    (*local_18c0)(&local_18e0,"CFBundleExecutablePath",*(undefined8 *)(param_1 + 0x170));
    (*local_18c0)(&local_18e0,"CFBundleExecutable",*(undefined8 *)(param_1 + 0x178));
    (*local_18c0)(&local_18e0,"CFBundleIdentifier",*(undefined8 *)(param_1 + 0x180));
    (*local_18c0)(&local_18e0,"CFBundleName",*(undefined8 *)(param_1 + 0x188));
    (*local_18c0)(&local_18e0,"CFBundleVersion",*(undefined8 *)(param_1 + 400));
    (*local_18c0)(&local_18e0,"CFBundleShortVersionString",*(undefined8 *)(param_1 + 0x198));
    (*local_18c0)(&local_18e0,"app_uuid",*(undefined8 *)(param_1 + 0x1a0));
    (*local_18c0)(&local_18e0,"cpu_arch",*(undefined8 *)(param_1 + 0x1a8));
    (*local_18c0)(&local_18e0,"binary_arch",*(undefined8 *)(param_1 + 0x1b0));
    (*local_18d0)(&local_18e0,"cpu_type",(long)*(int *)(param_1 + 0x1c0));
    (*local_18c0)(&local_18e0,"clang_version",*(undefined8 *)(param_1 + 0x1b8));
    (*local_18d0)(&local_18e0,"cpu_subtype",(long)*(int *)(param_1 + 0x1c4));
    (*local_18d0)(&local_18e0,"binary_cpu_type",(long)*(int *)(param_1 + 0x1c8));
    (*local_18d0)(&local_18e0,"binary_cpu_subtype",(long)*(int *)(param_1 + 0x1cc));
    (*local_18c0)(&local_18e0,"time_zone",*(undefined8 *)(param_1 + 0x1d0));
    (*local_18c0)(&local_18e0,"process_name",*(undefined8 *)(param_1 + 0x1d8));
    (*local_18d0)(&local_18e0,"process_id",(long)*(int *)(param_1 + 0x1e0));
    (*local_18d0)(&local_18e0,"parent_process_id",(long)*(int *)(param_1 + 0x1e4));
    (*local_18c0)(&local_18e0,"device_app_hash",*(undefined8 *)(param_1 + 0x1e8));
    (*local_18c0)(&local_18e0,"build_type",*(undefined8 *)(param_1 + 0x1f0));
    (*local_18d0)(&local_18e0,"storage",*(undefined8 *)(param_1 + 0x1f8));
    (*local_18d0)(&local_18e0,"freeStorage",*(undefined8 *)(param_1 + 0x200));
    (*local_1870)(&local_18e0,"memory");
    (*local_18c8)(&local_18e0,&DAT_1063da2c8,*(undefined8 *)(param_1 + 0x208));
    (*local_18c8)(&local_18e0,"usable",*(undefined8 *)(param_1 + 0x218));
    (*local_18c8)(&local_18e0,"free",*(undefined8 *)(param_1 + 0x210));
    (*local_1860)(&local_18e0);
    (*local_1870)(&local_18e0,"application_stats");
    (*local_18e0)(&local_18e0,"application_active",*(undefined1 *)(param_1 + 0x120));
    (*local_18e0)(&local_18e0,"application_in_foreground",*(undefined1 *)(param_1 + 0x121));
    (*local_18d0)(&local_18e0,"launches_since_last_crash",(long)*(int *)(param_1 + 0xf8));
    (*local_18d0)(&local_18e0,"sessions_since_last_crash",(long)*(int *)(param_1 + 0xfc));
    (*local_18d8)(*(undefined8 *)(param_1 + 0xe8),&local_18e0,"active_time_since_last_crash");
    (*local_18d8)(*(undefined8 *)(param_1 + 0xf0),&local_18e0,"background_time_since_last_crash");
    (*local_18d0)(&local_18e0,"sessions_since_launch",(long)*(int *)(param_1 + 0x110));
    (*local_18d8)(*(undefined8 *)(param_1 + 0x100),&local_18e0,"active_time_since_launch");
    (*local_18d8)(*(undefined8 *)(param_1 + 0x108),&local_18e0,"background_time_since_launch");
    (*local_1860)(&local_18e0);
    (*local_1870)(&local_18e0,"app_memory");
    (*local_18c8)(&local_18e0,"memory_footprint",*(undefined8 *)(param_1 + 0x248));
    (*local_18c8)(&local_18e0,"memory_remaining",*(undefined8 *)(param_1 + 0x250));
    (*local_18c0)(&local_18e0,"memory_pressure",*(undefined8 *)(param_1 + 0x240));
    (*local_18c0)(&local_18e0,"memory_level",*(undefined8 *)(param_1 + 0x260));
    (*local_18c8)(&local_18e0,"memory_limit",*(undefined8 *)(param_1 + 600));
    (*local_18c0)(&local_18e0,"app_transition_state",*(undefined8 *)(param_1 + 0x268));
    (*local_1860)(&local_18e0);
    (*local_1860)(&local_18e0);
    FUN_1043cd7d8(auStack_1850);
    (*local_1870)(&local_18e0,"crash");
    FUN_1043c0e58(&local_18e0,param_1);
    FUN_1043cd7d8(auStack_1850);
    uVar3 = DAT_10808d0f0;
    puVar12 = *(undefined8 **)(param_1 + 0x48);
    puVar7 = puVar12;
    FUN_1043cff98();
    puVar8 = puVar12;
    FUN_1043d05c0();
    _bzero(&local_1830,0x12e0);
    bVar2 = *(byte *)(param_1 + 8);
    (*local_1868)(&local_18e0,"threads");
    if (0 < (int)puVar8) {
      iVar4 = 0;
      do {
        puVar9 = puVar12;
        FUN_1043d05c8(puVar12,iVar4);
        puVar10 = puVar9;
        FUN_1043d2930();
        puVar13 = puVar12;
        if (puVar9 == puVar7) {
LAB_1043c24b8:
          FUN_1043c13c8(&local_18e0,0,param_1,puVar13,iVar4,uVar3,puVar10);
        }
        else if ((bVar2 & 1) != 0) {
          puVar13 = &local_1830;
          FUN_1043cffa0(puVar9,&local_1830,0);
          goto LAB_1043c24b8;
        }
        iVar4 = iVar4 + 1;
      } while ((int)puVar8 != iVar4);
    }
    (*local_1860)(&local_18e0);
    FUN_1043cd7d8(auStack_1850);
    if (*(int *)(param_1 + 0x40) != 0) {
      bVar2 = *(byte *)(param_1 + 8);
      *(byte *)(param_1 + 8) = bVar2 & 0xef;
      if ((bVar2 >> 3 & 1) == 0) {
        FUN_1043d0448(param_1 + 0x38);
      }
    }
    (*local_1860)(&local_18e0);
    if (DAT_10808d108 == 0) {
      (*local_1870)(&local_18e0,"user");
    }
    else {
      FUN_1043c266c(&local_18e0,"user",DAT_10808d108,0);
      FUN_1043cd7d8(auStack_1850);
    }
    if (DAT_10808d0e8 != (code *)0x0) {
      FUN_1043cd7d8(auStack_1850);
      bVar2 = *(byte *)(param_1 + 8);
      uVar1 = 0;
      if ((*(uint *)(param_1 + 8) & 0x18) != 0) {
        uVar1 = 0x1000000;
      }
      local_1830 = CONCAT44(CONCAT31(local_1830._5_3_,(char)(*(uint *)(param_1 + 8) >> 5)),
                            uVar1 | (bVar2 >> 2 & 1) << 0x10 | (bVar2 >> 1 & 1) << 8 | bVar2 & 1) &
                   0xffffff01ffffffff;
      (*DAT_10808d0e8)(&local_1830,&local_18e0);
    }
    (*local_1860)(&local_18e0);
    FUN_1043cd7d8(auStack_1850);
    (*local_1870)(&local_18e0,"debug");
    if (*(long *)(param_1 + 0x270) != 0) {
      FUN_1043c2ae8(&local_18e0,"console_log");
    }
    (*local_1860)(&local_18e0);
    (*local_1860)(&local_18e0);
    FUN_10588ae78(local_1858);
    FUN_1043cd79c(auStack_1850);
    FUN_1043c544c();
  }
  if (*(long *)PTR____stack_chk_guard_1074865a8 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


