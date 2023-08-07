#include "../../types-win32.h"
//----- (10060DC0) --------------------------------------------------------
char sub_10060DC0() {
    int v0;      // eax
    char result; // al

    v0 = dword_10B4E708;
    if (dword_10B4E708 < 9)
        v0 = ++dword_10B4E708;
    result = byte_100ADF90[4 * v0];
    byte_100BBAE0 = result;
    return result;
}
// 100BBAE0: using guessed type char byte_100BBAE0;
// 10B4E708: using guessed type int dword_10B4E708;
