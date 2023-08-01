//----- (10048710) --------------------------------------------------------
_DWORD *__thiscall sub_10048710(_DWORD *this) {
    int v2;         // esi
    CHAR *v3;       // eax
    CHAR *v4;       // eax
    CHAR *v5;       // eax
    CHAR *v6;       // eax
    int v7;         // edi
    const char *v8; // eax
    const char *v9; // eax

    v2 = 0;
    this[2] = 0;
    this[3] = 0;
    *((_WORD *)this + 8) = 0;
    *((_WORD *)this + 9) = 0;
    this[25] = 0;
    this[26] = 1;
    *((_WORD *)this + 94) = 0;
    *this = &off_1008F700;
    v3 = (CHAR *)malloc(0x6594u);
    if (v3)
        v4 = sub_1005CB90(v3);
    else
        v4 = 0;
    this[48] = v4;
    if (!v4)
        sub_1003E260(6);
    v5 = (CHAR *)malloc(0x6594u);
    if (v5)
        v6 = sub_1005CB90(v5);
    else
        v6 = 0;
    this[49] = v6;
    if (!v6)
        sub_1003E260(6);
    v7 = 0;
    do {
        v8 = getCaptionString(0xBEu);
        sprintf((char *const)(this[48] + v2 + 4), v8, v7);
        v9 = getCaptionString(0xBEu);
        sprintf((char *const)(this[49] + v2 + 4), v9, v7);
        v2 += 260;
        ++v7;
    } while (v2 < 26000);
    memset(this + 27, 0, 0x50u);
    return this;
}
// 1008F700: using guessed type int (__thiscall *off_1008F700)(void *Block, char);
