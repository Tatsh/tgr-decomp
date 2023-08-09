#include "types-win32.h"
//----- (10031190) --------------------------------------------------------
char *__thiscall sub_10031190(unk06594 *this) {
    if (*(_DWORD *)&gUnk06594.gap1C8[12436] == 32)
        meth_unk1A5E0_10042AF0(this);
    else
        ++*(_DWORD *)&gUnk06594.gap1C8[12436];
    *(_DWORD *)&gUnk06594.gap1C8[12432] = (*(_DWORD *)&gUnk06594.gap1C8[12432] + 1) % 32;
    return (char *)&unk_106C29F0 + 24 * *(_DWORD *)&gUnk06594.gap1C8[12432];
}
