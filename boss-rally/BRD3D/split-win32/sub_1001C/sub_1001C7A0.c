#include "../../types-win32.h"
//----- (1001C7A0) --------------------------------------------------------
_DWORD *__cdecl sub_1001C7A0(_DWORD *a1) {
    sub_1001BE90((int)(a1[1] << 8) >> 20,
                 g_Height - ((int)(*a1 << 20) >> 20) - 1,
                 ((int)(*a1 << 8) >> 20) + 1,
                 g_Height - ((int)(a1[1] << 20) >> 20));
    return a1 + 2;
}
// 100A81C4: using guessed type int g_Height;
