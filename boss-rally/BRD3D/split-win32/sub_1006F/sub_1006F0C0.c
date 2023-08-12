#include "types-win32.h"
//----- (1006F0C0) --------------------------------------------------------
double __cdecl sub_1006F0C0(int a2, int a3) {
    float v3;            // ecx
    float v4;            // ecx
    float v5;            // edx
    __int16 v6;          // ax
    int v7;              // esi
    int v8;              // eax
    float *v9;           // esi
    int v10;             // ebx
    double v11;          // st7
    double v12;          // st7
    double v14;          // st6
    char v15;            // c0
    unsigned __int8 v17; // c0
    unsigned __int8 v18; // c3
    float v20;           // [esp+8h] [ebp-34h]
    float v21;           // [esp+Ch] [ebp-30h] BYREF
    float v22;           // [esp+10h] [ebp-2Ch]
    float v23;           // [esp+14h] [ebp-28h]
    float v24;           // [esp+18h] [ebp-24h] BYREF
    float v25;           // [esp+1Ch] [ebp-20h]
    float v26;           // [esp+20h] [ebp-1Ch]
    float v27;           // [esp+24h] [ebp-18h] BYREF
    float v28;           // [esp+28h] [ebp-14h]
    float v29;           // [esp+2Ch] [ebp-10h]
    int v30[3];          // [esp+30h] [ebp-Ch] BYREF
    float v31;           // [esp+44h] [ebp+8h]

    v20 = 100.0;
    v3 = *(float *)(a3 + 124);
    v24 = *(float *)(a3 + 120);
    v25 = v3;
    v30[0] = 0;
    v30[1] = 0;
    v30[2] = -1082130432;
    v26 = 0.0;
    math_100747C0(&v21, (float *)(a2 + 188), &v24);
    math_10074770(&v27, a2 + 188, (float *)v30);
    v4 = v22;
    v5 = v21;
    *(_DWORD *)(a3 + 412) = 0;
    v6 = sub_1006F720(v5, v4);
    v7 = 75 * v6;
    v8 = (unsigned __int16)v6;
    LOWORD(v8) = *((_WORD *)&dword_117554A0 + v6);
    v9 = (float *)((char *)&unk_11750338 + 64 * v7);
    if ((_WORD)v8) {
        v10 = v8;
        do {
            v11 = sub_1006C9A0((int)v9, v9[3], (int)&v21);
            if (v11 > -2.0 && v11 < 2.0) {
                v12 = v28 * v9[1] + v29 * v9[2] + v27 * *v9;
                v14 = v12;
                if (v15)
                    v14 = -v12;
                if (v14 > 0.001) {
                    v31 = -((v22 * v9[1] + v23 * v9[2] + v21 * *v9 + v9[3]) / v12);
                    v24 = v31 * v27 + v21;
                    v25 = v31 * v28 + v22;
                    v26 = v31 * v29 + v23;
                    if (!(v17 | v18) && v31 < 2.0 && v31 < (double)v20 && v9[2] > 0.2 &&
                        sub_1006C740((int)v9, (int)&v24)) {
                        *(_DWORD *)(a3 + 412) = v9;
                        v20 = v31;
                        *(_BYTE *)(a3 + 416) = *((_BYTE *)v9 + 30);
                        *(float *)(a3 + 420) = *v9;
                        *(float *)(a3 + 424) = v9[1];
                        *(float *)(a3 + 428) = v9[2];
                        *(float *)(a3 + 432) = v9[3];
                    }
                }
            }
            v9 += 8;
            --v10;
        } while (v10);
    }
    return v20;
}
// 1006F1D6: variable 'v15' is possibly undefined
// 1006F266: variable 'v17' is possibly undefined
// 1006F266: variable 'v18' is possibly undefined
// 117554A0: using guessed type int dword_117554A0;
