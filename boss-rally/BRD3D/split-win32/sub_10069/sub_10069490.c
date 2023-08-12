#include "types-win32.h"
//----- (10069490) --------------------------------------------------------
char *sub_10069490() {
    if (dword_10B01C40 < 256)
        return (char *)&unk_10AF9BC0 +
               64 * ((*(_DWORD *)&gUnk06594.gap1C8[12452] << 8) + dword_10B01C40++ +
                     *(_DWORD *)&gUnk06594.gap1C8[12452]);
    ++dword_10B01C40;
    return (char *)&unk_10AFDBC0 + 16448 * *(_DWORD *)&gUnk06594.gap1C8[12452];
}
// 10B01C40: using guessed type int dword_10B01C40;
