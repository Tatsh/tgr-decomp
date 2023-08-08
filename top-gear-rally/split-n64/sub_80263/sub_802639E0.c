#include "types-n64.h"
//----- (802639E0) --------------------------------------------------------
int __fastcall sub_802639E0(int a1, _DWORD *a2) {
    int v2;             // $ra
    int result;         // $v0
    int v4;             // [sp+14h] [-11Ch]
    int v5;             // [sp+1Ch] [-114h]
    unsigned __int8 v6; // [sp+23h] [-10Dh]
    int v7;             // [sp+24h] [-10Ch]
    _WORD v8[128];      // [sp+28h] [-108h] BYREF
    int v9;             // [sp+128h] [-8h]
    int i;              // [sp+12Ch] [-4h]

    v4 = v2;
    v9 = 0;
    v7 = 0;
    if ((*(_DWORD *)a1 & 1) == 0)
        return 5;
    if (sub_80269F60(a1) == 2)
        return 2;
    v6 = 0;
    if (*(_BYTE *)(a1 + 100)) {
        while (1) {
            result = sub_8026A05C(a1, (int)v8, 0, v6);
            v7 = result;
            if (result)
                break;
            if (v6)
                v5 = 1;
            else
                v5 = *(_DWORD *)(a1 + 96);
            for (i = v5; i < 128; ++i) {
                if (v8[i] == 3)
                    ++v9;
            }
            if (++v6 >= (int)*(unsigned __int8 *)(a1 + 100))
                goto LABEL_15;
        }
    } else {
    LABEL_15:
        result = 0;
        *a2 = v9 << 8;
    }
    return result;
}
// 802639EC: variable 'v2' is possibly undefined
