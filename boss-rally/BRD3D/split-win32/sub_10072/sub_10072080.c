#include "../../types-win32.h"
//----- (10072080) --------------------------------------------------------
int __cdecl sub_10072080(_DWORD *a1, char a2) {
    if (meth_10073F40(a1) + 9 > 256)
        return 0;
    meth_10073D60(a1, a2 | 0xE0);
    meth_10073D60(a1, g_cPlayers);
    meth_10073D60(a1, g_chosenTrack);
    meth_10073D60(a1, g_ChosenWeather);
    meth_10073D80(a1, g_bcar);
    meth_10073D60(a1, dword_10221280);
    meth_10073D60(a1, g_btire);
    meth_10073D60(a1, g_bsuspension);
    return 1;
}
// 100B380C: using guessed type int g_chosenTrack;
// 10221280: using guessed type int dword_10221280;
// 102212C8: using guessed type int g_cPlayers;
// 10221320: using guessed type int g_bcar;
// 1022AF0C: using guessed type int g_bsuspension;
// 1022AF10: using guessed type int g_btire;
// 1022B350: using guessed type int g_ChosenWeather;
