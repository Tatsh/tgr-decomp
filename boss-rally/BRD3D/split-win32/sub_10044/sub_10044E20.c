#include "types-win32.h"
//----- (10044E20) --------------------------------------------------------
unkC8 *sub_10044E20() {
    unkC8 *v0;     // eax
    unkC8 *result; // eax

    dword_10AA28CC = dword_10ACEE8C;
    dword_10AA28C8 = LODWORD(flt_10ACEE94);
    if (g_unkC8Ptr0) {
        g_unkC8Ptr1 = g_unkC8Ptr0;
        result = (unkC8 *)1;
    } else {
        v0 = (unkC8 *)malloc(0xC8u);
        if (v0)
            result = meth_10048710(v0);
        else
            result = 0;
        g_unkC8Ptr0 = result;
        g_unkC8Ptr1 = result;
        if (result) {
            result->lpFn0 = sub_1005A6E0;
            g_unkC8Ptr0->lpFn0(g_unkC8Ptr0);
            g_unkC8Ptr1->field_C = 1;
            g_unkC8Ptr1->field_68 = 1;
            result = (unkC8 *)1;
        }
    }
    return result;
}
// 10AA28C8: using guessed type int dword_10AA28C8;
// 10AA28CC: using guessed type int dword_10AA28CC;
// 10ACEE8C: using guessed type int dword_10ACEE8C;
