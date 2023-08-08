#include "../types-win32.h"
//----- (10046E10) --------------------------------------------------------
int __cdecl sub_10046E10(int a1) {
    int result; // eax

    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (g_unkC8Ptr1)
        g_unkC8Ptr1->lpVtbl->field_0(g_unkC8Ptr1, 1);
    dword_10AA2924 = 0;
    dword_10AA28E0 = 0;
    Value = -1;
    strcpy(byte_10AA2518, String2);
    strcpy(byte_10A9D618, String2);
    result = 0;
    g_unkC8Ptr1 = g_unkC8Ptr3;
    return result;
}
// 10AA28E0: using guessed type int dword_10AA28E0;
// 10AA2924: using guessed type int dword_10AA2924;
