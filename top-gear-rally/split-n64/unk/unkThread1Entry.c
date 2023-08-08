#include "types-n64.h"
//----- (8021BCA8) --------------------------------------------------------
void __fastcall __noreturn unkThread1Entry(void *a1) {
    osCreateMesgQueue((OSMesgQueue *)unkThread1MessageQueue, (OSMesg *)&unkThread1MessageBuffer, 1);
    osSetEventMesg(OS_EVENT_DP, (OSMesgQueue *)unkThread1MessageQueue, (OSMesg)0xF70A0CFA);
    while (1) {
        sub_802642E0((OSMesgQueue *)unkThread1MessageQueue, 0, 1);
        sub_8022D7E0(2, 0, 0, 0, 255);
        sub_802654B0(&unkMessageQueue2, -150336262, 1);
    }
}
// 8031A370: using guessed type int unkThread1MessageQueue[6];
// 8031A38C: using guessed type int unkThread1MessageBuffer;
