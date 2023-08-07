#include "../../types-n64.h"
//----- (8026E7D0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_8026E7D0(int a1) {
    int v1; // $v0

    v1 = sub_80268540();
    dword_802A6150 = a1 | 0x3FFF01;
    sub_80268560(v1);
}
// 8026E7FC: write access to const memory at 802A6150 has been detected
// 802A6150: using guessed type int dword_802A6150;
