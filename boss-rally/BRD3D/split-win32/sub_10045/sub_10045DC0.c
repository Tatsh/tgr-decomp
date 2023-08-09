#include "types-win32.h"
//----- (10045DC0) --------------------------------------------------------
int sub_10045DC0() {
    unk000C8 *v0; // eax
    int result;   // eax

    dword_10AA28AC = dword_10AA28A4;
    if (gUnkC8Ptr19) {
        gUnkC8Ptr1 = gUnkC8Ptr19;
        result = 1;
    } else {
        v0 = (unk000C8 *)malloc(0xC8u);
        if (v0)
            result = (int)meth_unk000C8_10048710(v0);
        else
            result = 0;
        gUnkC8Ptr19 = (unk000C8 *)result;
        gUnkC8Ptr1 = (unk000C8 *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_10052030;
            gUnkC8Ptr19->lpFn0(gUnkC8Ptr19);
            result = 1;
            gUnkC8Ptr1->field_C = 1;
            gUnkC8Ptr1->field_68 = 1;
        }
    }
    return result;
}
// 10052030: using guessed type int __cdecl sub_10052030(int);
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28AC: using guessed type int dword_10AA28AC;
