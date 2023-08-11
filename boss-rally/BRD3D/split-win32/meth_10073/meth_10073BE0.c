#include "types-win32.h"
//----- (10073BE0) --------------------------------------------------------
int __thiscall meth_10073BE0(_DWORD * this) {
    int v2;              // ecx
    _BYTE *v3;           // eax
    unsigned __int16 v4; // dx

    meth_10073D20(this);
    v2 = this[1];
    v3 = (_BYTE *)(v2 + this[4]);
    HIBYTE(v4) = *v3;
    LOBYTE(v4) = v3[1];
    this[1] = v2 + 2;
    return v4;
  }
