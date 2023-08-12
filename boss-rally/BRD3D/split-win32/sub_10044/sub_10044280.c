#include "types-win32.h"
//----- (10044280) --------------------------------------------------------
int sub_10044280() {
    unk000C8 *v0; // eax
    int result;   // eax

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
    if (gUnkC8Ptr26) {
        gUnkC8Ptr1 = gUnkC8Ptr26;
        goto LABEL_20;
    }
    v0 = (unk000C8 *)malloc(0xC8u);
    if (v0)
        result = (int)meth_unk000C8_10048710(v0);
    else
        result = 0;
    gUnkC8Ptr26 = (unk000C8 *)result;
    gUnkC8Ptr1 = (unk000C8 *)result;
    if (result) {
        *(_DWORD *)(result + 4) = s_unk000C8_10057C10;
        gUnkC8Ptr26->lpFn0(gUnkC8Ptr26);
        gUnkC8Ptr1->field_C = 1;
        gUnkC8Ptr1->field_68 = 1;
    LABEL_20:
        *(_DWORD *)(dword_10AA29B8 + 8) = sub_10044970;
        return 1;
    }
    return result;
}
// 10044970: using guessed type int __cdecl sub_10044970(int);
// 10AA2878: using guessed type int dword_10AA2878;
// 10AA287C: using guessed type int dword_10AA287C;
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA2898: using guessed type int dword_10AA2898;
// 10AA29B8: using guessed type int dword_10AA29B8;
// 10AA29D4: using guessed type int dword_10AA29D4;
// 10AA29D8: using guessed type int dword_10AA29D8;
