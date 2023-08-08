#include "../types-win32.h"
//----- (10075150) --------------------------------------------------------
int sub_10075150() {
    int v0;     // eax
    int v1;     // ecx
    int result; // eax

    v0 = ++dword_118AB12C;
    if (dword_118AB12C > 2) {
        v0 = 0;
        dword_118AB12C = 0;
    }
    v1 = dword_100BBAC8[v0] + dword_118AB118;
    result = dword_118AB134 + 1;
    dword_118AB118 = v1;
    ++dword_118AB134;
    return result;
}
// 118AB118: using guessed type int dword_118AB118;
// 118AB12C: using guessed type int dword_118AB12C;
// 118AB134: using guessed type int dword_118AB134;
