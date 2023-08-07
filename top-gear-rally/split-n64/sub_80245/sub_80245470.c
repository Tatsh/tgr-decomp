#include "../../types-n64.h"
//----- (80245470) --------------------------------------------------------
int __fastcall sub_80245470(int a1) {
    int v1;           // $a2
    int v3;           // $s3
    int v4;           // $v0
    unsigned int v5;  // $a0
    unsigned int v6;  // $a1
    unsigned int v7;  // $s7
    unsigned int v8;  // $s6
    int result;       // $v0
    int v10;          // $t0
    int v11;          // $s4
    int v12;          // $s5
    int v13;          // $s1
    unsigned int v14; // $s2

    v1 = *(unsigned __int8 *)(a1 + 12);
    v3 = 0;
    v4 = *(_DWORD *)(a1 + 16);
    v5 = *(_DWORD *)(a1 + 20);
    v6 = *(_DWORD *)(a1 + 24);
    if (v1 == 4) {
        v7 = (v4 * v5) >> 1;
        v8 = (v4 * v6) >> 1;
    } else {
        v7 = v4 * v5 * (v1 >> 3);
        v8 = v4 * v6 * (v1 >> 3);
    }
    result = v5 / v6;
    v10 = *(_DWORD *)(a1 + 40);
    if (!v6)
        __break(7u, 0);
    v11 = v10 / result;
    v12 = result + 1;
    if (!result)
        __break(7u, 0);
    if (result == -1 && v10 == 0x80000000)
        __break(6u, 0);
    v13 = 1;
    v14 = v8;
    if (result > 0) {
        do {
            result = sub_80245B00(a1,
                                  *(_DWORD *)a1 + v7 - v14,
                                  *(_DWORD *)(a1 + 16),
                                  *(_DWORD *)(a1 + 24),
                                  *(_DWORD *)(a1 + 28),
                                  *(_DWORD *)(a1 + 32) + v3,
                                  *(_DWORD *)(a1 + 36),
                                  v11);
            ++v13;
            v14 += v8;
            v3 += v11;
        } while (v12 != v13);
    }
    return result;
}
