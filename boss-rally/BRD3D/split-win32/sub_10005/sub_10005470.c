#include "types-win32.h"
//----- (10005470) --------------------------------------------------------
int sub_10005470() {
    int v0;     // edx
    int result; // eax
    _DWORD *v2; // ecx

    v0 = dword_100B36FC;
    result = 0;
    if (dword_100B36FC > 0) {
        v2 = &unk_10ACEDB0;
        do {
            if (*v2)
                ++result;
            v2 += 2778;
            --v0;
        } while (v0);
    }
    return result;
}
// 100B36FC: using guessed type int dword_100B36FC;
