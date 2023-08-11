#include "types-win32.h"
//----- (1006B340) --------------------------------------------------------
float *__cdecl sub_1006B340(int a1, int a2, int a3) {
    float v3;   // edx
    double v4;  // st7
    double v5;  // st6
    double v6;  // st4
    double v7;  // st3
    double v8;  // st2
    double v9;  // st1
    double v10; // st5
    double v11; // rt0
    double v12; // rt2
    double v13; // st3
    double v14; // rtt
    float v16;  // [esp+8h] [ebp-18h] BYREF
    float v17;  // [esp+Ch] [ebp-14h]
    float v18;  // [esp+10h] [ebp-10h]
    float v19;  // [esp+14h] [ebp-Ch] BYREF
    float v20;  // [esp+18h] [ebp-8h]
    float v21;  // [esp+1Ch] [ebp-4h]

    v3 = *(float *)(a3 + 124);
    v16 = *(float *)(a3 + 120);
    v17 = v3;
    v18 = 0.0;
    sub_10074770(&v19, a2 + 188, &v16);
    *(_DWORD *)a1 = *(_DWORD *)(a2 + 132);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 136);
    v4 = *(float *)(a2 + 140);
    v5 = v21;
    v6 = v20;
    v7 = v19;
    v8 = v21;
    v9 = v20;
    v10 = v19;
    *(float *)(a1 + 8) = *(float *)(a2 + 140);
    v11 = v7 * *(float *)(a2 + 168);
    v12 = v9 * *(float *)(a2 + 160);
    v13 = v10 * *(float *)(a2 + 164);
    v14 = v11 - v8 * *(float *)(a2 + 160) + *(float *)(a1 + 4);
    v16 = v5 * *(float *)(a2 + 164) - v6 * *(float *)(a2 + 168) + *(float *)a1;
    v17 = v14;
    v18 = v12 - v13 + v4;
    return sub_10074720((float *)a1, (float *)(a2 + 188), &v16);
}
