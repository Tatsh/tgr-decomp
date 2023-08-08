#include "types-n64.h"
//----- (8025CBF8) --------------------------------------------------------
int __fastcall sub_8025CBF8(float *a1, float *a2) {
    double v2;        // $f16
    double v3;        // $f2
    float *v4;        // $v1
    char *v5;         // $a2
    int v6;           // $v1
    int *v7;          // $a2
    float *v8;        // $a3
    int v9;           // $t6
    float *v10;       // $t7
    int v12;          // $v0
    int v13;          // $v1
    unsigned int v14; // $t3
    float v15;        // $f2
    int v16;          // $a1
    float v17;        // $f12
    float v18;        // $f0
    float v19;        // $f14
    float v20[3];     // [sp+1Ch] [-24h] BYREF
    char v21[12];     // [sp+28h] [-18h] BYREF
    int v22[3];       // [sp+34h] [-Ch] BYREF

    *((float *)&v2 + 1) = 0.0;
    *((float *)&v3 + 1) = 0.0;
    v4 = v20;
    v20[0] = *a2 - *a1;
    v5 = v21;
    v20[1] = a2[1] - a1[1];
    v20[2] = a2[2] - a1[2];
    do {
        if (*v4 < 0.0)
            *(_DWORD *)v5 = -1;
        else
            *(_DWORD *)v5 = 1;
        v5 += 4;
        ++v4;
    } while (v5 < (char *)v22);
    *(float *)&v2 = 1.75;
    *(float *)&v3 = -1.75;
    v6 = 0;
    v7 = (int *)v21;
    v8 = a1;
    do {
        v9 = *v7++;
        v10 = &a2[v6++];
        if (v2 < (float)((float)v9 * *v8))
            return 0;
        if ((float)((float)v9 * *v10) < v3)
            return 0;
        ++v8;
    } while (v7 < v22);
    v12 = 0;
    do {
        v13 = v12 + 1;
        v14 = (v12 + 1) % 3;
        v15 = v20[(v12 + 2) % 3];
        v16 = (v12 + 2) % 3;
        v17 = v20[v14];
        v18 = (float)(v15 * a1[v14]) - (float)(a1[v16] * v17);
        v19 = (float)((float)((float)*(int *)&v21[v16 * 4] * v17) +
                      (float)(v15 * (float)*(int *)&v21[v14 * 4])) *
              v2;
        if ((float)(v19 * v19) < (float)(v18 * v18))
            return 0;
        ++v12;
    } while (v13 != 3);
    return 1;
}
