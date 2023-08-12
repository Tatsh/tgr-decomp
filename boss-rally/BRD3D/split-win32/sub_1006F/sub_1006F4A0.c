#include "types-win32.h"
//----- (1006F4A0) --------------------------------------------------------
void __cdecl sub_1006F4A0(_DWORD *a2) {
    float *v1;          // esi
    int i;              // ebx
    double v3;          // st7
    unsigned __int8 v5; // c0
    unsigned __int8 v6; // c3

    v1 = (float *)a2;
    for (i = 0; i < 4; ++i) {
        switch (i) {
        case 0:
            v1 = (float *)a2[1];
            break;
        case 1:
            v1 = (float *)a2[2];
            break;
        case 2:
            v1 = (float *)a2[3];
            break;
        case 3:
            v1 = (float *)a2[4];
            break;
        default:
            break;
        }
        v3 = -sub_1006F0C0((int)a2, (int)v1);
        v1[118] = v3;
        if (!(v5 | v6))
            v3 = 0.0;
        if (v3 >= -0.40000001)
            v1[32] = v3;
        else
            v1[32] = -0.40000001;
    }
}
// 1006F4F1: variable 'v5' is possibly undefined
// 1006F4F1: variable 'v6' is possibly undefined
