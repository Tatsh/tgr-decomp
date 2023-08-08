#include "types-n64.h"
//----- (80265410) --------------------------------------------------------
void __fastcall osCreateMesgQueue(OSMesgQueue *mq, OSMesg *msg, s32 count) {
    mq->mtqueue = &gMtqueue;
    mq->fullqueue = &gMtqueue;
    mq->validCount = 0;
    mq->first = 0;
    mq->msgCount = count;
    mq->msg = msg;
}
