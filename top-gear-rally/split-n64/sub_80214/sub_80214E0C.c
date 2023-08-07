#include "../../types-n64.h"
//----- (80214E0C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80214E0C(int a1) {
    _DWORD v2[4]; // [sp+40h] [-78h] BYREF
    _DWORD v3[4]; // [sp+50h] [-68h] BYREF
    _DWORD v4[4]; // [sp+60h] [-58h] BYREF
    int v5;       // [sp+84h] [-34h]
    _DWORD *v6;   // [sp+90h] [-28h]

    v4[0] = 757606671;
    v4[1] = 538843691;
    v4[2] = 254549530;
    v4[3] = 740828928;
    v3[0] = 757606671;
    v3[1] = 538843691;
    v3[2] = 253763880;
    v3[3] = 741146624;
    v2[0] = 757606671;
    v2[1] = 538843691;
    v2[2] = 254290221;
    v2[3] = 573056812;
    word_802A4BE8 = 0;
    byte_802724F8 = 1;
    dword_802724F0 = 0;
    byte_80316430 = 0;
    byte_80316431 = 0;
    if (a1) {
        if (a1 == 1) {
            v6 = v3;
            v5 = 14848;
        } else if (a1 == 2 || a1 == 3) {
            v6 = v2;
            v5 = 256;
        }
    } else {
        v6 = v4;
        v5 = 512;
    }
    word_802A4BE8 = 1;
    return 0;
}
// 80214EC0: write access to const memory at 802A4BE8 has been detected
// 80214EDC: write access to const memory at 802724F0 has been detected
// 80214EE0: write access to const memory at 80316430 has been detected
// 80214EE8: write access to const memory at 80316431 has been detected
// 80214FA4: write access to const memory at 80316430 has been detected
// 80214FB0: write access to const memory at 80316430 has been detected
// 80214FDC: write access to const memory at 80316431 has been detected
// 80214FE8: write access to const memory at 80316430 has been detected
// 80215020: write access to const memory at 802724F0 has been detected
// 80215034: write access to const memory at 80316430 has been detected
// 80215078: write access to const memory at 802724F0 has been detected
// 8021510C: write access to const memory at 802724F0 has been detected
// 8021511C: write access to const memory at 802724FC has been detected
// 8021512C: write access to const memory at 80316430 has been detected
// 80215130: write access to const memory at 802724F0 has been detected
// 80215140: write access to const memory at 80316430 has been detected
// 80215160: write access to const memory at 80316430 has been detected
// 802151EC: write access to const memory at 80316430 has been detected
// 80215278: write access to const memory at 80316430 has been detected
// 80215284: write access to const memory at 80316430 has been detected
// 802152B4: write access to const memory at 802724F0 has been detected
// 802152DC: write access to const memory at 80316430 has been detected
// 802152E4: write access to const memory at 80316430 has been detected
// 802152F8: write access to const memory at 80316430 has been detected
// 80215414: write access to const memory at 80316430 has been detected
// 80215478: write access to const memory at 802724F0 has been detected
// 80215510: write access to const memory at 802724F0 has been detected
// 80215548: write access to const memory at 80316430 has been detected
// 80215550: write access to const memory at 80316430 has been detected
// 80215568: write access to const memory at 80316430 has been detected
// 80215580: write access to const memory at 80316430 has been detected
// 8021558C: write access to const memory at 80316430 has been detected
// 80215650: write access to const memory at 802724F0 has been detected
// 8021569C: write access to const memory at 802724F0 has been detected
// 80215844: write access to const memory at 80270784 has been detected
// 80215920: write access to const memory at 802724F0 has been detected
// 80215A04: write access to const memory at 80316430 has been detected
// 80215A34: write access to const memory at 80316430 has been detected
// 80215A54: write access to const memory at 80316430 has been detected
// 80215A5C: write access to const memory at 80316430 has been detected
// 80215A64: write access to const memory at 80316430 has been detected
// 80215AD0: write access to const memory at 80316430 has been detected
// 80215B34: write access to const memory at 802724F0 has been detected
// 80215BD4: write access to const memory at 802724F0 has been detected
// 80215BF8: write access to const memory at 80316430 has been detected
// 80215C04: write access to const memory at 80316430 has been detected
// 80215C14: write access to const memory at 80316430 has been detected
// 80215CA8: write access to const memory at 80316430 has been detected
// 80215D84: write access to const memory at 80316430 has been detected
// 80215D94: write access to const memory at 80316430 has been detected
// 80215DA8: write access to const memory at 80316430 has been detected
// 802163A4: write access to const memory at 80316430 has been detected
// 802163B4: write access to const memory at 80316430 has been detected
// 80216400: write access to const memory at 802724F0 has been detected
// 80216414: write access to const memory at 80316430 has been detected
// 80216434: write access to const memory at 80316430 has been detected
// 80216448: write access to const memory at 80316430 has been detected
// 802166E4: write access to const memory at 80316430 has been detected
// 802166EC: write access to const memory at 80316430 has been detected
// 80216728: write access to const memory at 802724FC has been detected
// 80216764: write access to const memory at 80316430 has been detected
// 80216768: write access to const memory at 802724F0 has been detected
// 802167A4: write access to const memory at 802A4BE8 has been detected
// 802167B8: write access to const memory at 802A4BE8 has been detected
// 80215154: write access to const memory at 8031B1E8 has been detected
// 80215180: write access to const memory at 8031B1E8 has been detected
// 80215AA4: write access to const memory at 802724F0 has been detected
// 80215C98: write access to const memory at 802724F0 has been detected
// 80215D68: write access to const memory at 802724F0 has been detected
// 80216394: write access to const memory at 802724F0 has been detected
// 80216758: write access to const memory at 8031B1E8 has been detected
// 80215AC0: write access to const memory at 802724F0 has been detected
// 80216774: write access to const memory at 802724F8 has been detected
// 80214ED8: write access to const memory at 802724F8 has been detected
// 80271FA8: using guessed type int dword_80271FA8;
// 802724F0: using guessed type int dword_802724F0;
// 802724F4: using guessed type char byte_802724F4;
// 802724F8: using guessed type char byte_802724F8;
// 802724FC: using guessed type char byte_802724FC;
// 802A4BE8: using guessed type __int16 word_802A4BE8;
// 80316420: using guessed type char byte_80316420;
// 80316430: using guessed type char byte_80316430;
// 80316431: using guessed type char byte_80316431;
// 8031D7D8: using guessed type int dword_8031D7D8[512];
// 8036A8E0: using guessed type int dword_8036A8E0[];
