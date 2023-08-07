#include "../../types-n64.h"
//----- (8021F0A8) --------------------------------------------------------
int *__fastcall sub_8021F0A8(int a1) {
    int *result; // $v0
    float v2;    // $f4

    result = &dword_8026FF18;
    if ((*(_DWORD *)(*(_DWORD *)(a1 + 3792) + 104) & 3) == 0) {
        v2 = *(float *)(a1 + 3968);
        *(float *)(a1 + 4000) = *(float *)(a1 + 4000) + 0.0;
        *(float *)(a1 + 3968) = v2 + 0.0;
    }
    return result;
}
// 8026FF18: using guessed type int dword_8026FF18;
// 8028AAD8: using guessed type float flt_8028AAD8;
