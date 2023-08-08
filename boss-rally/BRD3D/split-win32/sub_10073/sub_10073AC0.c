#include "types-win32.h"
//----- (10073AC0) --------------------------------------------------------
void *sub_10073AC0() {
    void *result; // eax

    result =
        (void *)dword_118AA0B0(&lutBuffer_0, &lutBuffer, 32, 128, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0);
    off_100A6498 = result;
    return result;
}
// 100A6498: using guessed type void *off_100A6498;
// 118AA0B0: using guessed type int (__cdecl *dword_118AA0B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
