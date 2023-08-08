#include "types-n64.h"
//----- (802303D4) --------------------------------------------------------
void __fastcall sub_802303D4(int a1) {
    float v2; // $f0
    bool v3;  // dc
    int v4;   // $t0

    sub_80224A78((float *)(a1 + 48), (float *)0x30);
    *(_DWORD *)(4 * *(_DWORD *)(a1 + 320) - 2144010240 + 7280) = 0;
    *(_DWORD *)(4 * *(_DWORD *)(a1 + 320) - 2144010240 + 7296) = 0;
    sub_80218C8C();
    *(float *)(a1 + 7652) = v2;
    if (!a1 || !(v3 = !sub_8022D43C(*(float *)(a1 + 48), *(float *)(a1 + 52)))) {
        if (a1) {
            v4 = *(unsigned __int8 *)(a1 + 8291);
        } else {
            if (MEMORY[0x1DE8] == 7664 || MEMORY[0x1DE8] == 8004) {
                *(_DWORD *)(4 * MEMORY[0x140] - 2144010240 + 7296) = 1;
                return;
            }
            v4 = MEMORY[0x2063];
        }
        if (v4 != 2)
            *(_DWORD *)(4 * *(_DWORD *)(a1 + 320) - 2144010240 + 7280) = 1;
        *(_DWORD *)(4 * *(_DWORD *)(a1 + 320) - 2144010240 + 7296) = 1;
    }
}
// 8023042C: variable 'v2' is possibly undefined
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AA8C: using guessed type int dword_8028AA8C;
