//----- (10060CC0) --------------------------------------------------------
int __cdecl sub_10060CC0(int a1, int a2) {
    char v3[160]; // [esp+4h] [ebp-A0h] BYREF

    if (a2 == sub_10005D30())
        return 1;
    if (dword_106909B4)
        return 1;
    if (!sub_100054A0(v3, a2))
        return 0;
    sub_10060A10(a1, v3);
    sub_10061BE0(a1);
    return 1;
}
// 100054A0: using guessed type _DWORD __cdecl sub_100054A0(_DWORD, _DWORD);
// 10005D30: using guessed type int sub_10005D30(void);
// 10060A10: using guessed type _DWORD __cdecl sub_10060A10(_DWORD, _DWORD);
// 10061BE0: using guessed type _DWORD __cdecl sub_10061BE0(_DWORD);
// 106909B4: using guessed type int dword_106909B4;
