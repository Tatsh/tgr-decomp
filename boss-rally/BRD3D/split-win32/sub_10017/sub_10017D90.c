#include "types-win32.h"
//----- (10017D90) --------------------------------------------------------
_DWORD *__cdecl sub_10017D90(int a1) {
    double v1;      // st7
    _DWORD *result; // eax
    int v3;         // esi
    int v4;         // edi
    int v5;         // edi
    char *v6;       // eax
    char *v7;       // eax
    float v8;       // [esp+10h] [ebp-4h]

    v8 = *(float *)(dword_106C2CF8 + 4144);
    sub_1003289F(0,
                 *(_DWORD *)(a1 + 88 * *(_DWORD *)&gUnk06594.gap1C8[8640] + 4),
                 gWidth,
                 *(_DWORD *)(a1 + 88 * *(_DWORD *)&gUnk06594.gap1C8[8640] + 12));
    if (v8 < 0.0)
        v8 = 0.0;
    sub_10016B40(a1);
    sub_10017290(a1);
    sub_10017F30(a1);
    sub_100173F0((_DWORD *)a1);
    sub_10017790(a1);
    sub_10019260();
    Set_byte_104B035C_To1();
    if (dword_100ADF60)
        v1 = v8 * 0.62137121;
    else
        v1 = v8;
    sprintf(byte_104B0320, "%%yw%.0f", v1);
    result = (_DWORD *)(a1 + 88 * *(_DWORD *)&gUnk06594.gap1C8[8640]);
    if (!dword_1022AF1C && dword_100BD3F4) {
        v3 = gWidth - 46;
        v4 = *(_DWORD *)(a1 + 88 * *(_DWORD *)&gUnk06594.gap1C8[8640] + 12) + result[1] - 4 -
             byte_100C1385[89992 * result[4]];
        sub_100192F0(20);
        v5 = v4 - 3;
        if (dword_100ADF60)
            text_10019300(byte_104B0320, v3, v5);
        else
            text_10019300(byte_104B0320, v3 - 3, v5);
        sub_100192F0(15);
        Set_byte_104B035C_To0();
        if (dword_100ADF60) {
            v6 = (char *)GetStringWithIndex(0xEBu);
            result = text_10019300(v6, v3, v5);
        } else {
            v7 = (char *)GetStringWithIndex(0xECu);
            result = text_10019300(v7, v3 - 3, v5);
        }
    }
    return result;
}
// 100A81C0: using guessed type int gWidth;
// 100ADF60: using guessed type int dword_100ADF60;
// 100BD3F4: using guessed type int dword_100BD3F4;
// 1022AF1C: using guessed type int dword_1022AF1C;
// 106C2CF8: using guessed type int dword_106C2CF8;
