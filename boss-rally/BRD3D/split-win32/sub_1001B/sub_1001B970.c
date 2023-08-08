#include "../types-win32.h"
//----- (1001B970) --------------------------------------------------------
HRESULT sub_1001B970() {
    HRESULT result; // eax
    int v1;         // eax

    if ((g_hasCalledDDrawEnum & 1) == 0) {
        dword_104BBE1C = 0;
        result = ddrawEnum();
        if (result < 0) // failed
            return result;
        v1 = g_hasCalledDDrawEnum;
        LOBYTE(v1) = g_hasCalledDDrawEnum | 1;
        g_hasCalledDDrawEnum = v1;
    }
    return 0;
}
// 104BBE18: using guessed type int g_hasCalledDDrawEnum;
// 104BBE1C: using guessed type int dword_104BBE1C;
