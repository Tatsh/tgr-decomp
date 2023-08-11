#include "types-win32.h"
//----- (10018070) --------------------------------------------------------
BOOL sub_10018070() {
    return *(_DWORD *)&gUnk06594.gap1C8[12500] || *(_DWORD *)&gUnk06594.gap1C8[12504] ||
           *(_DWORD *)&gUnk06594.gap1C8[12508] || !*(_DWORD *)gUnk06594.gap4918 ||
           dword_100B4050 == 2;
}
// 100B4050: using guessed type int dword_100B4050;
