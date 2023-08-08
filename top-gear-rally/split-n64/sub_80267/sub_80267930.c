#include "types-n64.h"
//----- (80267930) --------------------------------------------------------
int __fastcall sub_80267930(int a1, int a2, int a3) {
    int v3;               // $ra
    int result;           // $v0
    _BYTE v5[20];         // [sp+0h] [-150h] BYREF
    int v6;               // [sp+14h] [-13Ch]
    unsigned __int8 v7;   // [sp+1Eh] [-132h]
    unsigned __int8 v8;   // [sp+1Fh] [-131h]
    int i;                // [sp+20h] [-130h]
    unsigned __int16 v10; // [sp+24h] [-12Ch]
    int v11;              // [sp+28h] [-128h] BYREF
    __int16 v12;          // [sp+2Ch] [-124h]
    unsigned __int16 v13; // [sp+2Eh] [-122h]
    _WORD v14[128];       // [sp+48h] [-108h] BYREF
    int v15;              // [sp+148h] [-8h]
    int v16;              // [sp+14Ch] [-4h]
    __int16 v18;          // [sp+156h] [+6h]

    v18 = a2;
    v6 = v3;
    if (a2 >= *(_DWORD *)(a1 + 80) || a2 < 0)
        return 5;
    if ((*(_DWORD *)a1 & 1) == 0)
        return 5;
    if (sub_80269F60(a1) == 2)
        return 2;
    if (!*(_BYTE *)(a1 + 101) ||
        (*(_BYTE *)(a1 + 101) = 0, result = sub_8026A37C(a1), (v16 = result) == 0)) {
        result = sub_8026A3F0(
            *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 92) + v18, &v11);
        v16 = result;
        if (!result) {
            if (v12 && v11) {
                if (v13 >= *(int *)(a1 + 96)) {
                    v15 = 0;
                    v8 = HIBYTE(v13);
                    v7 = v13;
                    if (HIBYTE(v13) >= (int)*(unsigned __int8 *)(a1 + 100)) {
                    LABEL_24:
                        if (v10 == 1) {
                            *(_DWORD *)a3 = v15 << 8;
                            *(_WORD *)(a3 + 8) = v12;
                            *(_DWORD *)(a3 + 4) = v11;
                            for (i = 0; i < 16; ++i)
                                *(_BYTE *)(a3 + i + 14) = v5[i + 56];
                            for (i = 0; i < 4; ++i)
                                *(_BYTE *)(a3 + i + 10) = v5[i + 52];
                            result = 0;
                        } else {
                            result = 3;
                        }
                    } else {
                        while (1) {
                            result = sub_8026A05C(a1, (int)v14, 0, v8);
                            v16 = result;
                            if (result)
                                break;
                            v10 = v14[v7];
                            ++v15;
                            if (v10 >= *(int *)(a1 + 96)) {
                                while (1) {
                                    ++v15;
                                    v10 = v14[(unsigned __int8)v10];
                                    if (HIBYTE(v10) != v8)
                                        break;
                                    if (v10 < *(int *)(a1 + 96))
                                        goto LABEL_22;
                                }
                                v8 = HIBYTE(v10);
                                v7 = v10;
                            }
                        LABEL_22:
                            if (v10 == 1 || v8 >= (int)*(unsigned __int8 *)(a1 + 100))
                                goto LABEL_24;
                        }
                    }
                } else {
                    result = 3;
                }
            } else {
                result = 5;
            }
        }
    }
    return result;
}
// 80267940: variable 'v3' is possibly undefined
