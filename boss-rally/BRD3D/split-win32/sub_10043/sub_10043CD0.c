#include "types-win32.h"
//----- (10043CD0) --------------------------------------------------------
int sub_10043CD0() {
    unk000C8 *v0; // eax
    int result;   // eax

    if (dword_10AA2940) {
        gUnkC8Ptr1 = (unk000C8 *)dword_10AA2940;
        result = 1;
    } else {
        v0 = (unk000C8 *)malloc(0xC8u);
        if (v0)
            result = (int)meth_unk000C8_10048710(v0);
        else
            result = 0;
        dword_10AA2940 = result;
        gUnkC8Ptr1 = (unk000C8 *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_100558A0;
            (*(void(__cdecl **)(int))(dword_10AA2940 + 4))(dword_10AA2940);
            gUnkC8Ptr1->field_C = 1;
            result = 1;
            gUnkC8Ptr1->field_68 = 1;
        }
    }
    return result;
}
// 100558A0: using guessed type int __cdecl sub_100558A0(int);
// 10AA2940: using guessed type int dword_10AA2940;
