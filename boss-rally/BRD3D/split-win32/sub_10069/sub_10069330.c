#include "types-win32.h"
//----- (10069330) --------------------------------------------------------
int __usercall sub_10069330 @<eax>(int a1 @<ecx>, double a2 @<st0>) {
    int result; // eax

    result = *(_DWORD *)(a1 + 96);
    if (result) {
        if (!gNetworkPlay || (result = sub_10060CC0(a2, result, *(_DWORD *)(result + 324))) != 0) {
            sub_10061C60(*(_DWORD *)(a1 + 96), a2);
            result = meth_100019D0(*(#479 **)(a1 + 96));
        }
    }
    return result;
}
// 1022AF18: using guessed type int gNetworkPlay;