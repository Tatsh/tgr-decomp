//----- (1003FFD0) --------------------------------------------------------
int __cdecl sub_1003FFD0(int a1) {
    const char *v1; // edi
    int v2;         // edx

    v1 = getCaptionString(dword_100AC3E0[dword_10AA2A0C]);
    v2 = *(_DWORD *)(a1 + 11100);
    strcpy((char *)(a1 + 11109), v1);
    (*(void(__thiscall **)(int))(v2 + 4))(a1 + 11100);
    sub_1003EE50(a1, 0);
    return 1;
}
// 10AA2A0C: using guessed type int dword_10AA2A0C;