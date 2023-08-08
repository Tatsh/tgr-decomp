#include "../types-win32.h"
//----- (10045DC0) --------------------------------------------------------
int sub_10045DC0() {
    _DWORD *v0; // eax
    int result; // eax

    dword_10AA28AC = dword_10AA28A4;
    if (dword_10AA2930) {
        g_unkC8Ptr1 = (void *)dword_10AA2930;
        result = 1;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)meth_10048710(v0);
        else
            result = 0;
        dword_10AA2930 = result;
        g_unkC8Ptr1 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_10052030;
            (*(void(__cdecl **)(int))(dword_10AA2930 + 4))(dword_10AA2930);
            result = 1;
            *((_DWORD *)g_unkC8Ptr1 + 3) = 1;
            *((_DWORD *)g_unkC8Ptr1 + 26) = 1;
        }
    }
    return result;
}
// 10052030: using guessed type int __cdecl sub_10052030(int);
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28AC: using guessed type int dword_10AA28AC;
// 10AA2930: using guessed type int dword_10AA2930;
