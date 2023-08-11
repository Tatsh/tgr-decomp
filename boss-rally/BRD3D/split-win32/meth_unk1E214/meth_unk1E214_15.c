#include "types-win32.h"
//----- (10048060) --------------------------------------------------------
int __thiscall meth_unk1E214_15(unk1E214 *this) {
    int result; // eax

    if (dword_10AA29C0 &&
        (result = 1, *(_DWORD *)(*(_DWORD *)(dword_10AA29C0 + 10984) + 112) == 1)) {
        if (this != (unk1E214 *)dword_10AA29C0) {
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
