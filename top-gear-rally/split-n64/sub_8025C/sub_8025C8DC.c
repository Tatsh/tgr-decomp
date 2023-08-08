#include "types-n64.h"
//----- (8025C8DC) --------------------------------------------------------
int __fastcall sub_8025C8DC(int a1, float *a2, int a3) {
    int v3;    // $s0
    float *v5; // $a3
    float *v6; // $v1
    float v7;  // $f0
    int v8;    // $a2
    int v9;    // $a3
    int v10;   // $v1
    int v11;   // $v0
    int v12;   // $a1
    int v13;   // $t1
    float v14; // $f0
    int v15;   // $t2
    int v16;   // $v1
    float v17; // $f12
    int v18;   // $t6
    int v19;   // $a0
    float v20; // $f2
    int v21;   // $t0
    float v22; // $f20
    float v23; // $f14
    float v24; // $f18
    int v25;   // $t8
    float v27; // [sp+6Ch] [-Ch] BYREF
    float v28; // [sp+70h] [-8h]
    float v29; // [sp+74h] [-4h]
    char v30;  // [sp+78h] [+0h] BYREF

    v3 = a1;
    v5 = &v27;
    v6 = a2;
    do {
        v7 = *v6;
        if (*v6 < 0.0)
            *v5 = -v7;
        else
            *v5 = v7;
        ++v5;
        ++v6;
    } while (v5 < (float *)&v30);
    v8 = 0;
    v9 = a1;
    if (v29 >= v27)
        v10 = (v29 >= v28) + 1;
    else
        v10 = v28 >= v27;
    v11 = 0;
    if (a2[v10] < 0.0) {
        v12 = (v10 + 1) % 3;
        v13 = 4 * ((v10 + 2) % 3);
    } else {
        v12 = (v10 + 2) % 3;
        v13 = 4 * ((v10 + 1) % 3);
    }
    v14 = *(float *)(a3 + v13);
    v15 = a1 + v13;
    do {
        v16 = v11 + 1;
        v15 += 12;
        v17 = *(float *)(v15 - 12);
        v18 = 0;
        v19 = v3 + 12 * ((v11 + 1) % 3);
        v20 = *(float *)(v19 + v13);
        if (v14 < v20)
            v18 = 1;
        if (v14 < v17)
            v21 = v18 - 1;
        else
            v21 = v18;
        if (!v21) {
            ++v11;
            goto LABEL_30;
        }
        v22 = *(float *)(v19 + 4 * v12);
        v23 = *(float *)(a3 + 4 * v12);
        v24 = *(float *)(v9 + 4 * v12);
        if (v23 < v24)
            v25 = (v23 < v22) - 1;
        else
            v25 = v23 < v22;
        if (v25) {
            if ((float)((float)((float)v21 * (float)(v14 - v17)) * (float)(v22 - v24)) <=
                (float)((float)(v20 - v17) * (float)((float)v21 * (float)(v23 - v24))))
                v8 += v21;
        } else {
            if (v24 > v23) {
                ++v11;
                goto LABEL_30;
            }
            v8 += v21;
        }
        ++v11;
    LABEL_30:
        v9 += 12;
    } while (v16 != 3);
    return v8;
}
