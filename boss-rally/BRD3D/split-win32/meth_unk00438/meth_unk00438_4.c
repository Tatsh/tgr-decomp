#include "types-win32.h"
//----- (1005B2B0) --------------------------------------------------------
int __thiscall meth_unk00438_4(unk00438 *this) {
    char v2;    // al
    int i;      // ebx
    __int16 v4; // cx
    int v5;     // esi
    int v6;     // eax
    double v7;  // st7
    int result; // eax
    int v9;     // [esp+10h] [ebp-8h]

    if ((this->field_4 & 1) != 0)
        *(float *)&v9 = this->lpVtbl->meth10(this);
    else
        v9 = this->field_410;
    v2 = this->field_9[0];
    for (i = 0; v2; v2 = this->field_9[(__int16)++i]) {
        v4 = v2 - 32;
        if ((v4 < 0 || v4 > 127) && v2 != 32)
            break;
        if (v2 < 33 || v2 == 127) {
            if (v2 == 32) {
                v7 = *(float *)&v9 - -6.0;
                goto LABEL_14;
            }
        } else {
            v6 = v4;
            v5 = 6 * v4;
            LOWORD(v6) = word_100AC6E8[v5];
            if ((_WORD)v6 != 0xFFFF) {
                ((void(__thiscall *)(unk00438 *, int, int, int, _DWORD))this->lpVtbl->meth6)(
                    this, v6, v9, this->field_414, this->field_8);
                v7 = (double)word_100AC6E4[v5] + *(float *)&v9;
            LABEL_14:
                *(float *)&v9 = v7;
                continue;
            }
        }
    }
    result = this->field_420;
    if (result)
        result = ((int(__thiscall *)(unk00438 *, int, int))this->lpVtbl->meth9)(
            this, v9, this->field_414);
    return result;
}
// 100AC6E4: using guessed type __int16 word_100AC6E4[];
// 100AC6E8: using guessed type __int16 word_100AC6E8[];
