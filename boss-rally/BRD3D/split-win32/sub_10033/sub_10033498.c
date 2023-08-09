#include "types-win32.h"
//----- (10033498) --------------------------------------------------------
int sub_10033498() {
    unk06594 *v0;    // ecx
    int result;      // eax
    BOOL v2;         // [esp+4h] [ebp-20h]
    int i;           // [esp+Ch] [ebp-18h]
    int v4;          // [esp+14h] [ebp-10h]
    int j;           // [esp+18h] [ebp-Ch]
    int v6;          // [esp+18h] [ebp-Ch]
    unsigned int v7; // [esp+1Ch] [ebp-8h]
    int v8;          // [esp+20h] [ebp-4h]

    v2 = *(_DWORD *)&gUnk06594.gap1C8[12504] && gChosenTrack != 2 && gChosenTrack != 8;
    for (i = 0; i < *(int *)&gUnk06594.gap1C8[18200]; ++i) {
        if (!*(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18204] + 36 * i))
            continue;
        if ((*(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18204] + 36 * i + 32) & 0x100000) == 0) {
            if (dword_100AA8A0 == *(_DWORD *)&gUnk06594.gap1C8[12504])
                continue;
            v8 = 32 * (*(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18204] + 36 * i + 8) & 0xFFF);
            goto LABEL_26;
        }
        if ((*(_WORD *)(*(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18204] + 36 * i + 8) + 2) != 2 ||
             *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18204] + 36 * i + 8) + 8) !=
                 -1) &&
            !dword_106909B4 && dword_106909E0 != 2) {
            if (v2 && (HIBYTE(*(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18204] + 36 * i + 32)) &
                       0xF) == 11) {
                j = 1;
            } else {
                for (j = 1;
                     j < *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18204] +
                                                           36 * i + 8) +
                                               2);
                     ++j) {
                    v7 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18204] + 36 * i + 8) +
                                     12 * (*(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&gUnk06594
                                                                                  .gap1C8[18204] +
                                                                             36 * i + 8) +
                                                                 2) -
                                           1) +
                                     8) -
                         *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18204] + 36 * i + 8) +
                                     8);
                    if (*(_DWORD *)&gUnk06594.gap1C8[8592] -
                            v7 * (*(_DWORD *)&gUnk06594.gap1C8[8592] / v7) <
                        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18204] + 36 * i + 8) +
                                    12 * j + 8))
                        break;
                }
            }
            v6 = j - 1;
            v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18204] + 36 * i + 8) +
                             12 * v6 + 12);
            v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18204] + 36 * i + 8) +
                             12 * v6 + 16);
            if ((*(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18204] + 36 * i + 32) & 0x3FFFF) != 0 &&
                v4 != -1)
                dword_118AA0A4(HIWORD(v4), (unsigned __int16)v4);
        LABEL_26:
            if (*(_DWORD *)(*(_DWORD *)&gUnk06594.gap1C8[18204] + 36 * i + 4)) {
                if (v8 != -1) {
                    sub_10031190((unk06594 *)(v8 + dword_10690BEC));
                    meth_unk1A5E0_10042AF0(v0);
                }
            }
            continue;
        }
    }
    result = *(_DWORD *)&gUnk06594.gap1C8[12504];
    dword_100AA8A0 = *(_DWORD *)&gUnk06594.gap1C8[12504];
    return result;
}
// 10033733: variable 'v0' is possibly undefined
// 100AA8A0: using guessed type int dword_100AA8A0;
// 100B380C: using guessed type int gChosenTrack;
// 106909B4: using guessed type int dword_106909B4;
// 106909E0: using guessed type int dword_106909E0;
// 10690BEC: using guessed type int dword_10690BEC;
// 118AA0A4: using guessed type int (__cdecl *dword_118AA0A4)(_DWORD, _DWORD);
