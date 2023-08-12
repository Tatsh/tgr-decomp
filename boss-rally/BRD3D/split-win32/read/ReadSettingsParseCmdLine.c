#include "types-win32.h"
//----- (10007BD0) --------------------------------------------------------
void __cdecl ReadSettingsParseCmdLine(char *cmdLine) {
    CHK_File *chkfpBossRallyINI; // esi
    char *cmdp0;                 // edx
    char *cmdp1;                 // edx
    char *cmdp2;                 // eax
    char *cmpd3;                 // eax
    char *v6;                    // edx
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
    CHK_File *pfp;               // [esp+10h] [ebp-104h]
    char readBuff[256];          // [esp+14h] [ebp-100h] BYREF

    strcpy(gBossRallyIniPath, gInstallPath);
    strcat(gBossRallyIniPath, kBossRallyIni);
    if (CHK_FileExists(gBossRallyIniPath)) {
        chkfpBossRallyINI = CHK_FReadOpen(gBossRallyIniPath);
        for (pfp = chkfpBossRallyINI; CHK_ReadLine(readBuff, 256, &pfp->pfil);
             chkfpBossRallyINI = pfp) {
            if (!strncmp(readBuff, kNetworkPlayEq, 0xCu)) {
                gNetworkPlay = atoi(&readBuff[0xC]);
            } else if (!strncmp(readBuff, kChosenTrackEq, 0xCu)) {
                gChosenTrack = atoi(&readBuff[0xC]);
            } else if (!strncmp(readBuff, kChosenCarEq, 0xAu)) {
                gChosenCar = atoi(&readBuff[0xA]);
            } else if (!strncmp(readBuff, kChosenWeatherEq, 0xEu)) {
                gChosenWeather0 = atoi(&readBuff[0xE]);
            } else if (!strncmp(readBuff, kGameModeeEq, 9u)) {
                gGameMode = atoi(&readBuff[9]);
            } else if (!strncmp(readBuff, kReadJoystickEq, 0xDu)) {
                gConfigJoystickIndex = atoi(&readBuff[0xD]);
                switch (gConfigJoystickIndex) {
                case 1:
                    gConfigJoystickPtr = &gConfig.joystick1;
                    break;
                case 2:
                    gConfigJoystickPtr = &gConfig.joystick2;
                    break;
                case 3:
                    gConfigJoystickPtr = &gConfig.joystick3;
                    break;
                default:
                    gConfigJoystickPtr = (BossRallyConfigJoystick *)&gConfig;
                    break;
                }
            } else if (!strncmp(readBuff, kHandlingTypeEq, 0xDu)) {
                gHandlingType = atoi(&readBuff[13]);
            } else if (!strncmp(readBuff, kSuspensionTypeEq, 0xFu)) {
                gSuspensionType = atoi(&readBuff[15]);
            } else if (!strncmp(readBuff, kTireTypeEq, 9u)) {
                gTireType = atoi(&readBuff[9]);
            } else if (!strncmp(readBuff, kTransmissionTypeEq, 0x11u)) {
                gTransmissionType = atoi(&readBuff[17]);
            } else if (!strncmp(readBuff, kTrackDirEq, 9u)) {
                strcpy(kTracksSlash, &readBuff[9]);
                gTrackDir[strlen(kTracksSlash) + 1] = 0;
            } else if (!strncmp(readBuff, kCarDirEq, 7u)) {
                strcpy(kCarsSlash, &readBuff[7]);
                gCarDir[strlen(kCarsSlash) + 1] = 0;
            } else if (!strncmp(readBuff, kSFXDirEq, 7u)) {
                strcpy(kSfxSlash, &readBuff[7]);
                *((_BYTE *)&gSfxDir + strlen(kSfxSlash) + 3) = 0;
            } else if (!strncmp(readBuff, kInterpolateEq, 0xCu)) {
                gInterpolate = atoi(&readBuff[12]);
            } else if (!strncmp(readBuff, kSpeedSensitiveEq, 0xFu)) {
                gSpeedSensitive = atoi(&readBuff[15]);
            } else if (!strncmp(readBuff, kD3DDrawCarShadowEq, 0x11u)) {
                gD3dDrawCarShadow = atoi(&readBuff[17]) == 0;
            } else if (!strncmp(readBuff, kRunBenchmarkEq, 0xDu)) {
                gRunBenchmark = atoi(&readBuff[13]);
            } else if (!strncmp(readBuff, kPlayMusicEq, 0xAu)) {
                gPlayMusic = atoi(&readBuff[10]);
            } else if (!strncmp(readBuff, kPlaySFXEq, 8u)) {
                gPlaysfx = atoi(&readBuff[8]);
            } else if (!strncmp(readBuff, kD3DAlphaCompareEq, 0x10u)) {
                gD3dalphacompar = atoi(&readBuff[16]);
            } else if (!strncmp(readBuff, kD3DAlwaysSquareTextures, 0x18u)) {
                gD3DAlwaysSquareTextures = atoi(&readBuff[24]);
            } else if (!strncmp(readBuff, kD3DClearZBufferEq, 0x10u)) {
                gD3DClearZBuffer = atoi(&readBuff[16]);
            } else if (!strncmp(readBuff, kD3DWaitCanFlipEq, 0xFu)) {
                gD3DWaitCanFlip = atoi(&readBuff[15]);
            } else if (!strncmp(readBuff, kD3DWaitFlipDoneEq, 0x10u)) {
                gD3DWaitFlipDone = atoi(&readBuff[16]);
            } else if (!strncmp(readBuff, kD3DInvSrcAlphaEq, 0xFu)) {
                gD3DInvSrcAlpha = atoi(&readBuff[15]) != 0 ? 6 : 2;
            }
        }
        CHK_FClose(chkfpBossRallyINI);
    }
    if (cmdLine && strlen(cmdLine)) {
        cmdp0 = strstr(cmdLine, kNetworkPlayEq);
        if (cmdp0)
            gNetworkPlay = atoi(&cmdp0[strlen(kNetworkPlayEq)]);
        cmdp1 = strstr(cmdLine, kSZPlayerNameEq);
        if (cmdp1) {
            strcpy(dplay4aShortName, &cmdp1[strlen(kSZPlayerNameEq)]);
            cmdp2 = strchr(dplay4aShortName, 32);
            if (cmdp2)
                *cmdp2 = 0;
            cmpd3 = strchr(dplay4aShortName, 10);
            if (cmpd3)
                *cmpd3 = 0;
        }
        v6 = strstr(cmdLine, kChosenTrackEq);
        if (v6)
            gChosenTrack = atoi(&v6[strlen(kChosenTrackEq)]);
        v7 = strstr(cmdLine, kChosenCarEq);
        if (v7)
            gChosenCar = atoi(&v7[strlen(kChosenCarEq)]);
        v8 = strstr(cmdLine, kChosenWeatherEq);
        if (v8)
            gChosenWeather0 = atoi(&v8[strlen(kChosenWeatherEq)]);
        v9 = strstr(cmdLine, kGameModeeEq);
        if (v9)
            gGameMode = atoi(&v9[strlen(kGameModeeEq)]);
        v10 = strstr(cmdLine, kReadJoystickEq);
        if (v10) {
            gConfigJoystickIndex = atoi(&v10[strlen(kReadJoystickEq)]);
            switch (gConfigJoystickIndex) {
            case 1:
                gConfigJoystickPtr = &gConfig.joystick1;
                break;
            case 2:
                gConfigJoystickPtr = &gConfig.joystick2;
                break;
            case 3:
                gConfigJoystickPtr = &gConfig.joystick3;
                break;
            default:
                gConfigJoystickPtr = (BossRallyConfigJoystick *)&gConfig;
                break;
            }
        }
        v11 = strstr(cmdLine, kHandlingTypeEq);
        if (v11)
            gHandlingType = atoi(&v11[strlen(kHandlingTypeEq)]);
        v12 = strstr(cmdLine, kSuspensionTypeEq);
        if (v12)
            gSuspensionType = atoi(&v12[strlen(kSuspensionTypeEq)]);
        v13 = strstr(cmdLine, kTireTypeEq);
        if (v13)
            gTireType = atoi(&v13[strlen(kTireTypeEq)]);
        v14 = strstr(cmdLine, kTransmissionTypeEq);
        if (v14)
            gTransmissionType = atoi(&v14[strlen(kTransmissionTypeEq)]);
        v15 = strstr(cmdLine, SubStr);
        if (v15)
            gCPlayers = atoi(&v15[strlen(SubStr)]);
        v16 = strstr(cmdLine, aBcar);
        if (v16)
            gBcar = atoi(&v16[strlen(aBcar)]);
        v17 = strstr(cmdLine, aBtire);
        if (v17)
            gBtire = atoi(&v17[strlen(aBtire)]);
        v18 = strstr(cmdLine, aBsuspension);
        if (v18)
            gBsuspension = atoi(&v18[strlen(aBsuspension)]);
    }
}
// 100940A4: using guessed type int gPlayMusic;
// 10094350: using guessed type int gHandlingType;
// 10094354: using guessed type int gTransmissionType;
// 10094358: using guessed type int gSuspensionType;
// 100A62F8: using guessed type int gD3DWaitCanFlip;
// 100A62FC: using guessed type int gD3DWaitFlipDone;
// 100A66EC: using guessed type int gInterpolate;
// 100A79D8: using guessed type int gD3DInvSrcAlpha;
// 100AA720: using guessed type int gD3dalphacompar;
// 100B3664: using guessed type int gSpeedSensitive;
// 100B380C: using guessed type int gChosenTrack;
// 100B5DE8: using guessed type int gPlaysfx;
// 100B8534: using guessed type char *gSfxDir;
// 102212C8: using guessed type int gCPlayers;
// 10221320: using guessed type int gBcar;
// 1022AF0C: using guessed type int gBsuspension;
// 1022AF10: using guessed type int gBtire;
// 1022AF18: using guessed type int gNetworkPlay;
// 1022B34C: using guessed type int gChosenCar;
// 1022B350: using guessed type int gChosenWeather0;
// 1039B6C8: using guessed type int gD3dDrawCarShadow;
// 104C5168: using guessed type int gD3DClearZBuffer;
// 10575420: using guessed type int gD3DAlwaysSquareTextures;
// 10B4E1D0: using guessed type int gConfigJoystickIndex;
// 118ABDC4: using guessed type int gRunBenchmark;
