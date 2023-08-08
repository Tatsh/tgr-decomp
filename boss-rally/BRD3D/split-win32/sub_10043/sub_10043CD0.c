#include "types-win32.h"
//----- (10043CD0) --------------------------------------------------------
int sub_10043CD0() {
    _DWORD *v0; // eax
    int result; // eax

    if (dword_10AA2940) {
        g_unkC8Ptr1 = (void *)dword_10AA2940;
        result = 1;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)meth_10048710(v0);
        else
            result = 0;
        dword_10AA2940 = result;
        g_unkC8Ptr1 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_100558A0;
            (*(void(__cdecl **)(int))(dword_10AA2940 + 4))(dword_10AA2940);
            *((_DWORD *)g_unkC8Ptr1 + 3) = 1;
            result = 1;
            *((_DWORD *)g_unkC8Ptr1 + 26) = 1;
        }
    }
    return result;
}
// 100558A0: using guessed type int __cdecl sub_100558A0(int);
// 10AA2940: using guessed type int dword_10AA2940;
