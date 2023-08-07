#include "../../types-n64.h"
//----- (80268470) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80268470(unsigned int a1, int a2) {
    int result; // $v0

    byte_802A61B0 = ((a1 + a2) & 0x3FFF) == 0x2000;
    if (sub_8026CE20())
        return -1;
    MEMORY[0xA4500000] = sub_8026B750(a1);
    result = 0;
    MEMORY[0xA4500004] = a2;
    return result;
}
// 802684C4: write access to const memory at 802A61B0 has been detected
// 802684C8: write access to const memory at 802A61B0 has been detected
// 802A61B0: using guessed type char byte_802A61B0;
