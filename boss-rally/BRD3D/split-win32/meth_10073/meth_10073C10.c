#include "../../types-win32.h"
//----- (10073C10) --------------------------------------------------------
int __thiscall meth_10073C10(_DWORD *this) {
    int v2;              // ecx
    _BYTE *v3;           // eax
    unsigned __int16 v4; // dx
    int v5;              // eax

    meth_10073D20(this);
    v2 = this[1];
    v3 = (_BYTE *)(v2 + this[4]);
    LOBYTE(v4) = v3[1];
    HIBYTE(v4) = *v3;
    v5 = (unsigned __int8)v3[2];
    this[1] = v2 + 3;
    return (v4 << 8) | v5;
}
