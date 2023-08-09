#include "types-win32.h"
//----- (10072110) --------------------------------------------------------
int __cdecl sub_10072110(_DWORD *a1, char a2) {
    _BYTE *v2; // esi

    if (meth_unk00214_10073F40(a1) + 9 > 256)
        return 0;
    meth_unk00214_10073D60(a1, a2 | 0x20);
    v2 = &unk_11826B0C;
    do {
        meth_unk00214_10073D60(a1, (16 * *v2) | *(v2 - 4));
        v2 += 8;
    } while ((int)v2 < (int)&unk_11826B4C);
    return 1;
}
