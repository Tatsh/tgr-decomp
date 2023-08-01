//----- (100350EE) --------------------------------------------------------
_WORD *__usercall sub_100350EE
    @<eax>(_WORD *result @<eax>, int a2, __int16 a3, __int16 a4, __int16 a5) {
    __int16 v5; // [esp+0h] [ebp-14h]
    __int16 v6; // [esp+0h] [ebp-14h]
    _WORD *v7;  // [esp+4h] [ebp-10h]
    int i;      // [esp+8h] [ebp-Ch]
    int j;      // [esp+8h] [ebp-Ch]
    int v10;    // [esp+Ch] [ebp-8h]
    _WORD *v11; // [esp+10h] [ebp-4h]

    if (dword_100B36FC) {
        for (i = 0; i < 12; ++i) {
            v10 = 36 * *(unsigned __int8 *)(i + a2 + 33040) + *(_DWORD *)(a2 + 32788);
            v7 = *(_WORD **)(v10 + 4);
            if (v7) {
                if ((HIBYTE(*(_DWORD *)(v10 + 32)) & 0xF) == 1) {
                    v5 = (2 * a5) | (a4 << 6) | (a3 << 11) | v7[i] & 1;
                    *v7 = HIBYTE(v5) | (unsigned __int16)(v5 << 8);
                    v6 = a5 & 0x1E | (32 * (a4 & 0x1E)) | ((a3 & 0x1E) << 10) | v7[i] & 1;
                    v7[1] = HIBYTE(v6) | (unsigned __int16)(v6 << 8);
                }
            }
        }
        for (j = 0; j < *(_DWORD *)(a2 + 124); ++j)
            dword_118AA0C0(*(_DWORD *)(a2 + 4 * j + 4));
        result = *(_WORD **)(*(_DWORD *)(a2 + 32788) + 36 * *(unsigned __int8 *)(a2 + 33051) + 4);
        v11 = result;
        if (result) {
            if (!dword_100AC300) {
                if (*(_DWORD *)(a2 + 132)) {
                    if (dword_106C661C || dword_106C6624) {
                        result[15] = 112;
                        result[10] = -32112;
                    } else {
                        result[15] = 400;
                        result[10] = 416;
                    }
                    result[14] = 400;
                    result[13] = result[15];
                    result[9] = 416;
                    result[8] = result[10];
                    result[12] = -32391;
                    result[7] = 16786;
                    result[11] = 27565;
                    result[6] = 12742;
                    dword_118AA0C0(*(_DWORD *)(a2 + 132));
                }
                if (*(_DWORD *)(a2 + 136)) {
                    v11[14] = 192;
                    v11[13] = v11[14];
                    v11[9] = 1273;
                    v11[8] = v11[9];
                    v11[11] = 27565;
                    v11[6] = 12742;
                    dword_118AA0C0(*(_DWORD *)(a2 + 136));
                }
                result = (_WORD *)a2;
                if (*(_DWORD *)(a2 + 140)) {
                    v11[14] = 400;
                    v11[13] = v11[15];
                    v11[9] = 416;
                    v11[8] = v11[10];
                    v11[11] = 14567;
                    v11[6] = -257;
                    result = (_WORD *)dword_118AA0C0(*(_DWORD *)(a2 + 140));
                }
                if (*(_DWORD *)(a2 + 144)) {
                    v11[14] = 192;
                    v11[13] = v11[14];
                    v11[9] = 1273;
                    v11[8] = v11[9];
                    v11[11] = 14567;
                    v11[6] = -257;
                    result = (_WORD *)dword_118AA0C0(*(_DWORD *)(a2 + 144));
                }
            }
        }
    }
    return result;
}
// 100AC300: using guessed type int dword_100AC300;
// 100B36FC: using guessed type int dword_100B36FC;
// 106C661C: using guessed type int dword_106C661C;
// 106C6624: using guessed type int dword_106C6624;
// 118AA0C0: using guessed type int (__cdecl *dword_118AA0C0)(_DWORD);
