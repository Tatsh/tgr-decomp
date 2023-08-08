#include "../types-win32.h"
//----- (10044D00) --------------------------------------------------------
int sub_10044D00() {
    _DWORD *v0; // eax
    int result; // eax

    dword_10AA28C8 = 0;
    dword_10AA28CC = 0;
    if (dword_10AA2964) {
        g_unkC8Ptr1 = (void *)dword_10AA2964;
        result = 1;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)meth_10048710(v0);
        else
            result = 0;
        dword_10AA2964 = result;
        g_unkC8Ptr1 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_10059BB0;
            (*(void(__cdecl **)(int))(dword_10AA2964 + 4))(dword_10AA2964);
            *((_DWORD *)g_unkC8Ptr1 + 3) = 1;
            result = 1;
            *((_DWORD *)g_unkC8Ptr1 + 26) = 1;
        }
    }
    return result;
}
// 10059BB0: using guessed type int __cdecl sub_10059BB0(int);
// 10AA28C8: using guessed type int dword_10AA28C8;
// 10AA28CC: using guessed type int dword_10AA28CC;
// 10AA2964: using guessed type int dword_10AA2964;
