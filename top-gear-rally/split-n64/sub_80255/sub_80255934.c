#include "../../types-n64.h"
//----- (80255934) --------------------------------------------------------
__int64 __fastcall sub_80255934(_DWORD *a1) {
    __int64 result; // $v1
    int v2;         // $t8

    LODWORD(result) = *a1;
    v2 = *a1 & a1[1];
    *a1 ^= v2;
    a1[1] = v2;
    return result;
}
