#include "types-n64.h"
//----- (802621F4) --------------------------------------------------------
int __fastcall sub_802621F4(int a1, __int16 a2, _BYTE *a3, _BYTE *a4) {
    int v4;        // $ra
    int result;    // $v0
    BOOL v6;       // $at
    BOOL v7;       // $at
    char *v8;      // $t9
    _DWORD *v9;    // $t7
    int v10;       // $at
    int v11;       // $at
    _BYTE v12[20]; // [sp+0h] [-48h] BYREF
    int v13;       // [sp+14h] [-34h]
    int v14;       // [sp+18h] [-30h]
    char v15[4];   // [sp+1Ch] [-2Ch] BYREF
    __int16 v16;   // [sp+20h] [-28h]
    _BYTE v17[4];  // [sp+40h] [-8h] BYREF
    _BYTE *v18;    // [sp+44h] [-4h]

    v13 = v4;
    v14 = 0;
    v18 = a4;
    do
        *(_DWORD *)&a4[4 * v14++] = 0;
    while (v14 < 15);
    *((_DWORD *)a4 + 15) = 1;
    v15[0] = -1;
    v15[1] = 35;
    v15[2] = 1;
    v15[3] = 3;
    result = sub_8026A780(a2);
    v17[2] = -1;
    v16 = result | (32 * a2);
    v14 = 0;
    do {
        v12[v14 + 34] = *a3;
        v6 = ++v14 < 32;
        ++a3;
    } while (v6);
    if (a1) {
        v14 = 0;
        if (a1 > 0) {
            do {
                *v18 = 0;
                v7 = ++v14 < a1;
                ++v18;
            } while (v7);
        }
    }
    v8 = v15;
    v9 = v18;
    do {
        v10 = *(_DWORD *)v8;
        v8 += 12;
        v9 += 3;
        *(v9 - 3) = v10;
        *(v9 - 2) = *((_DWORD *)v8 - 2);
        v11 = *((_DWORD *)v8 - 1);
        *(v9 - 1) = v11;
        *(v9 - 1) = v11;
    } while (v8 != v17);
    *v9 = *(_DWORD *)v8;
    v18 += 40;
    *v18 = -2;
    return result;
}
// 80262200: variable 'v4' is possibly undefined
