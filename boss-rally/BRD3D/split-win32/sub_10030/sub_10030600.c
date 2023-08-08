#include "types-win32.h"
//----- (10030600) --------------------------------------------------------
double *__cdecl sub_10030600(double *a1) {
    double v1; // st7

    v1 = sub_100305F0(a1);
    if (v1 != 0.0) {
        *a1 = *a1 / v1;
        a1[1] = a1[1] / v1;
        a1[2] = a1[2] / v1;
    }
    return a1;
}
