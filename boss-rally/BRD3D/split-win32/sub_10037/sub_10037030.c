#include "../types-win32.h"
//----- (10037030) --------------------------------------------------------
int __cdecl sub_10037030(int a1) {
    int result; // eax

    result = *(_DWORD *)(dword_106C7C3C + 124);
    if (result >= 30) {
        ++dword_106C7C40;
        result = *(_DWORD *)(dword_106C7C3C + 124) + 1;
        *(_DWORD *)(dword_106C7C3C + 124) = result;
    } else {
        *(_DWORD *)(dword_106C7C3C + 4 * result + 4) = a1;
        ++*(_DWORD *)(dword_106C7C3C + 124);
    }
    return result;
}
// 106C7C3C: using guessed type int dword_106C7C3C;
// 106C7C40: using guessed type int dword_106C7C40;
