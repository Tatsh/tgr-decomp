#include "types-n64.h"
//----- (80268138) --------------------------------------------------------
int __fastcall sub_80268138(int a1, unsigned __int8 a2, _WORD *a3, char a4) {
    int result;             // $v0
    unsigned __int8 v5[32]; // [sp+18h] [-28h] BYREF
    int v6;                 // [sp+38h] [-8h]
    int i;                  // [sp+3Ch] [-4h]

    *(_BYTE *)(a1 + 101) = a4;
    result = sub_8026A37C(a1);
    v6 = result;
    if (!result) {
        for (i = 0; i < 8; ++i) {
            v6 = sub_8026A3F0(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 8 * a2 + i, v5);
            if (v6) {
                *(_BYTE *)(a1 + 101) = 0;
                sub_8026A37C(a1);
                return v6;
            }
            *a3 += sub_80269690(v5, 32);
        }
        *(_BYTE *)(a1 + 101) = 0;
        result = sub_8026A37C(a1);
    }
    return result;
}
