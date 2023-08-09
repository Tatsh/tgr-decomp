#include "types-win32.h"
//----- (100443E0) --------------------------------------------------------
int sub_100443E0() {
    _DWORD *v0; // eax
    int result; // eax

    dword_10AA2884 = 1;
    gNetworkPlay = 2;
    dword_10AA2898 = 0;
    if (gUnkC8Ptr26) {
        gUnkC8Ptr1 = (void *)gUnkC8Ptr26;
        goto LABEL_8;
    }
    v0 = (_DWORD *)malloc(0xC8u);
    if (v0)
        result = (int)meth_unk000C8_10048710(v0);
    else
        result = 0;
    gUnkC8Ptr26 = result;
    gUnkC8Ptr1 = (void *)result;
    if (result) {
        *(_DWORD *)(result + 4) = sub_10057C10;
        (*(void(__cdecl **)(int))(gUnkC8Ptr26 + 4))(gUnkC8Ptr26);
        *((_DWORD *)gUnkC8Ptr1 + 3) = 1;
        *((_DWORD *)gUnkC8Ptr1 + 26) = 1;
    LABEL_8:
        result = 1;
        *(_DWORD *)(dword_10AA29B8 + 8) = sub_10044A30;
    }
    return result;
}
// 10044A30: using guessed type int __cdecl sub_10044A30(int);
// 10057C10: using guessed type int __cdecl sub_10057C10(int);
// 1022AF18: using guessed type int g_NetworkPlay;
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA2898: using guessed type int dword_10AA2898;
// 10AA2950: using guessed type int dword_10AA2950;
// 10AA29B8: using guessed type int dword_10AA29B8;
