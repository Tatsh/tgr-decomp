#include "../../types-win32.h"
//----- (1002A140) --------------------------------------------------------
int __cdecl sub_1002A140(_DWORD *a1) {
    int result; // eax
    int v2;     // ecx

    result = (HIBYTE(a1[1]) & 7) << 6;
    *(int *)((char *)&dword_10555208 + result) = (*a1 >> 12) & 0xFFF;
    *(int *)((char *)&dword_1055520C + result) = *a1 & 0xFFF;
    *(int *)((char *)&dword_10555210 + result) = (a1[1] >> 12) & 0xFFF;
    v2 = a1[1] & 0xFFF;
    dword_104D51AC = 6;
    *(int *)((char *)&dword_10555214 + result) = v2;
    return result;
}
// 104D51AC: using guessed type int dword_104D51AC;
// 10555208: using guessed type int dword_10555208;
// 1055520C: using guessed type int dword_1055520C;
// 10555210: using guessed type int dword_10555210;
// 10555214: using guessed type int dword_10555214;
