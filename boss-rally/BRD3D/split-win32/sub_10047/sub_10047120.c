#include "../types-win32.h"
//----- (10047120) --------------------------------------------------------
int __cdecl sub_10047120(int a1) {
    sub_10045C90();
    if (dword_10AA26F0 > 0 && !LOWORD(dword_10AA26F4[0])) {
        memset((char *)dword_10AA26F4 + 2, 0, 0x18u);
        memset(word_10AA270E, 0, 0x30u);
        memset(dword_10AA2740, 0, sizeof(dword_10AA2740));
    }
    dword_10AA28C4 = 0;
    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (dword_10AA296C)
        (**(void(__thiscall ***)(int, int))dword_10AA296C)(dword_10AA296C, 1);
    dword_10AA296C = 0;
    return 0;
}
// 10047120: using guessed type int __cdecl sub_10047120(int);
// 10AA26F0: using guessed type int dword_10AA26F0;
// 10AA26F4: using guessed type int dword_10AA26F4[];
// 10AA270E: using guessed type __int16 word_10AA270E[];
// 10AA296C: using guessed type int dword_10AA296C;
