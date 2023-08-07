#include "../../types-n64.h"
//----- (80205FDC) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80205FDC() {
    int *v0;    // $a0
    int result; // $v0
    int *v2;    // $t1
    int *v3;    // $t0
    float *v4;  // $a3
    float *v5;  // $a2
    int *v6;    // $a1
    float v7;   // $f4
    float v8;   // $f6
    int v9;     // $t7
    int v10;    // $t8
    int v11;    // $t2
    int *v12;   // $t4
    int *v13;   // $t5
    float v14;  // $f8

    v0 = dword_80315D60;
    result = 0;
    v2 = dword_80315DA8;
    v3 = dword_80315DA0;
    v4 = (float *)dword_80315D70;
    v5 = (float *)dword_80315D68;
    v6 = dword_8031B760;
    do {
        v7 = *((float *)v6 + 1000);
        v8 = *((float *)v6 + 998);
        v9 = v6[999];
        v10 = v6[990];
        v11 = 0;
        *v0 = v6[1003];
        *v5 = v7;
        *v4 = v8;
        *v3 = v9;
        *v2 = v10;
        v12 = &dword_80315D78[5 * result];
        v13 = &dword_8031B760[2084 * result];
        do {
            v14 = *((float *)v13 + 993);
            ++v11;
            ++v12;
            ++v13;
            *((float *)v12 - 1) = v14;
        } while (v11 < 3);
        ++result;
        ++v0;
        v6 += 2084;
        ++v5;
        ++v4;
        ++v3;
        ++v2;
    } while (result < 1);
    dword_80270790 = 1;
    return result;
}
// 802060D8: write access to const memory at 80270790 has been detected
// 8026FF08: using guessed type int dword_8026FF08;
// 80270790: using guessed type int dword_80270790;
// 8028B304: using guessed type int dword_8028B304;
// 80315D60: using guessed type int dword_80315D60[2];
// 80315D68: using guessed type int dword_80315D68[2];
// 80315D70: using guessed type int dword_80315D70[2];
// 80315D78: using guessed type int dword_80315D78[10];
// 80315DA0: using guessed type int dword_80315DA0[2];
// 80315DA8: using guessed type int dword_80315DA8[2];
// 8031B760: using guessed type int dword_8031B760[512];
