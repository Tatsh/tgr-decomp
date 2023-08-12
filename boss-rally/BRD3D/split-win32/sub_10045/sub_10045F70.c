#include "types-win32.h"
//----- (10045F70) --------------------------------------------------------
unk000C8 *sub_10045F70() {
    unk000C8 *v0;     // eax
    unk000C8 *result; // eax
    unk000C8 *v2;     // eax

    if (gUnkC8Ptr21) {
        gUnkC8Ptr1 = gUnkC8Ptr21;
        result = (unk000C8 *)1;
    } else {
        v0 = (unk000C8 *)malloc(0xC8u);
        if (v0)
            result = meth_unk000C8_10048710(v0);
        else
            result = 0;
        gUnkC8Ptr21 = result;
        gUnkC8Ptr1 = result;
        if (result) {
            result->lpFn0 = s_unk000C8_10053CF0;
            gUnkC8Ptr21->lpFn0(gUnkC8Ptr21);
            gUnkC8Ptr1->field_C = 1;
            gUnkC8Ptr1->field_68 = 1;
            v2 = (unk000C8 *)malloc(0xC8u);
            if (v2)
                result = meth_unk000C8_10048710(v2);
            else
                result = 0;
            gUnkC8Ptr38 = result;
            if (result) {
                result->lpFn0 = s_unk000C8_1004A260;
                gUnkC8Ptr38->lpFn0(gUnkC8Ptr38);
                result = (unk000C8 *)1;
                gUnkC8Ptr38->field_C = 1;
            }
        }
    }
    return result;
}
