#include "types-win32.h"
//----- (10022DC0) --------------------------------------------------------
int __cdecl sub_10022DC0(float *a1) {
    int v1; // edx

    v1 = a1[6] < 0.0;
    if (a1[3] + a1[6] < 0.0)
        v1 |= 2u;
    if (a1[6] - a1[3] < 0.0)
        v1 |= 4u;
    if (a1[1] + a1[6] < 0.0)
        v1 |= 8u;
    if (a1[6] - a1[1] < 0.0)
        v1 |= 0x10u;
    if (a1[2] + a1[6] < 0.0)
        v1 |= 0x20u;
    if (a1[6] - a1[2] < 0.0)
        v1 |= 0x40u;
    return v1;
}
