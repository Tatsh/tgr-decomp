#include "../../types-n64.h"
//----- (8021E2C8) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall __noreturn gIdleThreadEntry(void *unkThread3Arg)
{
  int v1; // $s1
  char *v2; // $s0
  char *v3; // $v1
  int i; // $v0
  int *idleThreadStack; // $v0
  unsigned int v6; // $v1
  int *v7; // $v0
  unsigned int v8; // $v1
  void *mq; // $v0
  char v10[64]; // [sp+38h] [-48h] BYREF
  char v11; // [sp+78h] [-8h] BYREF

  v1 = 0xFFB000;
  v2 = v10;
  do
  {
    sub_802663A0(v1, v2);
    v2 += 4;
    v1 += 4;
  }
  while ( v2 != &v11 );
  v3 = v10;
  if ( v10[0] )
  {
    i = (unsigned __int8)v10[0];
    do
    {
      if ( i == 32 )
      {
        for ( i = (unsigned __int8)v3[1]; ; i = (unsigned __int8)v3[1] )
        {
          *v3++ = 0;
          if ( !i || i != 32 )
            break;
        }
      }
      if ( i )
      {
        debugThreadArg[1] = (int)v3;
        dword_8028B2EC = 2;
        i = (unsigned __int8)*v3;
      }
      if ( i && i != 32 )
      {
        for ( i = (unsigned __int8)v3[1]; ; i = (unsigned __int8)v3[1] )
        {
          ++v3;
          if ( !i || i == 32 )
            break;
        }
      }
    }
    while ( i );
  }
  debugThreadArg_0 = debugThreadArg;
  dword_8026FF00 = (int)&dword_8028B2EC;
  sub_80266400(254);
  gWidth = 320;
  gHeight = 240;
  if ( MEMORY[0x80000300] == OS_TV_MPAL )
    osViSetMode((int)dword_802A5D70);
  else
    osViSetMode((int)dword_802A54B0);           // NTSC
  osViBlack(True);
  osCreatePiManager(OS_PRIORITY_PIMGR, &gPIMesgQueue, gPIMesgBuf, 32);
  osCreateMesgQueue(&debugMsgQueue, &debugMsg, 1);
  osCreateThread(&debugThread, 5, faultproc, debugThreadArg, &debugMsgQueue, 50);
  osStartThread(&debugThread);
  idleThreadStack = gIdleThreadStack;
  v6 = 0;
  do
  {
    ++v6;
    idleThreadStack += 2;
    *(idleThreadStack - 2) = 0x5015A1DB;
    *(idleThreadStack - 1) = 0xFED15C00;
  }
  while ( v6 < 0x400 );
  v7 = dword_80318ED0;
  v8 = 0;
  do
  {
    ++v8;
    v7 += 2;
    *(v7 - 2) = 0x5015A1DB;
    *(v7 - 1) = 0xFED15C00;
  }
  while ( v8 < 0x100 );
  mq = unkThread0Stack;
  do
  {
    mq = (char *)mq + 32;
    *((_DWORD *)mq - 6) = 0x5015A1DB;
    *((_DWORD *)mq - 4) = 0x5015A1DB;
    *((_DWORD *)mq - 2) = 0x5015A1DB;
    *((_DWORD *)mq - 5) = 0xFED15C00;
    *((_DWORD *)mq - 3) = 0xFED15C00;
    *((_DWORD *)mq - 1) = 0xFED15C00;
    *((_DWORD *)mq - 8) = 0x5015A1DB;
    *((_DWORD *)mq - 7) = 0xFED15C00;
  }
  while ( mq != &gPIMesgQueue );
  osCreateThread(&unkThread3, 3, unkThread3Entry, unkThread3Arg, unkThread3Stack, 10);
  osStartThread(&unkThread3);
  sub_802668F0(0, 0);
  while ( 1 )
    ;
}
// 8021E37C: write access to const memory at 8028B2EC has been detected
// 8021E3C0: write access to const memory at 8026FF04 has been detected
// 8021E3CC: write access to const memory at 8026FF00 has been detected
// 8021E3DC: write access to const memory at 8028AAB0 has been detected
// 8021E3F4: write access to const memory at 8028AAB4 has been detected
// 8021E370: write access to const memory at 80316454 has been detected
// 8021E328: conditional instruction was optimized away because of '$v0.4 in (1..FF)'
// 8026FF00: using guessed type int dword_8026FF00;
// 8028AAB0: using guessed type int gWidth;
// 8028AAB4: using guessed type int gHeight;
// 8028B2EC: using guessed type int dword_8028B2EC;
// 802A54B0: using guessed type int dword_802A54B0[10];
// 802A5D70: using guessed type int dword_802A5D70[10];
// 80316450: using guessed type int debugThreadArg[512];
// 80316CD0: using guessed type int gIdleThreadStack[512];
// 80318CD0: using guessed type int unkThread3Stack[128];
// 80318ED0: using guessed type int dword_80318ED0[512];
