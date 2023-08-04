#include "../../types-n64.h"
//----- (802001B4) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall __noreturn unkThread3Entry(void *a1)
{
  sub_8021BE88();
  nullsub_2();
  nullsub_1();
  sub_80200154();
  sub_8021C188();
  sub_8022389C(0.0);
  sub_8021C6E4((int)sub_8020686C);
  ElementCount = CHK_GetFileSize(0xAD400);
  LoadCarWithIndex2(&next_out, 0xAD400, 0);
  ElementCount = 8;
  sub_80242940();
  sub_80214A3C();
  while ( !sub_80214E0C(0) )
    ;
  sub_80242940();
  sub_80214A3C();
  while ( !sub_80214E0C(2) )
    ;
  sub_802118B4();
  LoadCarWithIndex2((char *)0x80025C00, 0xEBC00, 0);
  pm_sub_802575C4(0x80025C00, (int)dword_802AC400);
  debugPrint((const char *)&gMtqueue.context.fp20.d + 4, 57224);
  debugPrint((const char *)&gMtqueue.context.fp28, 8336);
  debugPrint("sizeof(Enemy)=%d\n", 120);
  sub_8021C718();
}
// 80200214: write access to const memory at 80270784 has been detected
// 80200234: write access to const memory at 80270784 has been detected
// 802AC400: using guessed type int dword_802AC400[208];
