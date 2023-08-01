//----- (10072770) --------------------------------------------------------
BOOL __cdecl sub_10072770(int a1, int a2, int a3) {
    BOOL result; // eax

    if (g_Playsfx && g_DSound && dword_118290FC)
        result = sub_10072700(dword_100B5DF0[18 * a1 + a2], a3) != 0;
    else
        result = 1;
    return result;
}
// 100B5DE8: using guessed type int g_Playsfx;
// 118290FC: using guessed type int dword_118290FC;
