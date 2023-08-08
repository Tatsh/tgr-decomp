#include "types-win32.h"
//----- (1005B250) --------------------------------------------------------
DWORD __thiscall meth_1005B250(char *this, int a2, int a3) {
    DWORD result;  // eax
    signed int v5; // ecx
    int v6;        // edx

    result = getTicks();
    v5 = result - dword_10AA2A58 + dword_10AA2A54;
    dword_10AA2A58 = result;
    dword_10AA2A54 = v5;
    if (v5 >= 120) {
        HIWORD(v6) = HIWORD(a3);
        dword_10AA2A54 = 0;
        LOWORD(v6) = word_100AC9DC;
        result = (*(int(__thiscall **)(char *, int, int, int, _DWORD))(*(_DWORD *)this + 24))(
            this, v6, a2, a3, this[8]);
    }
    return result;
}
// 100AC9DC: using guessed type __int16 word_100AC9DC;
// 10AA2A54: using guessed type int dword_10AA2A54;
// 10AA2A58: using guessed type int dword_10AA2A58;
