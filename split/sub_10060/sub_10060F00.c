//----- (10060F00) --------------------------------------------------------
_BYTE *__cdecl sub_10060F00(
    _BYTE *mem, char *bmBits, LONG bmWidth, LONG bmHeight, LONG bmWidthBytes) {
    _BYTE *result;  // eax
    char *calc;     // edi
    char *calc_1;   // ecx
    LONG bmWidth_1; // esi
    char calc_2;    // dl
    char *calc_3;   // ecx
    char calc_4;    // bl
    char *calc_5;   // eax
    LONG bmBitsa;   // [esp+Ch] [ebp+8h]
    char calc_1_1;  // [esp+14h] [ebp+10h]

    result = (_BYTE *)bmHeight;
    calc = &bmBits[bmWidthBytes * (bmHeight - 1)];
    if (bmHeight) {
        bmBitsa = bmHeight;
        result = mem;
        do {
            calc_1 = calc;
            if (bmWidth) {
                bmWidth_1 = bmWidth;
                do {
                    calc_2 = *calc_1;
                    calc_1_1 = calc_1[1];
                    calc_3 = calc_1 + 2;
                    calc_4 = *calc_3;
                    calc_1 = calc_3 + 1;
                    *result = calc_4;
                    calc_5 = result + 1;
                    *calc_5++ = calc_1_1;
                    *calc_5++ = calc_2;
                    *calc_5 = -1;
                    result = calc_5 + 1;
                    --bmWidth_1;
                } while (bmWidth_1);
            }
            calc -= bmWidthBytes;
            --bmBitsa;
        } while (bmBitsa);
    }
    return result;
}
