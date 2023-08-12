#include "types-win32.h"
//----- (1006F310) --------------------------------------------------------
double __cdecl sub_1006F310(float *a2) {
    __int16 v2;          // ax
    int v3;              // esi
    int v4;              // eax
    float *v5;           // esi
    int v6;              // ebx
    double v7;           // st7
    double v8;           // st7
    char v10;            // c0
    double v11;          // st6
    double v12;          // st7
    double v13;          // st5
    double v14;          // rt2
    unsigned __int8 v16; // c0
    unsigned __int8 v17; // c3
    float v19;           // [esp+8h] [ebp-10h]
    float v20[3];        // [esp+Ch] [ebp-Ch] BYREF
    int v21;             // [esp+1Ch] [ebp+4h]
    int v22;             // [esp+1Ch] [ebp+4h]

    v19 = 100.0;
    v2 = sub_1006F720(*a2, a2[1]);
    v3 = 75 * v2;
    v4 = (unsigned __int16)v2;
    LOWORD(v4) = *((_WORD *)&dword_117554A0 + v2);
    v5 = (float *)((char *)&unk_11750338 + 64 * v3);
    if ((_WORD)v4) {
        v6 = v4;
        do {
            v7 = sub_1006C9A0((int)v5, v5[3], (int)a2);
            if (v7 > -2.0 && v7 < 2.0) {
                v8 = v5[2] * -1.0;
                *(float *)&v21 = v8;
                if (v10)
                    v8 = -v8;
                if (v8 > 0.001) {
                    v11 = *a2 * *v5 + v5[2] * a2[2] + v5[1] * a2[1] + v5[3];
                    v12 = a2[1] + 0.0;
                    v20[0] = 0.0;
                    v13 = -(v11 / *(float *)&v21);
                    *(float *)&v22 = v13;
                    v14 = v13 * -1.0 + a2[2];
                    v20[0] = (float)0.0 + *a2;
                    v20[1] = v12;
                    v20[2] = v14;
                    if (!(v16 | v17) && *(float *)&v22 < 2.0 && *(float *)&v22 < (double)v19 &&
                        v5[2] > 0.2 && sub_1006C740((int)v5, (int)v20)) {
                        v19 = v13;
                    }
                }
            }
            v5 += 8;
            --v6;
        } while (v6);
    }
    return v19;
}
// 1006F3A2: variable 'v10' is possibly undefined
// 1006F42A: variable 'v16' is possibly undefined
// 1006F42A: variable 'v17' is possibly undefined
// 117554A0: using guessed type int dword_117554A0;
