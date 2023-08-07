#include "../../types-win32.h"
//----- (10030DE0) --------------------------------------------------------
int __cdecl sub_10030DE0(double a1) {
    __int64 v1; // rax

    v1 = (__int64)floor(0.5 - a1 * -128.0);
    if ((int)v1 < -128)
        LODWORD(v1) = -128;
    if ((int)v1 > 127)
        LODWORD(v1) = 127;
    return v1;
}
