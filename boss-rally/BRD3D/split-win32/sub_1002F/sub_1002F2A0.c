#include "types-win32.h"
//----- (1002F2A0) --------------------------------------------------------
int sub_1002F2A0() {
    __int64 v0; // rax
    char *v1;   // ebp
    _DWORD *v2; // ebx

    v0 = (unsigned int)dword_100B4050;
    if (dword_100B4050 > 0) {
        v1 = (char *)&unk_10690950;
        v2 = &unk_106909C0;
        LODWORD(v0) = &flt_10ACEE94;
        do {
            dword_106805C8[HIDWORD(v0)] = *(_DWORD *)(v0 + 12);
            dword_10680728[HIDWORD(v0)] = *(_DWORD *)v0;
            *v2 = *(_DWORD *)(v0 - 8);
            dword_10680748[HIDWORD(v0)] = *(_DWORD *)(v0 - 4);
            dword_106805B0[HIDWORD(v0)] = *(_DWORD *)(v0 - 68);
            if (dword_100BD3E0 > 0)
                qmemcpy(v1, (const void *)(v0 - 56), 4 * dword_100BD3E0);
            ++HIDWORD(v0);
            ++v2;
            v1 += 48;
            LODWORD(v0) = v0 + 11112;
        } while (SHIDWORD(v0) < dword_100B4050);
    }
    dword_106909B8 = 1;
    return v0;
}
// 100B4050: using guessed type int dword_100B4050;
// 106805B0: using guessed type int dword_106805B0[];
// 106805C8: using guessed type int dword_106805C8[];
// 10680728: using guessed type int dword_10680728[];
// 10680748: using guessed type int dword_10680748[];
// 106909B8: using guessed type int dword_106909B8;
