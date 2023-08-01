//----- (10044F00) --------------------------------------------------------
int __cdecl sub_10044F00(int a1) {
    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (dword_10AA2968)
        (**(void(__thiscall ***)(int, int))dword_10AA2968)(dword_10AA2968, 1);
    dword_10AA2968 = 0;
    dword_10AA2904 = (void *)dword_10AA295C;
    g_GameMode = 2;
    return 0;
}
// 100AA010: using guessed type int g_GameMode;
// 10AA295C: using guessed type int dword_10AA295C;
// 10AA2968: using guessed type int dword_10AA2968;
