#include "types-win32.h"
//----- (100408D0) --------------------------------------------------------
int __cdecl sub_100408D0(int a1) {
    int v1; // ebx

    if (gUnkC8Ptr1 != gUnkC8Ptr32 || dword_10AA28E8) {
        _itoa(dword_100BD3E0, (char *)(a1 + 11109), 10);
        v1 = *(_DWORD *)(a1 + 11100);
        (*(void(__thiscall **)(int))(v1 + 8))(a1 + 11100);
        if (a1 != -11109)
            (*(void(__thiscall **)(int))(v1 + 44))(a1 + 11100);
    }
    return 1;
}
// 10AA28E8: using guessed type int dword_10AA28E8;
