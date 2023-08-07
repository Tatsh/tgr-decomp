#include "../../types-win32.h"
//----- (1003EBE0) --------------------------------------------------------
int __cdecl sub_1003EBE0(int a1) {
    int v1;     // eax
    int v2;     // ecx
    int result; // eax

    v1 =
        (*(int(__thiscall **)(int, int))(*(_DWORD *)(a1 + 14392) + 32))(a1 + 14392, dword_10AA2880);
    if (v1 < 0)
        v1 = dword_10AA2880;
    else
        dword_10AA2880 = v1;
    v2 = *(_DWORD *)(a1 + 1080 * v1 + 15512);
    result = 1;
    dword_100AB3E0 = v2;
    return result;
}
// 1003EBE0: using guessed type int __cdecl sub_1003EBE0(int);
// 100AB3E0: using guessed type int dword_100AB3E0;
// 10AA2880: using guessed type int dword_10AA2880;
