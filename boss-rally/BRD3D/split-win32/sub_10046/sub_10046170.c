#include "types-win32.h"
//----- (10046170) --------------------------------------------------------
int sub_10046170() {
    unk000C8 *v0; // eax
    int result;   // eax

    sub_100419D0(asc_100AD300);
    sub_10072AF0(3, 0x200020u);
    dword_10AA2854 = 3;
    if (dword_10AA2910) {
        gUnkC8Ptr1 = (unk000C8 *)dword_10AA2910;
        result = 1;
    } else {
        v0 = (unk000C8 *)malloc(0xC8u);
        if (v0)
            result = (int)meth_unk000C8_10048710(v0);
        else
            result = 0;
        dword_10AA2910 = result;
        gUnkC8Ptr1 = (unk000C8 *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_10049C20;
            (*(void(__cdecl **)(int))(dword_10AA2910 + 4))(dword_10AA2910);
            gUnkC8Ptr1->field_C = 1;
            result = 1;
            gUnkC8Ptr1->field_68 = 1;
        }
    }
    return result;
}
// 10AA2854: using guessed type int dword_10AA2854;
// 10AA2910: using guessed type int dword_10AA2910;
