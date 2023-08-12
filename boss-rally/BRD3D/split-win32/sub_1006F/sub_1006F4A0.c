#include "types-win32.h"
//----- (1006F4A0) --------------------------------------------------------
void __cdecl sub_1006F4A0(_DWORD *a2) {
    float *v2;          // esi
    int i;              // ebx
    double v4;          // st6
    unsigned __int8 v6; // c0
    unsigned __int8 v7; // c3

    v2 = (float *)a2;
    for (i = 0; i < 4; ++i) {
        switch (i) {
        case 0:
            v2 = (float *)a2[1];
            break;
        case 1:
            v2 = (float *)a2[2];
            break;
        case 2:
            v2 = (float *)a2[3];
            break;
        case 3:
            v2 = (float *)a2[4];
            break;
        default:
            break;
        }
        v4 = -sub_1006F0C0((int)a2, (int)v2);
        v2[118] = v4;
        if (!(v6 | v7))
            v4 = 0.0;
        if (v4 >= -0.40000001)
            v2[32] = v4;
        else
            v2[32] = -0.40000001;
    }
}
// 1006F4F1: variable 'v6' is possibly undefined
// 1006F4F1: variable 'v7' is possibly undefined
