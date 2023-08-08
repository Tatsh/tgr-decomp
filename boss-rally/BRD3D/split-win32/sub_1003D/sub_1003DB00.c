#include "../types-win32.h"
//----- (1003DB00) --------------------------------------------------------
int __cdecl sub_1003DB00(int *a1, int a2) {
    int v2;    // eax
    int v3;    // ecx
    int v5[2]; // [esp+0h] [ebp-8h] BYREF

    if (!a1)
        return 0;
    v2 = *a1;
    if (!*a1)
        return 0;
    v3 = a1[2];
    v5[1] = a2;
    v5[0] = 1610612743;
    return sub_1000C4D0(v2, v3, 0, 1, (int)v5, 8);
}
