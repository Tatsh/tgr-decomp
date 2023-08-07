#include "../../types-win32.h"
//----- (1001A870) --------------------------------------------------------
unsigned int __cdecl sub_1001A870(unsigned int a1) {
    if ((a1 & 0x4000) != 0)
        return 1;
    if ((a1 & 0x2000) != 0)
        return 2;
    if ((a1 & 0x1000) != 0)
        return 4;
    if ((a1 & 0x800) != 0)
        return 8;
    if ((a1 & 0x400) != 0)
        return 16;
    if ((a1 & 0x200) != 0)
        return 24;
    return (a1 >> 3) & 0x20;
}
