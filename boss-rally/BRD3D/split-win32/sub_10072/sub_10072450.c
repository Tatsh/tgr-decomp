#include "types-win32.h"
//----- (10072450) --------------------------------------------------------
int __cdecl sub_10072450(int a1, int a2) {
    int v2; // ecx
    int i;  // eax

    v2 = a1;
    *(_DWORD *)(a2 + 424) = 0;
    *(_DWORD *)(a2 + 28) = 0;
    for (i = *(_DWORD *)(a1 + 424); i; i = *(_DWORD *)(i + 424))
        v2 = i;
    *(_DWORD *)(v2 + 424) = a2;
    return 0;
  }
