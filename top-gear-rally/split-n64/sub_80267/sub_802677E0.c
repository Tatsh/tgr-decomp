#include "types-n64.h"
//----- (802677E0) --------------------------------------------------------
int __fastcall sub_802677E0(int a1, _DWORD *a2, _DWORD *a3) {
    int result; // $v0
    int v4;     // [sp+1Ch] [-2Ch]
    int v5;     // [sp+20h] [-28h] BYREF
    __int16 v6; // [sp+24h] [-24h]
    int v7;     // [sp+40h] [-8h]
    int v8;     // [sp+44h] [-4h]

    v4 = 0;
    if ((*(_DWORD *)a1 & 1) == 0)
        return 5;
    if (sub_80269F60(a1) == 2)
        return 2;
    if (!*(_BYTE *)(a1 + 101) ||
        (*(_BYTE *)(a1 + 101) = 0, result = sub_8026A37C(a1), (v7 = result) == 0)) {
        v8 = 0;
        if (*(int *)(a1 + 80) <= 0) {
        LABEL_13:
            result = 0;
            *a3 = v4;
            *a2 = *(_DWORD *)(a1 + 80);
        } else {
            while (1) {
                result = sub_8026A3F0(
                    *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 92) + v8, &v5);
                v7 = result;
                if (result)
                    break;
                if (v6) {
                    if (v5)
                        ++v4;
                }
                if (++v8 >= *(_DWORD *)(a1 + 80))
                    goto LABEL_13;
            }
        }
    }
    return result;
}
