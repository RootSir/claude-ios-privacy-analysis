// FUNCTION: FUN_10402bb04
// ENTRY: 0x10402bb04
// MATCHED: [turn:]


void FUN_10402bb04(ulong param_1)

{
  FUN_10402d148();
  if (param_1 == 0) {
    param_1 = 1;
  }
  else {
    FUN_10402d158();
    if ((param_1 & 1) == 0) {
      param_1 = 1;
    }
    else {
      FUN_10209c924();
      FUN_10590c620();
    }
    FUN_1000166d0();
  }
  FUN_10000cc00(param_1);
  return;
}

