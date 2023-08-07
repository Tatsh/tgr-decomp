#include "../../types-n64.h"
//----- (8022F720) --------------------------------------------------------
int __fastcall sub_8022F720(unsigned __int8 *a1, int a2) {
    int v3;   // $v1
    int v4;   // $a0
    int v5;   // $a2
    int *v6;  // $a3
    int v7;   // $t0
    BOOL i;   // $at
    char *v9; // $t6
    int v10;  // $t0

    v3 = 0;
    v4 = 40;
    if (a2 >= 25) {
        v5 = 7;
        v6 = &dword_802A17A0;
    } else {
        v4 = 20;
        v5 = 4;
        v6 = dword_802A187C;
    }
    v7 = *a1;
    if (*a1) {
        for (i = *a1 < 0x21u;; i = v7 < 33) {
            if (i || v7 >= 128) {
                v3 += 12 * a2 / 40;
                v7 = a1[1];
                goto LABEL_23;
            }
            if (v7 != 37)
                break;
            v10 = a1[1];
            if (!a1[1]) {
                v9 = (char *)&dword_802A1740[9] + 1;
                goto LABEL_21;
            }
            if (v10 == 37) {
                ++a1;
                v9 = (char *)&dword_802A1740[9] + 1;
                goto LABEL_21;
            }
            if (v10 == 105 || v10 == 110) {
                ++a1;
            } else {
                if (!a1[2]) {
                    v9 = (char *)&dword_802A1740[9] + 1;
                    goto LABEL_21;
                }
                a1 += 2;
            }
        LABEL_22:
            v7 = a1[1];
        LABEL_23:
            ++a1;
            if (!v7)
                return v3;
        }
        v9 = (char *)dword_802A1740 + v7;
    LABEL_21:
        v3 += (v6[(unsigned __int8)*(v9 - 33) + 1] - v6[(unsigned __int8)*(v9 - 33)] - v5 + 1) *
              a2 / v4;
        goto LABEL_22;
    }
    return v3;
}
// 8022F898: conditional instruction was optimized away because of '$a0.4 in (==14|==28)'
// 8022F8A8: conditional instruction was optimized away because of '$a0.4 in (==14|==28)'
// 802A1740: using guessed type int dword_802A1740[24];
// 802A17A0: using guessed type int dword_802A17A0;
// 802A187C: using guessed type int dword_802A187C[];
