#include "types-n64.h"
//----- (80259350) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int *sub_80259350() {
    int *v0;     // $t0
    int *v1;     // $a1
    int *v2;     // $a0
    __int16 *v3; // $v1
    int *v4;     // $a2
    int v5;      // $v0
    int *v6;     // $a3
    int *result; // $v0
    int *v8;     // $v1

    v0 = dword_80379F80;
    v1 = dword_8037EA88;
    v2 = &dword_8037EA90;
    v3 = &word_8037EA80;
    v4 = dword_80379F80;
    do {
        *v3 = 0;
        *v2 = 0;
        *(_WORD *)v1 = 0;
        *(float *)v0 = 0.0;
        *((float *)v0 + 1) = 0.0;
        *((float *)v0 + 2) = 0.0;
        *((float *)v0 + 3) = 0.0;
        v0[4] = 0;
        v0[5] = 0;
        v0[6] = 0;
        *((float *)v0 + 8) = 0.0;
        *((float *)v0 + 9) = 0.0;
        *((float *)v0 + 10) = 0.0;
        *((float *)v0 + 11) = 0.0;
        v0[12] = 0;
        v0[13] = 0;
        v0[14] = 0;
        v5 = 2;
        v6 = v4 + 16;
        do {
            v5 += 4;
            *((float *)v6 + 8) = 0.0;
            *((float *)v6 + 9) = 0.0;
            *((float *)v6 + 10) = 0.0;
            *((float *)v6 + 11) = 0.0;
            v6[12] = 0;
            v6[13] = 0;
            v6[14] = 0;
            *((float *)v6 + 16) = 0.0;
            *((float *)v6 + 17) = 0.0;
            *((float *)v6 + 18) = 0.0;
            *((float *)v6 + 19) = 0.0;
            v6[20] = 0;
            v6[21] = 0;
            v6[22] = 0;
            *((float *)v6 + 24) = 0.0;
            *((float *)v6 + 25) = 0.0;
            *((float *)v6 + 26) = 0.0;
            *((float *)v6 + 27) = 0.0;
            v6[28] = 0;
            v6[29] = 0;
            v6[30] = 0;
            v6 += 32;
            *((float *)v6 - 32) = 0.0;
            *((float *)v6 - 31) = 0.0;
            *((float *)v6 - 30) = 0.0;
            *((float *)v6 - 29) = 0.0;
            *(v6 - 28) = 0;
            *(v6 - 27) = 0;
            *(v6 - 26) = 0;
        } while (v5 != 150);
        v0 += 1200;
        ++v3;
        ++v2;
        v1 = (int *)((char *)v1 + 2);
        v4 += 1200;
    } while (v0 < (int *)&word_8037EA80);
    result = dword_80379F80;
    v8 = dword_80379940;
    do {
        v8 += 8;
        *(v8 - 6) = 0;
        *(v8 - 5) = 0;
        *(v8 - 4) = 0;
        *(v8 - 3) = 0;
        *(v8 - 2) = 0;
        *(v8 - 1) = 0;
        *(v8 - 8) = 0;
        *(v8 - 7) = 0;
    } while (v8 != dword_80379F80);
    dword_802A4A20 = 0;
    dword_802A4A24 = 0;
    dword_8037EAA0 = 0;
    return result;
}
// 802594A0: write access to const memory at 802A4A20 has been detected
// 802594A8: write access to const memory at 802A4A24 has been detected
// 802594B8: write access to const memory at 8037EAA0 has been detected
// 802A4A20: using guessed type int dword_802A4A20;
// 802A4A24: using guessed type int dword_802A4A24;
// 80379940: using guessed type int dword_80379940[400];
// 80379F80: using guessed type int dword_80379F80[512];
// 8037EA80: using guessed type __int16 word_8037EA80;
// 8037EA88: using guessed type int dword_8037EA88[2];
// 8037EA90: using guessed type int dword_8037EA90;
// 8037EAA0: using guessed type int dword_8037EAA0;
