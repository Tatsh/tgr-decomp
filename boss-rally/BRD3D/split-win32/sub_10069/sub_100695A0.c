#include "../types-win32.h"
//----- (100695A0) --------------------------------------------------------
int __cdecl sub_100695A0(int a1, int a2) {
    int result; // eax

    sub_100765E0((float *)a2, (float *)a1);
    result = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(a1 + 16) = result;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 52);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 56);
    return result;
}
