// FUNCTION: FUN_1040cb404
// ENTRY: 0x1040cb404
// MATCHED: [Bootstrap]


void FUN_1040cb404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar1 = 0;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  puVar4 = PTR___sScMScAsWP_107492968;
  __sScA15unownedExecutorScevgTj(uVar1,PTR___sScMScAsWP_107492968);
  uVar3 = uVar1;
  _swift_task_isCurrentExecutor();
  if ((uVar3 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("ClaudeSentry/SentryBootstrap.swift",0x22,1,0x8f,uVar1,puVar4);
  }
  FUN_1040cb4c8(param_2,param_3,param_4,param_5);
  _swift_release(uVar2);
  return;
}

