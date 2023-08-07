#include "../../types-win32.h"
//----- (10033498) --------------------------------------------------------
int sub_10033498() {
    int result;      // eax
    BOOL v1;         // [esp+4h] [ebp-20h]
    int i;           // [esp+Ch] [ebp-18h]
    int v3;          // [esp+14h] [ebp-10h]
    int j;           // [esp+18h] [ebp-Ch]
    int v5;          // [esp+18h] [ebp-Ch]
    unsigned int v6; // [esp+1Ch] [ebp-8h]
    int v7;          // [esp+20h] [ebp-4h]

    v1 = dword_106C6620 && g_chosenTrack != 2 && g_chosenTrack != 8;
    for (i = 0; i < dword_106C7C60; ++i) {
        if (!*(_DWORD *)(dword_106C7C64 + 36 * i))
            continue;
        if ((*(_DWORD *)(dword_106C7C64 + 36 * i + 32) & 0x100000) == 0) {
            if (dword_100AA8A0 == dword_106C6620)
                continue;
            v7 = 32 * (*(_DWORD *)(dword_106C7C64 + 36 * i + 8) & 0xFFF);
            goto LABEL_26;
        }
        if ((*(_WORD *)(*(_DWORD *)(dword_106C7C64 + 36 * i + 8) + 2) != 2 ||
             *(_DWORD *)(*(_DWORD *)(dword_106C7C64 + 36 * i + 8) + 8) != -1) &&
            !dword_106909B4 && dword_106909E0 != 2) {
            if (v1 && (HIBYTE(*(_DWORD *)(dword_106C7C64 + 36 * i + 32)) & 0xF) == 11) {
                j = 1;
            } else {
                for (j = 1; j < *(unsigned __int16 *)(*(_DWORD *)(dword_106C7C64 + 36 * i + 8) + 2);
                     ++j) {
                    v6 = *(_DWORD *)(*(_DWORD *)(dword_106C7C64 + 36 * i + 8) +
                                     12 * (*(unsigned __int16 *)(*(_DWORD *)(dword_106C7C64 +
                                                                             36 * i + 8) +
                                                                 2) -
                                           1) +
                                     8) -
                         *(_DWORD *)(*(_DWORD *)(dword_106C7C64 + 36 * i + 8) + 8);
                    if (dword_106C56D8 - v6 * (dword_106C56D8 / v6) <
                        *(_DWORD *)(*(_DWORD *)(dword_106C7C64 + 36 * i + 8) + 12 * j + 8))
                        break;
                }
            }
            v5 = j - 1;
            v3 = *(_DWORD *)(*(_DWORD *)(dword_106C7C64 + 36 * i + 8) + 12 * v5 + 12);
            v7 = *(_DWORD *)(*(_DWORD *)(dword_106C7C64 + 36 * i + 8) + 12 * v5 + 16);
            if ((*(_DWORD *)(dword_106C7C64 + 36 * i + 32) & 0x3FFFF) != 0 && v3 != -1)
                dword_118AA0A4(HIWORD(v3), (unsigned __int16)v3);
        LABEL_26:
            if (*(_DWORD *)(dword_106C7C64 + 36 * i + 4)) {
                if (v7 != -1) {
                    sub_10031190();
                    sub_10042AF0();
                }
            }
            continue;
        }
    }
    result = dword_106C6620;
    dword_100AA8A0 = dword_106C6620;
    return result;
}
// 100AA8A0: using guessed type int dword_100AA8A0;
// 100B380C: using guessed type int g_chosenTrack;
// 106909B4: using guessed type int dword_106909B4;
// 106909E0: using guessed type int dword_106909E0;
// 10690BEC: using guessed type int dword_10690BEC;
// 106C56D8: using guessed type int dword_106C56D8;
// 106C6620: using guessed type int dword_106C6620;
// 106C7C60: using guessed type int dword_106C7C60;
// 106C7C64: using guessed type int dword_106C7C64;
// 118AA0A4: using guessed type int (__cdecl *dword_118AA0A4)(_DWORD, _DWORD);
