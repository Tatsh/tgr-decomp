#include "../../types-n64.h"
//----- (802174B4) --------------------------------------------------------
float *__fastcall sub_802174B4(float *a1) {
    float *result; // $v0
    float v2;      // $f0
    float v3;      // $f2
    float i;       // $f12
    float v5;      // $f2
    float v6;      // $f0
    float v7;      // $f10
    float v8;      // $f6
    float v9;      // $f18
    float v10;     // $f8
    float v11;     // $f4
    float v12;     // $f16
    float v13;     // $f10
    float v14;     // $f6
    float v15;     // $f18
    float v16;     // $f8
    float v17;     // $f4
    float v18;     // $f16
    float v19;     // $f10
    float v20;     // $f6
    float v21;     // $f18
    float v22;     // $f8
    float v23;     // $f4
    float v24;     // $f16
    float v25;     // $f10
    float v26;     // $f6
    float v27;     // $f18
    float v28;     // $f8
    float v29;     // $f4
    float v30;     // $f16
    float v31;     // $f10

    result = a1;
    v2 = 0.0;
    v3 = 0.0;
    if (a1 < a1 + 12) {
        for (i = *a1;; i = *result) {
            ++result;
            if (i >= 0.0) {
                if (v2 < i)
                    v2 = i;
            } else if (i < v3) {
                v3 = i;
            }
            if (result >= a1 + 12)
                break;
        }
    }
    v5 = -v3;
    if (v2 < v5)
        v2 = v5;
    v6 = 1.9997559 / (float)(v2 + 0.375);
    v7 = a1[3];
    v8 = a1[1] * v6;
    v9 = a1[4];
    v10 = a1[2] * v6;
    *a1 = *a1 * v6;
    v11 = a1[5];
    v12 = v7 * v6;
    a1[1] = v8;
    v13 = a1[6];
    v14 = v9 * v6;
    a1[2] = v10;
    v15 = a1[7];
    v16 = v11 * v6;
    a1[3] = v12;
    v17 = a1[8];
    v18 = v13 * v6;
    a1[4] = v14;
    v19 = a1[9];
    v20 = v15 * v6;
    a1[5] = v16;
    v21 = a1[10];
    v22 = v17 * v6;
    a1[6] = v18;
    v23 = a1[11];
    v24 = v19 * v6;
    a1[7] = v20;
    v25 = a1[12];
    v26 = v21 * v6;
    a1[8] = v22;
    v27 = a1[13];
    v28 = v23 * v6;
    a1[9] = v24;
    v29 = a1[14];
    v30 = v25 * v6;
    a1[10] = v26;
    v31 = a1[15];
    a1[11] = v28;
    a1[12] = v30;
    a1[13] = v27 * v6;
    a1[14] = v29 * v6;
    a1[15] = v31 * v6;
    return result;
}
