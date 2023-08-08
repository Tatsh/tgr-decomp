#include "types-win32.h"
//----- (10046C90) --------------------------------------------------------
int __cdecl sub_10046C90(int a1) {
    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (g_unkC8Ptr1)
        g_unkC8Ptr1->lpVtbl->field_0(g_unkC8Ptr1, 1);
    g_unkC8Ptr3 = 0;
    g_unkC8Ptr1 = g_unkC8Ptr2;
    return 0;
}
