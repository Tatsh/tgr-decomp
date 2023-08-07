#include "../../types-n64.h"
//----- (80263B30) --------------------------------------------------------
int __fastcall sub_80263B30(int a1, __int16 a2, int a3, _BYTE *a4, _BYTE *a5, int a6, _DWORD *a7) {
    int v7;              // $ra
    int result;          // $v0
    int v9;              // $t0
    BOOL v10;            // $at
    BOOL v11;            // $at
    _BYTE v12[16];       // [sp+0h] [-278h] BYREF
    int v13;             // [sp+24h] [-254h]
    __int16 v14;         // [sp+2Ch] [-24Ch]
    int v15;             // [sp+30h] [-248h] BYREF
    int v16;             // [sp+34h] [-244h]
    unsigned __int8 v17; // [sp+3Ah] [-23Eh]
    unsigned __int8 v18; // [sp+3Bh] [-23Dh]
    int v19;             // [sp+3Ch] [-23Ch] BYREF
    __int16 v20;         // [sp+40h] [-238h]
    __int16 v21;         // [sp+42h] [-236h]
    __int16 v22;         // [sp+46h] [-232h]
    _WORD v23[128];      // [sp+5Ch] [-21Ch] BYREF
    _WORD v24[128];      // [sp+15Ch] [-11Ch] BYREF
    int v25;             // [sp+25Ch] [-1Ch]
    int v26;             // [sp+260h] [-18h]
    int i;               // [sp+264h] [-14h]
    int v28;             // [sp+268h] [-10h]
    int v29;             // [sp+26Ch] [-Ch] BYREF
    int v30;             // [sp+270h] [-8h] BYREF
    int v31;             // [sp+274h] [-4h] BYREF

    v13 = v7;
    v28 = 0;
    v26 = 0;
    v17 = 0;
    v16 = 0;
    if (!a2 || !a3)
        return 5;
    v9 = (a6 + 255) >> 8;
    if (a6 + 255 < 0)
        v9 = (a6 + 510) >> 8;
    v25 = v9;
    if ((*(_DWORD *)a1 & 1) == 0)
        return 5;
    if (sub_80269F60(a1) == 2)
        return 2;
    result = sub_802628C0((int *)a1, a2, a3, (int)a4, (int)a5, a7);
    v26 = result;
    if (!result || result == 5) {
        if (*a7 == -1) {
            v26 = sub_802639E0(a1, &v15);
            if (v15 >= a6) {
                if (v25) {
                    result = sub_802628C0((int *)a1, 0, 0, 0, 0, a7);
                    v26 = result;
                    if (!result || result == 5) {
                        if (*a7 == -1) {
                            result = 8;
                        } else {
                            v18 = 0;
                            if (*(_BYTE *)(a1 + 100)) {
                                while (1) {
                                    result = sub_8026A05C(a1, (int)v24, 0, v18);
                                    v26 = result;
                                    if (result)
                                        break;
                                    result = sub_80263FB4(a1, (int)v24, v25, &v31, v18, &v30, &v29);
                                    v26 = result;
                                    if (result)
                                        break;
                                    if (v31 != -1) {
                                        if (v16) {
                                            HIBYTE(v23[v28]) = v18;
                                            v12[2 * v28 + 93] = v31;
                                            result = sub_8026A05C(a1, (int)v23, 1, v17);
                                            v26 = result;
                                            if (result)
                                                return result;
                                        } else {
                                            LOBYTE(v14) = v31;
                                            HIBYTE(v14) = v18;
                                        }
                                        for (i = 0; i < 128; ++i)
                                            v23[i] = v24[i];
                                        ++v16;
                                        v28 = v29;
                                        v17 = v18;
                                        if (v30 >= v25) {
                                            v25 = 0;
                                            goto LABEL_34;
                                        }
                                        v25 -= v30;
                                    }
                                    if (++v18 >= (int)*(unsigned __int8 *)(a1 + 100))
                                        goto LABEL_34;
                                }
                            } else {
                            LABEL_34:
                                if (v25 > 0 || v31 == -1) {
                                    result = 3;
                                } else {
                                    HIBYTE(v23[v28]) = v18;
                                    v12[2 * v28 + 93] = v31;
                                    result = sub_8026A05C(a1, (int)v23, 1, v17);
                                    v26 = result;
                                    if (!result) {
                                        v22 = 0;
                                        i = 0;
                                        v21 = v14;
                                        v20 = a2;
                                        v19 = a3;
                                        do {
                                            v12[i + 76] = *a4;
                                            v10 = ++i < 16;
                                            ++a4;
                                        } while (v10);
                                        i = 0;
                                        do {
                                            v12[i + 72] = *a5;
                                            v11 = ++i < 4;
                                            ++a5;
                                        } while (v11);
                                        result = sub_8026A900(*(_DWORD *)(a1 + 4),
                                                              *(_DWORD *)(a1 + 8),
                                                              *a7 + *(_DWORD *)(a1 + 92),
                                                              (unsigned __int8 *)&v19,
                                                              0);
                                        v26 = result;
                                        if (!result)
                                            result = 0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    result = 5;
                }
            } else {
                result = 7;
            }
        } else {
            result = 9;
        }
    }
    return result;
}
// 80263B3C: variable 'v7' is possibly undefined
