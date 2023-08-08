#include "types-n64.h"
//----- (80260490) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80260490() {
    int i;      // $s0
    char *v1;   // $s6
    int v2;     // $s3
    int v3;     // $s0
    _WORD *v4;  // $s4
    _WORD *v5;  // $s2
    _WORD *v6;  // $s5
    int *v7;    // $a0
    int result; // $v0

    if (!sub_8021C6D0((int)sub_8020082C)) {
        for (i = 0; i != 2; ++i) {
            *((_WORD *)&dword_802A4BEC + i) = 0;
            byte_8031B1E8[i] = 0;
            if (!sub_80262370(&unkMessageQueue4, (int)&dword_8031A3F8[26 * i], i)) {
                byte_8031B1E8[i] = 1;
                sub_80261F20((int)&dword_8031A3F8[26 * i]);
            }
        }
    }
    v1 = byte_8031B1E8;
    v2 = 0;
    do {
        v3 = 2 * v2;
        v4 = (_WORD *)&dword_802A4BEC + v2;
        if (!*v1) {
            ++v2;
            goto LABEL_22;
        }
        if (*v4) {
            v5 = (_WORD *)((char *)&dword_802A4BFC + v3);
            if (*(_DWORD *)(*(_DWORD *)(8336 * v2 - 2144217132) + 68)) {
                ++v2;
                goto LABEL_22;
            }
            v6 = (_WORD *)((char *)&dword_802A4C00 + v3);
            if (*v5) {
                --*v5;
            } else {
                v7 = &dword_8031A3F8[26 * v2];
                if (*(_WORD *)((char *)&dword_802A4BF0 + v3)) {
                    *v5 = *(_WORD *)(v3 - 2144711688);
                    sub_80261F20((int)v7);
                } else {
                    *v5 = *(_WORD *)(v3 - 2144711692);
                    sub_80262088((int)v7);
                }
                *(_WORD *)((char *)&dword_802A4BF0 + v3) ^= 1u;
            }
            if (*v6) {
                --*v6;
            } else {
                sub_80261F20((int)&dword_8031A3F8[26 * v2]);
                *(_WORD *)((char *)&dword_802A4BF0 + v3) = 0;
                *v5 = 0;
                *v4 = 0;
            }
        }
        ++v2;
    LABEL_22:
        ++v1;
    } while (v2 != 2);
    result = 1;
    dword_802A4C08 = 1;
    return result;
}
// 80260724: write access to const memory at 802A4C08 has been detected
// 8026FF10: using guessed type int dword_8026FF10;
// 8026FF18: using guessed type int dword_8026FF18;
// 802A4BE8: using guessed type __int16 word_802A4BE8;
// 802A4BEC: using guessed type int dword_802A4BEC;
// 802A4BF0: using guessed type int dword_802A4BF0;
// 802A4BFC: using guessed type int dword_802A4BFC;
// 802A4C00: using guessed type int dword_802A4C00;
// 802A4C04: using guessed type __int16 word_802A4C04;
// 802A4C08: using guessed type int dword_802A4C08;
// 8031A3F8: using guessed type int dword_8031A3F8[26];
