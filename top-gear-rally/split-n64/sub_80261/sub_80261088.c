#include "types-n64.h"
//----- (80261088) --------------------------------------------------------
_DWORD *__fastcall sub_80261088(int a1, _DWORD *a2) {
    _DWORD *result; // $v0
    _DWORD *v3;     // $v1
    int i;          // $a2
    int v6;         // $a0
    int v7;         // $t1
    signed int v8;  // $a1
    int v9;         // [sp+0h] [-10h]

    result = a2;
    v3 = a2 + 8;
    for (i = 0; i != 4; ++i) {
        v6 = 0;
        v7 = a1;
        do {
            ++v6;
            v8 = (unsigned __int16)HIWORD(*v3) | *result & 0xFFFF0000;
            v9 = (unsigned __int16)*v3++ | (*result++ << 16);
            v7 += 8;
            *(float *)(v7 - 8) = (float)v8 / 65536.0;
            *(float *)(v7 - 4) = (float)v9 / 65536.0;
        } while (v6 != 2);
        a1 += 16;
    }
    return result;
}
