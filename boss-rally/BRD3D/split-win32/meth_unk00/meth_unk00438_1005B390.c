#include "types-win32.h"
//----- (1005B390) --------------------------------------------------------
int __thiscall meth_unk00438_1005B390(unk00438 *this, float a2, int a3) {
    char v4;    // al
    int i;      // ebx
    __int16 v6; // cx
    int v7;     // esi
    int v8;     // eax
    double v9;  // st7
    int result; // eax

    if ((this->field_4 & 1) != 0)
        a2 = ((double(__thiscall *)(unk00438 *))this->lpVtbl->field_28)(this);
    v4 = this->field_9[0];
    for (i = 0; v4; v4 = this->field_9[(__int16)++i]) {
        v6 = v4 - 32;
        if ((v6 < 0 || v6 > 127) && v4 != 32)
            break;
        if (v4 < 33 || v4 == 127) {
            if (v4 == 32) {
                v9 = a2 - -6.0;
                goto LABEL_13;
            }
        } else {
            v8 = v6;
            v7 = 6 * v6;
            LOWORD(v8) = word_100AC6E8[v7];
            if ((_WORD)v8 != 0xFFFF) {
                ((void(__thiscall *)(unk00438 *, int, _DWORD, int, _DWORD))this->lpVtbl->field_18)(
                    this, v8, LODWORD(a2), a3, this->field_8);
                v9 = (double)word_100AC6E4[v7] + a2;
            LABEL_13:
                a2 = v9;
                continue;
            }
        }
    }
    result = this->field_420;
    if (result)
        result = ((int(__thiscall *)(unk00438 *, _DWORD, int))this->lpVtbl->field_24)(
            this, LODWORD(a2), a3);
    return result;
}
// 100AC6E4: using guessed type __int16 word_100AC6E4[];
// 100AC6E8: using guessed type __int16 word_100AC6E8[];
