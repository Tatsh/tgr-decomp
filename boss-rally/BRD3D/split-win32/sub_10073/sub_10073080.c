#include "../../types-win32.h"
//----- (10073080) --------------------------------------------------------
int __cdecl sub_10073080(int a1, int a2) {
    int result; // eax

    result = a2 + 1;
    dword_100B6540[2 * a1] = a2 + 1;
    dword_100B6C00[2 * a1] = a2 + 1;
    dword_100B6C48[2 * a1] = a2 + 1;
    return result;
}
