#include "types-win32.h"
//----- (1002C4A0) --------------------------------------------------------
int sub_1002C4A0() {
    int result; // eax
    int v1;     // esi
    _DWORD *v2; // edi

    result = dword_100B36F8;
    v1 = 0;
    if (dword_100B36F8 > 0) {
        v2 = &unk_10ACD498;
        do {
            meth_100664C0(v2);
            result = dword_100B36F8;
            ++v1;
            v2 += 32;
        } while (v1 < dword_100B36F8);
    }
    return result;
}
// 100B36F8: using guessed type int dword_100B36F8;
