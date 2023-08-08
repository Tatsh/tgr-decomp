#include "types-n64.h"
//----- (8021BBDC) --------------------------------------------------------
void __fastcall __noreturn unkThread0Entry(void *a1) {
    osCreateMesgQueue((OSMesgQueue *)unkThread0MessageQueue, (OSMesg *)&unkThread0MessageBuffer, 1);
    osSetEventMesg(OS_EVENT_SP, (OSMesgQueue *)unkThread0MessageQueue, (OSMesg)0xF70A0CFA);
    while (1) {
        sub_802642E0((OSMesgQueue *)unkThread0MessageQueue, 0, 1);
        sub_8022D7E0(1, 0, 0, 0, 255);
        sub_802654B0(&unkMessageQueue1, -150336262, 1);
    }
}
// 8031A338: using guessed type int unkThread0MessageQueue[6];
// 8031A354: using guessed type int unkThread0MessageBuffer;
