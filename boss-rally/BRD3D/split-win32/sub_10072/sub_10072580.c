#include "types-win32.h"
//----- (10072580) --------------------------------------------------------
BOOL __cdecl sub_10072580(int a1) {
    BOOL result; // eax

    if (gPlaysfx && gDSound && dword_118290FC && dword_11828F08[a1])
        result = sub_10072550(dword_11828F08[a1]) == 0;
    else
        result = 1;
    return result;
}
// 100B5DE8: using guessed type int gPlaysfx;
// 118290FC: using guessed type int dword_118290FC;
