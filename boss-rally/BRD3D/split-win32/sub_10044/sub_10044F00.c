#include "types-win32.h"
//----- (10044F00) --------------------------------------------------------
int __cdecl sub_10044F00(int a1) {
    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (g_unkC8Ptr0)
        (**(void(__thiscall ***)(int, int))g_unkC8Ptr0)(g_unkC8Ptr0, 1);
    g_unkC8Ptr0 = 0;
    gUnkC8Ptr1 = (void *)dword_10AA295C;
    gGameMode = 2;
    return 0;
}
// 100AA010: using guessed type int g_GameMode;
// 10AA295C: using guessed type int dword_10AA295C;
// 10AA2968: using guessed type int dword_10AA2968;
