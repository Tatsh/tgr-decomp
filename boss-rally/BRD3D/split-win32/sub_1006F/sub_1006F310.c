#include "../types-win32.h"
//----- (1006F310) --------------------------------------------------------
double __cdecl sub_1006F310(float *a2) {
    __int16 v3;          // ax
    int v4;              // esi
    int v5;              // eax
    float *v6;           // esi
    int v7;              // ebx
    double v8;           // st7
    double v9;           // st7
    char v11;            // c0
    double v12;          // st6
    double v13;          // st7
    double v14;          // st5
    double v15;          // rt2
    unsigned __int8 v17; // c0
    unsigned __int8 v18; // c3
    float v20;           // [esp+8h] [ebp-10h]
    float v21[3];        // [esp+Ch] [ebp-Ch] BYREF
    int v22;             // [esp+1Ch] [ebp+4h]
    int v23;             // [esp+1Ch] [ebp+4h]

    v20 = 100.0;
    v3 = sub_1006F720(*a2, a2[1]);
    v4 = 75 * v3;
    v5 = (unsigned __int16)v3;
    LOWORD(v5) = *((_WORD *)&dword_117554A0 + v3);
    v6 = (float *)((char *)&unk_11750338 + 64 * v4);
    if ((_WORD)v5) {
        v7 = v5;
        do {
            v8 = sub_1006C9A0((int)v6, v6[3], (int)a2);
            if (v8 > -2.0 && v8 < 2.0) {
                v9 = v6[2] * -1.0;
                *(float *)&v22 = v9;
                if (v11)
                    v9 = -v9;
                if (v9 > 0.001) {
                    v12 = *a2 * *v6 + v6[2] * a2[2] + v6[1] * a2[1] + v6[3];
                    v13 = a2[1] + 0.0;
                    v21[0] = 0.0;
                    v14 = -(v12 / *(float *)&v22);
                    *(float *)&v23 = v14;
                    v15 = v14 * -1.0 + a2[2];
                    v21[0] = (float)0.0 + *a2;
                    v21[1] = v13;
                    v21[2] = v15;
                    if (!(v17 | v18) && *(float *)&v23 < 2.0 && *(float *)&v23 < (double)v20 &&
                        v6[2] > 0.2 && sub_1006C740((int)v6, (int)v21)) {
                        v20 = v14;
                    }
                }
            }
            v6 += 8;
            --v7;
        } while (v7);
    }
    return v20;
}
// 1006F3A2: variable 'v11' is possibly undefined
// 1006F42A: variable 'v17' is possibly undefined
// 1006F42A: variable 'v18' is possibly undefined
// 117554A0: using guessed type int dword_117554A0;
