#include "../../types-n64.h"
//----- (80225180) --------------------------------------------------------
char *__fastcall sub_80225180(int a1, float *a2, float *a3) {
    float *v4;    // $v1
    float *v7;    // $a1
    float *v8;    // $a2
    int v9;       // $a0
    float i;      // $f14
    float v11;    // $f10
    float v12;    // $f14
    float v13;    // $f12
    float v14;    // $f16
    float v15;    // $f18
    float *v16;   // $a2
    float *v17;   // $a1
    int v18;      // $v1
    char *v19;    // $a0
    char *result; // $v0
    float v21;    // $f6
    char v22[64]; // [sp+28h] [-40h] BYREF
    char v23;     // [sp+68h] [+0h] BYREF

    v4 = (float *)v22;
    do {
        v7 = v4;
        v8 = a3;
        *v4 = 0.0;
        v9 = 4;
        for (i = *v4 + (float)(*a2 * *a3);; i = v14 + v15) {
            ++v8;
            v9 += 4;
            *v7++ = i;
            *(v7 - 1) = *(v7 - 1) + (float)(a2[1] * v8[3]);
            *(v7 - 1) = *(v7 - 1) + (float)(a2[2] * v8[7]);
            v11 = a2[3];
            v12 = v8[11];
            v13 = *(v7 - 1);
            *v7 = 0.0;
            v14 = *v7;
            *(v7 - 1) = v13 + (float)(v11 * v12);
            v15 = *a2 * *v8;
            if (v9 == 16)
                break;
        }
        v16 = v8 + 1;
        v17 = v7 + 1;
        *(v17 - 1) = v14 + v15;
        *(v17 - 1) = *(v17 - 1) + (float)(a2[1] * v16[3]);
        *(v17 - 1) = *(v17 - 1) + (float)(a2[2] * v16[7]);
        *(v17 - 1) = *(v17 - 1) + (float)(a2[3] * v16[11]);
        v4 += 4;
        a2 += 4;
    } while (v4 < (float *)&v23);
    v18 = a1;
    v19 = v22;
    result = &v23;
    do {
        v21 = *(float *)v19;
        v19 += 16;
        v18 += 16;
        *(float *)(v18 - 16) = v21;
        *(_DWORD *)(v18 - 12) = *((_DWORD *)v19 - 3);
        *(_DWORD *)(v18 - 8) = *((_DWORD *)v19 - 2);
        *(_DWORD *)(v18 - 4) = *((_DWORD *)v19 - 1);
    } while (v19 != &v23);
    return result;
}
