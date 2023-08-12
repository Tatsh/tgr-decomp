#include "types-win32.h"
//----- (10072B30) --------------------------------------------------------
BOOL __cdecl sub_10072B30(int a1, int a2, unsigned int a3) {
    BOOL result; // eax

    if (gPlaysfx && gDSound && dword_118290FC)
        result = sub_10072820(dword_100B5DF0[18 * a1 + a2], a3) != 0;
    else
        result = 1;
    return result;
}
// 100B5DE8: using guessed type int gPlaysfx;
// 118290FC: using guessed type int dword_118290FC;
