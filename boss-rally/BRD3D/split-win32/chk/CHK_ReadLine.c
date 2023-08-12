#include "types-win32.h"
//----- (100031E0) --------------------------------------------------------
char *__cdecl CHK_ReadLine(char *outBuff, int maxBytes, FILE **pfp) {
    int readBytes_1; // edi
    char *bufptr;    // esi
    int c;           // eax
    char *bufptr_1;  // esi
    char *bufptr_2;  // esi
    int c_1;         // eax
    char *bufptr_3;  // esi

    readBytes_1 = 0;
    if (maxBytes <= 0)
        return outBuff;
    bufptr = outBuff;
    while (1) {
        c = getc(*pfp);
        if (c == -1) {
            if (!readBytes_1)
                return 0;
            *bufptr = 0;
            return bufptr + 1;
        }
        if (c == 13)
            break;
        if (c == 10) {
            *bufptr = 10;
            bufptr_3 = bufptr + 1;
            *bufptr_3 = 0;
            return bufptr_3 + 1;
        }
        *bufptr++ = c;
        if (++readBytes_1 >= maxBytes)
            return bufptr;
    }
    *bufptr = 10;
    bufptr_1 = bufptr + 1;
    *bufptr_1 = 0;
    bufptr_2 = bufptr_1 + 1;
    c_1 = getc(*pfp);
    if (c_1 != 0xFFFFFFFF && c_1 != 0xA) {
        ungetc(c_1, *pfp);
        return bufptr_2;
    }
    return bufptr_2;
}
