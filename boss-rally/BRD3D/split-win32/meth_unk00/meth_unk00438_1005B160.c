#include "types-win32.h"
//----- (1005B160) --------------------------------------------------------
void __thiscall meth_unk00438_1005B160(unk00438 *this, int a2) {
    int v2;     // edx
    char v3;    // dl
    int v4;     // esi
    int v5;     // ebx
    __int16 i;  // di
    __int16 v7; // ax
    int v8;     // eax
    __int16 v9; // ax

    v3 = this->field_9[0];
    v4 = 0;
    v5 = 0;
    for (i = this->field_40C; v3; v3 = this->field_9[(__int16)++v5]) {
        v7 = v3 - 32;
        if ((v7 < 0 || v7 > 127) && v3 != 32)
            break;
        if (v3 < 33 || v3 == 127 || (v8 = 6 * v7, word_100AC6E4[v8] == -1) ||
            word_100AC6E6[v8] == -1) {
            if (v3 == 32)
                v4 += 6;
        } else {
            LOWORD(v2) = word_100ACB5C[v8];
            v9 = word_100ACB5E[v8];
            LOWORD(v2) = v2 - 4;
            v4 += v2;
            if (i < v9)
                i = v9;
        }
    }
    this->field_40C = i;
    this->field_40A = v4;
}
// 1005B1C7: variable 'v2' is possibly undefined
// 100AC6E4: using guessed type __int16 word_100AC6E4[];
// 100AC6E6: using guessed type __int16 word_100AC6E6[];
// 100ACB5C: using guessed type __int16 word_100ACB5C[];
// 100ACB5E: using guessed type __int16 word_100ACB5E[];
