#include "types-win32.h"
//----- (10061C60) --------------------------------------------------------
float *__thiscall sub_10061C60(int a1) {
    float v2;      // eax
    float *result; // eax
    double v4;     // st5
    double v5;     // st7
    double v6;     // st6
    float v7;      // [esp+0h] [ebp-D8h]
    float v8;      // [esp+0h] [ebp-D8h]
    int v9[16];    // [esp+18h] [ebp-C0h] BYREF
    int v10[16];   // [esp+58h] [ebp-80h] BYREF
    int v11[16];   // [esp+98h] [ebp-40h] BYREF

    if (dword_106909E0 || gGameMode == GAME_MODE_2 && *(_DWORD *)(a1 + 320) == 1 &&
                              *(_DWORD *)(*(_DWORD *)(a1 + 10688) + 68)) {
        sub_1006ACF0(a1);
        sub_10061BE0((_DWORD *)a1);
    } else if (gGameMode == GAME_MODE_4 && !*(_DWORD *)(a1 + 320) &&
               *(_DWORD *)(*(_DWORD *)(a1 + 10688) + 68)) {
        sub_1006ABD0(a1, 1);
        sub_10061BE0((_DWORD *)a1);
    } else {
        sub_1006AAB0(a1);
    }
    sub_10030EE0((int)v9, *(float *)(a1 + 824), 1.0, 0.0, 0.0);
    sub_100306C0((float *)v9, (float *)(a1 + 544), (float *)a1);
    v2 = *(float *)(a1 + 1348);
    *(float *)(a1 + 1124) = *(float *)(a1 + 1124) - -0.25400001;
    *(float *)(a1 + 1648) = *(float *)(a1 + 1648) - -0.25400001;
    *(float *)(a1 + 2172) = *(float *)(a1 + 2172) - -0.25400001;
    *(float *)(a1 + 2696) = *(float *)(a1 + 2696) - -0.25400001;
    sub_10030EE0((int)v9, v2, 0.0, 1.0, 0.0);
    sub_100306C0((float *)v9, (float *)(a1 + 544), (float *)(a1 + 192));
    math_100747C0((float *)(a1 + 240), (float *)(a1 + 544), (float *)(a1 + 1116));
    sub_10030EE0((int)v9, *(float *)(a1 + 2396), 0.0, 1.0, 0.0);
    sub_100306C0((float *)v9, (float *)(a1 + 544), (float *)(a1 + 256));
    math_100747C0((float *)(a1 + 304), (float *)(a1 + 544), (float *)(a1 + 2164));
    sub_10030EE0((int)v11, *(float *)(a1 + 1872), 0.0, 1.0, 0.0);
    v7 = *(float *)(a1 + 1852) * 114.59155;
    sub_10030EE0((int)v10, v7, 0.0, 0.0, 1.0);
    sub_100306C0((float *)v11, (float *)v10, (float *)v9);
    sub_100306C0((float *)v9, (float *)(a1 + 544), (float *)(a1 + 128));
    math_100747C0((float *)(a1 + 176), (float *)(a1 + 544), (float *)(a1 + 1640));
    sub_10030EE0((int)v11, *(float *)(a1 + 2920), 0.0, 1.0, 0.0);
    v8 = *(float *)(a1 + 2900) * 114.59155;
    sub_10030EE0((int)v10, v8, 0.0, 0.0, 1.0);
    sub_100306C0((float *)v11, (float *)v10, (float *)v9);
    sub_100306C0((float *)v9, (float *)(a1 + 544), (float *)(a1 + 64));
    result = math_100747C0((float *)(a1 + 112), (float *)(a1 + 544), (float *)(a1 + 2688));
    v4 = *(float *)(a1 + 1648) - 0.25400001;
    v5 = *(float *)(a1 + 2172) - 0.25400001;
    v6 = *(float *)(a1 + 2696) - 0.25400001;
    *(float *)(a1 + 1124) = *(float *)(a1 + 1124) - 0.25400001;
    *(float *)(a1 + 1648) = v4;
    *(float *)(a1 + 2172) = v5;
    *(float *)(a1 + 2696) = v6;
    return result;
}
// 106909E0: using guessed type int dword_106909E0;
