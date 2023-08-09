#include "types-win32.h"
//----- (10043260) --------------------------------------------------------
int __stdcall sub_10043260() {
    unk000C8 *v0;     // eax
    unk000C8 *result; // eax

    if (gUnkC8Ptr7) {
        gUnkC8Ptr1 = gUnkC8Ptr7;
        result = (unk000C8 *)1;
    } else {
        v0 = (unk000C8 *)malloc(0xC8u);
        if (v0)
            result = meth_unk000C8_10048710(v0);
        else
            result = 0;
        gUnkC8Ptr7 = result;
        gUnkC8Ptr1 = result;
        if (result) {
            result->lpFn0 = sub_10051990;
            gUnkC8Ptr7->lpFn0(gUnkC8Ptr7);
            gUnkC8Ptr1->field_C = 1;
            result = (unk000C8 *)1;
            gUnkC8Ptr1->field_68 = 1;
        }
    }
    return (int)result;
}
