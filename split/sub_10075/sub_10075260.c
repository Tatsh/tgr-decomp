//----- (10075260) --------------------------------------------------------
int __cdecl sub_10075260(__int16 a1, int a2, int a3, int a4, int a5) {
    int v5;     // eax
    int result; // eax

    v5 = 6 * a1;
    dword_118AC720[v5] = a2;
    dword_118AC730[v5] = 0;
    dword_118AC734[v5] = a5;
    result = sub_100725C0(a2, a1);
    if (result) {
        sub_10072640(a1, a4);
        sub_100727C0(a1, a5);
        result = sub_10072910(a2, a1, a4);
    }
    return result;
}
// 10072640: using guessed type _DWORD __cdecl sub_10072640(_DWORD, _DWORD);
// 100727C0: using guessed type _DWORD __cdecl sub_100727C0(_DWORD, _DWORD);
// 118AC720: using guessed type int dword_118AC720[];
// 118AC730: using guessed type int dword_118AC730[];
// 118AC734: using guessed type int dword_118AC734[];
