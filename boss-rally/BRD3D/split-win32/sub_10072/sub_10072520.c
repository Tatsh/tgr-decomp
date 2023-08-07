#include "../../types-win32.h"
//----- (10072520) --------------------------------------------------------
int __cdecl sub_10072520(int a1) {
    int v1; // eax

    v1 = *(_DWORD *)(a1 + 156);
    if (v1) {
        (*(void(__stdcall **)(_DWORD))(*(_DWORD *)v1 + 8))(*(_DWORD *)(a1 + 156));
        *(_DWORD *)(a1 + 156) = 0;
    }
    return 0;
}
