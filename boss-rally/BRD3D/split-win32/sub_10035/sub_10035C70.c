#include "../../types-win32.h"
//----- (10035C70) --------------------------------------------------------
_DWORD *__cdecl sub_10035C70(_DWORD *a1, _DWORD *a2) {
    _DWORD *result; // eax

    *a1 = *a2;
    a1[1] = a2[1];
    result = a1;
    a1[2] = a2[2];
    return result;
}
