#include "../../types-win32.h"
//----- (1002B1C0) --------------------------------------------------------
void __cdecl sub_1002B1C0(float a1, float a2) {
    dword_1057552C = 1;
    dword_100A81B4 = LODWORD(a1);
    if (a1 - flt_100A81B8 < 0.0 || a1 == 0.0)
        flt_10575520 = -1.0 / a2;
    else
        flt_10575520 = 1.0 / a2;
}
// 100A81B4: using guessed type int dword_100A81B4;
// 100A81B8: using guessed type float flt_100A81B8;
// 10575520: using guessed type float flt_10575520;
// 1057552C: using guessed type int dword_1057552C;
