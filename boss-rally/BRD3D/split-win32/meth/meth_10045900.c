#include "types-win32.h"
//----- (10045900) --------------------------------------------------------
int __thiscall meth_10045900(void *this) {
    unk000C8 *v1;   // eax
    unk000C8 *v2;   // eax
    int result;     // eax
    const CHAR *v4; // eax

    if (IsBossRallyCDROMPresent()) {
        sub_100419D0(asc_100AD300);
        if (gUnkC8Ptr5) {
            gUnkC8Ptr1 = gUnkC8Ptr5;
            return 1;
        }
        v1 = (unk000C8 *)malloc(0xC8u);
        if (v1)
            v2 = meth_unk000C8_10048710(v1);
        else
            v2 = 0;
        gUnkC8Ptr5 = v2;
        gUnkC8Ptr1 = v2;
        if (v2) {
            v2->lpFn0 = s_unk000C8_1004F2B0;
            gUnkC8Ptr5->lpFn0(gUnkC8Ptr5);
            gUnkC8Ptr1->field_C = 1;
            result = 1;
            gUnkC8Ptr1->field_68 = 1;
            return result;
        }
    } else {
        v4 = text_GetStringWithIndex(0xDu);
        sub_100419D0(v4);
    }
    return 0;
}
