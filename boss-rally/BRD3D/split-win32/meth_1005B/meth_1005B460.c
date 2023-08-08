#include "types-win32.h"
//----- (1005B460) --------------------------------------------------------
int __thiscall meth_1005B460(float *this) {
    char v2;    // al
    int i;      // ebx
    __int16 v4; // cx
    int v5;     // esi
    int v6;     // eax
    double v7;  // st7
    int result; // eax
    float v9;   // [esp+10h] [ebp-8h]

    if (((_BYTE)this[1] & 1) != 0)
        v9 = ((double(__thiscall *)(float *)) * (_DWORD *)(*(_DWORD *)this + 40))(this);
    else
        v9 = this[260];
    v2 = *((_BYTE *)this + 9);
    for (i = 0; v2; v2 = *((_BYTE *)this + (__int16)++i + 9)) {
        v4 = v2 - 32;
        if ((v4 < 0 || v4 > 127) && v2 != 32)
            break;
        if (v2 < 33 || v2 > 122) {
            if (v2 == 32) {
                v7 = v9 - -6.0;
                goto LABEL_14;
            }
        } else {
            v6 = v4;
            v5 = 6 * v4;
            LOWORD(v6) = word_100ACB60[v5];
            if ((_WORD)v6 != 0xFFFF) {
                (*(void(__thiscall **)(float *, int, float, _DWORD, _DWORD))(*(_DWORD *)this + 32))(
                    this,
                    v6,
                    COERCE_FLOAT(LODWORD(v9)),
                    *((_DWORD *)this + 261),
                    *((char *)this + 8));
                v7 = (double)(word_100ACB5C[v5] - 6) + v9;
            LABEL_14:
                v9 = v7;
                continue;
            }
        }
    }
    result = *((_DWORD *)this + 264);
    if (result)
        result = (*(int(__thiscall **)(float *, float, _DWORD))(*(_DWORD *)this + 36))(
            this, COERCE_FLOAT(LODWORD(v9)), *((_DWORD *)this + 261));
    return result;
}
// 100ACB5C: using guessed type __int16 word_100ACB5C[];
// 100ACB60: using guessed type __int16 word_100ACB60[];
