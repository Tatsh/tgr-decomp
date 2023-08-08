#include "../types-win32.h"
//----- (10073BA0) --------------------------------------------------------
int __thiscall meth_10073BA0(_DWORD *this, int a2) {
    int result; // eax

    meth_10073D20(this);
    result = a2;
    this[1] += a2;
    return result;
}
