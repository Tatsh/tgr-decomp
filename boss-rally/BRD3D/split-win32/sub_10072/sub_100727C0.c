#include "types-win32.h"
//----- (100727C0) --------------------------------------------------------
int __cdecl sub_100727C0(int a1, unsigned int a2) {
    int result; // eax

    if (!gPlaysfx || !gDSound || !dword_118290FC)
        return 1;
    if (!sub_10072820(dword_11828F08[a1], a2))
        return 0;
    result = 1;
    dword_11828D34[6 * a1] = a2;
    return result;
}
// 100B5DE8: using guessed type int gPlaysfx;
// 118290FC: using guessed type int dword_118290FC;
