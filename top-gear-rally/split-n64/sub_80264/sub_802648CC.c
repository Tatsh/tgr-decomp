#include "../../types-n64.h"
//----- (802648CC) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_802648CC() {
    BOOL v0;    // $at
    int i;      // [sp+0h] [-10h]
    int v2;     // [sp+0h] [-10h]
    __int64 v3; // [sp+4h] [-Ch]
    int *v4;    // [sp+Ch] [-4h]

    v4 = dword_8037F3F0;
    for (i = 0; i < 16; ++i)
        *(_DWORD *)(4 * i - 2143816720) = 0;
    dword_8037F42C = 1;
    HIBYTE(v3) = -1;
    BYTE1(v3) = 1;
    *(_DWORD *)((char *)&v3 + 2) = 67239935;
    LOWORD(v3) = -1;
    v2 = 0;
    do {
        *(_QWORD *)v4 = v3;
        v0 = ++v2 < 136;
        v4 += 2;
    } while (v0);
    *(_BYTE *)v4 = -2;
}
// 80264934: write access to const memory at 8037F42C has been detected
// 8037F3F0: using guessed type int dword_8037F3F0[15];
// 8037F42C: using guessed type int dword_8037F42C;
