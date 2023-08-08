#include "types-n64.h"
//----- (8022D090) --------------------------------------------------------
int __fastcall sub_8022D090(int a1, int a2) {
    int result; // $v0
    int *v3;    // $v1

    if (a1 < 0)
        a1 = 0;
    if (a1 >= 64)
        a1 = 63;
    if (a2 < 0)
        a2 = 0;
    if (a2 >= 64)
        a2 = 63;
    result = a2;
    v3 = &dword_8034E5B0[a2];
    if (a1 < *v3)
        *v3 = a1;
    if (dword_8034E6B0[result] < a1)
        dword_8034E6B0[result] = a1;
    return result * 4;
}
// 8034E5B0: using guessed type int dword_8034E5B0[64];
// 8034E6B0: using guessed type int dword_8034E6B0[64];
