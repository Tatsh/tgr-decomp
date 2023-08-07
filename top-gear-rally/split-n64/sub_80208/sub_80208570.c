#include "../../types-n64.h"
//----- (80208570) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_80208570() {
    byte_80270844 = 1;
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
    sub_80223688(1.0, 0.2);
    word_8028DBB0 = 0;
    sub_8021C4B4();
    sub_80223F54();
    sub_80219A3C();
    sub_8021B458();
    sub_80219BF0(0, 0, 320, 240, 1);
    sub_80217C94();
    sub_80217FB8();
    sub_80245798((int)&dword_8028CB40);
    sub_80245604((int)&dword_8028CB70, 42, 22);
    sub_8022F4F8();
    sub_8022F504();
    sub_8022F5D0(30);
    formatter("%ryWARNING", 160, 41);
    sub_8022F5D0(18);
    formatter("%ywCONTROLLER NOT FOUND", 160, 124);
    sub_80245604((int)&dword_8028D0B0, 254, 432);
    sub_8022F514();
    sub_8022F5D0(11);
    formatter("%wwPROCEED", 142, 225);
    dword_8028A858 = 8;
    MEMORY[4] = 0;
    MEMORY[0] = -419430400;
    sub_80223A70();
    sub_8021AA08();
    word_8028DBB0 = 1;
    if (sub_80223988()) {
        byte_80270844 = 0;
        sub_802429EC();
        dword_802724F0 = 0;
        word_8028DBB0 = 0;
        sub_8021C6E4((int)sub_802111E0);
    }
}
// 80208590: write access to const memory at 80270844 has been detected
// 802085FC: write access to const memory at 8028DBB0 has been detected
// 802088A0: write access to const memory at 8028DBB0 has been detected
// 802088C8: write access to const memory at 80270844 has been detected
// 802088CC: write access to const memory at 802724F0 has been detected
// 802088DC: write access to const memory at 8028DBB0 has been detected
// 80208838: write access to const memory at 8028A858 has been detected
// 80270844: using guessed type char byte_80270844;
// 802724F0: using guessed type int dword_802724F0;
// 8028A858: using guessed type int dword_8028A858;
// 8028CB40: using guessed type int dword_8028CB40;
// 8028CB70: using guessed type int dword_8028CB70;
// 8028D0B0: using guessed type int dword_8028D0B0;
// 8028DBB0: using guessed type __int16 word_8028DBB0;
// 8036A8E0: using guessed type int dword_8036A8E0[];
