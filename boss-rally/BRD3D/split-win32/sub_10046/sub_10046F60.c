#include "../types-win32.h"
//----- (10046F60) --------------------------------------------------------
int __cdecl sub_10046F60(int a1) {
    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (g_unkC8Ptr1)
        g_unkC8Ptr1->lpVtbl->field_0(g_unkC8Ptr1, 1);
    g_unkC8Ptr1 = 0;
    dword_10AA2974 = 0;
    if (dword_10AA292C) {
        (**(void(__thiscall ***)(int, int))dword_10AA292C)(dword_10AA292C, 1);
        dword_10AA292C = 0;
    }
    g_unkC8Ptr1 = g_unkC8Ptr2;
    return 0;
}
// 10AA292C: using guessed type int dword_10AA292C;
// 10AA2974: using guessed type int dword_10AA2974;
