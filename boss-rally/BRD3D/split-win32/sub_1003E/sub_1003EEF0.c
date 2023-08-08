#include "../types-win32.h"
//----- (1003EEF0) --------------------------------------------------------
int __cdecl sub_1003EEF0(int a1) {
    const char *v1; // esi

    sub_1003EE50(a1, 0);
    v1 = (const char *)(a1 + 11109);
    if (strlen((const char *)(a1 + 11109)))
        *(_DWORD *)(dword_10AA29A8 + 28) &= 0xFFFFFFEF;
    if (_strcmpi(dplay4aShortName, v1))
        strcpy(dplay4aShortName, v1);
    return 1;
}
// 10AA29A8: using guessed type int dword_10AA29A8;
