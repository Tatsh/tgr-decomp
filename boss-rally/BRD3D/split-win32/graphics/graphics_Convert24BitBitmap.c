#include "types-win32.h"
//----- (10060F00) --------------------------------------------------------
char *__cdecl graphics_Convert24BitBitmap(
    char *mem, LPVOID bmBits, LONG bmWidth, LONG bmHeight, LONG bmWidthBytes) {
    char *result;         // eax
    char *currentBytePtr; // edi
    char *calc_1;         // ecx
    LONG x;               // esi
    char calc_2;          // dl
    char *calc_3;         // ecx
    char calc_4;          // bl
    char *calc_5;         // eax
    LONG y;               // [esp+Ch] [ebp+8h]
    char calc_1_1;        // [esp+14h] [ebp+10h]

    result = (char *)bmHeight;
    currentBytePtr = (char *)bmBits + bmWidthBytes * (bmHeight - 1);
    if (bmHeight) {
        y = bmHeight;
        result = mem;
        do {
            calc_1 = currentBytePtr;
            if (bmWidth) {
                x = bmWidth;
                do {
                    calc_2 = *calc_1;
                    calc_1_1 = calc_1[1];
                    calc_3 = calc_1 + 2;
                    calc_4 = *calc_3;
                    calc_1 = calc_3 + 1;
                    *result = calc_4;
                    calc_5 = result + 1;
                    *calc_5++ = calc_1_1;
                    *calc_5++ = calc_2;
                    *calc_5 = -1;
                    result = calc_5 + 1;
                    --x;
                } while (x);
            }
            currentBytePtr -= bmWidthBytes;
            --y;
        } while (y);
    }
    return result;
}
