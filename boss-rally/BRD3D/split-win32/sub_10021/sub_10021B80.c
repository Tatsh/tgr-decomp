#include "types-win32.h"
//----- (10021B80) --------------------------------------------------------
_DWORD *__cdecl sub_10021B80(_DWORD *a1) {
    graphics_10021560(
        (a1[1] >> 10) & 0x3FFC, 4 * (a1[1] & 0xFFF), (*a1 >> 10) & 0x3FFC, 4 * (*a1 & 0xFFF));
    return a1 + 2;
}
