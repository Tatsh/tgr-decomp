#include "../types-win32.h"
//----- (1003A6B0) --------------------------------------------------------
void __cdecl sub_1003A6B0(float a1, float a2, float a3, float a4) {
    float v4;   // esi
    int v5;     // eax
    int v6;     // eax
    int v7;     // esi
    int v8;     // eax
    int v9;     // eax
    float v10;  // eax
    double v11; // st7
    double v12; // st7
    int v13;    // esi
    int v14;    // ebx
    double v15; // st7
    double v16; // st7
    int v17;    // edi
    int v18;    // edi
    float v19;  // [esp+0h] [ebp-24h]
    int v20;    // [esp+0h] [ebp-24h]
    float v21;  // [esp+0h] [ebp-24h]
    int v22;    // [esp+0h] [ebp-24h]
    float v23;  // [esp+0h] [ebp-24h]
    float v24;  // [esp+0h] [ebp-24h]
    float v25;  // [esp+0h] [ebp-24h]
    float v26;  // [esp+14h] [ebp-10h]
    float v27;  // [esp+14h] [ebp-10h]
    int i;      // [esp+14h] [ebp-10h]
    float v29;  // [esp+14h] [ebp-10h]
    float v30;  // [esp+14h] [ebp-10h]
    float v31;  // [esp+18h] [ebp-Ch]
    int v32;    // [esp+20h] [ebp-4h]

    v26 = a1 * 0.03125;
    v19 = a2 * 0.03125;
    v4 = v26;
    v20 = sub_1002B920(v19);
    v5 = sub_1002B920(v26);
    sub_1003A660(v5, v20);
    v27 = a3 * 0.03125;
    v21 = a4 * 0.03125;
    v22 = sub_1002B920(v21);
    v6 = sub_1002B920(v27);
    sub_1003A660(v6, v22);
    v7 = sub_1002B920(v4);
    v8 = sub_1002B920(v27);
    if (v7 > v8) {
        v9 = v7 ^ v8;
        v7 ^= v9;
        v8 = v7 ^ v9;
    }
    if (v7 < dword_10A9BBC8)
        dword_10A9BBC8 = v7;
    if (v8 > dword_10A9BBC0)
        dword_10A9BBC0 = v8;
    if (a2 > (double)a4) {
        v10 = a3;
        a3 = a1;
        v11 = a2;
        a1 = v10;
        a2 = a4;
        a4 = v11;
    }
    v12 = a4 - a2;
    v31 = v12;
    if (v12 != 0.0) {
        v23 = a2 * 0.03125;
        v13 = sub_1002B920(v23);
        v24 = a4 * 0.03125;
        v14 = sub_1002B920(v24);
        v32 = v14;
        if (v13 < dword_10A9BBCC)
            dword_10A9BBCC = v13;
        if (v14 > dword_10A9BBC4)
            dword_10A9BBC4 = v14;
        for (i = v13; v13 <= v14; i = v13) {
            v15 = (double)i * 32.0;
            v29 = v15;
            if (v15 >= a2 && v29 <= (double)a4) {
                v16 = (a3 - a1) * (v29 - a2) / v31 + a1;
                v30 = v16;
                v25 = v16 * 0.03125;
                v17 = sub_1002B920(v25);
                sub_1003A660(v17, v13 - 1);
                sub_1003A660(v17, v13);
                if (v30 <= (double)v17 * 32.0) {
                    sub_1003A660(v17 - 1, v13 - 1);
                    sub_1003A660(v17 - 1, v13);
                    v14 = v32;
                }
                v18 = v17 + 1;
                if (v30 >= (double)v18 * 32.0) {
                    sub_1003A660(v18, v13 - 1);
                    sub_1003A660(v18, v13);
                }
            }
            ++v13;
        }
    }
}
// 10A9BBC0: using guessed type int dword_10A9BBC0;
// 10A9BBC4: using guessed type int dword_10A9BBC4;
// 10A9BBC8: using guessed type int dword_10A9BBC8;
// 10A9BBCC: using guessed type int dword_10A9BBCC;
