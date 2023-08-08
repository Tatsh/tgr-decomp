#include "types-win32.h"
//----- (1000F460) --------------------------------------------------------
int *sub_1000F460() {
    int *v0;     // ecx
    int *result; // eax

    v0 = 0;
    result = (int *)&unk_102E5E98;
    do {
        *result = (int)v0;
        v0 = result;
        result -= 10;
    } while ((int)result >= (int)dword_102E54C0);
    dword_102E5ECC = (int)v0;
    return result;
}
// 102E5ECC: using guessed type int dword_102E5ECC;
