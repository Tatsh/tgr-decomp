#include "types-win32.h"
//----- (1001B2D0) --------------------------------------------------------
int __thiscall meth_1001B2D0(#485 * this, const void *a2) {
    int v3; // ecx

    v3 = *(_DWORD *)this;
    if ((v3 & 1) != 0) {
        if (a2) {
            if (!memcmp(a2, (char *)this + 4, 0x10u))
                return 1;
        } else if ((v3 & 2) != 0) {
            return 1;
        }
    }
    return 0;
}
