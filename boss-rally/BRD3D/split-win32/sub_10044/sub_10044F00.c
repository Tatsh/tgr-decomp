#include "types-win32.h"
//----- (10044F00) --------------------------------------------------------
int __cdecl sub_10044F00(int a1) {
    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (g_unkC8Ptr0)
        g_unkC8Ptr0->lpVtbl->meth0(g_unkC8Ptr0, 1);
    g_unkC8Ptr0 = 0;
    gUnkC8Ptr1 = gUnkC8Ptr30;
    gGameMode = GAME_MODE_2;
    return 0;
}
