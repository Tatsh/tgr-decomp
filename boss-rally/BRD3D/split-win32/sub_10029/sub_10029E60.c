#include "../types-win32.h"
//----- (10029E60) --------------------------------------------------------
int __cdecl sub_10029E60(int a1) {
    int result; // eax

    result = dword_10575438;
    if (!dword_10575438) {
        result = a1;
        dword_10575438 = a1;
    }
    return result;
}
// 10575438: using guessed type int dword_10575438;
