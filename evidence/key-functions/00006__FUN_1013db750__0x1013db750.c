// FUNCTION: FUN_1013db750
// ENTRY: 0x1013db750
// MATCHED: [reattest]


/* WARNING: Removing unreachable block (ram,0x0001013db7c8) */

void FUN_1013db750(ulong param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 local_80;
  char *local_78;
  char *pcStack_70;
  
  FUN_1013dba1c();
  __s9CryptoKit6SHA256VMa(0);
  FUN_1007350e8();
  (*(code *)PTR____chkstk_darwin_107486550)();
  FUN_10028c05c();
  pcVar3 = "anthropic.reattest_rotate.v1";
  pcVar4 = "";
  __s10Foundation4DataV15_RepresentationOyAESWcfC();
  uVar2 = (ulong)pcVar4 >> 0x3c == 0xf;
  if (0xe < (ulong)pcVar4 >> 0x3c) {
    pcVar4 = (char *)0x800000010633abc0;
    pcVar3 = (char *)0xd00000000000001c;
    FUN_10136a000();
  }
  local_80 = local_80 & 0xffffffffffffff00;
  local_78 = pcVar3;
  pcStack_70 = pcVar4;
  __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(&local_80,(long)&local_80 + 1);
  uVar1 = (param_1 & 0xff00ff00ff00ff00) >> 8 | (param_1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  local_80 = uVar1 >> 0x20 | uVar1 << 0x20;
  __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(&local_80,&local_78);
  FUN_1013dba40();
  FUN_1013db878();
  FUN_1013db9e0();
  FUN_100114518();
  FUN_1000602b8();
  FUN_100114518();
  FUN_1013dba34();
  FUN_1011ec4c8();
  FUN_1013db9f8();
  FUN_1004619e8();
  FUN_1011ec4c8();
  FUN_1006bca8c();
  if (!(bool)uVar2) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  FUN_10000590c();
  return;
}

