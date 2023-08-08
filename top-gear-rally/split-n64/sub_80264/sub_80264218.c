#include "types-n64.h"
//----- (80264218) --------------------------------------------------------
int __fastcall sub_80264218(int a1, int a2, unsigned __int8 *a3, char a4) {
    int result; // $v0
    int i;      // [sp+24h] [-4h]
    __int16 v7; // [sp+2Ch] [+4h]

    v7 = HIWORD(a2);
    *(_BYTE *)(a1 + 101) = a4;
    result = sub_8026A37C(a1);
    if (!result) {
        for (i = 0; i < 8; ++i) {
            if (sub_8026A900(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 8 * v7 + i, a3, 0))
                break;
        }
        *(_BYTE *)(a1 + 101) = 0;
        result = sub_8026A37C(a1);
    }
    return result;
}
