#include "types-win32.h"
//----- (10045900) --------------------------------------------------------
int __thiscall meth_10045900(void *this) {
    unkC8 *v1;      // eax
    unkC8 *v2;      // eax
    int result;     // eax
    const CHAR *v4; // eax

    if (sub_10045A00()) {
        sub_100419D0(asc_100AD300);
        if (g_unkC8Ptr3) {
            g_unkC8Ptr1 = g_unkC8Ptr3;
            return 1;
        }
        v1 = (unkC8 *)malloc(0xC8u);
        if (v1)
            v2 = meth_10048710(v1);
        else
            v2 = 0;
        g_unkC8Ptr3 = v2;
        g_unkC8Ptr1 = v2;
        if (v2) {
            v2->lpFn0 = sub_1004F2B0;
            g_unkC8Ptr3->lpFn0(g_unkC8Ptr3);
            g_unkC8Ptr1->field_C = 1;
            result = 1;
            g_unkC8Ptr1->field_68 = 1;
            return result;
        }
    } else {
        v4 = getCaptionString(0xDu);
        sub_100419D0(v4);
    }
    return 0;
}
