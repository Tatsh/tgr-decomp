#include "types-win32.h"
//----- (10044B90) --------------------------------------------------------
int sub_10044B90() {
    _DWORD *v0; // eax
    int result; // eax

    sub_100419D0((int)asc_100AD300);
    if (dword_10AA295C) {
        g_unkC8Ptr1 = (void *)dword_10AA295C;
        result = 1;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)meth_10048710(v0);
        else
            result = 0;
        dword_10AA295C = result;
        g_unkC8Ptr1 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_10059760;
            (*(void(__cdecl **)(int))(dword_10AA295C + 4))(dword_10AA295C);
            *((_DWORD *)g_unkC8Ptr1 + 3) = 1;
            result = 1;
            *((_DWORD *)g_unkC8Ptr1 + 26) = 1;
        }
    }
    return result;
}
// 10059760: using guessed type int __cdecl sub_10059760(int);
// 10AA295C: using guessed type int dword_10AA295C;
