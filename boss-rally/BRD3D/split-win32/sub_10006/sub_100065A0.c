#include "../../types-win32.h"
//----- (100065A0) --------------------------------------------------------
int __cdecl sub_100065A0(float a1) {
    __int64 v1; // rax

    v1 = (__int64)floor(0.5 - a1 * 128.0);
    if ((int)v1 < -32)
        LODWORD(v1) = -32;
    if ((int)v1 > 31)
        LODWORD(v1) = 31;
    return v1;
}
