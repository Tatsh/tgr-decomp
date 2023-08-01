//----- (1003CB90) --------------------------------------------------------
int __stdcall sub_1003CB90(int a1, int a2, _DWORD *a3, int a4) {
    int v5;     // eax
    HGLOBAL v6; // eax
    _DWORD *v7; // eax
    _DWORD *v8; // esi

    if (!dword_10AA29D4)
        return 0;
    if (((unsigned __int8)a3 & 1) != 0)
        return 0;
    if (dword_10AA2898) {
        if (*(_DWORD *)(a1 + 44) >= 8u || (*(_BYTE *)(a1 + 4) & 0x20) != 0) {
            v5 = 17;
            LOBYTE(a3) = 0;
        } else {
            v5 = 1;
            LOBYTE(a3) = 1;
        }
        (*(void(__thiscall **)(int, _DWORD, int, _DWORD *, int *, int))(
            *(_DWORD *)(dword_10AA29D4 + 14392) + 16))(
            dword_10AA29D4 + 14392, *(_DWORD *)(a1 + 48), v5, a3, &dword_100AB448, 1);
        v6 = GlobalAlloc(0x42u, 0x10u);
        v7 = GlobalLock(v6);
        v8 = v7;
        if (!v7)
            return 1;
        *v7 = *(_DWORD *)(a1 + 8);
        v7[1] = *(_DWORD *)(a1 + 12);
        v7[2] = *(_DWORD *)(a1 + 16);
        v7[3] = *(_DWORD *)(a1 + 20);
        (*(void(__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)(dword_10AA29D4 + 14392) + 40))(
            dword_10AA29D4 + 14392, v7, 16, -1);
    } else {
        v8 = a3;
    }
    sub_1003CB10((int)v8, (int)sub_1003CAA0, a4, 0);
    return 1;
}
// 100AB448: using guessed type int dword_100AB448;
// 10AA2898: using guessed type int dword_10AA2898;
// 10AA29D4: using guessed type int dword_10AA29D4;
