#include "types-win32.h"
//----- (10018070) --------------------------------------------------------
BOOL sub_10018070() {
    return MEMORY[0x106C661C] || MEMORY[0x106C6620] || MEMORY[0x106C6624] || !MEMORY[0x106C7C98] ||
           dword_100B4050 == 2;
}
// 100B4050: using guessed type int dword_100B4050;
// 106C661C: using guessed type int dword_106C661C;
// 106C6620: using guessed type int dword_106C6620;
// 106C6624: using guessed type int dword_106C6624;
// 106C7C98: using guessed type int dword_106C7C98;
