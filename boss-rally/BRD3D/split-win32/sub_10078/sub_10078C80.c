#include "../types-win32.h"
//----- (10078C80) --------------------------------------------------------
int __cdecl sub_10078C80(int *a1, int a2, int a3, int a4, int a5) {
    int v5;    // ecx
    int v7[5]; // [esp+0h] [ebp-14h] BYREF

    v7[4] = a5;
    v7[2] = a3;
    v7[3] = a4;
    v5 = *a1;
    v7[0] = 20;
    v7[1] = 16;
    return (*(int(__stdcall **)(int *, int, int *))(v5 + 24))(a1, a2, v7);
}
