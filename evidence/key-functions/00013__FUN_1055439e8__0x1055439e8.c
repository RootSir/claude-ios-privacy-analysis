// FUNCTION: FUN_1055439e8
// ENTRY: 0x1055439e8
// MATCHED: [addr:0x105543a04, pdp_ip]


bool FUN_1055439e8(void)

{
  bool bVar1;
  int iVar2;
  ifaddrs *piVar3;
  ifaddrs *local_38;
  
  local_38 = (ifaddrs *)0x0;
  iVar2 = _getifaddrs(&local_38);
  if (iVar2 == 0) {
    piVar3 = (ifaddrs *)&local_38;
    do {
      piVar3 = piVar3->ifa_next;
      bVar1 = piVar3 != (ifaddrs *)0x0;
      if (piVar3 == (ifaddrs *)0x0) break;
      iVar2 = _strncmp(piVar3->ifa_name,"pdp_ip",6);
    } while (iVar2 != 0);
    _freeifaddrs(local_38);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

