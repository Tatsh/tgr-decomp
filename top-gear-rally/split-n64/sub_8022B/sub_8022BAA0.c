#include "../../types-n64.h"
//----- (8022BAA0) --------------------------------------------------------
int sub_8022BAA0() {
    unsigned __int8 *v0; // $s2
    int *v1;             // $s1
    int i;               // $s3
    int v3;              // $v0
    int v4;              // $t6
    int v5;              // $v1
    int v6;              // $v0
    int v7;              // $s0
    unsigned int v8;     // $v1
    int v9;              // $t5
    int j;               // $v0

    v0 = (unsigned __int8 *)dword_80324550;
    v1 = dword_8028BC04;
    for (i = 0; i != 16; ++i) {
        v3 = CHK_GetFileSize(v1[1]);
        v4 = v1[4];
        v1[3] = v3;
        if (v4 == -1)
            v1[4] = v3;
        v5 = v1[5];
        v6 = v1[3];
        v7 = 0;
        if (v5 == -1) {
            v1[5] = v6;
            v5 = v6;
        }
        if (&dword_8034E480[44] < (int *)&v0[v5 + v6]) {
            *v1 = (int)dword_80324550;
            debugPrint("ERROR: Sound buffer allocation overflow on car sound %d\n");
            v8 = v1[5];
        } else {
            *v1 = (int)v0;
            LoadCarWithIndex2(v0, v1[1], 0);
            v8 = v1[5];
            if (!v8) {
                v9 = v1[3];
                goto LABEL_15;
            }
            for (j = *v1;; j = *v1) {
                *(_BYTE *)(j + v7 + v1[3]) = *(_BYTE *)(j + v7);
                v8 = v1[5];
                if (++v7 >= v8)
                    break;
            }
        }
        v9 = v1[3];
    LABEL_15:
        v1 += 6;
        v0 += v9 + v8;
    }
    debugPrint("Car sound effect space used: %d/%d\n");
    if ((unsigned int)(v0 - (unsigned __int8 *)dword_80324550) >= 0x29FE1)
        sub_8021E1F4((int)"Car sound effect overflow");
    sub_80257B78(0, 0, 0, -1);
    sub_80257B78(2, 0, 0, -1);
    return 2;
}
// 8028B7F4: using guessed type int dword_8028B7F4;
// 8028BC04: using guessed type int dword_8028BC04[];
// 80324550: using guessed type int dword_80324550[512];
// 8034E480: using guessed type int[60];
