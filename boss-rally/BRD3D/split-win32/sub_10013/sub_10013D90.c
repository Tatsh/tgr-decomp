#include "types-win32.h"
//----- (10013D90) --------------------------------------------------------
__int16 __cdecl sub_10013D90(int a1, int a2, int a3, unsigned __int8 a4, unsigned __int8 a5) {
    int v5;            // ecx
    int v6;            // eax
    int v7;            // edx
    int v8;            // ebx
    int v9;            // eax
    int v10;           // edi
    int v11;           // ebx
    int v12;           // ebp
    double v13;        // st7
    double v14;        // st7
    double v15;        // st6
    double v16;        // st6
    double v17;        // st7
    double v18;        // st7
    int v19;           // esi
    int v20;           // eax
    _DWORD *v21;       // ecx
    _DWORD *v22;       // edx
    _DWORD *v23;       // ecx
    int v24;           // ecx
    int v25;           // ecx
    unsigned int *v26; // edx
    int v27;           // ecx
    int v28;           // edi
    int v29;           // esi
    __int16 v30;       // cx
    int v31;           // eax
    float v33;         // [esp+Ch] [ebp-28h]
    int v34;           // [esp+Ch] [ebp-28h]
    float v35;         // [esp+10h] [ebp-24h]
    float v36;         // [esp+14h] [ebp-20h]
    float v37;         // [esp+18h] [ebp-1Ch]
    int v38;           // [esp+1Ch] [ebp-18h]
    int v39;           // [esp+20h] [ebp-14h]
    float v40;         // [esp+24h] [ebp-10h] BYREF
    float v41;         // [esp+28h] [ebp-Ch]
    float v42;         // [esp+2Ch] [ebp-8h]
    float v43;         // [esp+30h] [ebp-4h]
    float v44;         // [esp+38h] [ebp+4h]
    float v45;         // [esp+3Ch] [ebp+8h]
    int v46;           // [esp+3Ch] [ebp+8h]

    v5 = *(_DWORD *)(a1 + 88 * dword_106C5708 + 8);
    v6 = a1 + 88 * dword_106C5708;
    v7 = *(_DWORD *)(v6 + 12);
    v8 = v7 + 2 * *(_DWORD *)(v6 + 4);
    v9 = a2;
    v36 = (float)(2 * v5);
    v10 = 2 * (v5 + 2 * *(_DWORD *)(a1 + 88 * dword_106C5708));
    v11 = 2 * v8;
    v37 = (float)(2 * v7);
    v39 = v10;
    v38 = v11;
    if (a2) {
        do {
            v12 = 32 * v9;
            sub_1003B2A0(&v40, (float *)(32 * v9 + dword_1039B71C), flt_1039B6D0);
            if (v43 > 0.001 || v43 < -0.001) {
                v13 = 1.0 / v43;
                v44 = v13;
                v14 = v13 * v42;
                v42 = v14;
                if (v14 < 1.0 && v42 > -0.30000001) {
                    v40 = v44 * v40;
                    v15 = *(float *)(dword_1039B71C + v12 + 24) * v44 * 4.0;
                    v35 = v15;
                    v16 = v15 - -1.0;
                    v45 = v16;
                    v33 = -v16;
                    if (v40 > (double)v33 && v40 < (double)v45) {
                        v17 = v44 * v41;
                        v41 = v17;
                        if (v17 > v33 && v41 < (double)v45) {
                            v18 = v36 * v35;
                            v34 = (__int64)(v18 * 0.75);
                            if (v34 >= 1) {
                                v46 = (__int64)v18;
                                if (v46 >= 1) {
                                    v19 = v10 + (__int64)(v36 * v40);
                                    v20 = v11 + (__int64)(v37 * v41);
                                    v21 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v21 = -419430400;
                                    v21[1] = 0;
                                    v22 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v22 = -100597761;
                                    v22[1] =
                                        (unsigned __int8)((unsigned __int16)(*(unsigned __int8
                                                                                   *)(dword_1039B71C +
                                                                                      v12 + 31) *
                                                                             *(unsigned __int8
                                                                                   *)(dword_1039B71C +
                                                                                      v12 + 30)) >>
                                                          8) |
                                        ((a5 | ((a4 | (a3 << 8)) << 8)) << 8);
                                    v23 = (_DWORD *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    *v23 = -1241513984;
                                    v23[1] = 12288;
                                    v24 = dword_106C0680;
                                    dword_106C0680 += 8;
                                    *(_DWORD *)v24 = -570425344;
                                    *(float *)(v24 + 4) = v44;
                                    v25 = dword_106C0680;
                                    dword_106C0680 += 8;
                                    *(_DWORD *)v25 = -553648128;
                                    *(float *)(v25 + 4) = v42;
                                    v26 = (unsigned int *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    v27 = (v19 + v34) >> 2;
                                    if ((__int16)v27 <= 0)
                                        LOWORD(v27) = 0;
                                    v28 = (v20 + v46) >> 2;
                                    if ((__int16)v28 <= 0)
                                        LOWORD(v28) = 0;
                                    v29 = (v19 - v34) >> 2;
                                    *v26 = v28 & 0xFFF | ((v27 & 0xFFF | 0xFFFE3000) << 12);
                                    if ((__int16)v29 <= 0)
                                        v30 = 0;
                                    else
                                        v30 = v29;
                                    v31 = (v20 - v46) >> 2;
                                    if ((__int16)v31 <= 0)
                                        LOWORD(v31) = 0;
                                    v11 = v38;
                                    v10 = v39;
                                    v26[1] = v31 & 0xFFF | ((v30 & 0xFFF) << 12);
                                }
                            }
                        }
                    }
                }
            }
            v9 = *(unsigned __int16 *)(dword_1039B71C + v12 + 28);
        } while ((_WORD)v9);
    }
    return v9;
}
// 1039B71C: using guessed type int dword_1039B71C;
// 106C0680: using guessed type int dword_106C0680;
// 106C5708: using guessed type int dword_106C5708;
