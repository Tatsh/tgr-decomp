#include "types-win32.h"
//----- (10069530) --------------------------------------------------------
char *sub_10069530() {
    if (dword_10B01C44 < 20)
        return (char *)&unk_10B01C50 + 448 * *(_DWORD *)&gUnk06594.gap1C8[12452] +
               224 * *(_DWORD *)&gUnk06594.gap1C8[12452] + 32 * dword_10B01C44++;
    ++dword_10B01C44;
    return (char *)&unk_10B01ED0 + 672 * *(_DWORD *)&gUnk06594.gap1C8[12452];
}
// 10B01C44: using guessed type int dword_10B01C44;
