#include "../../types-n64.h"
//----- (802006C8) --------------------------------------------------------
int sub_802006C8() {
    int result; // $v0
    int *v1;    // $v1
    int v2;     // $a0
    int v3;     // $t1
    int v4;     // $t0
    int v5;     // $t7
    int v6;     // $v0

    result = 240;
    v1 = &dword_80270194;
    if (&dword_802A666C) {
        do {
            v2 = v1[1];
            v3 = v1[7];
            v4 = v1[2];
            v1 += 4;
            v5 = (3 * v2) >> 2;
            if (3 * v2 < 0)
                v5 = (3 * v2 + 3) >> 2;
            v6 = result + v5;
            *(v1 - 4) = v6;
            result = v6 + v2 - v5 + v4;
        } while (v3);
    }
    return result;
}
// 80270194: using guessed type int dword_80270194;
// 802A666C: using guessed type int dword_802A666C;
