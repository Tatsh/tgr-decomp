#include "types-win32.h"
//----- (100694E0) --------------------------------------------------------
char *sub_100694E0() {
    if (dword_10B01C48 < 20)
        return (char *)&unk_10B02190 + 224 * *(_DWORD *)&gUnk06594.gap1C8[12452] +
               112 * *(_DWORD *)&gUnk06594.gap1C8[12452] + 16 * dword_10B01C48++;
    ++dword_10B01C48;
    return (char *)&unk_10B022D0 + 336 * *(_DWORD *)&gUnk06594.gap1C8[12452];
}
// 10B01C48: using guessed type int dword_10B01C48;
