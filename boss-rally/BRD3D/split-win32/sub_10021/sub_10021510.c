#include "types-win32.h"
//----- (10021510) --------------------------------------------------------
_DWORD *__cdecl sub_10021510(_DWORD *a1) {
    graphics_10021560((a1[1] >> 12) & 0xFFF, a1[1] & 0xFFF, (*a1 >> 12) & 0xFFF, *a1 & 0xFFF);
    return a1 + 6;
}
