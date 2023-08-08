#include "types-n64.h"
//----- (8021EA0C) --------------------------------------------------------
int __fastcall sub_8021EA0C(int a1, int a2) {
    int v3; // $t9

    if (a1 < 0 || a1 >= 64 || a2 < 0 || a2 >= 64)
        return 0;
    v3 = (unsigned __int16)((unsigned __int8)a1 + ((unsigned __int8)a2 << 6));
    return ((*(unsigned __int16 *)(MEMORY[0x80025C6C] + 2 * (unsigned __int16)(v3 + 1)) -
             *(unsigned __int16 *)(MEMORY[0x80025C6C] + 2 * v3))
            << 16) |
           *(unsigned __int16 *)(MEMORY[0x80025C6C] + 2 * v3);
}
