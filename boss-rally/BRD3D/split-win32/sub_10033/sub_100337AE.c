#include "types-win32.h"
//----- (100337AE) --------------------------------------------------------
int __thiscall sub_100337AE(unk06594 *this) {
    unk06594 *v1; // ecx
    int result;   // eax

    sub_10033780(this);
    meth_unk1A5E0_10042AF0(v1);
    result = sub_10060E00((int)&gUnk06594.gap1C8[12376]);
    word_100B5D90 = 1;
    *(_DWORD *)&gUnk06594.gap1C8[8608] = 0;
    return result;
}
// 100337BF: variable 'v1' is possibly undefined
// 100B5D90: using guessed type __int16 word_100B5D90;
