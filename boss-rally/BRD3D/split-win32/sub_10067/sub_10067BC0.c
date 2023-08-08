#include "types-win32.h"
//----- (10067BC0) --------------------------------------------------------
__int64 __cdecl sub_10067BC0(float *a1, float *a2, float *a3, float *a4, _DWORD *a5, int a6) {
    double v6;           // st7
    double v8;           // st7
    unsigned __int8 v9;  // c0
    unsigned __int8 v10; // c3
    char v12;            // c0
    double v13;          // st7
    double v14;          // st7
    __int64 result;      // rax
    float v16[3];        // [esp+4h] [ebp-Ch] BYREF
    float v17;           // [esp+18h] [ebp+8h]
    float v18;           // [esp+18h] [ebp+8h]

    sub_1003AEE0(v16, a1, a2 + 12);
    v6 = a2[5] * v16[1] + a2[4] * v16[0] + a2[6] * v16[2];
    if (v6 <= 10.0) {
        if (v6 < -10.0)
            v6 = -10.0;
    } else {
        v6 = 10.0;
    }
    if (a6)
        v6 = v6 * 0.40000001;
    v17 = (v6 - -10.0) * 0.050000001;
    v8 = 1.0 - v17;
    if (v9 | v10 && v17 <= 0.50999999 && v8 >= 0.49000001 && v8 <= 0.50999999) {
        v8 = 0.5;
        v17 = 0.5;
    }
    if (v12) {
        v18 = v17 * 1.6;
        v13 = v8 - (1.0 - v8) * -0.60000002;
    } else {
        v13 = v8 * 1.6;
        v18 = v17 - (1.0 - v17) * -0.60000002;
    }
    *a3 = v18;
    *a4 = v13;
    v14 = sub_1003B170(v16);
    if (v14 < 32.0)
        v14 = 32.0;
    result = (__int64)(1024.0 / v14);
    *a5 = result;
    return result;
}
// 10067C61: variable 'v9' is possibly undefined
// 10067C61: variable 'v10' is possibly undefined
// 10067CB4: variable 'v12' is possibly undefined
