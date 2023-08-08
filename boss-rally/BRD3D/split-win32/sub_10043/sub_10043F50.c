#include "../types-win32.h"
//----- (10043F50) --------------------------------------------------------
int __cdecl sub_10043F50(int a1) {
    dword_10AA287C = 2;
    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (g_unkC8Ptr1)
        (**(void(__thiscall ***)(void *, int))g_unkC8Ptr1)(g_unkC8Ptr1, 1);
    dword_10AA298C = 0;
    g_unkC8Ptr1 = (void *)dword_10AA2948;
    return 0;
}
// 10AA287C: using guessed type int dword_10AA287C;
// 10AA2948: using guessed type int dword_10AA2948;
// 10AA298C: using guessed type int dword_10AA298C;
