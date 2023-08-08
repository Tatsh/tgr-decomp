#include "types-n64.h"
//----- (80265BD8) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_80265BD8(char a1) {
    BOOL v1; // $at
    int i;   // [sp+0h] [-10h]
    int v3;  // [sp+0h] [-10h]
    int v4;  // [sp+4h] [-Ch]
    int v5;  // [sp+8h] [-8h]
    int *v6; // [sp+Ch] [-4h]

    for (i = 0; i < 16; ++i)
        *(_DWORD *)(4 * i - 2143816720) = 0;
    dword_8037F42C = 1;
    v6 = dword_8037F3F0;
    HIBYTE(v4) = -1;
    *(_WORD *)((char *)&v4 + 1) = 259;
    LOBYTE(v4) = a1;
    HIBYTE(v5) = -1;
    BYTE1(v5) = -1;
    LOWORD(v5) = -1;
    v3 = 0;
    do {
        *v6 = v4;
        v6[1] = v5;
        v1 = ++v3 < 136;
        v6 += 2;
    } while (v1);
    *(_BYTE *)v6 = -2;
}
// 80265C40: write access to const memory at 8037F42C has been detected
// 8037F3F0: using guessed type int dword_8037F3F0[15];
// 8037F42C: using guessed type int dword_8037F42C;
