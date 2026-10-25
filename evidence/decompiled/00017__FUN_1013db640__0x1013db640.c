// FUNCTION: FUN_1013db640
// ENTRY: 0x1013db640
// MATCHED: [reattest]


/* WARNING: Removing unreachable block (ram,0x0001013db6b4) */

void FUN_1013db640(void)

{
  undefined1 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_79;
  char *local_78;
  char *pcStack_70;
  
  FUN_1013dba1c();
  __s9CryptoKit6SHA256VMa(0);
  FUN_1007350e8();
  (*(code *)PTR____chkstk_darwin_107486550)();
  FUN_10028c05c();
  pcVar2 = "anthropic.reattest.v1";
  pcVar3 = "";
  __s10Foundation4DataV15_RepresentationOyAESWcfC();
  uVar1 = (ulong)pcVar3 >> 0x3c == 0xf;
  if (0xe < (ulong)pcVar3 >> 0x3c) {
    pcVar3 = (char *)0x800000010633aba0;
    pcVar2 = (char *)0xd000000000000015;
    FUN_10136a000();
  }
  local_79 = 0;
  local_78 = pcVar2;
  pcStack_70 = pcVar3;
  __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(&local_79,&local_78);
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
  if (!(bool)uVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  FUN_10000590c();
  return;
}

