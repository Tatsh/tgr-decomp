#include "types-win32.h"
//----- (10072550) --------------------------------------------------------
int __cdecl sub_10072550(int a1) {
    int result; // eax

    if (!*(_DWORD *)(a1 + 28))
        return 0;
    result = (*(int(__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 156) + 72))(*(_DWORD *)(a1 + 156));
    if (!result)
        *(_DWORD *)(a1 + 28) = 0;
    return result;
  }
