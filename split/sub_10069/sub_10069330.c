//----- (10069330) --------------------------------------------------------
int __usercall sub_10069330 @<eax>(int a1 @<ecx>, double a2 @<st0>) {
    int result; // eax

    result = *(_DWORD *)(a1 + 96);
    if (result) {
        if (!g_NetworkPlay || (result = sub_10060CC0(result, *(_DWORD *)(result + 324))) != 0) {
            sub_10061C60(*(_DWORD *)(a1 + 96), a2);
            result = sub_100019D0(*(#479 **)(a1 + 96));
        }
    }
    return result;
}
// 1022AF18: using guessed type int g_NetworkPlay;
