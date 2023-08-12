#include "types-win32.h"
//----- (1005B570) --------------------------------------------------------
char __thiscall meth_unk00438_5(unk00438 *this) {
    char v3; // bl
    int v4;  // [esp+0h] [ebp-10h]

    if (dword_10AA285C) {
        if (dword_10AA2B6C) {
            sub_1003D9A0((int *)dword_10A9D008, 4);
            sub_10072AF0(4, 0x200020u);
            dword_10AA2854 = 4;
        } else if (dword_10AA2B70) {
            sub_1003D9A0((int *)dword_10A9D008, 5);
            sub_10072AF0(5, 0x200020u);
            dword_10AA2854 = 5;
        } else if (dword_10AA2B74) {
            sub_1003D9A0((int *)dword_10A9D008, 6);
            sub_10072AF0(6, 0x200020u);
            dword_10AA2854 = 6;
        } else if (dword_10AA2B78) {
            sub_1003D9A0((int *)dword_10A9D008, 7);
            sub_10072AF0(7, 0x200020u);
            dword_10AA2854 = 7;
        }
    }
    if (dword_10AA2A84) {
        dword_10AA33E4 = 0;
        return -1;
    }
    if ((dword_10AA2AF0 || dword_10AA2CF0 || sub_1003E080() && !dword_10AA285C) &&
        strlen(this->field_9)) {
        dword_10AA33E4 = 0;
        return 0;
    }
    if (!dword_10AA33E4)
        goto LABEL_25;
    if (dword_10AA33E4 == 8) {
        if (strlen(this->field_9)) {
            *(&this->field_8 + strlen(this->field_9)) = 0;
            dword_10AA33E4 = 0;
            return 1;
        }
        goto LABEL_25;
    }
    v3 = car_1005B540(dword_10AA33E4);
    if (v3) {
        this->lpVtbl->meth1(this, v4);
        if (this->field_40A < this->field_41C)
            sprintf(this->field_9, "%s%c", this->field_9, v3);
    LABEL_25:
        dword_10AA33E4 = 0;
    }
    return 1;
}
// 1005B6F3: variable 'v4' is possibly undefined
// 10AA2854: using guessed type int dword_10AA2854;
// 10AA285C: using guessed type int dword_10AA285C;
// 10AA2AF0: using guessed type int dword_10AA2AF0;
// 10AA2B6C: using guessed type int dword_10AA2B6C;
// 10AA2B70: using guessed type int dword_10AA2B70;
// 10AA2B74: using guessed type int dword_10AA2B74;
// 10AA2B78: using guessed type int dword_10AA2B78;
// 10AA2CF0: using guessed type int dword_10AA2CF0;
// 10AA33E4: using guessed type int dword_10AA33E4;
