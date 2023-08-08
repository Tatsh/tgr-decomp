#include "types-win32.h"
//----- (100451E0) --------------------------------------------------------
unkC8 *sub_100451E0() {
    unkC8 *v0;     // eax
    unkC8 *result; // eax

    sub_100419D0(asc_100AD300);
    if (dword_10AA2918) {
        g_unkC8Ptr1 = dword_10AA2918;
        result = (unkC8 *)1;
    } else {
        v0 = (unkC8 *)malloc(0xC8u);
        if (v0)
            result = meth_10048710(v0);
        else
            result = 0;
        dword_10AA2918 = result;
        g_unkC8Ptr1 = result;
        if (result) {
            result->lpFn0 = sub_1004BDC0;
            dword_10AA2918->lpFn0(dword_10AA2918);
            g_unkC8Ptr1->field_C = 1;
            result = (unkC8 *)1;
            g_unkC8Ptr1->field_68 = 1;
        }
    }
    return result;
}
