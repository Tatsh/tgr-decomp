#include "../../types-win32.h"
//----- (10024BB0) --------------------------------------------------------
int sub_10024BB0() {
    int result;      // eax
    unsigned int v1; // edi
    int v2;          // esi

    result = dword_105553F0;
    v1 = 0;
    if (dword_105553F0) {
        v2 = 0;
        do {
            meth_1000A020(*((#511 **)Block + *(_DWORD *)((char *)dword_1057543C + v2)));
            result = dword_105553F0;
            ++v1;
            v2 += 696;
        } while (v1 < dword_105553F0);
    }
    return result;
}
// 105553F0: using guessed type int dword_105553F0;
