#include "types-n64.h"
//----- (8020A9D0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8020A9D0() {
    int result; // $v0

    sub_80260800(
        (int)&flt_8031AB10, COERCE_INT(0.25999999), COERCE_INT(0.25999999), COERCE_INT(0.25999999));
    sub_80260BC0(&flt_8031AB50, -90.0, 1.0, 0.0, 0.0);
    sub_80260940(&flt_8031AB10, &flt_8031AB50, (int)&flt_8031AB10);
    sub_80260E30((int)&flt_8031AB50, 1126170624, COERCE_INT((float)86), 0);
    sub_80260940(&flt_8031AB10, &flt_8031AB50, (int)&flt_8031AB10);
    result = sub_80260ED0(&flt_8031AB10, (int)dword_803161E0);
    dword_8028A858 = 8;
    MEMORY[0] = 100663296;
    MEMORY[4] = dword_80271F28;
    return result;
}
// 8020AABC: write access to const memory at 8028A858 has been detected
// 80271F28: using guessed type int dword_80271F28[10];
// 8028A858: using guessed type int dword_8028A858;
// 803161E0: using guessed type int dword_803161E0[16];
// 8031AB10: using guessed type float flt_8031AB10;
// 8031AB50: using guessed type float flt_8031AB50;
