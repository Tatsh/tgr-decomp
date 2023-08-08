#include "types-n64.h"
//----- (80225F88) --------------------------------------------------------
int __fastcall sub_80225F88(int a1) {
    int result; // $v0
    int v2;     // $a1
    int v3;     // $a3
    int i;      // $t0

    result = MEMORY[0xC74C1D3C];
    if (MEMORY[0xC74C1D3C] >= 4u)
        result = 3;
    v2 = *(_DWORD *)(a1 + 320);
    if (v2 < 1) {
        *(_DWORD *)(a1 + 8284) = HIBYTE(off_8028B944[7 * MEMORY[0xC74C1D3C] + 4]);
    } else {
        v3 = SLOWORD(off_8028B944[7 * result + 4]);
        for (i = 0; i < 16; ++i) {
            if ((v3 & 1) != 0)
                break;
            LOBYTE(v3) = v3 >> 1;
        }
        if (i == 16)
            i = 5;
        if (v2 > 1)
            *(_DWORD *)(a1 + 8284) = i;
        else
            *(_DWORD *)(a1 + 8284) =
                *((unsigned __int8 *)&off_8028B944[7 * MEMORY[0xC74C1D3C] + 3] + v2 + 3);
    }
    return result;
}
// 8026FF08: using guessed type int dword_8026FF08;
// 8026FF18: using guessed type int dword_8026FF18;
// 8028B944: using guessed type char *off_8028B944[2];
