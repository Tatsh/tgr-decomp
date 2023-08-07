#include "../../types-n64.h"
//----- (80265670) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall osCreateThread(OSThread *thread,
                               int id,
                               void(__fastcall __noreturn *entry)(void *),
                               void *arg,
                               void *sp_,
                               int priority) {
    int v6; // $v0

    thread->id = id;
    thread->priority = priority;
    thread->next = 0;
    thread->queue = 0;
    thread->context.cause = (u32)entry;
    *(u64 *)((char *)&thread->context.a0 + 4) = (int)arg;
    *(u64 *)((char *)&thread->context.sp + 4) = (u64)sp_ + 0xFFFFFFF0;
    *(u64 *)((char *)&thread->context.ra + 4) = (int)sub_8026B5C0;
    thread->context.pc = 0xFF03;
    thread->context.fpcsr = 0x3F;
    thread->context.fp0.f.f_odd = 2.3515627e-38;
    thread->_fp = 0;
    thread->state = OS_STATE_STOPPED;
    thread->flags = 0;
    v6 = sub_80268540();
    thread->tlnext = (struct OSThread_s *)&gMtqueue;
    MEMORY[0x802A629C] = (int *)thread;
    sub_80268560(v6);
}
// 8026579C: write access to const memory at 802A629C has been detected
// 802A6290: using guessed type int dword_802A6290;
// 802A629C: using guessed type int *off_802A629C;
