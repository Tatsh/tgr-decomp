#include "types-n64.h"
//----- (80262A80) --------------------------------------------------------
int __fastcall sub_80262A80(int a1) {
    int v1;               // $ra
    int result;           // $v0
    int v3;               // $v0
    char *v4;             // $t7
    char *v5;             // $t9
    _WORD v6[2];          // [sp+0h] [-488h] BYREF
    unsigned int v7;      // [sp+4h] [-484h]
    int v8;               // [sp+1Ch] [-46Ch]
    __int16 v9;           // [sp+20h] [-468h]
    unsigned __int8 v10;  // [sp+23h] [-465h]
    int v11;              // [sp+24h] [-464h]
    int v12;              // [sp+28h] [-460h]
    int v13;              // [sp+2Ch] [-45Ch]
    unsigned __int8 v14;  // [sp+33h] [-455h]
    int v15;              // [sp+34h] [-454h]
    char v16[548];        // [sp+38h] [-450h] BYREF
    int v17;              // [sp+25Ch] [-22Ch] BYREF
    __int16 v18;          // [sp+260h] [-228h]
    unsigned __int16 v19; // [sp+262h] [-226h]
    char v20;             // [sp+264h] [-224h]
    __int16 v21;          // [sp+266h] [-222h]
    _WORD v22[128];       // [sp+27Ch] [-20Ch] BYREF
    _WORD v23[128];       // [sp+37Ch] [-10Ch] BYREF
    unsigned __int16 v24; // [sp+47Ch] [-Ch]
    int v25;              // [sp+480h] [-8h]
    int i;                // [sp+484h] [-4h]

    v8 = v1;
    v15 = 0;
    v25 = sub_80269F60(a1);
    if (v25 == 2)
        v25 = sub_80269D04(a1);
    if (v25)
        return v25;
    result = sub_80263144(a1, (int)v16);
    v25 = result;
    if (!result) {
        i = 0;
        if (*(int *)(a1 + 80) <= 0) {
        LABEL_35:
            i = 0;
            if (*(int *)(a1 + 80) <= 0) {
            LABEL_43:
                v14 = 0;
                if (*(_BYTE *)(a1 + 100)) {
                    while (1) {
                        result = sub_8026A05C(a1, (int)v22, 0, v14);
                        v25 = result;
                        if (result) {
                            if (result != 3)
                                break;
                        }
                        if (v14)
                            v11 = 1;
                        else
                            v11 = *(_DWORD *)(a1 + 96);
                        for (i = 0; i < v11; ++i)
                            v23[i] = v22[i];
                        for (; i < 128; ++i)
                            v23[i] = 3;
                        for (i = 0; i < *(_DWORD *)(a1 + 80); ++i) {
                            v4 = &v16[2 * i + 516];
                            if ((unsigned __int8)*v4 == v14 &&
                                *(unsigned __int16 *)v4 >= (int)*(unsigned __int16 *)(a1 + 98)) {
                                do {
                                    v10 = v6[i + 286];
                                    v9 = v22[v10];
                                    v23[v10] = v9;
                                    *(_WORD *)&v16[2 * i + 516] = v9;
                                    v5 = &v16[2 * i + 516];
                                } while ((unsigned __int8)*v5 == v14 &&
                                         *(unsigned __int16 *)v5 >=
                                             (int)*(unsigned __int16 *)(a1 + 98));
                            }
                        }
                        result = sub_8026A05C(a1, (int)v23, 1, v14);
                        v25 = result;
                        if (result)
                            break;
                        if (++v14 >= (int)*(unsigned __int8 *)(a1 + 100))
                            goto LABEL_61;
                    }
                } else {
                LABEL_61:
                    if (v15)
                        *(_DWORD *)a1 |= 2u;
                    else
                        *(_DWORD *)a1 &= 0xFFFFFFFD;
                    result = 0;
                }
            } else {
                while (1) {
                    result = sub_8026A3F0(
                        *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 92) + i, &v17);
                    v25 = result;
                    if (result)
                        break;
                    if (v18 && v17 && v19 >= (int)*(unsigned __int16 *)(a1 + 98))
                        v6[i + 286] = v19;
                    else
                        v6[i + 286] = 0;
                    if (++i >= *(_DWORD *)(a1 + 80))
                        goto LABEL_43;
                }
            }
        } else {
            while (1) {
                result = sub_8026A3F0(
                    *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 92) + i, &v17);
                v25 = result;
                if (result)
                    break;
                if (v18 && v17) {
                    v24 = v19;
                    v13 = 0;
                    v12 = 0;
                    v14 = -1;
                    if (v19 >= *(int *)(a1 + 96) &&
                        HIBYTE(v24) < (int)*(unsigned __int8 *)(a1 + 100) && (_BYTE)v24 &&
                        (unsigned __int8)v24 < 0x80u) {
                        while (1) {
                            if (v14 != HIBYTE(v24)) {
                                v14 = HIBYTE(v24);
                                result = sub_8026A05C(a1, (int)v22, 0, HIBYTE(v24));
                                v25 = result;
                                if (result) {
                                    if (result != 3)
                                        return result;
                                }
                            }
                            HIWORD(v7) = v24;
                            v3 = sub_802632F8(__SPAIR64__(a1, v7), (int)v16);
                            v13 = v3 - v12;
                            if (v3 == v12) {
                                v12 = 1;
                                v24 = v22[(unsigned __int8)v24];
                                if (v24 >= *(int *)(a1 + 96) &&
                                    HIBYTE(v24) < (int)*(unsigned __int8 *)(a1 + 100) &&
                                    (_BYTE)v24 && (unsigned __int8)v24 < 0x80u) {
                                    continue;
                                }
                            }
                            break;
                        }
                    }
                    if (v13 || v24 != 1) {
                        v18 = 0;
                        v17 = 0;
                        v19 = 0;
                        v20 = 0;
                        v21 = 0;
                        if (*(_BYTE *)(a1 + 101)) {
                            *(_BYTE *)(a1 + 101) = 0;
                            result = sub_8026A37C(a1);
                            v25 = result;
                            if (result)
                                return result;
                        }
                        result = sub_8026A900(*(_DWORD *)(a1 + 4),
                                              *(_DWORD *)(a1 + 8),
                                              *(_DWORD *)(a1 + 92) + i,
                                              (unsigned __int8 *)&v17,
                                              0);
                        v25 = result;
                        if (result)
                            return result;
                        ++v15;
                    }
                } else if (v18 || v17) {
                    v18 = 0;
                    v17 = 0;
                    v19 = 0;
                    v20 = 0;
                    v21 = 0;
                    if (*(_BYTE *)(a1 + 101)) {
                        *(_BYTE *)(a1 + 101) = 0;
                        result = sub_8026A37C(a1);
                        v25 = result;
                        if (result)
                            return result;
                    }
                    result = sub_8026A900(*(_DWORD *)(a1 + 4),
                                          *(_DWORD *)(a1 + 8),
                                          *(_DWORD *)(a1 + 92) + i,
                                          (unsigned __int8 *)&v17,
                                          0);
                    v25 = result;
                    if (result)
                        return result;
                    ++v15;
                }
                if (++i >= *(_DWORD *)(a1 + 80))
                    goto LABEL_35;
            }
        }
    }
    return result;
}
// 80262A84: variable 'v1' is possibly undefined
