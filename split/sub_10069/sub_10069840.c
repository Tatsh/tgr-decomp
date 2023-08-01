//----- (10069840) --------------------------------------------------------
void sub_10069840() {
    void *v0;             // ecx
    void *v1;             // ecx
    void *v2;             // ecx
    void *v3;             // ecx
    void *ultraCarHeader; // ecx
    void *vehicle;        // ecx
    void *enemy;          // ecx

    dword_106C56D0 = dword_10B4E708;
    dword_106C29A4 = dword_10B4E70C;
    sub_100770C0();
    g_usingGameMode4 = g_GameMode == 4;
    dword_118ABDC0 = 0;
    dword_106909D8 = 0;
    CreateMutexWrapper(v0);
    sub_10034C83();
    sub_10034C32();
    sub_10069800();
    sub_10034A85();
    sub_1002B280(0);
    if (g_GameMode == 1 || g_GameMode == 6) {
        *((_WORD *)dword_10ACED34 + 121) = -1;
        *((_WORD *)dword_10ACED34 + 120) = -1;
        *((_WORD *)dword_10ACED34 + 122) = -1;
    }
    sub_100697E0(1);
    sub_10034C66((int)debugPrint);
    dword_106C664C = 0;
    dword_10B4DF28 = 0;
    dword_100B36FC = 2;
    dword_100B4050 = 1;
    dword_104BBE08 = 1;
    dword_104B0338 = 0;
    dword_104B033C = 0;
    sub_10034C66((int)sub_1002C500);
    ElementCount = 8;
    sub_10036020();
    debugPrint(v1);
    while (!sub_10071130(0, (FILE *)1))
        ;
    sub_10036020();
    debugPrint(v2);
    while (!sub_10071130(2, (FILE *)1))
        ;
    sub_10060D90();
    if (!g_GameMode) {
        sub_1002F460();
    LABEL_11:
        dword_100B4050 = 1;
        goto LABEL_12;
    }
    if (g_GameMode == 2)
        goto LABEL_11;
LABEL_12:
    dword_104BBE08 = g_ChosenWeather;
    *((_DWORD *)dword_10ACED34 + 62) = g_HandlingType;
    *((_DWORD *)dword_10ACED34 + 63) = g_TransmissionType;
    *((_DWORD *)dword_10ACED34 + 65) = g_SuspensionType;
    v3 = g_UltraCarHeader;
    *((_DWORD *)dword_10ACED34 + 64) = g_UltraCarHeader;
    debugPrint(v3);
    debugPrint(ultraCarHeader);
    debugPrint(vehicle);
    debugPrint(enemy);
    sub_10034C7E();
}
// 1006987E: variable 'v0' is possibly undefined
// 10069943: variable 'v1' is possibly undefined
// 10069969: variable 'v2' is possibly undefined
// 10069A19: variable 'ultraCarHeader' is possibly undefined
// 10069A2B: variable 'vehicle' is possibly undefined
// 10069A3D: variable 'enemy' is possibly undefined
// 10094350: using guessed type int g_HandlingType;
// 10094354: using guessed type int g_TransmissionType;
// 10094358: using guessed type int g_SuspensionType;
// 100AA010: using guessed type int g_GameMode;
// 100B36FC: using guessed type int dword_100B36FC;
// 100B4050: using guessed type int dword_100B4050;
// 1022AF14: using guessed type int g_usingGameMode4;
// 1022B350: using guessed type int g_ChosenWeather;
// 104B0338: using guessed type int dword_104B0338;
// 104B033C: using guessed type int dword_104B033C;
// 104BBE08: using guessed type int dword_104BBE08;
// 106909D8: using guessed type int dword_106909D8;
// 106C29A4: using guessed type int dword_106C29A4;
// 106C56D0: using guessed type int dword_106C56D0;
// 106C664C: using guessed type int dword_106C664C;
// 10B4DF28: using guessed type int dword_10B4DF28;
// 10B4E708: using guessed type int dword_10B4E708;
// 10B4E70C: using guessed type int dword_10B4E70C;
// 118ABDC0: using guessed type int dword_118ABDC0;
