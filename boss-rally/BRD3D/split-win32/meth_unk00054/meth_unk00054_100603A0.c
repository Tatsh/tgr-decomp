#include "types-win32.h"
//----- (100603A0) --------------------------------------------------------
LPDIRECTINPUTDEVICEA __thiscall meth_unk00054_100603A0(unk00054 *this, HWND hwnd) {
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
    v4 = GetTicks();
    v5 = dword_10AA33AC;
    dword_10AA33AC = v4;
    dword_10AA33B0 += v4 - v5;
    if (dword_10AA33B0 > 120)
        dword_10AA33A8 = 1;
    result = this->lpDIDeviceA;
    if (!result)
        return result;
    result->lpVtbl->Acquire(this->lpDIDeviceA);
    while (this->lpDIDeviceA->lpVtbl->GetDeviceState(this->lpDIDeviceA, 16, v19) == -2147024866) {
        if (this->lpDIDeviceA->lpVtbl->Acquire(this->lpDIDeviceA) < 0)
            break;
        this->lpDIDeviceA->lpVtbl->Acquire(this->lpDIDeviceA);
    }
    v6 = v19[0] + this->field_0;
    v7 = v19[1] + *(_DWORD *)this->gap4;
    v8 = v19[2] + *(_DWORD *)&this->gap4[4];
    this->field_0 = v6;
    *(_DWORD *)this->gap4 = v7;
    *(_DWORD *)&this->gap4[4] = v8;
    if (v6 >= 0) {
        if (v6 >= dword_10AA33B8)
            this->field_0 = dword_10AA33B8;
    } else {
        this->field_0 = 0;
    }
    if (v7 >= 0) {
        if (v7 >= dword_10AA33B4)
            *(_DWORD *)this->gap4 = dword_10AA33B4;
    } else {
        *(_DWORD *)this->gap4 = 0;
    }
    v9 = v20 & 0x80;
    v10 = BYTE1(v20) & 0x80;
    v11 = BYTE2(v20) & 0x80;
    v12 = HIBYTE(v20) & 0x80;
    this->gap4[32] = v20 & 0x80;
    this->gap4[33] = v10;
    this->gap4[34] = v11;
    this->gap4[35] = v12;
    if (v9 || v10 || v11 || v12)
        *(_DWORD *)&this->gap3C[16] = 1;
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
        this->gap4[32] = 1;
        *(_DWORD *)&this->gap3C[16] = 0;
        dword_10AA33A8 = 0;
    }
    if (dword_10AA33A4) {
        v13 = 0;
        this->gap4[33] = 1;
        *(_DWORD *)&this->gap3C[16] = 0;
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
    if (this->field_0 != *(_DWORD *)&this->gap4[8] ||
        *(_DWORD *)this->gap4 != *(_DWORD *)&this->gap4[12] || this->gap4[32] != this->gap4[36] ||
        this->gap4[33] != this->gap4[37] || this->gap4[34] != this->gap4[38] ||
        this->gap4[35] != this->gap4[39]) {
        g_TickCount = GetTicks();
    }
    v15 = *(_DWORD *)this->gap4;
    v16 = this->gap4[32];
    *(_DWORD *)&this->gap4[8] = this->field_0;
    v17 = this->gap4[33];
    *(_DWORD *)&this->gap4[12] = v15;
    LOBYTE(v15) = this->gap4[34];
    this->gap4[36] = v16;
    v18 = this->gap4[35];
    this->gap4[37] = v17;
    this->gap4[38] = v15;
    this->gap4[39] = v18;
    dword_10AA33C0[0] = 0;
    dword_10AA33C4 = 0;
    dword_10AA33C8 = 0;
    dword_10AA33CC = 0;
    if (this->gap4[32]) {
        if (!this->field_2C) {
            this->field_2C = 1;
            goto LABEL_58;
        }
    } else if (this->field_2C) {
        this->field_2C = 0;
        *(_DWORD *)this->gap3C = 1;
        *(_DWORD *)&this->gap3C[16] = 0;
        dword_10AA33C0[0] = 1;
        goto LABEL_58;
    }
    *(_DWORD *)this->gap3C = 0;
LABEL_58:
    if (this->gap4[33]) {
        if (!this->field_30) {
            this->field_30 = 1;
            goto LABEL_65;
        }
    } else if (this->field_30) {
        this->field_30 = 0;
        *(_DWORD *)&this->gap3C[4] = 1;
        *(_DWORD *)&this->gap3C[16] = 0;
        dword_10AA33C4 = 1;
        goto LABEL_65;
    }
    *(_DWORD *)&this->gap3C[4] = 0;
LABEL_65:
    if (!this->gap4[34]) {
        if (this->field_34) {
            this->field_34 = 0;
            *(_DWORD *)&this->gap3C[8] = 1;
            *(_DWORD *)&this->gap3C[16] = 0;
            dword_10AA33C8 = 1;
            goto LABEL_72;
        }
    LABEL_71:
        *(_DWORD *)&this->gap3C[8] = 0;
        goto LABEL_72;
    }
    if (this->field_34)
        goto LABEL_71;
    this->field_34 = 1;
LABEL_72:
    if (this->gap4[35]) {
        if (!this->field_38) {
            this->field_38 = 1;
            *(_DWORD *)&SrcStr[8] = this;
            return (LPDIRECTINPUTDEVICEA)sub_1005FFF0();
        }
    } else if (this->field_38) {
        this->field_38 = 0;
        *(_DWORD *)&this->gap3C[12] = 1;
        *(_DWORD *)&this->gap3C[16] = 0;
        dword_10AA33CC = 1;
        *(_DWORD *)&SrcStr[8] = this;
        return (LPDIRECTINPUTDEVICEA)sub_1005FFF0();
    }
    *(_DWORD *)&this->gap3C[12] = 0;
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
