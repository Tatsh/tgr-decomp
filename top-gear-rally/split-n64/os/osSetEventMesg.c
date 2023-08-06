#include "../../types-n64.h"
//----- (80265440) --------------------------------------------------------
void __fastcall osSetEventMesg(MACRO_OS_EVENT e, OSMesgQueue *mq, OSMesg m)
{
  int v3; // $v0
  OSMesgQueue *mq_1; // [sp+20h] [-8h]

  v3 = sub_80268540();
  mq_1 = (OSMesgQueue *)&dword_8037F370[2 * e];
  mq_1->mtqueue = (OSThread *)mq;
  mq_1->fullqueue = (OSThread *)m;
  sub_80268560(v3);
}
// 8037F370: using guessed type int dword_8037F370[16];
