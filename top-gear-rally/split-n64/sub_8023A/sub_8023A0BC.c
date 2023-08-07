#include "../../types-n64.h"
//----- (8023A0BC) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8023A0BC() {
    int result; // $v0

    result = sub_80225EE4();
    if ((unsigned __int16)result < 0x80u) {
        dword_8028C818 = 3;
        flt_8028C820 = 0.0;
        flt_803634F8 = (float)(sub_80225EE4() & 0x7FF);
        result = sub_80225EE4();
        flt_803634FC = (float)(result & 0x7FF);
        LODWORD(flt_80363500) = MEMORY[0x80025C38];
    }
    return result;
}
// 8023A188: write access to const memory at 803634F8 has been detected
// 8023A104: write access to const memory at 8028C820 has been detected
// 8023A170: write access to const memory at 8028C820 has been detected
// 8023A1A4: write access to const memory at 803634FC has been detected
// 8023A1AC: write access to const memory at 80363500 has been detected
// 8023A168: write access to const memory at 8028C818 has been detected
// 8028AAD8: using guessed type float flt_8028AAD8;
// 8028C818: using guessed type int dword_8028C818;
// 8028C820: using guessed type float flt_8028C820;
// 803634F8: using guessed type float flt_803634F8;
// 803634FC: using guessed type float flt_803634FC;
// 80363500: using guessed type float flt_80363500;
