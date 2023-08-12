#include "types-win32.h"
//----- (1003E840) --------------------------------------------------------
int __cdecl sub_1003E840(int a1) {
    const char *v1; // eax

    if (gGameMode || gGameMode1)
        v1 = text_GetStringWithIndex(0xCu);
    else
        v1 = text_GetStringWithIndex(0x51u);
    strcpy((char *)(a1 + 11109), v1);
    (*(void(__thiscall **)(int))(*(_DWORD *)(a1 + 11100) + 4))(a1 + 11100);
    return 1;
}
// 10220B20: using guessed type int gGameMode1;
