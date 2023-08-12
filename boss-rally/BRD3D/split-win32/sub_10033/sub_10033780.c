#include "types-win32.h"
//----- (10033780) --------------------------------------------------------
int __thiscall sub_10033780(unk06594 *this) {
    int result; // eax

    if (!*(_DWORD *)&gUnk06594.gap1C8[8608]) {
        *(_DWORD *)&gUnk06594.gap1C8[8608] = 1;
        word_100B5D90 = 0;
        result = meth_unk1A5E0_3(this);
    }
    return result;
}
// 100B5D90: using guessed type __int16 word_100B5D90;
