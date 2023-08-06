#include "../../types-n64.h"
//----- (80266760) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall osCreatePiManager(OSPri priority, OSMesgQueue *mq, OSMesg *message, int count)
{
  int v4; // $v0
  int v5; // $v0
  int v6; // [sp+28h] [-8h]
  int v7; // [sp+2Ch] [-4h]

  osCreateMesgQueue(mq, message, count);
  osCreateMesgQueue((OSMesgQueue *)&piManagerMessageQueue, dword_80381878, 1);
  sub_8026C5C0();
  osSetEventMesg((MACRO_OS_EVENT)8, (OSMesgQueue *)&piManagerMessageQueue, (OSMesg)0x22222222);
  v6 = -1;
  v4 = sub_8026C040(0);
  if ( v4 < priority )
  {
    v6 = v4;
    sub_802668F0(0, priority);
  }
  v5 = sub_80268540();
  piMangerThreadArg = 1;
  pPiManagerMessageQueue_0 = &piManagerThread;
  pPiManagerMessageQueue.mtqueue = (OSThread *)&piManagerMessageQueue;
  piManagerMessageQueue_0 = mq;
  v7 = v5;
  pPiManagerMessageQueue.fullqueue = (OSThread *)&stru_803819E8;
  pPiManagerMessageQueue.validCount = (s32)sub_8026C680;
  pPiManagerMessageQueue.first = (s32)sub_8026C760;
  osCreateThread(
    (OSThread *)pPiManagerMessageQueue_0,
    0,
    piManagerThreadEntry,
    &piMangerThreadArg,
    &piManagerMessageQueue,
    priority);
  osStartThread((OSThread *)&piManagerThread);
  sub_80268560(v7);
  if ( v6 != -1 )
    sub_802668F0(0, v6);
}
// 80266838: write access to const memory at 802A6180 has been detected
// 8026683C: write access to const memory at 802A6184 has been detected
// 80266840: write access to const memory at 802A618C has been detected
// 80266848: write access to const memory at 802A6188 has been detected
// 80266880: write access to const memory at 802A6190 has been detected
// 80266884: write access to const memory at 802A6194 has been detected
// 80266888: write access to const memory at 802A6198 has been detected
// 802A6180: using guessed type int piMangerThreadArg;
