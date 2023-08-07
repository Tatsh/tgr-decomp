#include "../../types-n64.h"
//----- (8024D374) --------------------------------------------------------
BOOL __fastcall sub_8024D374(_DWORD *a1) {
    int v1;      // $v1
    BOOL result; // $v0
    int v3;      // $a1
    int v4;      // $a2
    int v5;      // $v1

    v1 = a1[7];
    if (v1 > 244)
        return 0;
    v3 = a1[9];
    v4 = -v3;
    if (v3 > 0)
        v4 = a1[9];
    if (v4 + v1 < 244)
        return 0;
    v5 = a1[8];
    if (v5 <= 272)
        result = v5 + a1[10] >= 272;
    else
        result = 0;
    return result;
}
// 8028D12C: using guessed type int dword_8028D12C;
// 8028D130: using guessed type int dword_8028D130;
