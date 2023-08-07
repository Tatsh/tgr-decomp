#include "../types-n64.h"
//----- (8022F5DC) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int formatter(const char *a1, int a2, int a3, ...) {
    dword_803519D0 = a2;
    dword_803519D4 = a3;
    return sub_8022E4E0(a1);
}
// 8022F624: write access to const memory at 803519D0 has been detected
// 8022F64C: write access to const memory at 803519D0 has been detected
// 8022F66C: write access to const memory at 803519D0 has been detected
// 8022F680: write access to const memory at 803519D4 has been detected
// 8028BDC4: using guessed type char byte_8028BDC4;
// 803519D0: using guessed type int dword_803519D0;
// 803519D4: using guessed type int dword_803519D4;
// 803519D8: using guessed type int dword_803519D8;
