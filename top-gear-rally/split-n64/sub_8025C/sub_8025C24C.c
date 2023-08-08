#include "types-n64.h"
//----- (8025C24C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_8025C24C(int a1) {
    __int64 result; // $v1

    LODWORD(result) = 0;
    dword_802A4A24 = 8;
    MEMORY[0] = a1;
    MEMORY[4] = 0;
    dword_802A4A20 = 0;
    return result;
}
// 8025C264: write access to const memory at 802A4A24 has been detected
// 8025C278: write access to const memory at 802A4A20 has been detected
// 802A4A20: using guessed type int dword_802A4A20;
// 802A4A24: using guessed type int dword_802A4A24;
