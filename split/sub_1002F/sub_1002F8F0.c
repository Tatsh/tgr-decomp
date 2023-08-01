//----- (1002F8F0) --------------------------------------------------------
int sub_1002F8F0() {
    int result;  // eax
    _DWORD *v1;  // ecx
    DWORD ticks; // eax
    __unk0 *v3;  // eax

    switch (dword_10690A14) {
    case 0:
        sub_10038EC0();
        pm_sub_10073320(0);
        sub_1005FDB0();
        dword_10690A14 = 4;
        return 1;
    case 1:
        dword_10690A14 = 2;
        return 1;
    case 2:
        ++dword_10690A10;
        sub_10034C73();
        return dword_100AA5A8;
    case 3:
        sub_1006A9C0(1, dword_10B4E6E8, dword_10B4E6EC, dword_10B4E6F0, dword_10B4E6F4);
        sub_10008E30(g_gsu0, aLoadingImg, 0);
        sub_1006A9C0(1, dword_10B4E6E8, dword_10B4E6EC, dword_10B4E6F0, dword_10B4E6F4);
        sub_10069840();
        dword_10690A14 = 1;
        return 1;
    case 4:
        v1 = dword_10AA2904;
        if (!dword_10AA2904 && !dword_100AC300) {
            sub_100734F0();
            dword_10690A14 = 3;
            return 1;
        }
        if (!dword_10AA2904 && dword_100AC300) {
            pm_sub_10073320(0);
            sub_1005D440();
            ticks = getTicks();
            v1 = dword_10AA2904;
            g_TickCount = ticks;
        }
        if (g_Runbenchmark) {
            result = 1;
            g_GameMode = 1;
            g_chosenTrack = 2;
            g_chosenCar = 5;
            g_ChosenWeather = 0;
            g_ReadJoystick = 0;
            dword_10B4E1D4 = (int)g_Config;
            g_HandlingType = 1;
            g_SuspensionType = 1;
            g_UltraCarHeader = (void *)2;
            g_TransmissionType = 1;
            dword_100AC300 = 0;
            dword_10690A14 = 3;
            return result;
        }
        if (v1[3]) {
            (*(void(__thiscall **)(_DWORD *))(*v1 + 12))(v1);
        } else {
            v3 = g_gsu0->u0;
            if (v3) {
                sub_1001AC80(
                    v3, &dword_10690A0C, &dword_10690A08, &dword_10690A00, &dword_10690A04);
                v1 = dword_10AA2904;
            }
            (*(void(__thiscall **)(_DWORD *))(*v1 + 16))(v1);
        }
        if (!dword_10AA2904 || !dword_100AC300)
            return 1;
        if (dword_10AA2868) {
            if (g_TickCount + 90000 < getTicks()) {
                *((_DWORD *)dword_10AA2904 + 26) = 0;
                (*(void(__thiscall **)(void *, _DWORD))(*(_DWORD *)dword_10AA2904 + 24))(
                    dword_10AA2904, 0);
                g_GameMode = 4;
                dword_106805B8 = 0;
                return 1;
            }
        } else {
            g_TickCount = getTicks();
        }
        return 1;
    }
}
// 10094350: using guessed type int g_HandlingType;
// 10094354: using guessed type int g_TransmissionType;
// 10094358: using guessed type int g_SuspensionType;
// 100AA010: using guessed type int g_GameMode;
// 100AA5A8: using guessed type int dword_100AA5A8;
// 100AC300: using guessed type int dword_100AC300;
// 100B380C: using guessed type int g_chosenTrack;
// 1022B34C: using guessed type int g_chosenCar;
// 1022B350: using guessed type int g_ChosenWeather;
// 106805B8: using guessed type int dword_106805B8;
// 10690A10: using guessed type int dword_10690A10;
// 10690A14: using guessed type int dword_10690A14;
// 10AA2868: using guessed type int dword_10AA2868;
// 10AA33E8: using guessed type int g_TickCount;
// 10B4E1D0: using guessed type int g_ReadJoystick;
// 10B4E1D4: using guessed type int dword_10B4E1D4;
// 10B4E6E8: using guessed type int dword_10B4E6E8;
// 10B4E6EC: using guessed type int dword_10B4E6EC;
// 10B4E6F0: using guessed type int dword_10B4E6F0;
// 10B4E6F4: using guessed type int dword_10B4E6F4;
// 118ABDC4: using guessed type int g_Runbenchmark;
// 118ABE08: using guessed type int dword_118ABE08;
