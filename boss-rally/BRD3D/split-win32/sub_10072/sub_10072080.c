#include "types-win32.h"
//----- (10072080) --------------------------------------------------------
int __cdecl sub_10072080(_DWORD *a1, char a2) {
    if (meth_unk00214_10073F40((unk00214 *)a1) + 9 > 256)
        return 0;
    meth_unk00214_10073D60((unk00214 *)a1, a2 | 0xE0);
    meth_unk00214_10073D60((unk00214 *)a1, gCPlayers);
    meth_unk00214_10073D60((unk00214 *)a1, gChosenTrack);
    meth_unk00214_10073D60((unk00214 *)a1, gChosenWeather0);
    meth_unk00214_10073D80((unk00214 *)a1, gBcar);
    meth_unk00214_10073D60((unk00214 *)a1, dword_10221280);
    meth_unk00214_10073D60((unk00214 *)a1, gBtire);
    meth_unk00214_10073D60((unk00214 *)a1, gBsuspension);
    return 1;
}
// 100B380C: using guessed type int gChosenTrack;
// 10221280: using guessed type int dword_10221280;
// 102212C8: using guessed type int gCPlayers;
// 10221320: using guessed type int gBcar;
// 1022AF0C: using guessed type int gBsuspension;
// 1022AF10: using guessed type int gBtire;
// 1022B350: using guessed type int gChosenWeather0;
