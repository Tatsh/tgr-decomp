#include "types-win32.h"
//----- (10072490) --------------------------------------------------------
int __cdecl sub_10072490(int a1) {
    return (*(int(__stdcall **)(_DWORD, int))(**(_DWORD **)(a1 + 156) + 64))(
        *(_DWORD *)(a1 + 156), 10 * (*(_DWORD *)(a1 + 16) - 400));
}
