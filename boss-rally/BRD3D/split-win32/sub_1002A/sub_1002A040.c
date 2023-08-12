#include "types-win32.h"
//----- (1002A040) --------------------------------------------------------
int __cdecl sub_1002A040(_DWORD *a1) {
    int v1;     // edx
    int v2;     // eax
    int result; // eax

    v1 = HIBYTE(a1[1]) & 7;
    v2 = v1 << 6;
    *(int *)((char *)dword_105551D8 + v2) = (*a1 >> 21) & 7;
    *(int *)((char *)dword_105551DC + v2) = (*a1 >> 19) & 3;
    *(int *)((char *)&dword_105551E0 + v2) = 8 * ((*a1 >> 9) & 0x1FF);
    *(int *)((char *)&dword_105551E4 + v2) = *a1 & 0x1FF;
    *(int *)((char *)dword_105551E8 + v2) = (a1[1] >> 8) & 1;
    *(int *)((char *)dword_105551EC + v2) = (a1[1] >> 9) & 1;
    *(int *)((char *)dword_105551F0 + v2) = (a1[1] >> 18) & 1;
    *(int *)((char *)dword_105551F4 + v2) = (a1[1] >> 19) & 1;
    *(int *)((char *)dword_105551F8 + v2) = (a1[1] >> 4) & 0xF;
    *(int *)((char *)dword_105551FC + v2) = (a1[1] >> 14) & 0xF;
    *(int *)((char *)&dword_10555200 + v2) = a1[1] & 0xF;
    *(int *)((char *)&dword_10555204 + v2) = (a1[1] >> 10) & 0xF;
    result = dword_104D51AC;
    if (dword_104D51AC == 3 || dword_104D51AC == 4 || dword_104D51AC == 7 || v1 > dword_10575430)
        dword_10575430 = v1;
    dword_104D51AC = 5;
    return result;
}
// 104D51AC: using guessed type int dword_104D51AC;
// 105551D8: using guessed type int dword_105551D8[];
// 105551DC: using guessed type int dword_105551DC[];
// 105551E0: using guessed type int dword_105551E0;
// 105551E4: using guessed type int dword_105551E4;
// 105551E8: using guessed type int dword_105551E8[];
// 105551EC: using guessed type int dword_105551EC[];
// 105551F0: using guessed type int dword_105551F0[];
// 105551F4: using guessed type int dword_105551F4[];
// 105551F8: using guessed type int dword_105551F8[];
// 105551FC: using guessed type int dword_105551FC[];
// 10555200: using guessed type int dword_10555200;
// 10555204: using guessed type int dword_10555204;
// 10575430: using guessed type int dword_10575430;
