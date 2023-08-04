#include "../types-n64.h"
//----- (8021E21C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall __noreturn faultproc(void *a1)
{
  int v1; // [sp+2Ch] [-4h] BYREF

  osSetEventMesg((MACRO_OS_EVENT)12, &debugMsgQueue, (OSMesg)0x10);
  dword_8031B1D0 = 0;
  while ( 1 )
  {
    sub_802642E0(&debugMsgQueue, &v1, 1);
    debugPrint("\n=> faultproc - got a fault message...\n");
    dword_8031B1CC = sub_80266390();
    sub_8021E1EC();
  }
}
// 8021E254: write access to const memory at 8031B1D0 has been detected
// 8021E288: write access to const memory at 8031B1CC has been detected
// 8031B1CC: using guessed type int dword_8031B1CC;
// 8031B1D0: using guessed type int dword_8031B1D0;
