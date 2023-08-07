#include "../../types-n64.h"
//----- (80223688) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80223688(float a1, float a2) {
    int result; // $v0

    result = 1;
    dword_8028B778 = 1;
    if (a1 > 0.0) {
        flt_8028B754 = a1;
        flt_8028B758 = 1.0 / a2;
    } else {
        flt_8028B758 = -1.0 / a2;
        flt_8028B754 = a1;
    }
    return result;
}
// 8022368C: write access to const memory at 8028B778 has been detected
// 80223714: write access to const memory at 8028B758 has been detected
// 80223720: write access to const memory at 8028B754 has been detected
// 80223728: write access to const memory at 8028B784 has been detected
// 8022372C: write access to const memory at 8028B754 has been detected
// 80223744: write access to const memory at 8028B758 has been detected
// 8028B754: using guessed type float flt_8028B754;
// 8028B758: using guessed type float flt_8028B758;
// 8028B778: using guessed type int dword_8028B778;
