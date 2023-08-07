#include "../../types-n64.h"
//----- (8021E5C4) --------------------------------------------------------
void startIdleThread() {
    osInitialize();
    osCreateThread(&gIdleThread, 1, gIdleThreadEntry, 0, gIdleThreadStack, 10);
    osStartThread(&gIdleThread);
}
// 80316CD0: using guessed type int gIdleThreadStack[512];
