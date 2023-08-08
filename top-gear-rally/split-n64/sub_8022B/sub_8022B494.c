#include "types-n64.h"
//----- (8022B494) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
float *__fastcall sub_8022B494(int a1, int a2, int a3, float a4, float *a5, int a6) {
    float v6;      // $f0
    float *result; // $v0
    float v8;      // $f10

    v6 = sub_80224A78(a5, (float *)(a6 + 48));
    result = &flt_8028B7A0;
    if (v6 < 0.0) {
        flt_8028B7A0 = *a5;
        flt_8028B7A4 = a5[1];
        v8 = a5[2];
        dword_8028B7B8 = a6;
        flt_8028B7A8 = v8;
        flt_8028B7DC = v6;
        dword_8028B7CC = a2;
        dword_8028B7D4 = a1;
        flt_8028B7E0 = a4;
        dword_8028B7E4 = a3;
    }
    return result;
}
// 8022B4EC: write access to const memory at 8028B7A0 has been detected
// 8022B4FC: write access to const memory at 8028B7A4 has been detected
// 8022B504: write access to const memory at 8028B7B8 has been detected
// 8022B50C: write access to const memory at 8028B7A8 has been detected
// 8022B510: write access to const memory at 8028B7DC has been detected
// 8022B514: write access to const memory at 8028B7CC has been detected
// 8022B518: write access to const memory at 8028B7D4 has been detected
// 8022B51C: write access to const memory at 8028B7E0 has been detected
// 8022B520: write access to const memory at 8028B7E4 has been detected
// 8028B7A0: using guessed type float flt_8028B7A0;
// 8028B7A4: using guessed type float flt_8028B7A4;
// 8028B7A8: using guessed type float flt_8028B7A8;
// 8028B7B8: using guessed type int dword_8028B7B8;
// 8028B7CC: using guessed type int dword_8028B7CC;
// 8028B7D4: using guessed type int dword_8028B7D4;
// 8028B7DC: using guessed type float flt_8028B7DC;
// 8028B7E0: using guessed type float flt_8028B7E0;
// 8028B7E4: using guessed type int dword_8028B7E4;
