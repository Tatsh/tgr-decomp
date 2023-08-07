#include "../../types-n64.h"
//----- (80211D70) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_80211D70(int a1) {
    int v1;          // $v0
    int v2;          // [sp+34h] [-ACh]
    const char **v3; // [sp+38h] [-A8h]
    _DWORD v4[15];   // [sp+48h] [-98h] BYREF
    _DWORD v5[14];   // [sp+84h] [-5Ch] BYREF
    int v6;          // [sp+DCh] [-4h]

    v5[0] = 757606671;
    v5[1] = 538843691;
    v5[3] = 740828928;
    v5[2] = 254549530;
    v4[12] = 538843691;
    v4[11] = 757606671;
    v4[13] = 253763880;
    v4[14] = 741146624;
    v4[8] = 538843691;
    v4[7] = 757606671;
    v4[9] = 254290221;
    v4[10] = 573056812;
    v4[6] = 0;
    v4[1] = "SAVE SEASON DATA";
    v4[0] = "LOAD SEASON DATA";
    v4[2] = "LOAD GHOST CAR DATA";
    v4[3] = "SAVE GHOST CAR DATA";
    v4[5] = "SAVE OPTIONS";
    v4[4] = "LOAD OPTIONS";
    word_802A4BE8 = 0;
    byte_802724F8 = 1;
    byte_80316422 = 0;
    byte_80316423 = 1;
    dword_802724F0 = 0;
    byte_80316428 = 0;
    sub_80242940();
    osViBlack(1);
    sub_80219A3C();
    sub_8021AA08();
    osViBlack(1);
    sub_80219A3C();
    sub_8021AA08();
    AllocPaintShopGfxMem((int)&dword_8028CB40);
    AllocPaintShopGfxMem((int)&dword_8028CB70);
    AllocPaintShopGfxMem((int)&dword_8028D0B0);
    AllocPaintShopGfxMem((int)&dword_8028D0E0);
    dword_80272500 = (char *)sub_8024296C(14848);
    byte_80272550 = 0;
    byte_80272554 = 0;
    sub_80223688(1.0, 0.2);
    sub_8021C4B4();
    sub_80223F54();
    sub_80219A3C();
    sub_8021B458();
    sub_80219BF0(0, 0, 320, 240, 1);
    sub_80217C94();
    sub_80217FB8();
    sub_80245798((int)&dword_8028CB40);
    sub_80245604((int)&dword_8028CB70, 42, 22);
    v5[12] = v5;
    v5[9] = 512;
    sub_8022F4F8();
    sub_8022F504();
    sub_8022F5D0(30);
    formatter("%ryDATA LOAD/SAVE", 160, 41);
    sub_8022F5D0(16);
    v2 = 87;
    v3 = (const char **)v4;
    v1 = 0;
    do {
        if (v1) {
            v6 = v1;
            sub_8022F530(255, 245, 0, 200, 0, 0);
        } else {
            v6 = 0;
            sub_8022F530(255, 255, 255, 255, 255, 0);
        }
        formatter(*v3, 158, v2);
        v1 = v6 + 1;
        v2 += 18;
        ++v3;
    } while (v6 != 5);
    sub_80245604((int)&dword_8028D0B0, 202, 432);
    sub_80245604((int)&dword_8028D0E0, 322, 432);
    sub_8022F514();
    sub_8022F5D0(11);
    formatter("%wwSelect", 116, 225);
    formatter("%wwGo Back", 176, 225);
    byte_80316423 = 1;
    sub_80255ADC((int)dword_8036A8E0);
    sub_80255910(dword_8036A8E0, 8);
    byte_80272550 = 5;
    sub_80255910(dword_8036A8E0, 32);
    byte_80272554 = 15;
    dword_8028A858 = 8;
    MEMORY[4] = 0;
    MEMORY[0] = -419430400;
    sub_80223A70();
    sub_8021AA08();
    if (sub_80223988()) {
        byte_802724F8 = 0;
        sub_80219A3C();
        sub_80217FB8();
        sub_8021AA08();
        sub_80219A3C();
        sub_80217FB8();
        sub_8021AA08();
        dword_802724F0 = 0;
        byte_80316422 = 0;
        word_802A4BE8 = 1;
        sub_8021C6E4((int)sub_80211150);
    }
    word_802A4BE8 = 0;
}
// 80211E4C: write access to const memory at 802A4BE8 has been detected
// 80211E5C: write access to const memory at 802724F8 has been detected
// 80211E64: write access to const memory at 80316422 has been detected
// 80211E74: write access to const memory at 80316423 has been detected
// 80211E78: write access to const memory at 802724F0 has been detected
// 80211E88: write access to const memory at 80316428 has been detected
// 80211EFC: write access to const memory at 80272500 has been detected
// 80211F10: write access to const memory at 80272550 has been detected
// 80211F2C: write access to const memory at 80272550 has been detected
// 80211F3C: write access to const memory at 80272550 has been detected
// 80211F44: write access to const memory at 80272554 has been detected
// 8021232C: write access to const memory at 80272550 has been detected
// 80212350: write access to const memory at 80272550 has been detected
// 80212440: write access to const memory at 80272554 has been detected
// 80212458: write access to const memory at 80316423 has been detected
// 802124F0: write access to const memory at 80272550 has been detected
// 80212500: write access to const memory at 80272550 has been detected
// 80212534: write access to const memory at 80272550 has been detected
// 8021253C: write access to const memory at 80272550 has been detected
// 80212598: write access to const memory at 80272554 has been detected
// 802125BC: write access to const memory at 80272554 has been detected
// 802125EC: write access to const memory at 80272554 has been detected
// 80212614: write access to const memory at 80316428 has been detected
// 8021261C: write access to const memory at 80272554 has been detected
// 8021262C: write access to const memory at 80316428 has been detected
// 80212660: write access to const memory at 802724F0 has been detected
// 80212674: write access to const memory at 80272554 has been detected
// 802126BC: write access to const memory at 802724F0 has been detected
// 80212744: write access to const memory at 802724F0 has been detected
// 80212754: write access to const memory at 802724FC has been detected
// 80212764: write access to const memory at 80272554 has been detected
// 80212768: write access to const memory at 802724F0 has been detected
// 8021277C: write access to const memory at 80272554 has been detected
// 802127A0: write access to const memory at 80272554 has been detected
// 80212820: write access to const memory at 80272554 has been detected
// 802128B4: write access to const memory at 80272554 has been detected
// 802128C4: write access to const memory at 80272554 has been detected
// 802128F4: write access to const memory at 802724F0 has been detected
// 80212914: write access to const memory at 80272554 has been detected
// 80212924: write access to const memory at 80272554 has been detected
// 80212930: write access to const memory at 80316423 has been detected
// 80212A44: write access to const memory at 80272554 has been detected
// 80212A98: write access to const memory at 802724F0 has been detected
// 80212B38: write access to const memory at 802724F0 has been detected
// 80212B80: write access to const memory at 80272554 has been detected
// 80212B90: write access to const memory at 80272554 has been detected
// 80212BA0: write access to const memory at 80272554 has been detected
// 80212BB0: write access to const memory at 80272554 has been detected
// 80212BE4: write access to const memory at 80272554 has been detected
// 80212BF4: write access to const memory at 80272554 has been detected
// 80212C04: write access to const memory at 80272554 has been detected
// 80212CD4: write access to const memory at 802724F0 has been detected
// 80212D28: write access to const memory at 802724F0 has been detected
// 80212D48: write access to const memory at 80272554 has been detected
// 80212ED0: write access to const memory at 80272554 has been detected
// 80212ED8: write access to const memory at 80272554 has been detected
// 80212EEC: write access to const memory at 80316422 has been detected
// 80212F24: write access to const memory at 80270784 has been detected
// 80212F40: write access to const memory at 8028B940 has been detected
// 80212F9C: write access to const memory at 80272554 has been detected
// 80212FA4: write access to const memory at 80272554 has been detected
// 80212FB8: write access to const memory at 80316422 has been detected
// 8021302C: write access to const memory at 802724F0 has been detected
// 80213114: write access to const memory at 80272554 has been detected
// 80213124: write access to const memory at 80272554 has been detected
// 80213158: write access to const memory at 802724F0 has been detected
// 80213184: write access to const memory at 802724F0 has been detected
// 80213198: write access to const memory at 80272554 has been detected
// 80213254: write access to const memory at 802724F0 has been detected
// 802132F0: write access to const memory at 802724F0 has been detected
// 80213310: write access to const memory at 80272554 has been detected
// 80213320: write access to const memory at 80272554 has been detected
// 80213330: write access to const memory at 80272554 has been detected
// 8021333C: write access to const memory at 80316423 has been detected
// 802134F0: write access to const memory at 80272554 has been detected
// 80213548: write access to const memory at 80272554 has been detected
// 80213558: write access to const memory at 80272554 has been detected
// 802135E4: write access to const memory at 802724F0 has been detected
// 80213610: write access to const memory at 80272554 has been detected
// 80213620: write access to const memory at 80272554 has been detected
// 802136DC: write access to const memory at 802724F0 has been detected
// 80213708: write access to const memory at 80272554 has been detected
// 80213718: write access to const memory at 80272554 has been detected
// 80213724: write access to const memory at 802724F0 has been detected
// 80213738: write access to const memory at 80272554 has been detected
// 802137D4: write access to const memory at 80272554 has been detected
// 802138B0: write access to const memory at 80272554 has been detected
// 802138C0: write access to const memory at 80272554 has been detected
// 802138CC: write access to const memory at 80316423 has been detected
// 80214158: write access to const memory at 80272554 has been detected
// 80214168: write access to const memory at 80272554 has been detected
// 802141B4: write access to const memory at 802724F0 has been detected
// 802141C8: write access to const memory at 80272554 has been detected
// 802141E0: write access to const memory at 802724F0 has been detected
// 8021421C: write access to const memory at 80272554 has been detected
// 80214228: write access to const memory at 80316423 has been detected
// 80214598: write access to const memory at 80272554 has been detected
// 8021460C: write access to const memory at 80272554 has been detected
// 80214644: write access to const memory at 80272554 has been detected
// 80214660: write access to const memory at 80272554 has been detected
// 80214670: write access to const memory at 80272554 has been detected
// 8021467C: write access to const memory at 80316423 has been detected
// 802147C4: write access to const memory at 80272554 has been detected
// 802147FC: write access to const memory at 80272554 has been detected
// 80214804: write access to const memory at 80272554 has been detected
// 80214838: write access to const memory at 802724FC has been detected
// 80214888: write access to const memory at 80272554 has been detected
// 802148F4: write access to const memory at 802724F8 has been detected
// 80214938: write access to const memory at 802724F0 has been detected
// 80214954: write access to const memory at 80316422 has been detected
// 80214964: write access to const memory at 802A4BE8 has been detected
// 80214990: write access to const memory at 80316422 has been detected
// 802149A0: write access to const memory at 802A4BE8 has been detected
// 802149BC: write access to const memory at 80272550 has been detected
// 802149D4: write access to const memory at 802A4BE8 has been detected
// 802149FC: write access to const memory at 802A4BE8 has been detected
// 80214A1C: write access to const memory at 802A4BE8 has been detected
// 80214A2C: write access to const memory at 802A4BE8 has been detected
// 80212794: write access to const memory at 8031B1E8 has been detected
// 802127C0: write access to const memory at 8031B1E8 has been detected
// 802137C4: write access to const memory at 802724F0 has been detected
// 80213894: write access to const memory at 802724F0 has been detected
// 80214148: write access to const memory at 802724F0 has been detected
// 80214868: write access to const memory at 8031B1E8 has been detected
// 802148C8: write access to const memory at 8028A858 has been detected
// 80212508: conditional instruction was optimized away because of '$t4.4==8'
// 802125A0: conditional instruction was optimized away because of '$t6.4==20'
// 80271FA8: using guessed type int dword_80271FA8;
// 802724F0: using guessed type int dword_802724F0;
// 802724F4: using guessed type char byte_802724F4;
// 802724F8: using guessed type char byte_802724F8;
// 802724FC: using guessed type char byte_802724FC;
// 80272550: using guessed type char byte_80272550;
// 80272554: using guessed type char byte_80272554;
// 8028A858: using guessed type int dword_8028A858;
// 8028AAB0: using guessed type int gWidth;
// 8028AAB4: using guessed type int gHeight;
// 8028B940: using guessed type int dword_8028B940;
// 8028CB40: using guessed type int dword_8028CB40;
// 8028CB70: using guessed type int dword_8028CB70;
// 8028D0B0: using guessed type int dword_8028D0B0;
// 8028D0E0: using guessed type int dword_8028D0E0;
// 802A4BE8: using guessed type __int16 word_802A4BE8;
// 80316420: using guessed type char byte_80316420;
// 80316422: using guessed type char byte_80316422;
// 80316423: using guessed type char byte_80316423;
// 80316428: using guessed type char byte_80316428;
// 8031D7D8: using guessed type int dword_8031D7D8[512];
// 8036A8E0: using guessed type int dword_8036A8E0[];
