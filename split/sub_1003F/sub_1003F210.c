//----- (1003F210) --------------------------------------------------------
int __cdecl sub_1003F210(int a1) {
    const char *v1; // esi

    sub_1003EE50(a1, 0);
    v1 = (const char *)(a1 + 11109);
    if (strlen((const char *)(a1 + 11109)))
        *(_DWORD *)(dword_10AA29BC + 28) &= 0xFFFFFFEF;
    if (_strcmpi(g_lpSessionDesc_dwUser3, v1))
        strcpy(g_lpSessionDesc_dwUser3, v1);
    return 1;
}
// 10AA29BC: using guessed type int dword_10AA29BC;
