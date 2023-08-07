#include "../../types-n64.h"
//----- (80234FC0) --------------------------------------------------------
int __fastcall sub_80234FC0(int a1, int a2) {
    int v2;     // $v0
    int v3;     // $v1
    BOOL v4;    // $at
    int result; // $v0

    v2 = *(__int16 *)(a2 + 2);
    v3 = *(__int16 *)(a1 + 2);
    if (v2 < v3)
        return 1;
    v4 = v3 < v2;
    result = 0;
    if (v4)
        result = -1;
    return result;
}
