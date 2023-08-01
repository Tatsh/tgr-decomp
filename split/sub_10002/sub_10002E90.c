//----- (10002E90) --------------------------------------------------------
int __cdecl sub_10002E90(int a1, int a2) {
    int v2; // esi

    if (a1 < 0 || a1 >= 64 || a2 < 0 || a2 >= 64)
        return 0;
    v2 = (unsigned __int16)((unsigned __int8)a1 + ((unsigned __int8)a2 << 6));
    return *(unsigned __int16 *)(dword_106C7CB4 + 2 * v2) |
           ((0xFFFF * *(unsigned __int16 *)(dword_106C7CB4 + 2 * v2) +
             *(unsigned __int16 *)(dword_106C7CB4 + 2 * (unsigned __int16)(v2 + 1)))
            << 16);
}
// 106C7CB4: using guessed type int dword_106C7CB4;
