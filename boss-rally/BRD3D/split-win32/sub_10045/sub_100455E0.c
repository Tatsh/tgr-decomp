#include "types-win32.h"
//----- (100455E0) --------------------------------------------------------
int sub_100455E0() {
    _DWORD *v0; // eax
    int result; // eax

    if (gUnkC8Ptr34) {
        gUnkC8Ptr1 = (void *)gUnkC8Ptr34;
        result = 1;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)meth_unk000C8_10048710(v0);
        else
            result = 0;
        gUnkC8Ptr34 = result;
        gUnkC8Ptr1 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = s_unk000C8_1004DFC0;
            (*(void(__cdecl **)(int))(gUnkC8Ptr34 + 4))(gUnkC8Ptr34);
            *((_DWORD *)gUnkC8Ptr1 + 3) = 1;
            result = 1;
            *((_DWORD *)gUnkC8Ptr1 + 26) = 1;
        }
    }
    return result;
}
// 1004DFC0: using guessed type int __cdecl sub_1004DFC0(int);
// 10AA2984: using guessed type int dword_10AA2984;
