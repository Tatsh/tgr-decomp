#include "types-win32.h"
//----- (100603A0) --------------------------------------------------------
LPDIRECTINPUTDEVICEA __thiscall meth_100603A0(#492 * this, HWND hwnd) {
    LPDIRECTINPUTDEVICEA result; // eax
    DWORD v4;                    // eax
    int v5;                      // ebx
    int v6;                      // eax
    int v7;                      // ebx
    int v8;                      // edi
    char v9;                     // al
    char v10;                    // cl
    char v11;                    // dl
    char v12;                    // bl
    int v13;                     // eax
    int v14;                     // ecx
    int v15;                     // ecx
    char v16;                    // dl
    char v17;                    // al
    char v18;                    // dl
    int v19[3];                  // [esp+24h] [ebp-10h] BYREF
    int v20;                     // [esp+30h] [ebp-4h]

    result = dword_10AA2844;
    if (dword_10AA2844)
        return result;
    v4 = getTicks();
    v5 = dword_10AA33AC;
    dword_10AA33AC = v4;
    dword_10AA33B0 += v4 - v5;
    if (dword_10AA33B0 > 120)
        dword_10AA33A8 = 1;
    result = (LPDIRECTINPUTDEVICEA) * ((_DWORD *)this + 20);
    if (!result)
        return result;
    result->lpVtbl->Acquire((IDirectInputDeviceA *)*((_DWORD *)this + 20));
    while ((*(int(__stdcall **)(_DWORD, int, int *))(**((_DWORD **)this + 20) + 36))(
               *((_DWORD *)this + 20), 16, v19) == -2147024866) {
        if ((*(int(__stdcall **)(_DWORD))(**((_DWORD **)this + 20) + 28))(*((_DWORD *)this + 20)) <
            0)
            break;
        (*(void(__stdcall **)(_DWORD))(**((_DWORD **)this + 20) + 28))(*((_DWORD *)this + 20));
    }
    v6 = v19[0] + *(_DWORD *)this;
    v7 = v19[1] + *((_DWORD *)this + 1);
    v8 = v19[2] + *((_DWORD *)this + 2);
    *(_DWORD *)this = v6;
    *((_DWORD *)this + 1) = v7;
    *((_DWORD *)this + 2) = v8;
    if (v6 >= 0) {
        if (v6 >= dword_10AA33B8)
            *(_DWORD *)this = dword_10AA33B8;
    } else {
        *(_DWORD *)this = 0;
    }
    if (v7 >= 0) {
        if (v7 >= dword_10AA33B4)
            *((_DWORD *)this + 1) = dword_10AA33B4;
    } else {
        *((_DWORD *)this + 1) = 0;
    }
    v9 = v20 & 0x80;
    v10 = BYTE1(v20) & 0x80;
    v11 = BYTE2(v20) & 0x80;
    v12 = HIBYTE(v20) & 0x80;
    *((_BYTE *)this + 36) = v20 & 0x80;
    *((_BYTE *)this + 37) = v10;
    *((_BYTE *)this + 38) = v11;
    *((_BYTE *)this + 39) = v12;
    if (v9 || v10 || v11 || v12)
        *((_DWORD *)this + 19) = 1;
    if (dword_10AA2BDC)
        pm_sub_10002930();
    if (dword_10AA2BE0)
        pm_sub_10002970();
    v13 = dword_10AA33A8;
    if (dword_10AA33A8) {
        if (byte_10AA3350 < 0) {
            dword_10AA3398 = 1;
            word_100AB3DC = -1;
            dword_10AA33B0 = 0;
        }
        if ((byte_10AA3358 & 0x80) != 0) {
            dword_10AA339C = 1;
            word_100AB3DC = 1;
            dword_10AA33B0 = 0;
        }
    }
    if (dword_10AA2DAC) {
        v14 = 1;
        word_100AB3DC = -1;
        dword_10AA33B0 = 0;
    } else {
        v14 = dword_10AA33A0;
    }
    if (dword_10AA2DB4) {
        dword_10AA33A4 = 1;
        word_100AB3DC = 1;
        dword_10AA33B0 = 0;
    }
    if (v14) {
        v13 = 0;
        *((_BYTE *)this + 36) = 1;
        *((_DWORD *)this + 19) = 0;
        dword_10AA33A8 = 0;
    }
    if (dword_10AA33A4) {
        v13 = 0;
        *((_BYTE *)this + 37) = 1;
        *((_DWORD *)this + 19) = 0;
        dword_10AA33A8 = 0;
    }
    if (v13) {
        if (dword_10AA3398) {
            --word_10AA286C;
            dword_10AA33A8 = 0;
        }
        if (dword_10AA339C) {
            ++word_10AA286C;
            dword_10AA33A8 = 0;
        }
    }
    dword_10AA33A4 = 0;
    dword_10AA33A0 = 0;
    dword_10AA339C = 0;
    dword_10AA3398 = 0;
    if (*(_DWORD *)this != *((_DWORD *)this + 3) ||
        *((_DWORD *)this + 1) != *((_DWORD *)this + 4) ||
        *((_BYTE *)this + 36) != *((_BYTE *)this + 40) ||
        *((_BYTE *)this + 37) != *((_BYTE *)this + 41) ||
        *((_BYTE *)this + 38) != *((_BYTE *)this + 42) ||
        *((_BYTE *)this + 39) != *((_BYTE *)this + 43)) {
        g_TickCount = getTicks();
    }
    v15 = *((_DWORD *)this + 1);
    v16 = *((_BYTE *)this + 36);
    *((_DWORD *)this + 3) = *(_DWORD *)this;
    v17 = *((_BYTE *)this + 37);
    *((_DWORD *)this + 4) = v15;
    LOBYTE(v15) = *((_BYTE *)this + 38);
    *((_BYTE *)this + 40) = v16;
    v18 = *((_BYTE *)this + 39);
    *((_BYTE *)this + 41) = v17;
    *((_BYTE *)this + 42) = v15;
    *((_BYTE *)this + 43) = v18;
    dword_10AA33C0[0] = 0;
    dword_10AA33C4 = 0;
    dword_10AA33C8 = 0;
    dword_10AA33CC = 0;
    if (*((_BYTE *)this + 36)) {
        if (!*((_DWORD *)this + 11)) {
            *((_DWORD *)this + 11) = 1;
            goto LABEL_58;
        }
    } else if (*((_DWORD *)this + 11)) {
        *((_DWORD *)this + 11) = 0;
        *((_DWORD *)this + 15) = 1;
        *((_DWORD *)this + 19) = 0;
        dword_10AA33C0[0] = 1;
        goto LABEL_58;
    }
    *((_DWORD *)this + 15) = 0;
LABEL_58:
    if (*((_BYTE *)this + 37)) {
        if (!*((_DWORD *)this + 12)) {
            *((_DWORD *)this + 12) = 1;
            goto LABEL_65;
        }
    } else if (*((_DWORD *)this + 12)) {
        *((_DWORD *)this + 12) = 0;
        *((_DWORD *)this + 16) = 1;
        *((_DWORD *)this + 19) = 0;
        dword_10AA33C4 = 1;
        goto LABEL_65;
    }
    *((_DWORD *)this + 16) = 0;
LABEL_65:
    if (!*((_BYTE *)this + 38)) {
        if (*((_DWORD *)this + 13)) {
            *((_DWORD *)this + 13) = 0;
            *((_DWORD *)this + 17) = 1;
            *((_DWORD *)this + 19) = 0;
            dword_10AA33C8 = 1;
            goto LABEL_72;
        }
    LABEL_71:
        *((_DWORD *)this + 17) = 0;
        goto LABEL_72;
    }
    if (*((_DWORD *)this + 13))
        goto LABEL_71;
    *((_DWORD *)this + 13) = 1;
LABEL_72:
    if (*((_BYTE *)this + 39)) {
        if (!*((_DWORD *)this + 14)) {
            *((_DWORD *)this + 14) = 1;
            *(_DWORD *)&SrcStr[8] = this;
            return (LPDIRECTINPUTDEVICEA)sub_1005FFF0();
        }
    } else if (*((_DWORD *)this + 14)) {
        *((_DWORD *)this + 14) = 0;
        *((_DWORD *)this + 18) = 1;
        *((_DWORD *)this + 19) = 0;
        dword_10AA33CC = 1;
        *(_DWORD *)&SrcStr[8] = this;
        return (LPDIRECTINPUTDEVICEA)sub_1005FFF0();
    }
    *((_DWORD *)this + 18) = 0;
    *(_DWORD *)&SrcStr[8] = this;
    return (LPDIRECTINPUTDEVICEA)sub_1005FFF0();
}
// 1006066E: conditional instruction was optimized away because of 'al.1!=0'
// 1006069C: conditional instruction was optimized away because of 'al.1!=0'
// 100606CA: conditional instruction was optimized away because of 'al.1!=0'
// 1006070A: conditional instruction was optimized away because of 'al.1!=0'
// 100AB3DC: using guessed type __int16 word_100AB3DC;
// 10AA286C: using guessed type __int16 word_10AA286C;
// 10AA2BDC: using guessed type int dword_10AA2BDC;
// 10AA2BE0: using guessed type int dword_10AA2BE0;
// 10AA2DAC: using guessed type int dword_10AA2DAC;
// 10AA2DB4: using guessed type int dword_10AA2DB4;
// 10AA3350: using guessed type char byte_10AA3350;
// 10AA3358: using guessed type char byte_10AA3358;
// 10AA3398: using guessed type int dword_10AA3398;
// 10AA339C: using guessed type int dword_10AA339C;
// 10AA33A0: using guessed type int dword_10AA33A0;
// 10AA33A4: using guessed type int dword_10AA33A4;
// 10AA33A8: using guessed type int dword_10AA33A8;
// 10AA33AC: using guessed type int dword_10AA33AC;
// 10AA33B0: using guessed type int dword_10AA33B0;
// 10AA33B4: using guessed type int dword_10AA33B4;
// 10AA33B8: using guessed type int dword_10AA33B8;
// 10AA33C0: using guessed type int dword_10AA33C0[];
// 10AA33C4: using guessed type int dword_10AA33C4;
// 10AA33C8: using guessed type int dword_10AA33C8;
// 10AA33CC: using guessed type int dword_10AA33CC;
// 10AA33E8: using guessed type int g_TickCount;
