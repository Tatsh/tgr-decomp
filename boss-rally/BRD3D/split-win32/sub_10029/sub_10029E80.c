#include "../types-win32.h"
//----- (10029E80) --------------------------------------------------------
_DWORD *__cdecl sub_10029E80(_DWORD *a1) {
    _DWORD *result; // eax

    result = a1;
    dword_105553E8 = (*a1 >> 8) & 7;
    dword_105553E0 = (*a1 >> 11) & 7;
    return result;
}
// 105553E0: using guessed type int dword_105553E0;
// 105553E8: using guessed type int dword_105553E8;
