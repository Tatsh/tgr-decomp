#include "types-win32.h"
//----- (1003F720) --------------------------------------------------------
int __cdecl sub_1003F720(int a1) {
    if (gUnkC8Ptr1 == (void *)dword_10AA2964 && !dword_10AA28E8)
        return -2;
    *(_WORD *)(a1 + 123404) = word_100AC5A8[2 * dword_100AC654];
    return 1;
}
// 1003F720: using guessed type int __cdecl sub_1003F720(int);
// 100AC5A8: using guessed type __int16 word_100AC5A8[];
// 100AC654: using guessed type int dword_100AC654;
// 10AA28E8: using guessed type int dword_10AA28E8;
// 10AA2964: using guessed type int dword_10AA2964;
