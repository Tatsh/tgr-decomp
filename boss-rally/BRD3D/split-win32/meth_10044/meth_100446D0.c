#include "types-win32.h"
//----- (100446D0) --------------------------------------------------------
int __thiscall meth_100446D0(void *this) {
    unk000C8 *v1; // eax
    int result;   // eax

    if (dword_10AA2954) {
        gUnkC8Ptr1 = (unk000C8 *)dword_10AA2954;
    LABEL_8:
        gGameMode = GAME_MODE_6;
        if (dword_10AA2884) {
            if (!dword_10AA2888) {
                if (dword_10AA287C == 2 || dword_10AA287C == 3)
                    sub_1003C230();
                sub_1003C150();
                dword_10AA2888 = 1;
                goto LABEL_15;
            }
            if (dword_10AA2884) {
            LABEL_15:
                sub_1003CDA0();
                return 1;
            }
        }
        return 1;
    }
    v1 = (unk000C8 *)malloc(0xC8u);
    if (v1)
        result = (int)meth_unk000C8_10048710(v1);
    else
        result = 0;
    dword_10AA2954 = result;
    gUnkC8Ptr1 = (unk000C8 *)result;
    if (result) {
        *(_DWORD *)(result + 4) = sub_10058750;
        (*(void(__cdecl **)(int))(dword_10AA2954 + 4))(dword_10AA2954);
        gUnkC8Ptr1->field_C = 1;
        gUnkC8Ptr1->field_68 = 1;
        goto LABEL_8;
    }
    return result;
}
// 10AA287C: using guessed type int dword_10AA287C;
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA2888: using guessed type int dword_10AA2888;
// 10AA2954: using guessed type int dword_10AA2954;
