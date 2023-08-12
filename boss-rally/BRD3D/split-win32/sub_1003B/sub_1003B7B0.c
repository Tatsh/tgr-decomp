#include "types-win32.h"
//----- (1003B7B0) --------------------------------------------------------
double __cdecl sub_1003B7B0(float a1, float a2) {
    int v2;         // edi
    double v3;      // st7
    double v4;      // st5
    double v5;      // st6
    long double v6; // st7
    double result;  // st7
    int v8;         // esi
    long double v9; // st7
    double v10;     // st7
    float v11;      // [esp+0h] [ebp-14h]
    float v12;      // [esp+Ch] [ebp-8h]
    float v13;      // [esp+10h] [ebp-4h]
    float v14;      // [esp+18h] [ebp+4h]
    float v15;      // [esp+1Ch] [ebp+8h]

    v12 = 0.0;
    v2 = 1;
    if (a2 >= 0.0) {
        v3 = a1;
    } else {
        v3 = -a1;
        a2 = -a2;
        v12 = 3.1415927;
    }
    if (v3 < 0.0) {
        v4 = v3;
        v3 = a2;
        v12 = v12 - -1.5707964;
        a2 = -v4;
    }
    if (v3 < a2) {
        v2 = 0;
        v12 = v12 - -0.78539819;
        v5 = v3;
        v3 = a2;
        a2 = v5;
    }
    v11 = a2 * a2 + v3 * v3;
    v6 = sqrt_(v11);
    if (v6 == 0.0)
        return 0.0;
    v14 = 0.39269909;
    v13 = 0.19634955;
    v8 = 0;
    v15 = a2 / v6;
    do {
        v9 = sin_(v14);
        if (v9 < v15) {
            if (v15 - v9 < 0.0049999999)
                break;
            v10 = v13 + v14;
            goto LABEL_17;
        }
        if (v9 <= v15 || v9 - v15 < 0.0049999999)
            break;
        v10 = v14 - v13;
    LABEL_17:
        v14 = v10;
        ++v8;
        v13 = v13 * 0.5;
    } while (v8 < 16);
    if (v2)
        result = v12 + v14;
    else
        result = v12 - (v14 - 0.78539819);
    return result;
}
