#include "../types-win32.h"
//----- (1003B090) --------------------------------------------------------
_DWORD *__cdecl sub_1003B090(_DWORD *a1) {
    _DWORD *result; // eax

    result = a1;
    a1[2] = 0;
    a1[1] = 0;
    *a1 = 0;
    return result;
}
