#include "types-win32.h"
//----- (1005C270) --------------------------------------------------------
int __thiscall meth_unk1A5E0_1(unk1A5E0 *this, float a2, float a3) {
    float v4; // [esp+Ch] [ebp+Ch]

    graphics_1005F5A0((__int64)a3,
                      (__int64)v4,
                      word_100AB568[12 * LOWORD(a2)],
                      &dword_100AB56C[6 * LOWORD(a2)],
                      dword_100AB57C[6 * LOWORD(a2)]);
    return 1;
}
// 100AB568: using guessed type __int16 word_100AB568[];
