#include "types-n64.h"
//----- (8025E55C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8025E55C(int a1) {
    float v2;     // $f20
    float v3;     // $f22
    int result;   // $v0
    int v5;       // $t1
    float v6;     // [sp+84h] [-4Ch] BYREF
    float v7;     // [sp+88h] [-48h]
    float v8;     // [sp+8Ch] [-44h]
    float v9[14]; // [sp+90h] [-40h] BYREF
    float v10;    // [sp+C8h] [-8h]

    dword_802A4A20 = 0;
    dword_802A4A24 = (int)dword_80379940;
    flt_8037EAA8 = 0.0;
    flt_8037EAAC = -4.5354274e-37;
    flt_8037EAB0 = 0.0;
    flt_8037EAC8 = -4.649248e-18;
    flt_8037EACC = 0.0;
    flt_8037EAD0 = 1.1496965e-24;
    dword_802A4A28 = 0;
    dword_802A4A2C = 0;
    sub_8022D7E0(0, 128, 128, 128, 255);
    v7 = 0.1;
    v6 = 0.1;
    v8 = 0.1;
    sub_80258FD4((float *)(a1 + 188), v9, &v6);
    sub_8025D060(a1, v9);
    sub_8022D7E0(0, 128, 128, 0, 255);
    v2 = 0.033333335;
    v6 = 1.0 / *(float *)(a1 + 476);
    v7 = 1.0 / *(float *)(a1 + 480);
    v8 = 1.0 / *(float *)(a1 + 484);
    if (0.033333335 > 0.0020000001) {
        v3 = 0.033333335 / 4.0;
        do {
            if (sub_8025D368(a1))
                debugPrint("Standing on it's F'in Nose damnit\n");
            sub_8025FDE4();
            sub_80258530(a1 + 344, a1 + 276, v3);
            sub_802583DC(a1 + 188, a1 + 344);
            sub_80258FD4((float *)(a1 + 188), v9, &v6);
            v10 = v10 - *(float *)(a1 + 488);
            if (sub_8025DFCC(a1)) {
                sub_80258248((float *)(a1 + 344));
                sub_802583DC(a1 + 188, a1 + 344);
            }
            sub_80260B20((char *)(a1 + 276), (const char *)(a1 + 344), 68);
            v2 = v2 - v3;
        } while (v2 > 0.0020000001);
    }
    sub_802583DC(a1 + 188, a1 + 344);
    sub_8022D7E0(0, 128, 128, 0, 255);
    result = (int)sub_80260B20((char *)(a1 + 276), (const char *)(a1 + 344), 68);
    if (*(float *)(a1 + 228) < 0.5) {
        result = *(_DWORD *)(a1 + 504);
        if (result < 0) {
            result = -1;
            *(_DWORD *)(a1 + 504) = -1;
            v5 = -2;
        } else {
            v5 = result - 1;
        }
        *(_DWORD *)(a1 + 504) = v5;
    } else {
        *(_DWORD *)(a1 + 504) = 35;
    }
    return result;
}
// 8025E55C: write access to const memory at 802A4A20 has been detected
// 8025E574: write access to const memory at 802A4A24 has been detected
// 8025E5AC: write access to const memory at 802A4A28 has been detected
// 8025E5E4: write access to const memory at 802A4A2C has been detected
// 8025E590: write access to const memory at 8037EAA8 has been detected
// 8025E594: write access to const memory at 8037EAAC has been detected
// 8025E598: write access to const memory at 8037EAB0 has been detected
// 8025E59C: write access to const memory at 8037EAC8 has been detected
// 8025E5A0: write access to const memory at 8037EACC has been detected
// 8025E5A4: write access to const memory at 8037EAD0 has been detected
// 802A4A20: using guessed type int dword_802A4A20;
// 802A4A24: using guessed type int dword_802A4A24;
// 802A4A28: using guessed type int dword_802A4A28;
// 802A4A2C: using guessed type int dword_802A4A2C;
// 80379940: using guessed type int dword_80379940[400];
// 8037EAA8: using guessed type float flt_8037EAA8;
// 8037EAAC: using guessed type float flt_8037EAAC;
// 8037EAB0: using guessed type float flt_8037EAB0;
// 8037EAC8: using guessed type float flt_8037EAC8;
// 8037EACC: using guessed type float flt_8037EACC;
// 8037EAD0: using guessed type float flt_8037EAD0;
