//----- (10072080) --------------------------------------------------------
int __cdecl sub_10072080(_DWORD *a1, char a2) {
    if (sub_10073F40(a1) + 9 > 256)
        return 0;
    sub_10073D60(a1, a2 | 0xE0);
    sub_10073D60(a1, g_cPlayers);
    sub_10073D60(a1, g_chosenTrack);
    sub_10073D60(a1, g_ChosenWeather);
    sub_10073D80(g_bcar);
    sub_10073D60(a1, dword_10221280);
    sub_10073D60(a1, g_btire);
    sub_10073D60(a1, g_bsuspension);
    return 1;
}
// 10073D80: using guessed type _DWORD __stdcall sub_10073D80(__int16);
// 10073F40: using guessed type int __thiscall sub_10073F40(_DWORD);
// 100B380C: using guessed type int g_chosenTrack;
// 10221280: using guessed type int dword_10221280;
// 102212C8: using guessed type int g_cPlayers;
// 10221320: using guessed type int g_bcar;
// 1022AF0C: using guessed type int g_bsuspension;
// 1022AF10: using guessed type int g_btire;
// 1022B350: using guessed type int g_ChosenWeather;
