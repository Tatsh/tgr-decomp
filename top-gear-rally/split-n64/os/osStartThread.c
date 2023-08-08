#include "types-n64.h"
//----- (802657C0) --------------------------------------------------------
void __fastcall osStartThread(OSThread *thread) {
    int v1;              // $s0
    int state;           // $s1
    OSThread **thread_2; // $t0
    OSThread *thread_1;  // $v0

    v1 = sub_80268540();
    state = thread->state;
    if (state == 1) {
        thread_2 = thread->queue;
        if (thread_2 && thread_2 != (OSThread **)&gMtqueue.queue) {
            thread->state = 8;
            sub_8026B3EC((OSThread *)thread->queue, thread);
            thread_1 = sub_8026B434((OSThread *)thread->queue);
            sub_8026B3EC((OSThread *)&gMtqueue.queue, thread_1);
            goto LABEL_8;
        }
        goto LABEL_3;
    }
    if (state == 8) {
    LABEL_3:
        thread->state = 2;
        sub_8026B3EC((OSThread *)&gMtqueue.queue, thread);
    }
LABEL_8:
    sub_8026B444();
    sub_80268560(v1);
}
