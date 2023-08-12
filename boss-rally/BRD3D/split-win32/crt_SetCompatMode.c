#include "types-win32.h"
//----- (10086B80) --------------------------------------------------------
// 2 = not TNT?, 1 = TNT
int __cdecl crt_SetCompatMode(int a1) {
    int result; // eax

    result = a1;
    gCRTCompatMode = a1;
    return result;
}
// 118AC2D0: using guessed type int gCRTCompatMode;
