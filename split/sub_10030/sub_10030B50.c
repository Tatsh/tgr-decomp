//----- (10030B50) --------------------------------------------------------
__int64 __cdecl sub_10030B50(int a1,
                             int a2,
                             int a3,
                             float a4,
                             float a5,
                             float a6,
                             float a7,
                             float a8,
                             float a9,
                             float a10,
                             float a11,
                             float a12,
                             float a13,
                             float a14,
                             float a15,
                             float a16,
                             float a17,
                             float a18,
                             int a19,
                             int a20) {
    long double v21; // st7
    long double v22; // st5
    long double v23; // st7
    __int64 result;  // rax
    double v25;      // [esp+14h] [ebp-30h] BYREF
    double v26;      // [esp+1Ch] [ebp-28h]
    double v27;      // [esp+24h] [ebp-20h]
    long double v28; // [esp+34h] [ebp-10h]

    sub_100309A0(a1, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    *(_BYTE *)(a2 + 8) = sub_10030DE0(*(float *)a1);
    *(_BYTE *)(a2 + 9) = sub_10030DE0(*(float *)(a1 + 16));
    *(_BYTE *)(a2 + 10) = sub_10030DE0(*(float *)(a1 + 32));
    *(_BYTE *)(a2 + 24) = sub_10030DE0(*(float *)(a1 + 4));
    *(_BYTE *)(a2 + 25) = sub_10030DE0(*(float *)(a1 + 20));
    *(_BYTE *)(a2 + 26) = sub_10030DE0(*(float *)(a1 + 36));
    v25 = a13;
    v26 = a14;
    v27 = a15;
    sub_10030600(&v25);
    v28 = *(float *)(a1 + 36) * v27 + *(float *)(a1 + 4) * v25 + *(float *)(a1 + 20) * v26;
    v21 = v28;
    *(_DWORD *)a3 =
        256 -
        (__int64)(atan2(*(float *)(a1 + 32) * v27 + *(float *)(a1 + 16) * v26 + *(float *)a1 * v25,
                        *(float *)(a1 + 24) * v26 + *(float *)(a1 + 40) * v27 +
                            *(float *)(a1 + 8) * v25) *
                  -81.48734781601175);
    v25 = a16;
    v26 = a17;
    v27 = a18;
    *(_DWORD *)(a3 + 4) = 256 - (__int64)(asin(v21) * -81.48734781601175);
    sub_10030600(&v25);
    v22 = atan2(*(float *)(a1 + 32) * v27 + *(float *)(a1 + 16) * v26 + *(float *)a1 * v25,
                *(float *)(a1 + 24) * v26 + *(float *)(a1 + 40) * v27 + *(float *)(a1 + 8) * v25);
    v28 = *(float *)(a1 + 36) * v27 + *(float *)(a1 + 4) * v25 + *(float *)(a1 + 20) * v26;
    v23 = v28;
    *(_DWORD *)(a3 + 8) = 4 * a19 - (__int64)(v22 * (double)(4 * a19) * -0.3183099524062959);
    result = (__int64)(asin(v23) * (double)(4 * a20) * -0.3183099524062959);
    *(_DWORD *)(a3 + 12) = 4 * a20 - result;
    return result;
}
