//----- (10072700) --------------------------------------------------------
int __cdecl sub_10072700(int a1, int a2) {
    if (!g_Playsfx || !g_DSound || !dword_118290FC)
        return 1;
    if (!a1)
        return 0;
    *(_DWORD *)(a1 + 12) = a2;
    sub_100724B0(a1);
    return 1;
}
// 100B5DE8: using guessed type int g_Playsfx;
// 118290FC: using guessed type int dword_118290FC;
