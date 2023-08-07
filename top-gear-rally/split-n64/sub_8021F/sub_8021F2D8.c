#include "../../types-n64.h"
//----- (8021F2D8) --------------------------------------------------------
void __fastcall sub_8021F2D8(int a1) {
    char v1;  // $v0
    float v2; // $f8
    char v3;  // $v0
    int v4;   // $v1

    if (MEMORY[0x80025C70]) {
        v1 = sub_802562E0(*(float *)(a1 + 48) / 32.0);
        v2 = *(float *)(a1 + 52);
        *(_BYTE *)(a1 + 8304) = v1;
        v3 = sub_802562E0(v2 / 32.0);
        v4 = *(unsigned __int8 *)(a1 + 8304);
        *(_BYTE *)(a1 + 8305) = v3;
        if (v4 >= 64)
            *(_BYTE *)(a1 + 8304) = 63;
        if (*(unsigned __int8 *)(a1 + 8305) >= 0x40u)
            *(_BYTE *)(a1 + 8305) = 63;
        sub_8021EB50(a1);
    }
}
// 8021F32C: conditional instruction was optimized away because of '$v1.4<100u'
