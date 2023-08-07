#include "../../types-win32.h"
//----- (1003B940) --------------------------------------------------------
BOOL __cdecl sub_1003B940(float *a1, float *a2, float *a3, float *a4, int a5) {
    float v6[3];  // [esp+10h] [ebp-48h] BYREF
    float v7[3];  // [esp+1Ch] [ebp-3Ch] BYREF
    float v8[3];  // [esp+28h] [ebp-30h] BYREF
    float v9[3];  // [esp+34h] [ebp-24h] BYREF
    float v10[3]; // [esp+40h] [ebp-18h] BYREF
    float v11[3]; // [esp+4Ch] [ebp-Ch] BYREF

    sub_1003AEE0(v8, a3, a2);
    sub_1003AEE0(v7, a1, a3);
    sub_1003AC30(v6, v8, v7);
    if (sub_1003AC90(v6, (float *)a5) < 0.0)
        return 0;
    sub_1003AEE0(v9, a4, a3);
    sub_1003AC30(v6, v9, v7);
    if (sub_1003AC90(v6, (float *)a5) < 0.0)
        return 0;
    sub_1003AEE0(v11, a2, a4);
    sub_1003AEE0(v10, a1, a2);
    sub_1003AC30(v6, v11, v10);
    return sub_1003AC90(v6, (float *)a5) >= 0.0;
}
