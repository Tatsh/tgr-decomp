#include "types-win32.h"
//----- (100310F0) --------------------------------------------------------
int __cdecl sub_100310F0(int a1, float a2, int a3, int a4) {
    int result; // eax

    result = a1;
    *(_DWORD *)(a1 + 20) = a3;
    *(float *)a1 = a2;
    *(_DWORD *)(a1 + 40) = a4;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 60) = 1065353216;
    return result;
}
