#include "types-win32.h"
//----- (10045C90) --------------------------------------------------------
unk000C8 *sub_10045C90() {
    unk000C8 *v0;     // eax
    unk000C8 *result; // eax
    unk000C8 *v2;     // eax

    if (gUnkC8Ptr18) {
        gUnkC8Ptr1 = gUnkC8Ptr18;
        result = (unk000C8 *)1;
    } else {
        v0 = (unk000C8 *)malloc(0xC8u);
        if (v0)
            result = meth_unk000C8_10048710(v0);
        else
            result = 0;
        gUnkC8Ptr18 = result;
        gUnkC8Ptr1 = result;
        if (result) {
            result->lpFn0 = sub_100509F0;
            gUnkC8Ptr18->lpFn0(gUnkC8Ptr18);
            gUnkC8Ptr1->field_C = 1;
            gUnkC8Ptr1->field_68 = 1;
            v2 = (unk000C8 *)malloc(0xC8u);
            if (v2)
                result = meth_unk000C8_10048710(v2);
            else
                result = 0;
            gUnkC8Ptr33 = result;
            if (result) {
                result->lpFn0 = sub_10049F40;
                gUnkC8Ptr33->lpFn0(gUnkC8Ptr33);
                result = (unk000C8 *)1;
                gUnkC8Ptr33->field_C = 1;
            }
        }
    }
    return result;
}
