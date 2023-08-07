#include "../../types-n64.h"
//----- (802696EC) --------------------------------------------------------
int __fastcall sub_802696EC(int a1, _WORD *a2, _WORD *a3) {
    unsigned int i; // [sp+0h] [-8h]
    __int16 v5;     // [sp+6h] [-2h]

    *a3 = 0;
    *a2 = *a3;
    for (i = 0; i < 0x1C; i += 2) {
        v5 = *(_WORD *)(a1 + i);
        *a2 += v5;
        *a3 += ~v5;
    }
    return 0;
}
