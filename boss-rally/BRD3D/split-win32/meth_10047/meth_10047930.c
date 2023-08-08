#include "types-win32.h"
//----- (10047930) --------------------------------------------------------
int __thiscall meth_10047930(int this) {
    __int16 v1; // ax

    v1 = *(_WORD *)(this + 123404);
    if (v1 >= 0)
        sub_1005F5A0((__int64)*(float *)(this + 60),
                     (__int64)*(float *)(this + 64),
                     word_100AB568[12 * v1],
                     &dword_100AB56C[6 * v1],
                     dword_100AB57C[6 * v1]);
    return 1;
}
// 100AB568: using guessed type __int16 word_100AB568[];
