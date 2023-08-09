#include "types-win32.h"
//----- (10030810) --------------------------------------------------------
float *__cdecl maybe_guFrustumF(
    float *a1, float a2, float a3, float a4, float a5, float a6, float a7) {
    double v7;     // st5
    double v8;     // st1
    double v9;     // rt2
    double v10;    // st1
    double v11;    // st0
    double v12;    // st5
    float *result; // eax
    double v14;    // st4
    double v15;    // rtt
    float a6a;     // [esp+18h] [ebp+18h]
    float a6b;     // [esp+18h] [ebp+18h]
    float a6c;     // [esp+18h] [ebp+18h]
    float a7a;     // [esp+1Ch] [ebp+1Ch]

    if (a2 == a3 || a5 == a4 || a6 == a7)
        return (float *)printf("Error: guFrustumF(): unable to compute matrix\n");
    v7 = a7 + a6;
    v8 = a7 * a6 + a7 * a6;
    a7a = a7 - a6;
    v9 = v8;
    v10 = a6 + a6;
    a6a = v10;
    v11 = v7;
    v12 = a6a;
    result = a1;
    a1[4] = 0.0;
    a1[12] = 0.0;
    a1[1] = 0.0;
    a1[13] = 0.0;
    a1[2] = 0.0;
    a1[6] = 0.0;
    a1[3] = 0.0;
    a1[7] = 0.0;
    a1[11] = -1.0;
    a1[15] = 0.0;
    a6b = a3 - a2;
    v14 = v10 / a6b;
    v15 = (a3 + a2) / a6b;
    a6c = a5 - a4;
    *a1 = v14;
    a1[8] = v15;
    a1[5] = v12 / a6c;
    a1[9] = (a5 + a4) / a6c;
    a1[10] = -(v11 / a7a);
    a1[14] = -(v9 / a7a);
    return result;
}
