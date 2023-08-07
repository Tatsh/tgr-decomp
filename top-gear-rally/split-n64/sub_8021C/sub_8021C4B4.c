#include "../../types-n64.h"
//----- (8021C4B4) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8021C4B4() {
    int v0;     // $v0
    __int64 v1; // $v1
    __int64 v2; // $v1
    int v3;     // $v1
    int result; // $v0

    v0 = sub_802649F0();
    dword_8028ADF8 = 0;
    dword_8028AE00 = v0;
    dword_8028ADFC = v0;
    dword_8028AAD0 = 0;
    HIDWORD(v1) = sub_80266188();
    HIDWORD(v2) = sub_80266088(v1, 62500000LL);
    sub_80266088(v2, 1000LL);
    dword_8028AAD4 = v3;
    sub_8021A9B4();
    nullsub_3();
    nullsub_4();
    result = 0;
    flt_8028AAD8 = (float)COERCE_UNSIGNED_INT(0.0) / 1000.0;
    dword_8028AADC = 0;
    return result;
}
// 8021C524: write access to const memory at 8028ADF8 has been detected
// 8021C52C: write access to const memory at 8028ADFC has been detected
// 8021C5EC: write access to const memory at 8028AAD0 has been detected
// 8021C63C: write access to const memory at 8028AAD4 has been detected
// 8021C698: write access to const memory at 8028AAD8 has been detected
// 8021C6A4: write access to const memory at 8028AADC has been detected
// 8021C544: write access to const memory at 8028AE00 has been detected
// 8021C5A4: write access to const memory at 8028ADF8 has been detected
// 8021C5A8: write access to const memory at 8028ADFC has been detected
// 8021C5B0: write access to const memory at 8028AE00 has been detected
// 8021C5D0: write access to const memory at 8028ADF8 has been detected
// 8021C5D4: write access to const memory at 8028AE00 has been detected
// 8021C5D8: write access to const memory at 8028ADFC has been detected
// 8021C618: variable 'v1' is possibly undefined
// 8021C62C: variable 'v2' is possibly undefined
// 8021C63C: variable 'v3' is possibly undefined
// 8028AAD0: using guessed type int dword_8028AAD0;
// 8028AAD4: using guessed type int dword_8028AAD4;
// 8028AAD8: using guessed type float flt_8028AAD8;
// 8028AADC: using guessed type int dword_8028AADC;
// 8028ADF8: using guessed type int dword_8028ADF8;
// 8028ADFC: using guessed type int dword_8028ADFC;
// 8028AE00: using guessed type int dword_8028AE00;
// 802A6140: using guessed type __int64 qword_802A6140;
