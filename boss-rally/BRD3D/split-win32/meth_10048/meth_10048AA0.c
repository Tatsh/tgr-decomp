#include "types-win32.h"
//----- (10048AA0) --------------------------------------------------------
int __thiscall meth_10048AA0(unsigned __int16 *this) {
    unsigned __int16 *v1;                 // ebp
    void(__thiscall * **v2)(_DWORD, int); // ebx
    int v3;                               // edi
    _DWORD *v4;                           // esi
    int result;                           // eax
    int v6;                               // [esp+8h] [ebp-8h]

    v6 = 0;
    if (this[8]) {
        v1 = this + 10;
        do {
            v2 = *(void(__thiscall ****)(_DWORD, int))v1;
            v3 = 200;
            v4 = (_DWORD *)(*(_DWORD *)v1 + 24);
            do {
                if (*v4)
                    (**(void(__thiscall ***)(_DWORD, int)) * v4)(*v4, 1);
                *v4++ = 0;
                --v3;
            } while (v3);
            if (v2)
                (**v2)(v2, 1);
            result = v6 + 1;
            v1 += 2;
            ++v6;
        } while (v6 < this[8]);
    }
    word_10AA286C = 0;
    return result;
}
// 10AA286C: using guessed type __int16 word_10AA286C;
