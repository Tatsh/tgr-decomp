#include "types-win32.h"
//----- (10073DC0) --------------------------------------------------------
int __thiscall meth_10073DC0(_DWORD *this, int a2) {
    int v3;     // edi
    int v4;     // ecx
    int v5;     // edx
    int v6;     // ecx
    int result; // eax

    meth_10073F20(this);
    *(_BYTE *)(this[3] + this[4]) = BYTE2(a2);
    v3 = this[4];
    v4 = this[3] + 1;
    this[3] = v4;
    *(_BYTE *)(v3 + v4) = BYTE1(a2);
    v5 = this[4];
    v6 = this[3] + 1;
    this[3] = v6;
    *(_BYTE *)(v5 + v6) = a2;
    result = this[3] + 1;
    this[3] = result;
    return result;
}
