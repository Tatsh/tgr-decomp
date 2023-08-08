#include "types-win32.h"
//----- (10047A60) --------------------------------------------------------
int __thiscall meth_10047A60(_DWORD *this) {
    int v2;  // eax
    int v4;  // eax
    int v5;  // ecx
    int v6;  // ecx
    BOOL v7; // edx
    int v8;  // ecx
    int v9;  // eax
    int v10; // eax
    int v11; // eax
    int v12; // eax
    int v13; // eax

    v2 = this[7];
    if ((v2 & 8) != 0)
        return 0;
    if ((v2 & 0x10) == 0) {
        if ((v2 & 0x80000) == 0 || sub_1003E080()) {
            if ((this[7] & 0x80000) != 0 && sub_1003E080()) {
                v13 = this[7];
                LOBYTE(v13) = v13 | 0x22;
                this[7] = v13;
                return 1;
            }
        } else {
            this[7] &= 0xFFF7FFFD;
        }
        v4 = **(_DWORD **)&SrcStr[8];
        if (dword_100AB448 > **(_DWORD **)&SrcStr[8] || dword_100AB450 < v4 ||
            (v5 = *(_DWORD *)(*(_DWORD *)&SrcStr[8] + 4), dword_100AB44C > v5) ||
            dword_100AB454 < v5) {
            if (dword_100AB418 > v4 || dword_100AB420 < v4 ||
                (v8 = *(_DWORD *)(*(_DWORD *)&SrcStr[8] + 4), dword_100AB41C > v8) ||
                dword_100AB424 < v8) {
                if (dword_100AB428 > v4 || dword_100AB430 < v4 ||
                    (v9 = *(_DWORD *)(*(_DWORD *)&SrcStr[8] + 4), dword_100AB42C > v9) ||
                    dword_100AB434 < v9) {
                    v6 = 0;
                    v7 = word_10AA286C + dword_100AB44C + 18 * word_10AA286C ==
                         word_10AA2870 + dword_100AB44C + 18 * word_10AA2870;
                } else {
                    v6 = 1;
                    v7 = 0;
                }
            } else {
                v6 = 1;
                v7 = 0;
            }
        } else {
            v6 = 1;
            v7 = 0;
        }
        ++word_10AA2870;
        dword_10AA284C = v6;
        if (this[20] <= **(_DWORD **)&SrcStr[8] && this[22] >= **(_DWORD **)&SrcStr[8] &&
                (v10 = *(_DWORD *)(*(_DWORD *)&SrcStr[8] + 4), this[21] <= v10) &&
                this[23] >= v10 ||
            v7) {
            if (v7) {
                if (dword_10AA33D0[0] || dword_10AA33D4 || dword_10AA33D8)
                    return 1;
                if (dword_10AA33DC)
                    return 1;
            }
            v11 = this[7];
            if ((v11 & 0x40000) != 0) {
                if (g_unk54Ptr->width || g_unk54Ptr->field_30) {
                    v11 |= 0x80002u;
                LABEL_47:
                    this[7] = v11;
                    LOBYTE(v11) = v11 | 0x20;
                    this[7] = v11;
                    return 1;
                }
            } else {
                if (!dword_10AA285C && (dword_10AA2AF0 || dword_10AA2CF0) || sub_1003E080()) {
                    v11 = this[7];
                    LOBYTE(v11) = v11 | 2;
                    goto LABEL_47;
                }
                v11 = this[7];
            }
            LOBYTE(v11) = v11 & 0xFD;
            goto LABEL_47;
        }
        v12 = this[7];
        LOBYTE(v12) = v12 & 0xDD;
        this[7] = v12;
        return 0;
    }
    if (word_10AA286C == word_10AA2870) {
        word_10AA286C += word_100AB3DC;
        meth_100484F0(*(unsigned __int16 **)(this[2746] + 100));
    }
    ++word_10AA2870;
    return 0;
}
// 100AB3DC: using guessed type __int16 word_100AB3DC;
// 100AB418: using guessed type int dword_100AB418;
// 100AB41C: using guessed type int dword_100AB41C;
// 100AB420: using guessed type int dword_100AB420;
// 100AB424: using guessed type int dword_100AB424;
// 100AB428: using guessed type int dword_100AB428;
// 100AB42C: using guessed type int dword_100AB42C;
// 100AB430: using guessed type int dword_100AB430;
// 100AB434: using guessed type int dword_100AB434;
// 100AB448: using guessed type int dword_100AB448;
// 100AB44C: using guessed type int dword_100AB44C;
// 100AB450: using guessed type int dword_100AB450;
// 100AB454: using guessed type int dword_100AB454;
// 10AA284C: using guessed type int dword_10AA284C;
// 10AA285C: using guessed type int dword_10AA285C;
// 10AA286C: using guessed type __int16 word_10AA286C;
// 10AA2870: using guessed type __int16 word_10AA2870;
// 10AA2AF0: using guessed type int dword_10AA2AF0;
// 10AA2CF0: using guessed type int dword_10AA2CF0;
// 10AA33D0: using guessed type int dword_10AA33D0[];
// 10AA33D4: using guessed type int dword_10AA33D4;
// 10AA33D8: using guessed type int dword_10AA33D8;
// 10AA33DC: using guessed type int dword_10AA33DC;
