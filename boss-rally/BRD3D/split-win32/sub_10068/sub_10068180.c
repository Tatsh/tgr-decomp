#include "types-win32.h"
//----- (10068180) --------------------------------------------------------
void __cdecl sub_10068180(int a1, int *a2, int a3) {
    int v3; // eax
    int v4; // edx
    int v5; // [esp+0h] [ebp-4h]

    v3 = -1;
    v5 = 1177280512;
    v4 = 128;
    switch (g_chosenTrack) {
    case 2:
    case 8:
        v3 = 0;
        v5 = 1185669120;
        goto LABEL_4;
    case 4:
    case 10:
        v3 = 0;
        v5 = 1177280512;
    LABEL_4:
        v4 = 255;
        break;
    default:
        break;
    }
    if (v3 != -1)
        sub_10067E50(a1, v3, v4, *(float *)&v5, a2, a3);
}
// 100B380C: using guessed type int g_chosenTrack;
