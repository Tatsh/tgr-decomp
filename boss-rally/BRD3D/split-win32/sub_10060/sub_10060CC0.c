#include "types-win32.h"
//----- (10060CC0) --------------------------------------------------------
int __cdecl sub_10060CC0(int a1, int a2) {
    float v3[40]; // [esp+4h] [ebp-A0h] BYREF

    if (a2 == sub_10005D30())
        return 1;
    if (dword_106909B4)
        return 1;
    if (!sub_100054A0(v3, a2))
        return 0;
    sub_10060A10(a1, (int)v3);
    sub_10061BE0((_DWORD *)a1);
    return 1;
}
// 106909B4: using guessed type int dword_106909B4;
