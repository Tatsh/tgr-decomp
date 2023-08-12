#include "types-win32.h"
//----- (10035FC0) --------------------------------------------------------
int __thiscall meth_10035FC0(_DWORD *this) {
    int result; // eax

    result = this[1] & *this;
    *this &= ~this[1];
    this[1] = result;
    return result;
}
