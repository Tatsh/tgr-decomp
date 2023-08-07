#include "../../types-win32.h"
//----- (10048870) --------------------------------------------------------
int __thiscall meth_10048870(_DWORD *this) {
    int(__thiscall * **v2)(_DWORD, int); // ecx
    int result;                          // eax
    int(__thiscall * **v4)(_DWORD, int); // ecx

    v2 = (int(__thiscall ***)(_DWORD, int))this[48];
    *this = &off_1008F700;
    if (v2)
        result = (**v2)(v2, 1);
    v4 = (int(__thiscall ***)(_DWORD, int))this[49];
    this[48] = 0;
    if (v4)
        result = (**v4)(v4, 1);
    this[49] = 0;
    return result;
}
// 1008F700: using guessed type int (__thiscall *off_1008F700)(void *Block, char);
