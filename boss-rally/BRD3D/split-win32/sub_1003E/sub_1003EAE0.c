#include "types-win32.h"
//----- (1003EAE0) --------------------------------------------------------
int __cdecl sub_1003EAE0(int a1) {
    int v1; // eax

    v1 = (*(int(__thiscall **)(int, int))(*(_DWORD *)(a1 + 14392) + 32))(a1 + 14392, Value);
    if (v1 >= 0)
        Value = v1;
    return 1;
}
