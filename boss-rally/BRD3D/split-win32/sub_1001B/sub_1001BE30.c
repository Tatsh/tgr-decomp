#include "types-win32.h"
//----- (1001BE30) --------------------------------------------------------
_DWORD *__cdecl sub_1001BE30(_DWORD *a1) {
    sub_1001BE90(((int)(a1[1] << 8) >> 22) & 0x3FF,
                 g_Height - (((int)(*a1 << 20) >> 22) & 0x3FF) - 1,
                 (((int)(*a1 << 8) >> 22) & 0x3FF) + 1,
                 g_Height - (((int)(a1[1] << 20) >> 22) & 0x3FF));
    return a1 + 2;
}
// 100A81C4: using guessed type int g_Height;
