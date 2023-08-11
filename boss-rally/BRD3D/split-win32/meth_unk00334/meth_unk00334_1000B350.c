#include "types-win32.h"
//----- (1000B350) --------------------------------------------------------
int __thiscall meth_unk00334_1000B350(unk00334 *this, _DWORD *a2) {
    int result; // eax
    int *v3;    // ecx

    if ((this->ddCaps1 & 0x1F) != 31)
        return -2005522669;
    v3 = &this->? ;
    *a2 = *v3;
    a2[1] = v3[1];
    a2[2] = v3[2];
    result = 0;
    a2[3] = v3[3];
    return result;
}
