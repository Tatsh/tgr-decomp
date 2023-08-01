//----- (1003B0E0) --------------------------------------------------------
double __cdecl sub_1003B0E0(float *a1, float *a2) {
    double v2; // st6
    double v3; // st5
    double v4; // st7
    float v6;  // [esp+0h] [ebp-4h]
    float v7;  // [esp+8h] [ebp+4h]
    float v8;  // [esp+Ch] [ebp+8h]

    v2 = a1[1] - a2[1];
    v3 = *a1 - *a2;
    v4 = a1[2] - a2[2];
    v7 = v3;
    v8 = v2;
    v6 = v3 * v7 + v2 * v8 + v4 * v4;
    return sqrt_(v6);
}
