#include "types-win32.h"
//----- (10045C90) --------------------------------------------------------
int sub_10045C90() {
    _DWORD *v0; // eax
    int result; // eax
    _DWORD *v2; // eax

    if (dword_10AA292C) {
        g_unkC8Ptr1 = (void *)dword_10AA292C;
        result = 1;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)meth_10048710(v0);
        else
            result = 0;
        dword_10AA292C = result;
        g_unkC8Ptr1 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_100509F0;
            (*(void(__cdecl **)(int))(dword_10AA292C + 4))(dword_10AA292C);
            *((_DWORD *)g_unkC8Ptr1 + 3) = 1;
            *((_DWORD *)g_unkC8Ptr1 + 26) = 1;
            v2 = (_DWORD *)malloc(0xC8u);
            if (v2)
                result = (int)meth_10048710(v2);
            else
                result = 0;
            dword_10AA2974 = result;
            if (result) {
                *(_DWORD *)(result + 4) = sub_10049F40;
                (*(void(__cdecl **)(int))(dword_10AA2974 + 4))(dword_10AA2974);
                result = 1;
                *(_DWORD *)(dword_10AA2974 + 12) = 1;
            }
        }
    }
    return result;
}
// 10049F40: using guessed type int __cdecl sub_10049F40(int);
// 100509F0: using guessed type int __cdecl sub_100509F0(int);
// 10AA292C: using guessed type int dword_10AA292C;
// 10AA2974: using guessed type int dword_10AA2974;
