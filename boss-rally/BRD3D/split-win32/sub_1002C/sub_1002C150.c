#include "types-win32.h"
//----- (1002C150) --------------------------------------------------------
void __cdecl sub_1002C150(int a1) {
    *(_DWORD *)(a1 + 4) = dword_1057553C ^ (*(_DWORD *)(a1 + 4) ^ dword_1057553C) & 0xFFFFFF;
    sub_1002B970((int *)(a1 + 4));
    sub_1002BD50((__int16 **)(a1 + 4), (unsigned __int8)HIBYTE(*(_WORD *)a1) >> 2);
}
// 1057553C: using guessed type int dword_1057553C;
