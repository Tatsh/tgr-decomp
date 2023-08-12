#include "types-win32.h"
//----- (1001C7A0) --------------------------------------------------------
_DWORD *__cdecl graphics_1001C7A0(_DWORD *a1) {
    graphics_1001BE90((int)(a1[1] << 8) >> 20,
                      gHeight - ((int)(*a1 << 20) >> 20) - 1,
                      ((int)(*a1 << 8) >> 20) + 1,
                      gHeight - ((int)(a1[1] << 20) >> 20));
    return a1 + 2;
}
// 100A81C4: using guessed type int gHeight;
