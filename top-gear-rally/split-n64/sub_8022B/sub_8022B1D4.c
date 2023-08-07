#include "../../types-n64.h"
//----- (8022B1D4) --------------------------------------------------------
void __fastcall sub_8022B1D4(float *a1, float *a2, float *a3, float *a4, _DWORD *a5, int a6) {
    float v6;     // $f0
    float v7;     // $f0
    float v8;     // $f2
    float v9;     // $f0
    float v10;    // $f2
    float v11;    // $f2
    float v12[3]; // [sp+2Ch] [-Ch] BYREF

    sub_80224808(v12, a1, a2 + 12);
    v6 = (float)(a2[6] * v12[2]) + (float)((float)(v12[0] * a2[4]) + (float)(v12[1] * a2[5]));
    if (v6 <= 10.0) {
        if (v6 < -10.0)
            v6 = -10.0;
    } else {
        v6 = 10.0;
    }
    if (a6)
        v6 = v6 * 0.40000001;
    v7 = (float)(v6 + 10.0) / 20.0;
    v8 = 1.0 - v7;
    if (v7 >= v8) {
        v10 = v8 * 1.7;
        v9 = v7 + (float)(0.60000002 * (float)(1.0 - v7));
    } else {
        v9 = v7 * 1.7;
        v10 = v8 + (float)(0.60000002 * (float)(1.0 - v8));
    }
    *a3 = v9;
    *a4 = v10;
    v11 = sub_80224B08(v12);
    if (v11 < 32.0)
        v11 = 32.0;
    *a5 = (int)(float)(1024.0 / v11);
}
