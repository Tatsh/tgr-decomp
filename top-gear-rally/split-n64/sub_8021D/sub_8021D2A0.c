#include "types-n64.h"
//----- (8021D2A0) --------------------------------------------------------
int __fastcall sub_8021D2A0(_BYTE *a1, int a2) {
    int result;           // $v0
    unsigned __int16 *v3; // $v1
    int v4;               // $a0
    int v5;               // $t3
    int v6;               // $t4

    result = 36 * *(unsigned __int8 *)(a2 + 274) + *(_DWORD *)(a2 + 20);
    v3 = *(unsigned __int16 **)(result + 4);
    if (v3) {
        if ((*(_BYTE *)(result + 32) & 0xF) == 1) {
            v4 = *v3;
            v5 = (v4 >> 13) & 7;
            v6 = (v4 >> 8) & 0xF8;
            result = v5 | v6;
            a1[8290] = (v4 >> 3) & 7 | (4 * v4) & 0xF8;
            a1[8289] = BYTE2(v4) & 7 | (v4 >> 3) & 0xF8;
            a1[8288] = v5 | v6;
        }
    }
    return result;
}
