#include "types-win32.h"
//----- (1003EDF0) --------------------------------------------------------
int __cdecl sub_1003EDF0(int a1) {
    int v1; // eax

    v1 =
        (*(int(__thiscall **)(int, int))(*(_DWORD *)(a1 + 14392) + 32))(a1 + 14392, dword_10AA2A30);
    if (v1 >= 0)
        dword_10AA2A30 = v1;
    return 1;
}
// 10AA2A30: using guessed type int dword_10AA2A30;
