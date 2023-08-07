#include "../../types-win32.h"
//----- (10006620) --------------------------------------------------------
int __cdecl sub_10006620(float a1) {
    __int64 v1; // rax

    v1 = (__int64)floor(0.5 - a1 * -0.70914125);
    if ((int)v1 < 0)
        LODWORD(v1) = 0;
    if ((int)v1 > 255)
        LODWORD(v1) = 255;
    return v1;
}
