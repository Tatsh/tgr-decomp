#include "../../types-n64.h"
//----- (8022B404) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
float *sub_8022B404() {
    float *result; // $v0

    result = &flt_8028B7A0;
    dword_8028B7CC = -1;
    dword_8028B7D4 = -1;
    flt_8028B7DC = 8589934600.0;
    return result;
}
// 8022B418: write access to const memory at 8028B7CC has been detected
// 8022B41C: write access to const memory at 8028B7D4 has been detected
// 8022B424: write access to const memory at 8028B7DC has been detected
// 8028B7A0: using guessed type float flt_8028B7A0;
// 8028B7CC: using guessed type int dword_8028B7CC;
// 8028B7D4: using guessed type int dword_8028B7D4;
// 8028B7DC: using guessed type float flt_8028B7DC;
