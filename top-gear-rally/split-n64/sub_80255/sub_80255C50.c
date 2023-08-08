#include "types-n64.h"
//----- (80255C50) --------------------------------------------------------
void __fastcall sub_80255C50(int a1) {
    int v1;    // $s0
    __int16 i; // $v0

    v1 = a1;
    if (a1) {
        for (i = *(_WORD *)(a1 + 22);; i = *(_WORD *)(v1 + 22)) {
            if ((i & 0x8000) != 0) {
                *(_WORD *)(v1 + 22) = i & 0x7FFF;
                sub_80255C50(*(_DWORD *)v1);
            }
            v1 = *(_DWORD *)(v1 + 4);
            if (!v1)
                break;
        }
    }
}
