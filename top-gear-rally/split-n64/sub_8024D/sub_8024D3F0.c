#include "types-n64.h"
//----- (8024D3F0) --------------------------------------------------------
BOOL __fastcall sub_8024D3F0(int *a1) {
    BOOL result; // $v0
    int v2;      // $v1

    if (*a1 > 244)
        return 0;
    if (*a1 + a1[2] < 244)
        return 0;
    v2 = a1[1];
    if (v2 <= 272)
        result = v2 + a1[3] >= 272;
    else
        result = 0;
    return result;
}
// 8028D12C: using guessed type int dword_8028D12C;
// 8028D130: using guessed type int dword_8028D130;
