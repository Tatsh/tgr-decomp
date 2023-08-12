#include "types-win32.h"
//----- (10069800) --------------------------------------------------------
char *sub_10069800() {
    char *v0;     // edi
    unk00144 *v1; // esi
    char *result; // eax

    v0 = &gUnk06594.gap1C8[12592];
    v1 = &stru_10ACDEA8;
    do {
        meth_100634F0(v1);
        result = meth_10035FE0(v0);
        v1 = (unk00144 *)((char *)v1 + 11112);
        v0 += 348;
    } while ((int)v1 < (int)&dword_10AF9528);
    return result;
}
// 10AF9528: using guessed type int dword_10AF9528;
