#include "../../types-n64.h"
//----- (80256C2C) --------------------------------------------------------
int sub_80256C2C() {
    int *stack; // $s4
    int i;      // $s3
    int *v2;    // $s0
    int *v3;    // $s1
    int result; // $v0
    int v5;     // $v1

    stack = gMusicThreadStack;
    for (i = 0; i != 10; ++i) {
        v2 = dword_802A49D4;
        v3 = stack;
        do {
            result = sub_80266A08((float)(*(float *)v2++ * (float)(1 << i)) * 0.0625 / 261.7 *
                                  0.3801709246295118 * 4294967300.0);
            v3 += 2;
            *(v3 - 2) = result;
            *(v3 - 1) = v5;
        } while (v2 != &dword_802A4A04);
        stack += 24;
    }
    return result;
}
// 80256CF4: variable 'v5' is possibly undefined
// 802A49D4: using guessed type int dword_802A49D4[12];
// 802A4A04: using guessed type int dword_802A4A04;
// 80379568: using guessed type int gMusicThreadStack[242];
