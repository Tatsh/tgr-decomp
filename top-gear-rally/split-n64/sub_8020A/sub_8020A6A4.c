#include "../../types-n64.h"
//----- (8020A6A4) --------------------------------------------------------
__int64 __fastcall sub_8020A6A4(unsigned int *a1, int a2, int a3, int a4, float a5, int a6) {
    sub_80260BC0((float *)flt_8031AB10, a5 * 57.295776, 0.0, 0.0, 1.0);
    sub_80260800((int)&flt_8031AB50, a6, a6, a6);
    sub_80260940((float *)flt_8031AB10, &flt_8031AB50, (int)flt_8031AB10);
    sub_80260BC0(&flt_8031AB50, -90.0, 1.0, 0.0, 0.0);
    sub_80260940((float *)flt_8031AB10, &flt_8031AB50, (int)flt_8031AB10);
    sub_80260E30((int)&flt_8031AB50, a2, a3, a4);
    sub_80260940((float *)flt_8031AB10, &flt_8031AB50, (int)flt_8031AB10);
    return sub_80209D70(a1, (float *)flt_8031AB10);
}
// 8028A8A8: using guessed type int dword_8028A8A8;
// 8028A8AC: using guessed type int dword_8028A8AC;
// 8031AB50: using guessed type float flt_8031AB50;
