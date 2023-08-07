#include "../../types-n64.h"
//----- (80200764) --------------------------------------------------------
int sub_80200764() {
    int result; // $v0
    int *v1;    // $s0
    int v2;     // $t9

    sub_8022F530(255, 255, 255, 255, 255, 255);
    sub_8022F4F8();
    sub_8022F504();
    result = sub_80219A78(-174233204, 2045259632, -1070825151, -884975911);
    v1 = &dword_80270194;
    if (&dword_802A666C) {
        for (result = 0;; result = *v1) {
            if (result >= -79) {
                if (result >= 280) {
                    v2 = v1[7];
                    goto LABEL_8;
                }
                sub_8022F5D0(v1[1]);
                result = formatter((const char *)v1[3], 160, *v1);
            }
            v2 = v1[7];
        LABEL_8:
            v1 += 4;
            if (!v2)
                return result;
        }
    }
    return result;
}
// 80270194: using guessed type int dword_80270194;
// 802A666C: using guessed type int dword_802A666C;
// 8031B2C8: using guessed type int dword_8031B2C8[];
// 8031B2CC: using guessed type int dword_8031B2CC;
// 8031B2D0: using guessed type int dword_8031B2D0;
// 8031B2D4: using guessed type int dword_8031B2D4;
