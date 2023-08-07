#include "../../types-win32.h"
//----- (10024460) --------------------------------------------------------
_DWORD *sub_10024460() {
    int v0;         // ecx
    int *v1;        // eax
    _DWORD *v2;     // eax
    _DWORD *result; // eax

    dword_10B501D0 = sub_10024550;
    dword_10B501D4 = sub_100243E0;
    dword_10B501CC = (int (*)(void))debugPrint;
    v0 = 0;
    v1 = (int *)&unk_104C0B80;
    do {
        *v1 = v0;
        v0 = (int)v1;
        v1 -= 10;
    } while ((int)v1 >= (int)dword_104C01A8);
    dword_104C0BBC = v0;
    dword_104C01A4 = 0;
    dword_100A79DC = 1;
    v2 = &unk_104C1738;
    do {
        *v2 = -1;
        v2 += 27;
    } while ((int)v2 < (int)&flt_104C4D38);
    result = &unk_104BC1B4;
    do {
        *result = 0;
        result += 8;
    } while ((int)result < (int)&unk_104C01B4);
    dword_104C5184 = 0;
    return result;
}
// 10024550: using guessed type int __cdecl sub_10024550(int);
// 100A79DC: using guessed type int dword_100A79DC;
// 104C01A4: using guessed type int dword_104C01A4;
// 104C0BBC: using guessed type int dword_104C0BBC;
// 104C4D38: using guessed type float flt_104C4D38;
// 104C5184: using guessed type int dword_104C5184;
// 10B501CC: using guessed type int (*dword_10B501CC)(void);
// 10B501D0: using guessed type int (__cdecl *dword_10B501D0)(_DWORD);
// 10B501D4: using guessed type int (*dword_10B501D4)(void);
