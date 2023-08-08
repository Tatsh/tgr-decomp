#include "../types-win32.h"
//----- (100464A0) --------------------------------------------------------
int __cdecl sub_100464A0(int a1) {
    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (g_unkC8Ptr1)
        g_unkC8Ptr1->lpVtbl->field_0(g_unkC8Ptr1, 1);
    dword_10AA2910 = 0;
    g_unkC8Ptr1 = g_unkC8Ptr2;
    return 0;
}
// 10AA2910: using guessed type int dword_10AA2910;
