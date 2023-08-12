#include "types-win32.h"
//----- (10045110) --------------------------------------------------------
int sub_10045110() {
    unk000C8 *v0; // eax
    int result;   // eax

    if (gUnkC8Ptr14) {
        gUnkC8Ptr1 = gUnkC8Ptr14;
        result = 1;
    } else {
        v0 = (unk000C8 *)malloc(0xC8u);
        if (v0)
            result = (int)meth_unk000C8_10048710(v0);
        else
            result = 0;
        gUnkC8Ptr14 = (unk000C8 *)result;
        gUnkC8Ptr1 = (unk000C8 *)result;
        if (result) {
            *(_DWORD *)(result + 4) = s_unk000C8_1004A580;
            gUnkC8Ptr14->lpFn0(gUnkC8Ptr14);
            gUnkC8Ptr1->field_C = 1;
            result = 1;
            gUnkC8Ptr1->field_68 = 1;
        }
    }
    return result;
}
