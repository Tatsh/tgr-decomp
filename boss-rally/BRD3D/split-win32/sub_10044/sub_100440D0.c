#include "types-win32.h"
//----- (100440D0) --------------------------------------------------------
int sub_100440D0() {
    _DWORD *v0; // eax
    int result; // eax

    if (dword_10AA294C) {
        gUnkC8Ptr1 = (void *)dword_10AA294C;
        result = 1;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)meth_unk000C8_10048710(v0);
        else
            result = 0;
        dword_10AA294C = result;
        gUnkC8Ptr1 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_100575F0;
            (*(void(__cdecl **)(int))(dword_10AA294C + 4))(dword_10AA294C);
            *((_DWORD *)gUnkC8Ptr1 + 3) = 1;
            result = 1;
            *((_DWORD *)gUnkC8Ptr1 + 26) = 1;
        }
    }
    return result;
}
// 100575F0: using guessed type int __cdecl sub_100575F0(int);
// 10AA294C: using guessed type int dword_10AA294C;
