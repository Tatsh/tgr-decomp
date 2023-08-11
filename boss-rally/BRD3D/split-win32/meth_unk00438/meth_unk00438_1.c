#include "types-win32.h"
//----- (1005B0D0) --------------------------------------------------------
void __thiscall meth_unk00438_1(unk00438 *this, int unusedA2) {
    int v2;     // esi
    char v3;    // dl
    __int16 v4; // bp
    int v5;     // ebx
    int i;      // edi
    __int16 v7; // ax
    int v8;     // eax
    __int16 v9; // ax

    v3 = this->field_9[0];
    v4 = this->field_40C;
    v5 = 0;
    for (i = 0; v3; v3 = this->field_9[(__int16)++i]) {
        v7 = v3 - 32;
        if ((v7 < 0 || v7 > 127) && v3 != 32)
            break;
        if (v3 < 33 || v3 == 127 ||
            (v8 = 6 * v7, LOWORD(v2) = word_100AC6E4[v8], (_WORD)v2 == 0xFFFF) ||
            (v9 = word_100AC6E6[v8], v9 == -1)) {
            if (v3 == 32)
                v5 += 6;
        } else {
            v5 += v2;
            if (v4 < v9)
                v4 = v9;
        }
    }
    this->field_40C = v4;
    this->field_40A = v5;
}
// 1005B12A: variable 'v2' is possibly undefined
// 100AC6E4: using guessed type __int16 word_100AC6E4[];
// 100AC6E6: using guessed type __int16 word_100AC6E6[];
