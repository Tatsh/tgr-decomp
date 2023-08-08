#include "../types-win32.h"
//----- (10044280) --------------------------------------------------------
int sub_10044280() {
    _DWORD *v0; // eax
    int result; // eax

    dword_10AA2884 = 0;
    dword_10AA2898 = 0;
    if (!dword_10AA2878) {
        if (dword_10AA287C == 2 || dword_10AA287C == 3) {
            dword_10AA2898 = 1;
            if (dword_10AA287C == 2 && strlen(String1) < 7)
                return 1;
            if (!dword_10AA29D8 || !*(_WORD *)(dword_10AA29D4 + 123236)) {
                sub_1003C1E0();
                return 1;
            }
            if (!sub_1003C260())
                return 1;
        } else if (!sub_1003C260()) {
            return 1;
        }
    }
    if (dword_10AA2950) {
        g_unkC8Ptr1 = (void *)dword_10AA2950;
        goto LABEL_20;
    }
    v0 = (_DWORD *)malloc(0xC8u);
    if (v0)
        result = (int)meth_10048710(v0);
    else
        result = 0;
    dword_10AA2950 = result;
    g_unkC8Ptr1 = (void *)result;
    if (result) {
        *(_DWORD *)(result + 4) = sub_10057C10;
        (*(void(__cdecl **)(int))(dword_10AA2950 + 4))(dword_10AA2950);
        *((_DWORD *)g_unkC8Ptr1 + 3) = 1;
        *((_DWORD *)g_unkC8Ptr1 + 26) = 1;
    LABEL_20:
        *(_DWORD *)(dword_10AA29B8 + 8) = sub_10044970;
        return 1;
    }
    return result;
}
// 10044970: using guessed type int __cdecl sub_10044970(int);
// 10057C10: using guessed type int __cdecl sub_10057C10(int);
// 10AA2878: using guessed type int dword_10AA2878;
// 10AA287C: using guessed type int dword_10AA287C;
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA2898: using guessed type int dword_10AA2898;
// 10AA2950: using guessed type int dword_10AA2950;
// 10AA29B8: using guessed type int dword_10AA29B8;
// 10AA29D4: using guessed type int dword_10AA29D4;
// 10AA29D8: using guessed type int dword_10AA29D8;
