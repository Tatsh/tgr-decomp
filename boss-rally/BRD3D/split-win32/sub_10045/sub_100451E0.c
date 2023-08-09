#include "types-win32.h"
//----- (100451E0) --------------------------------------------------------
int __stdcall sub_100451E0() {
    unk000C8 *v0;     // eax
    unk000C8 *result; // eax

    sub_100419D0(asc_100AD300);
    if (gUnkC8Ptr4) {
        gUnkC8Ptr1 = gUnkC8Ptr4;
        result = (unk000C8 *)1;
    } else {
        v0 = (unk000C8 *)malloc(0xC8u);
        if (v0)
            result = meth_unk000C8_10048710(v0);
        else
            result = 0;
        gUnkC8Ptr4 = result;
        gUnkC8Ptr1 = result;
        if (result) {
            result->lpFn0 = sub_1004BDC0;
            gUnkC8Ptr4->lpFn0(gUnkC8Ptr4);
            gUnkC8Ptr1->field_C = 1;
            result = (unk000C8 *)1;
            gUnkC8Ptr1->field_68 = 1;
        }
    }
    return (int)result;
}
