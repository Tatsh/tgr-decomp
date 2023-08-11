#include "types-win32.h"
//----- (10045460) --------------------------------------------------------
int sub_10045460() {
    _DWORD *v0; // eax
    int result; // eax

    if (gUnkC8Ptr36) {
        gUnkC8Ptr1 = (void *)gUnkC8Ptr36;
        goto LABEL_8;
    }
    v0 = (_DWORD *)malloc(0xC8u);
    if (v0)
        result = (int)meth_unk000C8_10048710(v0);
    else
        result = 0;
    gUnkC8Ptr36 = result;
    gUnkC8Ptr1 = (void *)result;
    if (result) {
        *(_DWORD *)(result + 4) = s_unk000C8_1004D640;
        (*(void(__cdecl **)(int))(gUnkC8Ptr36 + 4))(gUnkC8Ptr36);
        *((_DWORD *)gUnkC8Ptr1 + 3) = 1;
        *((_DWORD *)gUnkC8Ptr1 + 26) = 1;
    LABEL_8:
        graphics_1007AC00();
        result = 1;
    }
    return result;
}
// 1004D640: using guessed type int __cdecl sub_1004D640(int);
// 10AA2990: using guessed type int dword_10AA2990;
