#include "types-n64.h"
//----- (8021C748) --------------------------------------------------------
// a3 = often 4
void __fastcall sub_8021C748(unsigned int a1, int a2, int a3) {
    int a6;  // $s0
    int a5;  // $s1
    int *v6; // $v0
    int *v7; // $v0

    a6 = a3;
    a5 = a1;
    sub_802662E0(a1, a3);
    for (; a6 >= 0x1001; a5 += 0x1000) {
        v6 = sub_802172D0();
        justReturnsNegative1((int)v6, 0, 0, a2, a5, 4096);
        a6 -= 0x1000;
        a2 += 0x1000;
    }
    v7 = sub_802172D0();
    justReturnsNegative1((int)v7, 0, 0, a2, a5, a6);
    sub_8021735C();
}
