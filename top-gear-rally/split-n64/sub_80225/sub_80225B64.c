#include "../../types-n64.h"
//----- (80225B64) --------------------------------------------------------
int __fastcall sub_80225B64(float *a1, float *a2, float *a3, float *a4) {
    float v4;   // $f2
    float v5;   // $f0
    float v6;   // $f14
    float v7;   // $f20
    int result; // $v0
    float v9;   // $f14
    float v10;  // $f20
    float v11;  // $f18
    float v12;  // $f16
    float v13;  // $f14
    float v14;  // $f10
    float v15;  // $f12
    float v16;  // $f20
    float v17;  // $f14
    float v18;  // $f20
    float v19;  // $f8
    float v20;  // $f4
    float v21;  // $f20
    float v22;  // $f18
    float v23;  // $f4
    bool v24;   // $fcc0
    float v25;  // [sp+1Ch] [-2Ch]
    float v26;  // [sp+20h] [-28h]
    float v27;  // [sp+24h] [-24h]
    float v28;  // [sp+38h] [-10h]

    v4 = *a1;
    v5 = *a2;
    if (*a2 < *a1)
        v6 = v4;
    else
        v6 = v5;
    v27 = *a3;
    v26 = *a4;
    v7 = v26;
    if (v27 < v26)
        v7 = v27;
    if (v6 < v7)
        return 0;
    v9 = v26;
    if (v26 < v27)
        v9 = v27;
    if (v4 < v5)
        v10 = v4;
    else
        v10 = v5;
    if (v9 < v10)
        return 0;
    v11 = a2[1];
    v12 = a1[1];
    if (v11 < v12)
        v13 = v12;
    else
        v13 = v11;
    v14 = a4[1];
    v15 = a3[1];
    v16 = v14;
    if (v15 < v14)
        v16 = v15;
    if (v13 < v16)
        return 0;
    v17 = v14;
    if (v14 < v15)
        v17 = v15;
    if (v12 < v11)
        v18 = v12;
    else
        v18 = v11;
    if (v17 < v18)
        return 0;
    v25 = v11;
    v19 = (float)((float)(v27 - v4) * (float)(v11 - v12)) -
          (float)((float)(v5 - v4) * (float)(v15 - v12));
    v20 = (float)((float)(v26 - v4) * (float)(v11 - v12)) -
          (float)((float)(v5 - v4) * (float)(v14 - v12));
    v28 = v20;
    if (v19 == 0.0) {
        v21 = v27;
    } else {
        v25 = v11;
        if (v20 == 0.0) {
            v21 = v27;
        } else {
            v25 = v11;
            if ((float)(v19 * v20) > 0.0)
                return 0;
            v21 = v27;
        }
    }
    v22 = (float)((float)(v4 - v21) * (float)(v14 - v15)) -
          (float)((float)(v26 - v21) * (float)(v12 - v15));
    v23 = (float)((float)(v5 - v21) * (float)(v14 - v15)) -
          (float)((float)(v26 - v21) * (float)(v25 - v15));
    if (v22 == 0.0) {
        v24 = v19 == v28;
    } else if (v23 == 0.0) {
        v24 = v19 == v28;
    } else {
        if ((float)(v22 * v23) > 0.0)
            return 0;
        v24 = v19 == v28;
    }
    result = 1;
    if (v24)
        result = 2;
    return result;
}
