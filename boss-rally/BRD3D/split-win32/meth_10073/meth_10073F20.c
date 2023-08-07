#include "../../types-win32.h"
//----- (10073F20) --------------------------------------------------------
int __thiscall meth_10073F20(_DWORD *this) {
    int result; // eax
    int v2;     // eax

    result = this[2];
    if (result) {
        v2 = this[3];
        this[2] = 0;
        result = v2 + 1;
        this[3] = result;
    }
    return result;
}
