#include "types-win32.h"
//----- (10048060) --------------------------------------------------------
int __thiscall meth_10048060(void *this) {
    int result; // eax

    if (dword_10AA29C0 &&
        (result = 1, *(_DWORD *)(*(_DWORD *)(dword_10AA29C0 + 10984) + 112) == 1)) {
        if (this != (void *)dword_10AA29C0) {
            dword_10AA2858 = 1;
            return result;
        }
    } else {
        dword_10AA2858 = 0;
    }
    return 0;
}
// 10AA2858: using guessed type int dword_10AA2858;
// 10AA29C0: using guessed type int dword_10AA29C0;
