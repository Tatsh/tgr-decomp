#include "../types-win32.h"
//----- (100484F0) --------------------------------------------------------
int __thiscall meth_100484F0(unsigned __int16 *this) {
    unsigned __int16 v1; // ax

    v1 = word_10AA286C;
    if (word_10AA286C >= (int)this[418]) {
        v1 = 0;
    LABEL_5:
        word_10AA286C = v1;
        goto LABEL_6;
    }
    if (word_10AA286C < 0) {
        v1 = this[418] - 1;
        goto LABEL_5;
    }
LABEL_6:
    this[419] = v1;
    return 1;
}
// 10AA286C: using guessed type __int16 word_10AA286C;
