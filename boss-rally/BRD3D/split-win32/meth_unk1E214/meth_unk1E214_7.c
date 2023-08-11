#include "types-win32.h"
//----- (10047930) --------------------------------------------------------
int __thiscall meth_unk1E214_7(unk1E214 *this) {
    __int16 v1; // ax

    v1 = this->field_3838.field_1A99C[28];
    if (v1 >= 0)
        graphics_1005F5A0((__int64)*(float *)&this->field_3C,
                          (__int64)*(float *)&this->field_40,
                          word_100AB568[12 * v1],
                          &dword_100AB56C[6 * v1],
                          dword_100AB57C[6 * v1]);
    return 1;
}
// 100AB568: using guessed type __int16 word_100AB568[];
