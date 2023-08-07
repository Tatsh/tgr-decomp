#include "../../types-n64.h"
//----- (8020C66C) --------------------------------------------------------
BOOL __fastcall sub_8020C66C(char a1) {
    BOOL result; // $v0

    result = (MEMORY[0xC74C1E04] & (1 << a1)) != 0;
    if ((MEMORY[0xC74C1E04] & (1 << a1)) != 0)
        result = sub_8021D6B8(a1);
    return result;
}
// 80272070: using guessed type int dword_80272070;
