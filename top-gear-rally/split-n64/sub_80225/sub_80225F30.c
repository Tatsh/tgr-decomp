#include "../../types-n64.h"
//----- (80225F30) --------------------------------------------------------
void sub_80225F30() {
    int(**v0)[4];    // $v1
    int *v1;         // $a0
    int i;           // $t8
    unsigned int v3; // $v0
    bool j;          // dc

    v0 = &off_8028B834;
    if (dword_8031B420) {
        v1 = dword_8031B420;
        for (i = 12;; i = (int)v0[1]) {
            v3 = (unsigned int)v1;
            for (j = v1 >= (int *)((char *)v1 + i);; j = 0) {
                ++v3;
                if (j)
                    break;
                *(_BYTE *)(v3 - 1) = 0;
                if (v3 >= (unsigned int)v1 + i)
                    break;
            }
            v1 = (int *)v0[2];
            v0 += 2;
            if (!v1)
                break;
        }
    }
}
// 8028B834: using guessed type int (*off_8028B834)[4];
// 8031B420: using guessed type int dword_8031B420[4];
