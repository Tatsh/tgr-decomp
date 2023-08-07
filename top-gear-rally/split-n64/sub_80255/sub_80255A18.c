#include "../../types-n64.h"
//----- (80255A18) --------------------------------------------------------
int __fastcall sub_80255A18(_DWORD *a1, int *a2, float *a3, int a4) {
    int result; // $v0

    result = *a2;
    if (*a2) {
        if (*a3 <= -0.30000001) {
            if (result <= 0) {
                *a2 = result;
                if (result >= 0) {
                    *a1 |= a4;
                    *a2 = -200;
                }
            } else {
                *a2 = result;
            }
        } else {
            *a2 = 0;
        }
    } else if (*a3 < -0.60000002) {
        *a1 |= a4;
        *a2 = 500;
    }
    return result;
}
// 80255A60: conditional instruction was optimized away because of '$v0.4>=1'
// 8028AADC: using guessed type int dword_8028AADC;
