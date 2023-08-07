#include "../../types-n64.h"
//----- (8026BA70) --------------------------------------------------------
int __fastcall sub_8026BA70(int a1, int a2) {
    int result; // $v0

    if (sub_8026DBB0())
        return -1;
    result = 0;
    *(_DWORD *)(a1 | 0xA0000000) = a2;
    return result;
}
