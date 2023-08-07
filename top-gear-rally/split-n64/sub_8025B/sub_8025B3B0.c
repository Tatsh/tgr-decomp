#include "../../types-n64.h"
//----- (8025B3B0) --------------------------------------------------------
int __fastcall sub_8025B3B0(int a1, int a2) {
    float v2;  // $f0
    float v3;  // $f2
    float v4;  // $f14
    float v5;  // $f12
    float v6;  // $f2
    float v7;  // $f0
    float v8;  // $f12
    int v9;    // $v0
    float v10; // $f2
    float v11; // $f0
    float v12; // $f12
    int v13;   // $v1
    int v14;   // $a2
    int v15;   // $t5
    float v16; // $f6
    int v17;   // $t1
    float v18; // $f0
    float v19; // $f6
    float v20; // $f14
    int v21;   // $t0
    int v22;   // $t2
    float v23; // $f2
    float v24; // $f12
    float v25; // $f16
    int v26;   // $v0
    int v27;   // $v1
    float v28; // $f0
    BOOL v29;  // $v0
    float v30; // $f6
    int v31;   // $v1
    float v32; // $f2
    int v33;   // $v0
    float v35; // [sp+0h] [-50h]
    float v36; // [sp+8h] [-48h]
    float v37; // [sp+34h] [-1Ch]

    v2 = *(float *)a1;
    if (*(float *)a1 < 0.0)
        v3 = -v2;
    else
        v3 = v2;
    v4 = *(float *)(a1 + 4);
    if (v4 < 0.0)
        v5 = -v4;
    else
        v5 = v4;
    if (v5 >= v3) {
        v9 = 2;
        if (v4 < 0.0)
            v10 = -v4;
        else
            v10 = v4;
        v11 = *(float *)(a1 + 8);
        if (v11 < 0.0)
            v12 = -v11;
        else
            v12 = v11;
        if (v12 < v10)
            v9 = 1;
    } else {
        if (v2 < 0.0)
            v6 = -v2;
        else
            v6 = v2;
        v7 = *(float *)(a1 + 8);
        if (v7 < 0.0)
            v8 = -v7;
        else
            v8 = v7;
        if (v8 >= v6)
            v9 = 2;
        else
            v9 = 0;
    }
    v13 = (v9 + 1) % 3;
    v14 = *(_DWORD *)(a1 + 16);
    v15 = 4 * ((v9 + 2) % 3);
    v35 = *(float *)(v14 + 4 * v13);
    v16 = *(float *)(a2 + 4 * v13);
    v17 = *(_DWORD *)(a1 + 20);
    v13 *= 4;
    v18 = v16 - v35;
    v19 = *(float *)(v14 + v15);
    v20 = *(float *)(a2 + v15) - v19;
    v21 = 0;
    v37 = *(float *)(v17 + v13) - v35;
    v22 = *(_DWORD *)(a1 + 24);
    v23 = *(float *)(v17 + v15) - v19;
    v24 = *(float *)(v22 + v13) - v35;
    v25 = *(float *)(v22 + v15) - v19;
    if (v37 != 0.0) {
        v30 = (float)((float)(v20 * v37) - (float)(v18 * v23)) /
              (float)((float)(v25 * v37) - (float)(v24 * v23));
        if (v30 >= 0.0) {
            if (v30 > 1.0) {
                v26 = 0;
                return v26 >> 16;
            }
            v31 = 0;
            v32 = (float)(v18 - (float)(v30 * v24)) / v37;
            if (v32 >= 0.0)
                v31 = 1;
            v33 = v31;
            if (v31) {
                if ((float)(v32 + v30) > 1.0) {
                    v21 = 0;
                    goto LABEL_45;
                }
                v33 = 1;
            }
            v21 = v33;
        }
    LABEL_45:
        v26 = v21 << 16;
        return v26 >> 16;
    }
    v36 = v18 / v24;
    if (v36 >= 0.0) {
        if (v36 > 1.0) {
            v26 = 0;
            return v26 >> 16;
        }
        v27 = 0;
        v28 = (float)(v20 - (float)(v36 * v25)) / v23;
        if (v28 >= 0.0)
            v27 = 1;
        v29 = v27;
        if (v27)
            v29 = (float)(v28 + v36) <= 1.0;
        v21 = v29;
        goto LABEL_45;
    }
    v26 = 0;
    return v26 >> 16;
}
