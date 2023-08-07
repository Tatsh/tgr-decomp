#include "../../types-n64.h"
//----- (80267F00) --------------------------------------------------------
int __fastcall sub_80267F00(int a1,
                            int a2,
                            unsigned __int8 a3,
                            _WORD *a4,
                            unsigned __int8 a5,
                            unsigned __int16 *a6,
                            int a7) {
    int result;           // $v0
    int v8;               // [sp+18h] [-10h]
    unsigned __int8 v9;   // [sp+21h] [-7h]
    unsigned __int16 v10; // [sp+24h] [-4h]

    v10 = *(_WORD *)(a2 + 2 * a3);
    if (v10 == 1) {
        if (a5)
            v8 = 1;
        else
            v8 = *(_DWORD *)(a1 + 96);
    } else if (HIBYTE(v10)) {
        v8 = 1;
    } else {
        v8 = *(_DWORD *)(a1 + 96);
    }
    if ((unsigned __int8)v10 < v8 && v10 != 1)
        return 3;
    *a6 = v10;
    if (a7 == 1)
        *(_WORD *)(a2 + 2 * a3) = 3;
    result = sub_80268138(a1, a3, a4, a5);
    if (!result) {
        if (v10 == 1) {
            result = 0;
        } else if (v10 < *(int *)(a1 + 96)) {
        LABEL_20:
            if (v10 >= *(int *)(a1 + 96))
                *(_WORD *)(a2 + 2 * (unsigned __int8)v10) = 3;
            result = 0;
            *a6 = v10;
        } else {
            while (1) {
                v9 = v10;
                v10 = *(_WORD *)(a2 + 2 * (unsigned __int8)v10);
                *(_WORD *)(a2 + 2 * v9) = 3;
                result = sub_80268138(a1, v9, a4, a5);
                if (result)
                    break;
                if (HIBYTE(v10) != a5 || v10 < *(int *)(a1 + 96))
                    goto LABEL_20;
            }
        }
    }
    return result;
}
