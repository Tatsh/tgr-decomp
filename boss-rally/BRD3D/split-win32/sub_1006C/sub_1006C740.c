#include "../types-win32.h"
//----- (1006C740) --------------------------------------------------------
__int16 __cdecl sub_1006C740(int a1, int a2) {
    double v3;  // st7
    char v4;    // c0
    double v6;  // st6
    char v7;    // c0
    double v9;  // st7
    char v10;   // c0
    double v12; // st6
    char v13;   // c0
    int v14;    // ecx
    double v16; // st7
    char v17;   // c0
    double v19; // st6
    char v20;   // c0
    int v21;    // edi
    int v22;    // edx
    int v23;    // ecx
    int v24;    // eax
    int v25;    // edi
    int v26;    // esi
    double v27; // st7
    double v28; // st7
    double v30; // st7
    double v31; // st7
    float v32;  // [esp+Ch] [ebp-14h]
    float v33;  // [esp+10h] [ebp-10h]
    float v34;  // [esp+14h] [ebp-Ch]
    float v35;  // [esp+18h] [ebp-8h]
    float v36;  // [esp+1Ch] [ebp-4h]
    float v37;  // [esp+24h] [ebp+4h]
    float v38;  // [esp+24h] [ebp+4h]
    float v39;  // [esp+28h] [ebp+8h]

    v3 = *(float *)a1;
    if (v4)
        v3 = -v3;
    v6 = *(float *)(a1 + 4);
    if (v7)
        v6 = -v6;
    if (v3 <= v6) {
        v16 = *(float *)(a1 + 4);
        if (v17)
            v16 = -v16;
        v19 = *(float *)(a1 + 8);
        if (v20)
            v19 = -v19;
        if (v16 > v19) {
            v14 = 1;
            goto LABEL_19;
        }
    } else {
        v9 = *(float *)a1;
        if (v10)
            v9 = -v9;
        v12 = *(float *)(a1 + 8);
        if (v13)
            v12 = -v12;
        if (v9 > v12) {
            v14 = 0;
            goto LABEL_19;
        }
    }
    v14 = 2;
LABEL_19:
    v21 = (v14 + 1) % 3;
    v22 = (v14 + 2) % 3;
    v23 = *(_DWORD *)(a1 + 16);
    v24 = 4 * v21;
    v34 = *(float *)(a2 + v24) - *(float *)(v23 + v24);
    v22 *= 4;
    v25 = *(_DWORD *)(a1 + 20);
    v26 = *(_DWORD *)(a1 + 24);
    v35 = *(float *)(a2 + v22) - *(float *)(v22 + v23);
    v39 = *(float *)(v25 + v24) - *(float *)(v23 + v24);
    v32 = *(float *)(v25 + v22) - *(float *)(v22 + v23);
    v33 = *(float *)(v26 + v24) - *(float *)(v23 + v24);
    v36 = *(float *)(v26 + v22) - *(float *)(v22 + v23);
    if (v39 == 0.0) {
        v27 = v34 / v33;
        v37 = v27;
        if (v27 >= 0.0 && v37 <= 1.0) {
            v28 = (v35 - v37 * v36) / v32;
            if (v28 >= 0.0 && v37 + v28 <= 1.0)
                return 1;
        }
    } else {
        v30 = (v35 * v39 - v32 * v34) / (v36 * v39 - v32 * v33);
        v38 = v30;
        if (v30 >= 0.0 && v38 <= 1.0) {
            v31 = (v34 - v38 * v33) / v39;
            if (v31 >= 0.0 && v38 + v31 <= 1.0)
                return 1;
        }
    }
    return 0;
}
// 1006C759: variable 'v4' is possibly undefined
// 1006C76E: variable 'v7' is possibly undefined
// 1006C78E: variable 'v10' is possibly undefined
// 1006C7A3: variable 'v13' is possibly undefined
// 1006C7C9: variable 'v17' is possibly undefined
// 1006C7DE: variable 'v20' is possibly undefined
