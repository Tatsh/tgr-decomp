#include "../types-win32.h"
//----- (100254F0) --------------------------------------------------------
char __cdecl sub_100254F0(int a1, int a2, int a3, int a4, int a5, float a6, float a7) {
    int v7;               // edx
    unsigned __int8 *v8;  // eax
    double v9;            // st7
    int v10;              // eax
    unsigned __int8 *v11; // ecx
    double v12;           // st6
    double v13;           // st7
    double v14;           // st7
    __int64 v15;          // rax
    double v16;           // st7
    double v17;           // st6
    double v18;           // st7
    __int64 v19;          // rax
    double v20;           // st7
    double v21;           // st7
    __int64 v22;          // rax
    double v23;           // st7
    char v24;             // bl
    double v25;           // st7
    char result;          // al
    float v27;            // [esp+Ch] [ebp-24h]
    float v28;            // [esp+10h] [ebp-20h]
    float v29;            // [esp+14h] [ebp-1Ch]
    float v30;            // [esp+18h] [ebp-18h]
    float v31;            // [esp+1Ch] [ebp-14h]
    float v32;            // [esp+20h] [ebp-10h]
    float v33;            // [esp+24h] [ebp-Ch]
    float v34;            // [esp+28h] [ebp-8h]
    float v35;            // [esp+2Ch] [ebp-4h]
    float v36;            // [esp+38h] [ebp+8h]
    char v37;             // [esp+38h] [ebp+8h]
    float v38;            // [esp+3Ch] [ebp+Ch]
    char v39;             // [esp+3Ch] [ebp+Ch]
    float v40;            // [esp+40h] [ebp+10h]

    v7 = *(unsigned __int8 *)(a2 + 1);
    v8 = (unsigned __int8 *)(a2 + 2);
    v36 = (float)*(unsigned __int8 *)a2;
    v27 = (float)v7;
    v28 = (float)*v8;
    v9 = (double)v8[1];
    v10 = a3 + 2;
    v31 = (float)*(unsigned __int8 *)a3;
    v32 = (float)*(unsigned __int8 *)(a3 + 1);
    v34 = (float)*(unsigned __int8 *)(a3 + 2);
    v11 = (unsigned __int8 *)(a4 + 2);
    v38 = (float)*(unsigned __int8 *)a4;
    v40 = (float)*(unsigned __int8 *)(a4 + 1);
    v29 = (float)*v11;
    v12 = (double)v11[1];
    v30 = (float)*(unsigned __int8 *)a5;
    v33 = (float)*(unsigned __int8 *)(a5 + 1);
    v35 = (float)*(unsigned __int8 *)(a5 + 2);
    v13 = v9 + ((double)*(unsigned __int8 *)(v10 + 1) - v9) * a6;
    v14 = floor((v12 + ((double)*(unsigned __int8 *)(a5 + 3) - v12) * a6 - v13) * a7 + v13 - -0.5);
    if (v14 < 0.0)
        v14 = 0.0;
    if (v14 > 255.0)
        v14 = 255.0;
    v15 = (__int64)v14;
    v16 = (v31 - v36) * a6 + v36;
    v17 = (v30 - v38) * a6 + v38;
    v39 = v15;
    v18 = floor((v17 - v16) * a7 + v16 - -0.5);
    if (v18 < 0.0)
        v18 = 0.0;
    if (v18 > 255.0)
        v18 = 255.0;
    v19 = (__int64)v18;
    v20 = (v32 - v27) * a6 + v27;
    v37 = v19;
    v21 = floor(((v33 - v40) * a6 + v40 - v20) * a7 + v20 - -0.5);
    if (v21 < 0.0)
        v21 = 0.0;
    if (v21 > 255.0)
        v21 = 255.0;
    v22 = (__int64)v21;
    v23 = (v34 - v28) * a6 + v28;
    v24 = v22;
    v25 = floor(((v35 - v29) * a6 + v29 - v23) * a7 + v23 - -0.5);
    if (v25 < 0.0)
        v25 = 0.0;
    if (v25 > 255.0)
        v25 = 255.0;
    *(_BYTE *)a1 = v37;
    *(_BYTE *)(a1 + 1) = v24;
    *(_BYTE *)(a1 + 2) = (__int64)v25;
    result = v39;
    *(_BYTE *)(a1 + 3) = v39;
    return result;
}
