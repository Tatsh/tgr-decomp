#include "types-win32.h"
//----- (10007BD0) --------------------------------------------------------
void __cdecl ReadSettings(char *Str) {
    int v1;                      // eax
    CHK_File *chkfpBossRallyINI; // esi
    char *v3;                    // edx
    char *v4;                    // edx
    char *v5;                    // eax
    char *v6;                    // eax
    char *v7;                    // edx
    char *v8;                    // edx
    char *v9;                    // edx
    char *v10;                   // edx
    char *v11;                   // edx
    char *v12;                   // edx
    char *v13;                   // edx
    char *v14;                   // edx
    char *v15;                   // edx
    char *v16;                   // edx
    char *v17;                   // edx
    char *v18;                   // edx
    char *v19;                   // edx
    CHK_File *i;                 // [esp+10h] [ebp-104h]
    char settingNameWithEq[7];   // [esp+14h] [ebp-100h] BYREF
    char v22;                    // [esp+1Bh] [ebp-F9h] BYREF
    char v23;                    // [esp+1Ch] [ebp-F8h] BYREF
    char v24;                    // [esp+1Dh] [ebp-F7h] BYREF
    char v25[2];                 // [esp+1Eh] [ebp-F6h] BYREF
    char String;                 // [esp+20h] [ebp-F4h] BYREF
    char v27;                    // [esp+21h] [ebp-F3h] BYREF
    char v28;                    // [esp+22h] [ebp-F2h] BYREF
    char v29;                    // [esp+23h] [ebp-F1h] BYREF
    char v30;                    // [esp+24h] [ebp-F0h] BYREF
    char v31[7];                 // [esp+25h] [ebp-EFh] BYREF
    char v32[232];               // [esp+2Ch] [ebp-E8h] BYREF

    strcpy(bossRallyIniPath, g_InstallPath);
    strcat(bossRallyIniPath, aBossrallyIni);
    LOBYTE(v1) = CHK_FileExists(bossRallyIniPath);
    if (v1) {
        chkfpBossRallyINI = CHK_FReadOpen(bossRallyIniPath);
        for (i = chkfpBossRallyINI; readBytes(settingNameWithEq, 256, &i->pfil);
             chkfpBossRallyINI = i) {
            if (!strncmp(settingNameWithEq, SubStr, 0xCu)) {
                g_NetworkPlay = atoi(&String);
            } else if (!strncmp(settingNameWithEq, aChosentrack, 0xCu)) {
                g_chosenTrack = atoi(&String);
            } else if (!strncmp(settingNameWithEq, aChosencar, 0xAu)) {
                g_chosenCar = atoi(v25);
            } else if (!strncmp(settingNameWithEq, aChosenweather, 0xEu)) {
                g_ChosenWeather = atoi(&v28);
            } else if (!strncmp(settingNameWithEq, aGamemode, 9u)) {
                g_GameMode = atoi(&v24);
            } else if (!strncmp(settingNameWithEq, aReadjoystick, 0xDu)) {
                g_ConfigJoystickIndex = atoi(&v27);
                switch (g_ConfigJoystickIndex) {
                case 1:
                    g_ConfigJoystickPtr = g_Config.joystick1;
                    break;
                case 2:
                    g_ConfigJoystickPtr = g_Config.joystick2;
                    break;
                case 3:
                    g_ConfigJoystickPtr = g_Config.joystick3;
                    break;
                default:
                    g_ConfigJoystickPtr = &g_Config;
                    break;
                }
            } else if (!strncmp(settingNameWithEq, aHandlingtype, 0xDu)) {
                g_HandlingType = atoi(&v27);
            } else if (!strncmp(settingNameWithEq, aSuspensiontype, 0xFu)) {
                g_SuspensionType = atoi(&v29);
            } else if (!strncmp(settingNameWithEq, aTiretype, 9u)) {
                g_UltraCarHeader = (void *)atoi(&v24);
            } else if (!strncmp(settingNameWithEq, aTransmissionty, 0x11u)) {
                g_TransmissionType = atoi(v31);
            } else if (!strncmp(settingNameWithEq, aTrackdir, 9u)) {
                strcpy(aTracks, &v24);
                g_TrackDir[strlen(aTracks) + 1] = 0;
            } else if (!strncmp(settingNameWithEq, aCardir, 7u)) {
                strcpy(aCars, &v22);
                g_CarDir[strlen(aCars) + 1] = 0;
            } else if (!strncmp(settingNameWithEq, aSfxdir, 7u)) {
                strcpy(aSfx, &v22);
                *((_BYTE *)&g_SfxDir + strlen(aSfx) + 3) = 0;
            } else if (!strncmp(settingNameWithEq, aInterpolate, 0xCu)) {
                g_Interpolate = atoi(&String);
            } else if (!strncmp(settingNameWithEq, aSpeedsensitive, 0xFu)) {
                g_SpeedSensitive = atoi(&v29);
            } else if (!strncmp(settingNameWithEq, aD3ddrawcarshad, 0x11u)) {
                g_D3ddrawcarshadow = atoi(v31) == 0;
            } else if (!strncmp(settingNameWithEq, aRunbenchmark, 0xDu)) {
                g_Runbenchmark = atoi(&v27);
            } else if (!strncmp(settingNameWithEq, aPlaymusic, 0xAu)) {
                g_Playmusic = atoi(v25);
            } else if (!strncmp(settingNameWithEq, aPlaysfx, 8u)) {
                g_Playsfx = atoi(&v23);
            } else if (!strncmp(settingNameWithEq, aD3dalphacompar, 0x10u)) {
                g_D3dalphacompar = atoi(&v30);
            } else if (!strncmp(settingNameWithEq, aD3dalwayssquar, 0x18u)) {
                g_D3dalwayssquar = atoi(v32);
            } else if (!strncmp(settingNameWithEq, aD3dclearzbuffe, 0x10u)) {
                g_D3Dclearzbuffer = atoi(&v30);
            } else if (!strncmp(settingNameWithEq, aD3dwaitcanflip, 0xFu)) {
                g_D3dwaitcanflip = atoi(&v29);
            } else if (!strncmp(settingNameWithEq, aD3dwaitflipdon, 0x10u)) {
                g_D3dwaitflipdon = atoi(&v30);
            } else if (!strncmp(settingNameWithEq, aD3dinvsrcalpha, 0xFu)) {
                g_D3dinvsrcalpha = atoi(&v29) != 0 ? 6 : 2;
            }
        }
        CHK_FClose(chkfpBossRallyINI);
    }
    if (Str && strlen(Str)) {
        v3 = strstr(Str, SubStr);
        if (v3)
            g_NetworkPlay = atoi(&v3[strlen(SubStr)]);
        v4 = strstr(Str, aSzplayername);
        if (v4) {
            strcpy(dplay4aShortName, &v4[strlen(aSzplayername)]);
            v5 = strchr(dplay4aShortName, 32);
            if (v5)
                *v5 = 0;
            v6 = strchr(dplay4aShortName, 10);
            if (v6)
                *v6 = 0;
        }
        v7 = strstr(Str, aChosentrack);
        if (v7)
            g_chosenTrack = atoi(&v7[strlen(aChosentrack)]);
        v8 = strstr(Str, aChosencar);
        if (v8)
            g_chosenCar = atoi(&v8[strlen(aChosencar)]);
        v9 = strstr(Str, aChosenweather);
        if (v9)
            g_ChosenWeather = atoi(&v9[strlen(aChosenweather)]);
        v10 = strstr(Str, aGamemode);
        if (v10)
            g_GameMode = atoi(&v10[strlen(aGamemode)]);
        v11 = strstr(Str, aReadjoystick);
        if (v11) {
            g_ConfigJoystickIndex = atoi(&v11[strlen(aReadjoystick)]);
            switch (g_ConfigJoystickIndex) {
            case 1:
                g_ConfigJoystickPtr = g_Config.joystick1;
                break;
            case 2:
                g_ConfigJoystickPtr = g_Config.joystick2;
                break;
            case 3:
                g_ConfigJoystickPtr = g_Config.joystick3;
                break;
            default:
                g_ConfigJoystickPtr = &g_Config;
                break;
            }
        }
        v12 = strstr(Str, aHandlingtype);
        if (v12)
            g_HandlingType = atoi(&v12[strlen(aHandlingtype)]);
        v13 = strstr(Str, aSuspensiontype);
        if (v13)
            g_SuspensionType = atoi(&v13[strlen(aSuspensiontype)]);
        v14 = strstr(Str, aTiretype);
        if (v14)
            g_UltraCarHeader = (void *)atoi(&v14[strlen(aTiretype)]);
        v15 = strstr(Str, aTransmissionty);
        if (v15)
            g_TransmissionType = atoi(&v15[strlen(aTransmissionty)]);
        v16 = strstr(Str, aCplayers);
        if (v16)
            g_cPlayers = atoi(&v16[strlen(aCplayers)]);
        v17 = strstr(Str, aBcar);
        if (v17)
            g_bcar = atoi(&v17[strlen(aBcar)]);
        v18 = strstr(Str, aBtire);
        if (v18)
            g_btire = atoi(&v18[strlen(aBtire)]);
        v19 = strstr(Str, aBsuspension);
        if (v19)
            g_bsuspension = atoi(&v19[strlen(aBsuspension)]);
    }
}
// 10007C42: variable 'v1' is possibly undefined
// 100940A4: using guessed type int g_Playmusic;
// 10094350: using guessed type int g_HandlingType;
// 10094354: using guessed type int g_TransmissionType;
// 10094358: using guessed type int g_SuspensionType;
// 100A62F8: using guessed type int g_D3dwaitcanflip;
// 100A62FC: using guessed type int g_D3dwaitflipdon;
// 100A66EC: using guessed type int g_Interpolate;
// 100A79D8: using guessed type int g_D3dinvsrcalpha;
// 100AA010: using guessed type int g_GameMode;
// 100AA720: using guessed type int g_D3dalphacompar;
// 100B3664: using guessed type int g_SpeedSensitive;
// 100B380C: using guessed type int g_chosenTrack;
// 100B5DE8: using guessed type int g_Playsfx;
// 100B8534: using guessed type char *g_SfxDir;
// 102212C8: using guessed type int g_cPlayers;
// 10221320: using guessed type int g_bcar;
// 1022AF0C: using guessed type int g_bsuspension;
// 1022AF10: using guessed type int g_btire;
// 1022AF18: using guessed type int g_NetworkPlay;
// 1022B34C: using guessed type int g_chosenCar;
// 1022B350: using guessed type int g_ChosenWeather;
// 1039B6C8: using guessed type int g_D3ddrawcarshadow;
// 104C5168: using guessed type int g_D3Dclearzbuffer;
// 10575420: using guessed type int g_D3dalwayssquar;
// 10B4E1D0: using guessed type int g_ConfigJoystickIndex;
// 118ABDC4: using guessed type int g_Runbenchmark;
