#include "../types-win32.h"
//----- (10060D50) --------------------------------------------------------
char sub_10060D50() {
    int v0;      // eax
    char result; // al

    v0 = dword_10B4E70C;
    if (dword_10B4E70C < 9)
        v0 = ++dword_10B4E70C;
    result = byte_100ADF68[4 * v0];
    byte_100BBAD8 = result;
    return result;
}
// 100BBAD8: using guessed type char byte_100BBAD8;
// 10B4E70C: using guessed type int dword_10B4E70C;
