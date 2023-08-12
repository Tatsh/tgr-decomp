#include "types-win32.h"
//----- (10034C66) --------------------------------------------------------
int __cdecl sub_10034C66(int callback) {
    int result; // eax

    result = callback;
    dword_106C0964 = (int (*)(void))callback;
    return result;
}
// 106C0964: using guessed type int (*dword_106C0964)(void);
