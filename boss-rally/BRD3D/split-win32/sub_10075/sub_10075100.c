#include "types-win32.h"
//----- (10075100) --------------------------------------------------------
DWORD sub_10075100() {
    DWORD v0;        // eax
    unsigned int v1; // esi
    DWORD result;    // eax

    v0 = GetTicks();
    dword_118AB12C = 0;
    dword_118AB118 = v0;
    v1 = v0 % 0x64 / 0x21;
    result = 3 * (v0 / 0x64);
    dword_118AB134 = result + v1;
    return result;
}
// 118AB118: using guessed type int dword_118AB118;
// 118AB12C: using guessed type int dword_118AB12C;
// 118AB134: using guessed type int dword_118AB134;
