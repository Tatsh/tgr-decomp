#include "../../types-n64.h"
//----- (80239CF0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80239CF0() {
    float *v0;  // $s3
    int i;      // $s1
    float *v2;  // $s0
    int result; // $v0

    dword_8028C804 = 512;
    v0 = (float *)dword_80361C40;
    for (i = 0;; i = 0) {
        v2 = v0;
        do {
            *(_WORD *)v2 = sub_80225EE4();
            *((_WORD *)v2 + 1) = sub_80225EE4();
            result = sub_80225EE4();
            ++i;
            v2 = (float *)((char *)v2 + 6);
            *((_WORD *)v2 - 1) = result;
        } while (i != 512);
        v0 += 783;
        if (v0 == &flt_803634B8)
            break;
    }
    return result;
}
// 80239D1C: write access to const memory at 8028C804 has been detected
// 8028C804: using guessed type int dword_8028C804;
// 80361C40: using guessed type int dword_80361C40[512];
// 803634B8: using guessed type float flt_803634B8;
