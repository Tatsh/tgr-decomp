#include "types-win32.h"
//----- (100443E0) --------------------------------------------------------
unk000C8 *sub_100443E0() {
    unk000C8 *v0;     // eax
    unk000C8 *result; // eax

    dword_10AA2884 = 1;
    gNetworkPlay = 2;
    dword_10AA2898 = 0;
    if (gUnkC8Ptr26) {
        gUnkC8Ptr1 = gUnkC8Ptr26;
        goto LABEL_8;
    }
    v0 = (unk000C8 *)malloc(0xC8u);
    if (v0)
        result = meth_unk000C8_10048710(v0);
    else
        result = 0;
    gUnkC8Ptr26 = result;
    gUnkC8Ptr1 = result;
    if (result) {
        result->lpFn0 = s_unk000C8_10057C10;
        gUnkC8Ptr26->lpFn0(gUnkC8Ptr26);
        gUnkC8Ptr1->field_C = 1;
        gUnkC8Ptr1->field_68 = 1;
    LABEL_8:
        result = (unk000C8 *)1;
        *(_DWORD *)(dword_10AA29B8 + 8) = sub_10044A30;
    }
    return result;
}
// 10044A30: using guessed type int __cdecl sub_10044A30(int);
// 1022AF18: using guessed type int gNetworkPlay;
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA2898: using guessed type int dword_10AA2898;
// 10AA29B8: using guessed type int dword_10AA29B8;
