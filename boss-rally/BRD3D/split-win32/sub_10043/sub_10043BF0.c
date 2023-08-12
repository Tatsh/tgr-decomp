#include "types-win32.h"
//----- (10043BF0) --------------------------------------------------------
int __stdcall sub_10043BF0() {
    unk000C8 *v0;     // eax
    unk000C8 *result; // eax

    sub_100419D0(asc_100AD300);
    sub_1003E510();
    if (gUnkC8Ptr28) {
        gUnkC8Ptr1 = gUnkC8Ptr28;
        result = (unk000C8 *)1;
    } else {
        v0 = (unk000C8 *)malloc(0xC8u);
        if (v0)
            result = meth_unk000C8_10048710(v0);
        else
            result = 0;
        gUnkC8Ptr28 = result;
        gUnkC8Ptr1 = result;
        if (result) {
            result->lpFn0 = s_unk000C8_100563E0;
            gUnkC8Ptr28->lpFn0(gUnkC8Ptr28);
            gUnkC8Ptr1->field_C = 1;
            result = (unk000C8 *)1;
            gUnkC8Ptr1->field_68 = 1;
        }
    }
    return (int)result;
}
