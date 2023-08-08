#include "types-n64.h"
//----- (80200000) --------------------------------------------------------
void start() {
    int *v0; // $t0
    int v1;  // $t1

    v0 = dword_802AC400;
    v1 = 0xD67B0;
    do {
        v1 -= 8;
        *v0 = 0;
        v0[1] = 0;
        v0 += 2;
    } while (v1);
    startIdleThread();
}
// 802AC400: using guessed type int dword_802AC400[208];
