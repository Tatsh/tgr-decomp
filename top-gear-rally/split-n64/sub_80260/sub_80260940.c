#include "../../types-n64.h"
//----- (80260940) --------------------------------------------------------
char *__fastcall sub_80260940(float *a1, float *a2, int a3) {
    float *v3;    // $v1
    float *v6;    // $a1
    float *v7;    // $t1
    int v8;       // $a0
    float i;      // $f14
    float v10;    // $f10
    float v11;    // $f14
    float v12;    // $f12
    float v13;    // $f16
    float v14;    // $f18
    float *v15;   // $a1
    float *v16;   // $t1
    char *v18;    // $a0
    char *result; // $v0
    float v20;    // $f6
    char v21[64]; // [sp+1Ch] [-4Ch] BYREF
    float v22[3]; // [sp+5Ch] [-Ch] BYREF

    v3 = (float *)v21;
    do {
        v6 = v3;
        v7 = a2;
        *v3 = 0.0;
        v8 = 4;
        for (i = *v3 + (float)(*a1 * *a2);; i = v13 + v14) {
            v8 += 4;
            ++v6;
            ++v7;
            *(v6 - 1) = i;
            *(v6 - 1) = *(v6 - 1) + (float)(a1[1] * v7[3]);
            *(v6 - 1) = *(v6 - 1) + (float)(a1[2] * v7[7]);
            v10 = a1[3];
            v11 = v7[11];
            v12 = *(v6 - 1);
            *v6 = 0.0;
            v13 = *v6;
            *(v6 - 1) = v12 + (float)(v10 * v11);
            v14 = *a1 * *v7;
            if (v8 == 16)
                break;
        }
        v15 = v6 + 1;
        v16 = v7 + 1;
        *(v15 - 1) = v13 + v14;
        *(v15 - 1) = *(v15 - 1) + (float)(a1[1] * v16[3]);
        *(v15 - 1) = *(v15 - 1) + (float)(a1[2] * v16[7]);
        *(v15 - 1) = *(v15 - 1) + (float)(a1[3] * v16[11]);
        v3 += 4;
        a1 += 4;
    } while (v3 < v22);
    v18 = v21;
    result = (char *)v22;
    do {
        v20 = *(float *)v18;
        v18 += 16;
        a3 += 16;
        *(float *)(a3 - 16) = v20;
        *(_DWORD *)(a3 - 12) = *((_DWORD *)v18 - 3);
        *(_DWORD *)(a3 - 8) = *((_DWORD *)v18 - 2);
        *(_DWORD *)(a3 - 4) = *((_DWORD *)v18 - 1);
    } while (v18 != (char *)v22);
    return result;
}
