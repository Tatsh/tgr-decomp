#include "../../types-n64.h"
//----- (80260ED0) --------------------------------------------------------
int __fastcall sub_80260ED0(float *a1, int a2) {
    int result; // $v0
    int v3;     // $v1
    int v4;     // $a2
    float *v6;  // $t0
    int v7;     // $a0
    float v8;   // $f18
    float v9;   // $f16
    int v10;    // $a1
    int v11;    // $a1

    result = a2;
    v3 = a2 + 32;
    v4 = 0;
    do {
        v6 = a1;
        v7 = 1;
        v8 = *a1;
        v9 = a1[1] * 65536.0;
        do {
            ++v7;
            result += 4;
            v3 += 4;
            v6 += 2;
            v10 = (int)(float)(v8 * 65536.0);
            *(_DWORD *)(result - 4) = v10 & 0xFFFF0000 | ((unsigned int)(int)v9 >> 16);
            *(_DWORD *)(v3 - 4) = (v10 << 16) | (unsigned __int16)(int)v9;
            v8 = *v6;
            v9 = v6[1] * 65536.0;
        } while (v7 != 2);
        result += 4;
        v3 += 4;
        v11 = (int)(float)(v8 * 65536.0);
        *(_DWORD *)(result - 4) = v11 & 0xFFFF0000 | ((unsigned int)(int)v9 >> 16);
        *(_DWORD *)(v3 - 4) = (v11 << 16) | (unsigned __int16)(int)v9;
        ++v4;
        a1 += 4;
    } while (v4 != 4);
    return result;
}
