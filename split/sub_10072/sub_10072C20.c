//----- (10072C20) --------------------------------------------------------
int __cdecl sub_10072C20(int a1) {
    int v1;     // esi
    HGLOBAL v2; // eax
    HGLOBAL v3; // eax
    HGLOBAL v4; // eax
    HGLOBAL v5; // eax
    int v6;     // ebx
    HGLOBAL v7; // eax
    HGLOBAL v8; // eax

    v1 = *(_DWORD *)(a1 + 424);
    *(_DWORD *)(a1 + 424) = 0;
    if (v1) {
        do {
            sub_10072520(v1);
            v2 = GlobalHandle(*(LPCVOID *)(v1 + 8));
            GlobalUnlock(v2);
            v3 = GlobalHandle(*(LPCVOID *)(v1 + 8));
            GlobalFree(v3);
            v4 = GlobalHandle(*(LPCVOID *)v1);
            GlobalUnlock(v4);
            v5 = GlobalHandle(*(LPCVOID *)v1);
            GlobalFree(v5);
            v6 = *(_DWORD *)(v1 + 424);
            v7 = GlobalHandle((LPCVOID)v1);
            GlobalUnlock(v7);
            v8 = GlobalHandle((LPCVOID)v1);
            GlobalFree(v8);
            v1 = v6;
        } while (v6);
    }
    return 0;
}
// 10072520: using guessed type _DWORD __cdecl sub_10072520(_DWORD);
