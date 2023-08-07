#include "../../types-n64.h"
//----- (80255910) --------------------------------------------------------
int __fastcall sub_80255910(int *a1, int a2) {
    int result; // $v0
    int v3;     // $t0

    result = *a1;
    v3 = *a1 & ~a2;
    a1[1] |= *a1 & a2;
    *a1 = v3;
    return result;
}
