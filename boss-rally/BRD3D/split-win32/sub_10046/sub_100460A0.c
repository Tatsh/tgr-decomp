#include "../types-win32.h"
//----- (100460A0) --------------------------------------------------------
int sub_100460A0() {
    _DWORD *v0; // eax
    int result; // eax

    if (dword_10AA293C) {
        g_unkC8Ptr1 = (void *)dword_10AA293C;
        result = 1;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)meth_10048710(v0);
        else
            result = 0;
        dword_10AA293C = result;
        g_unkC8Ptr1 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_10054B50;
            (*(void(__cdecl **)(int))(dword_10AA293C + 4))(dword_10AA293C);
            *((_DWORD *)g_unkC8Ptr1 + 3) = 1;
            result = 1;
            *((_DWORD *)g_unkC8Ptr1 + 26) = 1;
        }
    }
    return result;
}
// 100460A0: using guessed type int sub_100460A0();
// 10054B50: using guessed type int __cdecl sub_10054B50(int);
// 10AA293C: using guessed type int dword_10AA293C;
