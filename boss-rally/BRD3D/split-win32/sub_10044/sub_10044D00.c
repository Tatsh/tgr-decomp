#include "types-win32.h"
//----- (10044D00) --------------------------------------------------------
int sub_10044D00() {
    _DWORD *v0; // eax
    int result; // eax

    dword_10AA28C8 = 0;
    dword_10AA28CC = 0;
    if (gUnkC8Ptr32) {
        gUnkC8Ptr1 = (void *)gUnkC8Ptr32;
        result = 1;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)meth_unk000C8_10048710(v0);
        else
            result = 0;
        gUnkC8Ptr32 = result;
        gUnkC8Ptr1 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_10059BB0;
            (*(void(__cdecl **)(int))(gUnkC8Ptr32 + 4))(gUnkC8Ptr32);
            *((_DWORD *)gUnkC8Ptr1 + 3) = 1;
            result = 1;
            *((_DWORD *)gUnkC8Ptr1 + 26) = 1;
        }
    }
    return result;
}
// 10059BB0: using guessed type int __cdecl sub_10059BB0(int);
// 10AA28C8: using guessed type int dword_10AA28C8;
// 10AA28CC: using guessed type int dword_10AA28CC;
// 10AA2964: using guessed type int dword_10AA2964;
