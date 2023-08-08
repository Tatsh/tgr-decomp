#include "types-win32.h"
//----- (10009830) --------------------------------------------------------
DDPIXELFORMAT *__cdecl GetDDPixelFormatPtr(int a1) {
    int v1;  // ecx
    int *v2; // eax

    v1 = 0;
    v2 = &dword_100A6230;
    while (a1 != *v2) {
        v2 += 10;
        ++v1;
        if ((int)v2 >= (int)&g_D3dwaitcanflip)
            return 0;
    }
    return (DDPIXELFORMAT *)((char *)&unk_100A6238 + 40 * v1);
}
// 100A6230: using guessed type int dword_100A6230;
// 100A62F8: using guessed type int g_D3dwaitcanflip;
