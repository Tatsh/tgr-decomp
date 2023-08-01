//----- (10071F40) --------------------------------------------------------
int __cdecl sub_10071F40(
    _DWORD *a1, char a2, char a3, char a4, char a5, char a6, char a7, int a8, int a9) {
    int v9;           // eax
    unsigned int v10; // ebx
    int v11;          // ebp
    int i;            // edi

    v9 = sub_10073F40(a1) + 10;
    v10 = a3 & 0x3F;
    if (v10 <= 2)
        v9 += 24;
    if (v10 == 4)
        v9 += 3;
    if (v9 > 256)
        return 0;
    sub_10073D60(a1, a2);
    sub_10073D60(a1, a3);
    sub_10073D60(a1, a4);
    sub_10073D60(a1, a5);
    sub_10073D60(a1, a6);
    sub_10073D60(a1, a7);
    sub_10073E10(a1, a9);
    if ((a3 & 0x3Fu) <= 2) {
        v11 = 0;
        for (i = 0; i < 24; ++i) {
            if (v11) {
                sub_10073D60(a1, 0);
            } else {
                sub_10073D60(a1, *(_BYTE *)(i + a8));
                if (!*(_BYTE *)(i + a8))
                    v11 = 1;
            }
        }
        v10 = a3 & 0x3F;
    }
    if (v10 == 4)
        sub_10073DC0(a1, dword_11828D14);
    return 1;
}
// 11828D14: using guessed type int dword_11828D14;
