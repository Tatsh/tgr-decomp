#include "../../types-n64.h"
//----- (8026BA20) --------------------------------------------------------
int __fastcall sub_8026BA20(int a1, _DWORD *a2) {
    int result; // $v0

    if (sub_8026DBB0())
        return -1;
    result = 0;
    *a2 = *(_DWORD *)(a1 | 0xA0000000);
    return result;
}
