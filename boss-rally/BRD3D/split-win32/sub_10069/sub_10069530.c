#include "../types-win32.h"
//----- (10069530) --------------------------------------------------------
char *sub_10069530() {
    if (dword_10B01C44 < 20)
        return (char *)&unk_10B01C50 + 448 * dword_106C65EC + 224 * dword_106C65EC +
               32 * dword_10B01C44++;
    ++dword_10B01C44;
    return (char *)&unk_10B01ED0 + 672 * dword_106C65EC;
}
// 106C65EC: using guessed type int dword_106C65EC;
// 10B01C44: using guessed type int dword_10B01C44;
