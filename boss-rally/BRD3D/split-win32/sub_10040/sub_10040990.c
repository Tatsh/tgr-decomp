#include "../types-win32.h"
//----- (10040990) --------------------------------------------------------
int __cdecl sub_10040990(int a1) {
    int result; // eax

    result = 1;
    *(_WORD *)(a1 + 123404) = word_100AC640[2 * dword_10AA2A28];
    return result;
}
// 100AC640: using guessed type __int16 word_100AC640[];
// 10AA2A28: using guessed type int dword_10AA2A28;
