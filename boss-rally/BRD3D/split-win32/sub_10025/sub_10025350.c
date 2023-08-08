#include "types-win32.h"
//----- (10025350) --------------------------------------------------------
int __cdecl sub_10025350(int a1, int a2, int a3, float a4, int a5, int a6) {
    int result;       // eax
    int v7;           // esi
    double v8;        // st6
    int v10;          // ebp
    int v11;          // ebx
    int v12;          // ecx
    int v13;          // ebx
    int v14;          // ebp
    __int64 v15;      // rax
    double v16;       // st7
    int v17;          // ecx
    unsigned int v18; // eax
    bool v19;         // zf
    float v20;        // [esp+18h] [ebp-1Ch]
    float v21;        // [esp+1Ch] [ebp-18h]
    int v22;          // [esp+20h] [ebp-14h]
    float v23;        // [esp+2Ch] [ebp-8h]
    int v24;          // [esp+30h] [ebp-4h]
    int v25;          // [esp+40h] [ebp+Ch]
    float v26;        // [esp+44h] [ebp+10h]
    int v27;          // [esp+4Ch] [ebp+18h]
    int v28;          // [esp+4Ch] [ebp+18h]
    int v29;          // [esp+50h] [ebp+1Ch]

    *(float *)&result = COERCE_FLOAT(_RTC_NumErrors());
    v7 = result;
    v8 = (double)a6 / (double)a3;
    v20 = (double)a5 / (double)a2;
    *(float *)&v29 = v8 * 0.5 - 0.5;
    if (a3 > 0) {
        v10 = a6 - 1;
        v24 = a6 - 1;
        v22 = a3;
        do {
            v27 = (__int64)floor(*(float *)&v29);
            v11 = v27 + 1;
            v12 = v27 <= 0 ? 0 : v27;
            v23 = *(float *)&v29 - (double)v27;
            if (v27 + 1 >= v10)
                v11 = v10;
            *(float *)&result = v20 * 0.5 - 0.5;
            v25 = result;
            if (a2 > 0) {
                v28 = a2;
                v13 = a5 * v11;
                v14 = a5 * v12;
                do {
                    v15 = (__int64)floor(*(float *)&v25);
                    v16 = *(float *)&v25 - (double)(int)v15;
                    v17 = v15 + 1;
                    v18 = (int)v15 <= 0 ? 0 : (unsigned int)v15;
                    if (v17 >= a5 - 1)
                        v17 = a5 - 1;
                    v26 = v16;
                    sub_100254F0(a1,
                                 LODWORD(a4) + v7 * (v14 + v18),
                                 LODWORD(a4) + v7 * (v14 + v17),
                                 LODWORD(a4) + v7 * (v18 + v13),
                                 LODWORD(a4) + v7 * (v17 + v13),
                                 v26,
                                 v23);
                    result = v28 - 1;
                    v19 = v28 == 1;
                    a1 += v7;
                    --v28;
                    *(float *)&v25 = *(float *)&v25 + v20;
                } while (!v19);
                v10 = v24;
            }
            v19 = v22-- == 1;
            v21 = v8;
            *(float *)&v29 = *(float *)&v29 + v21;
        } while (!v19);
    }
    return result;
}
