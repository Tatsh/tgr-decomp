//----- (10037930) --------------------------------------------------------
int __cdecl sub_10037930(int a1, _DWORD *a2, _DWORD *a3) {
    int v3;    // eax
    _DWORD *i; // ecx
    int v6;    // eax

    v3 = dword_10A99778 - 1;
    if (dword_10A99778 - 1 < 0)
        return 0;
    for (i = (_DWORD *)((char *)&unk_106C7E7C + 16 * v3); dword_10A9977C + a1 != *i; i -= 4) {
        if (--v3 < 0)
            return 0;
    }
    v6 = 4 * v3;
    *a2 = dword_106C7E80[v6];
    *a3 = dword_106C7E84[v6];
    return 1;
}
// 106C7E80: using guessed type int dword_106C7E80[];
// 10A99778: using guessed type int dword_10A99778;
// 10A9977C: using guessed type int dword_10A9977C;
