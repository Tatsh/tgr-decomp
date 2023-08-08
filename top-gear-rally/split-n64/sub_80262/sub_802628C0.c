#include "types-n64.h"
//----- (802628C0) --------------------------------------------------------
int __fastcall sub_802628C0(int *a1, __int16 a2, int a3, int a4, int a5, _DWORD *a6) {
    int v6;       // $ra
    int result;   // $v0
    _BYTE v8[20]; // [sp+0h] [-48h] BYREF
    int v9;       // [sp+14h] [-34h]
    int v10;      // [sp+18h] [-30h]
    int v11;      // [sp+1Ch] [-2Ch]
    int v12;      // [sp+20h] [-28h] BYREF
    __int16 v13;  // [sp+24h] [-24h]
    int v14;      // [sp+40h] [-8h]
    int v15;      // [sp+44h] [-4h]

    v9 = v6;
    v11 = 0;
    if (sub_80269F60((int)a1) == 2)
        return 2;
    v15 = 0;
    if (a1[20] <= 0) {
    LABEL_21:
        result = 5;
        *a6 = -1;
    } else {
        while (1) {
            result = sub_8026A3F0(a1[1], a1[2], a1[23] + v15, &v12);
            v11 = result;
            if (result)
                break;
            if (v13 == a2 && v12 == a3) {
                v10 = 0;
                if (a4) {
                    v14 = 0;
                    while (*(unsigned __int8 *)(a4 + v14) == (unsigned __int8)v8[v14 + 48]) {
                        if (++v14 >= 16)
                            goto LABEL_12;
                    }
                    v10 = 1;
                }
            LABEL_12:
                if (a5 && !v10) {
                    v14 = 0;
                    while (*(unsigned __int8 *)(a5 + v14) == (unsigned __int8)v8[v14 + 44]) {
                        if (++v14 >= 4)
                            goto LABEL_18;
                    }
                    v10 = 1;
                }
            LABEL_18:
                if (!v10) {
                    *a6 = v15;
                    return v11;
                }
            }
            if (++v15 >= a1[20])
                goto LABEL_21;
        }
    }
    return result;
}
// 802628C4: variable 'v6' is possibly undefined
