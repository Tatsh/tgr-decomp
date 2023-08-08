#include "types-win32.h"
//----- (1006E4C0) --------------------------------------------------------
int __cdecl sub_1006E4C0(int a1, int a2, float a3, int a4, int a5) {
    int result; // eax
    double v6;  // st7
    double v7;  // st7
    double v8;  // st6
    double v9;  // st5
    float *v10; // ecx
    int v11;    // eax
    int v12;    // edx
    double v13; // st7
    double v14; // st7
    double v16; // st6
    char v17;   // c0
    double v19; // st5
    char v20;   // c0
    double v22; // st6
    char v23;   // c0
    double v25; // st5
    char v26;   // c0
    double v28; // st6
    char v29;   // c0
    double v31; // st5
    char v32;   // c0
    double v33; // st6
    double v34; // st7
    double v35; // st6
    double v36; // st7
    float v37;  // [esp+0h] [ebp-Ch] BYREF
    float v38;  // [esp+4h] [ebp-8h]
    float v39;  // [esp+8h] [ebp-4h]
    float v40;  // [esp+14h] [ebp+8h]
    float v41;  // [esp+14h] [ebp+8h]
    int v42;    // [esp+1Ch] [ebp+10h]
    int v43;    // [esp+1Ch] [ebp+10h]
    int v44;    // [esp+1Ch] [ebp+10h]

    if (dword_1175549C == 2) {
        v10 = &v37;
        v11 = a5 + 24;
        v12 = 3;
        do {
            v13 = *(float *)(v11 - 12) + *(float *)(v11 - 24);
            v11 += 4;
            ++v10;
            --v12;
            *(v10 - 1) = (v13 + *(float *)(v11 - 4)) * 0.33333334;
        } while (v12);
        v14 = v37;
        v16 = v37;
        if (v17)
            v16 = -v16;
        v19 = v38;
        if (v20)
            v19 = -v19;
        if (v16 >= v19) {
            v28 = v38;
            if (v29)
                v28 = -v28;
            v31 = v39;
            if (v32)
                v31 = -v31;
            if (v28 < v31) {
                dword_11755498 = 0;
                dword_11755490 = 0;
                v43 = -1;
                if (v14 >= 0.0)
                    v43 = 1;
                *(float *)&dword_11755494 = (double)v43 * 0.5;
                goto LABEL_29;
            }
        } else {
            v22 = v37;
            if (v23)
                v22 = -v14;
            v25 = v39;
            if (v26)
                v25 = -v25;
            if (v22 < v25) {
                dword_11755498 = 0;
                dword_11755494 = 0;
                v42 = -1;
                if (v14 >= 0.0)
                    v42 = 1;
                *(float *)&dword_11755490 = (double)v42 * 0.5;
            LABEL_29:
                result = a2;
                v33 = *(float *)&dword_11755498 * *(float *)(a2 + 8) +
                      *(float *)&dword_11755494 * *(float *)(a2 + 4);
                v34 = *(float *)a2 * *(float *)&dword_11755490;
                *(float *)&dword_11755490 = *(float *)(a1 + 476) * *(float *)&dword_11755490;
                *(float *)&dword_11755490 = *(float *)(a1 + 480) * *(float *)&dword_11755490;
                *(float *)&dword_1175549C = *(float *)(a1 + 484) * *(float *)&dword_1175549C;
                v35 = -(v33 + v34 - a3);
                v36 = *(float *)a2;
                v41 = v35;
                v7 = v36 * v41;
                v8 = v41;
                v9 = v41;
                goto LABEL_30;
            }
        }
        dword_11755494 = 0;
        dword_11755490 = 0;
        v44 = -1;
        if (v14 >= 0.0)
            v44 = 1;
        *(float *)&dword_11755498 = (double)v44 * 0.5;
        goto LABEL_29;
    }
    result = a2;
    v6 = *(float *)a2;
    v40 = -(*(float *)(a4 + 4) * *(float *)(a2 + 4) + *(float *)(a4 + 8) * *(float *)(a2 + 8) +
            v6 * *(float *)a4 - a3);
    v7 = v6 * v40;
    v8 = v40;
    v9 = v40;
LABEL_30:
    *(float *)&dword_11754E40 = v7;
    *(float *)&dword_11754E44 = v8 * *(float *)(result + 4);
    *(float *)&dword_11754E48 = v9 * *(float *)(result + 8);
    return result;
}
// 1006E54C: variable 'v17' is possibly undefined
// 1006E563: variable 'v20' is possibly undefined
// 1006E581: variable 'v23' is possibly undefined
// 1006E598: variable 'v26' is possibly undefined
// 1006E606: variable 'v29' is possibly undefined
// 1006E61D: variable 'v32' is possibly undefined
// 11754E40: using guessed type int dword_11754E40;
// 11754E44: using guessed type int dword_11754E44;
// 11754E48: using guessed type int dword_11754E48;
// 11755490: using guessed type int dword_11755490;
// 11755494: using guessed type int dword_11755494;
// 11755498: using guessed type int dword_11755498;
// 1175549C: using guessed type int dword_1175549C;
