#include "types-win32.h"
//----- (1001E790) --------------------------------------------------------
int __cdecl sub_1001E790(int a1) {
    dword_104C517C = dword_104C5178;
    dword_104C5178 &= ~*(_DWORD *)(a1 + 4);
    sub_1001E7C0();
    return a1 + 8;
}
// 104C5178: using guessed type int dword_104C5178;
// 104C517C: using guessed type int dword_104C517C;
