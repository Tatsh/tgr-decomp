#include "types-win32.h"
//----- (10073D20) --------------------------------------------------------
int __thiscall meth_10073D20(_DWORD *this) {
    int v1;     // eax
    int result; // eax

    if (*this) {
        v1 = this[1];
        *this = 0;
        result = v1 + 1;
        this[1] = result;
    }
    return result;
}
