#include "types-win32.h"
//----- (10009880) --------------------------------------------------------
int __cdecl math_MinBits(unsigned int bitMask) {
    unsigned int mask; // ecx
    int result;        // eax

    mask = bitMask;
    for (result = 0; mask; ++result)
        mask >>= 1;
    return result;
}
