#include "types-win32.h"
//----- (10042880) --------------------------------------------------------
int __cdecl sub_10042880(int a1, int *a2) {
    int v3;         // edx
    int v4;         // eax
    int v5;         // ecx
    char Buffer[4]; // [esp+10h] [ebp-108h] BYREF
    char v7[260];   // [esp+14h] [ebp-104h] BYREF

    g_GameMode = 2;
    dword_10AA28E8 = 0;
    dword_10690A18 = 0;
    sub_1003E680();
    strcpy(v7, aTimeattack);
    _itoa(*a2, Buffer, 10);
    strcat(v7, Buffer);
    strcat(v7, aGrf);
    strcpy(aCRallyghostDatFilepath_ptr, v7);
    sub_10071130(1, (FILE *)1);
    if ((dword_10680738 & 0x80u) != 0)
        return 0;
    dword_100AC650 = dword_10AD0980;
    dword_100AC64C = dword_10AD097C;
    dword_100AC65C = dword_10AD0988;
    dword_100AC654 = dword_10AD0984;
    dword_100B4050 = 1;
    dword_100AC648 = (char)dword_10680738;
    dword_10AA2A00 = SHIBYTE(dword_1068073C);
    dword_10AA2A08 = dword_10AD0978;
    dword_100AC658 = dword_10AD098C;
    dword_100BD3E0 = dword_10AD098C;
    v3 = dword_100AC4D8[(char)dword_10680738];
    qmemcpy(&dword_10AA26F0, dword_10ACED34, 0x14Cu);
    dword_100BD3E0 = dword_10AD098C;
    g_HandlingType = dword_10AD0988;
    v4 = dword_100AC4C0[SHIBYTE(dword_1068073C)];
    v5 = dword_100AC420[dword_10AD0984];
    dword_10AA28E8 = 1;
    g_chosenCar = v5;
    g_chosenTrack = v3;
    g_ChosenWeather = v4;
    g_UltraCarHeader = (void *)dword_100AC4A0[dword_10AD097C];
    g_SuspensionType = dword_100AC4B0[dword_10AD0980];
    g_TransmissionType = dword_100AC518[dword_10AD0978];
    sub_1005FCF0();
    dword_10AA289C = 1;
    return 1;
}
// 10094350: using guessed type int g_HandlingType;
// 10094354: using guessed type int g_TransmissionType;
// 10094358: using guessed type int g_SuspensionType;
// 100AA010: using guessed type int g_GameMode;
// 100AC518: using guessed type int dword_100AC518[];
// 100AC648: using guessed type int dword_100AC648;
// 100AC64C: using guessed type int dword_100AC64C;
// 100AC650: using guessed type int dword_100AC650;
// 100AC654: using guessed type int dword_100AC654;
// 100AC658: using guessed type int dword_100AC658;
// 100AC65C: using guessed type int dword_100AC65C;
// 100B380C: using guessed type int g_chosenTrack;
// 100B4050: using guessed type int dword_100B4050;
// 1022B34C: using guessed type int g_chosenCar;
// 1022B350: using guessed type int g_ChosenWeather;
// 10680738: using guessed type int dword_10680738;
// 1068073C: using guessed type int dword_1068073C;
// 10690A18: using guessed type int dword_10690A18;
// 10AA26F0: using guessed type int dword_10AA26F0;
// 10AA289C: using guessed type int dword_10AA289C;
// 10AA28E8: using guessed type int dword_10AA28E8;
// 10AA2A00: using guessed type int dword_10AA2A00;
// 10AA2A08: using guessed type int dword_10AA2A08;
// 10AD0978: using guessed type int dword_10AD0978;
// 10AD097C: using guessed type int dword_10AD097C;
// 10AD0980: using guessed type int dword_10AD0980;
// 10AD0984: using guessed type int dword_10AD0984;
// 10AD0988: using guessed type int dword_10AD0988;
// 10AD098C: using guessed type int dword_10AD098C;
