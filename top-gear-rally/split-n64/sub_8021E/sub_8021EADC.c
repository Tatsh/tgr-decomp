#include "../../types-n64.h"
//----- (8021EADC) --------------------------------------------------------
int __fastcall sub_8021EADC(unsigned __int16 *a1) {
    int result; // $v0
    int v2;     // $a1

    result = 0;
    if (a1[1]) {
        v2 = *a1;
        a1[1] = ((v2 + 1) | (((unsigned int)a1[1] - 1) << 16)) >> 16;
        *a1 = v2 + 1;
        result = *(unsigned __int16 *)(MEMORY[0x80025C68] + 2 * v2);
    }
    return result;
}
