#include "../../types-n64.h"
//----- (8026A780) --------------------------------------------------------
int __fastcall sub_8026A780(__int16 a1) {
    bool v1; // $a1
    BOOL v2; // $at
    int v4;  // [sp+8h] [-8h]
    char v5; // [sp+Eh] [-2h]
    char v6; // [sp+Fh] [-1h]

    v6 = 0;
    v4 = 0;
    do {
        if ((v6 & 0x10) != 0)
            v5 = 21;
        else
            v5 = 0;
        v1 = (a1 & 0x400) != 0;
        v2 = ++v4 < 16;
        a1 *= 2;
        v6 = ((2 * v6) | v1) ^ v5;
    } while (v2);
    return v6 & 0x1F;
}
