#include "../types-win32.h"
//----- (10009860) --------------------------------------------------------
int __cdecl PopCount(unsigned int a1) {
    unsigned int v1; // ecx
    int result;      // eax

    v1 = a1;
    for (result = 0; (v1 & 1) == 0; ++result)
        v1 >>= 1;
    return result;
}
