#include "types-win32.h"
//----- (10040950) --------------------------------------------------------
int __cdecl sub_10040950(int a1) {
    if (gDIEffectSquare.dwStartDelay)
        *(_WORD *)(a1 + 123404) = byte_100AC630[dword_10AA2A1C];
    else
        *(_WORD *)(a1 + 123404) = byte_100AC631;
    return 1;
}
// 100AC631: using guessed type char byte_100AC631;
// 10AA2A1C: using guessed type int dword_10AA2A1C;
