#include "types-win32.h"
//----- (10043DA0) --------------------------------------------------------
int sub_10043DA0() {
    unk000C8 *v0; // eax
    int result;   // eax

    if (gUnkC8Ptr29) {
        gUnkC8Ptr1 = (unk000C8 *)gUnkC8Ptr29;
        result = 1;
    } else {
        v0 = (unk000C8 *)malloc(0xC8u);
        if (v0)
            result = (int)meth_unk000C8_10048710(v0);
        else
            result = 0;
        gUnkC8Ptr29 = result;
        gUnkC8Ptr1 = (unk000C8 *)result;
        if (result) {
            *(_DWORD *)(result + 4) = s_unk000C8_10056A10;
            (*(void(__cdecl **)(int))(gUnkC8Ptr29 + 4))(gUnkC8Ptr29);
            gUnkC8Ptr1->field_C = 1;
            result = 1;
            gUnkC8Ptr1->field_68 = 1;
        }
    }
    return result;
}
// 10056A10: using guessed type int __cdecl sub_10056A10(int);
// 10AA298C: using guessed type int dword_10AA298C;
