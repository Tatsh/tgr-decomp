#include "../../types-win32.h"
//----- (10074C10) --------------------------------------------------------
float *__cdecl sub_10074C10(float *a1, float *a2, float *a3) {
    float *result; // eax
    double v4;     // st7
    double v5;     // st6
    double v6;     // st5
    double v7;     // rt0
    double v8;     // st3
    double v9;     // st4
    double v10;    // st7
    float v11;     // [esp+0h] [ebp-10h]
    float v12;     // [esp+4h] [ebp-Ch]
    float v13;     // [esp+8h] [ebp-8h]
    float v14;     // [esp+Ch] [ebp-4h]
    float v15;     // [esp+18h] [ebp+8h]
    float v16;     // [esp+18h] [ebp+8h]

    result = a2;
    v4 = a2[7] * a2[5];
    v5 = a2[1] * a2[8];
    v6 = a2[2];
    v15 = a2[4] * a2[8];
    v7 = v4 - v15;
    v16 = v5;
    v11 = v7;
    v8 = v6 * result[7];
    v12 = v8;
    v13 = result[1] * result[5];
    v9 = result[2] * result[4];
    v14 = v9;
    v10 =
        1.0 / (v5 * result[3] + *result * v11 - v8 * result[3] - v13 * result[6] + v9 * result[6]);
    *a1 = (*a3 * v11 + v16 * a3[1] - v12 * a3[1] - v13 * a3[2] + v14 * a3[2]) * v10;
    a1[1] = -(((result[6] * result[5] - result[3] * result[8]) * *a3 + *result * result[8] * a3[1] -
               result[6] * result[2] * a3[1] - *result * result[5] * a3[2] +
               result[3] * result[2] * a3[2]) *
              v10);
    a1[2] = ((result[6] * result[4] - result[3] * result[7]) * *a3 + *result * result[7] * a3[1] -
             result[6] * result[1] * a3[1] - *result * result[4] * a3[2] +
             result[3] * result[1] * a3[2]) *
            v10;
    return result;
}
