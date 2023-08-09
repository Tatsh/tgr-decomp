#include "types-win32.h"
//----- (10043E70) --------------------------------------------------------
unk000C8 *sub_10043E70() {
    unk000C8 *v0;     // eax
    unk000C8 *result; // eax

    if (gUnkC8Ptr10) {
        gUnkC8Ptr1 = gUnkC8Ptr10;
    } else {
        v0 = (unk000C8 *)malloc(0xC8u);
        if (v0)
            result = meth_unk000C8_10048710(v0);
        else
            result = 0;
        gUnkC8Ptr10 = result;
        gUnkC8Ptr1 = result;
        if (!result)
            return result;
        result->lpFn0 = sub_10056FF0;
        gUnkC8Ptr10->lpFn0(gUnkC8Ptr10);
        gUnkC8Ptr1->field_C = 1;
        gUnkC8Ptr1->field_68 = 1;
    }
    if (!dword_10A9CFFC && !dword_10A9D000 && (!dword_10AA287C || dword_10AA287C == 1))
        np_sub_1003C020();
    return (unk000C8 *)1;
}
// 10A9CFFC: using guessed type int dword_10A9CFFC;
// 10A9D000: using guessed type int dword_10A9D000;
// 10AA287C: using guessed type int dword_10AA287C;
