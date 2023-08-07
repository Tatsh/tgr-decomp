#include "../../types-n64.h"
//----- (80263FB4) --------------------------------------------------------
int __fastcall sub_80263FB4(int a1, int a2, int a3, _DWORD *a4, char a5, _DWORD *a6, _DWORD *a7) {
    int v7;                  // $ra
    int result;              // $v0
    int v9;                  // $t8
    int v10;                 // $t9
    int v11;                 // [sp+14h] [-3Ch]
    int v12;                 // [sp+18h] [-38h]
    int v13;                 // [sp+1Ch] [-34h]
    int j;                   // [sp+20h] [-30h]
    unsigned __int8 v15[32]; // [sp+24h] [-2Ch] BYREF
    int v16;                 // [sp+44h] [-Ch]
    int v17;                 // [sp+48h] [-8h]
    int i;                   // [sp+4Ch] [-4h]

    v11 = v7;
    v13 = 0;
    if (a5)
        v12 = 1;
    else
        v12 = *(_DWORD *)(a1 + 96);
    for (i = v12; i < 128; ++i) {
        if (*(_WORD *)(a2 + 2 * i) == 3)
            break;
    }
    if (i == 128) {
        *a4 = -1;
        result = v13;
    } else {
        for (j = 0; j < 32; ++j)
            v15[j] = 0;
        v17 = i;
        *a6 = 1;
        v9 = i;
        v10 = ++i;
        v16 = v9;
        if (*a6 < a3 && v10 < 128) {
            do {
                if (*(_WORD *)(a2 + 2 * i) == 3) {
                    *(_BYTE *)(a2 + 2 * v16) = a5;
                    *(_BYTE *)(a2 + 2 * v16 + 1) = i;
                    result = sub_80264218(a1, v16, v15, a5);
                    v13 = result;
                    if (result)
                        return result;
                    v16 = i;
                    ++*a6;
                }
                ++i;
            } while (*a6 < a3 && i < 128);
        }
        *a4 = v17;
        if (i == 128 && *a6 < a3) {
            *a7 = v16;
            result = v13;
        } else {
            *(_WORD *)(a2 + 2 * v16) = 1;
            v13 = sub_80264218(a1, v16, v15, a5);
            *a7 = 0;
            result = v13;
        }
    }
    return result;
}
// 80263FBC: variable 'v7' is possibly undefined
