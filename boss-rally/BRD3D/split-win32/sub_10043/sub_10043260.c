#include "../types-win32.h"
//----- (10043260) --------------------------------------------------------
int sub_10043260() {
    _DWORD *v0; // eax
    int result; // eax

    if (dword_10AA296C) {
        g_unkC8Ptr1 = (void *)dword_10AA296C;
        result = 1;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)meth_10048710(v0);
        else
            result = 0;
        dword_10AA296C = result;
        g_unkC8Ptr1 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_10051990;
            (*(void(__cdecl **)(int))(dword_10AA296C + 4))(dword_10AA296C);
            *((_DWORD *)g_unkC8Ptr1 + 3) = 1;
            result = 1;
            *((_DWORD *)g_unkC8Ptr1 + 26) = 1;
        }
    }
    return result;
}
// 10AA296C: using guessed type int dword_10AA296C;
