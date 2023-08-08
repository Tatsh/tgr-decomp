#include "types-n64.h"
//----- (80264B60) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int *__fastcall sub_80264B60(char *a1) {
    sub_802674D0(a1, (int)dword_8037F330, 64);
    dword_8037F330[4] = sub_8026B750(0x3AA850DEu);
    dword_8037F330[6] = sub_8026B750(0x55B34C60u);
    dword_8037F330[8] = sub_8026B750(0x548823E2u);
    dword_8037F330[10] = sub_8026B750(0x6F4FB85Fu);
    dword_8037F330[11] = sub_8026B750(0xC109B797);
    dword_8037F330[12] = sub_8026B750(0x149D70FDu);
    dword_8037F330[14] = sub_8026B750(0xB9AEAD54);
    return dword_8037F330;
}
// 80264C64: write access to const memory at 8037F368 has been detected
// 80264C44: write access to const memory at 8037F360 has been detected
// 80264C24: write access to const memory at 8037F35C has been detected
// 80264C04: write access to const memory at 8037F358 has been detected
// 80264BE4: write access to const memory at 8037F350 has been detected
// 80264BC4: write access to const memory at 8037F348 has been detected
// 80264BA4: write access to const memory at 8037F340 has been detected
// 8037F330: using guessed type int dword_8037F330[16];
