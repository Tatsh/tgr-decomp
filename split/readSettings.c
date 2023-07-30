//----- (10007BD0) --------------------------------------------------------
void __cdecl readSettings(char *Str)
{
  CHK_File *chkfpBossRallyINI; // esi
  char *v2; // edx
  char *v3; // edx
  char *v4; // eax
  char *v5; // eax
  char *v6; // edx
  char *v7; // edx
  char *v8; // edx
  char *v9; // edx
  char *v10; // edx
  char *v11; // edx
  char *v12; // edx
  char *v13; // edx
  char *v14; // edx
  char *v15; // edx
  char *v16; // edx
  char *v17; // edx
  char *v18; // edx
  CHK_File *i; // [esp+10h] [ebp-104h]
  char settingNameWithEq[7]; // [esp+14h] [ebp-100h] BYREF
  char v21; // [esp+1Bh] [ebp-F9h] BYREF
  char v22; // [esp+1Ch] [ebp-F8h] BYREF
  char v23; // [esp+1Dh] [ebp-F7h] BYREF
  char v24[2]; // [esp+1Eh] [ebp-F6h] BYREF
  char String; // [esp+20h] [ebp-F4h] BYREF
  char v26; // [esp+21h] [ebp-F3h] BYREF
  char v27; // [esp+22h] [ebp-F2h] BYREF
  char v28; // [esp+23h] [ebp-F1h] BYREF
  char v29; // [esp+24h] [ebp-F0h] BYREF
  char v30[7]; // [esp+25h] [ebp-EFh] BYREF
  char v31[232]; // [esp+2Ch] [ebp-E8h] BYREF

  strcpy(bossRallyIniPath, g_InstallPath);
  strcat(bossRallyIniPath, aBossrallyIni);
  if ( CHK_FileExists(bossRallyIniPath) )
  {
    chkfpBossRallyINI = CHK_FReadOpen(bossRallyIniPath);
    for ( i = chkfpBossRallyINI; readBytes(settingNameWithEq, 256, &i->pfil); chkfpBossRallyINI = i )
    {
      if ( !strncmp(settingNameWithEq, SubStr, 0xCu) )
      {
        g_NetworkPlay = atoi(&String);
      }
      else if ( !strncmp(settingNameWithEq, aChosentrack, 0xCu) )
      {
        g_chosenTrack = atoi(&String);
      }
      else if ( !strncmp(settingNameWithEq, aChosencar, 0xAu) )
      {
        g_chosenCar = atoi(v24);
      }
      else if ( !strncmp(settingNameWithEq, aChosenweather, 0xEu) )
      {
        g_ChosenWeather = atoi(&v27);
      }
      else if ( !strncmp(settingNameWithEq, aGamemode, 9u) )
      {
        g_GameMode = atoi(&v23);
      }
      else if ( !strncmp(settingNameWithEq, aReadjoystick, 0xDu) )
      {
        g_ReadJoystick = atoi(&v26);
        switch ( g_ReadJoystick )
        {
          case 1:
            dword_10B4E1D4 = (WORD *)&unk_10B4DFD8;
            break;
          case 2:
            dword_10B4E1D4 = (WORD *)&unk_10B4E080;
            break;
          case 3:
            dword_10B4E1D4 = (WORD *)&unk_10B4E128;
            break;
          default:
            dword_10B4E1D4 = g_Config;
            break;
        }
      }
      else if ( !strncmp(settingNameWithEq, aHandlingtype, 0xDu) )
      {
        g_HandlingType = atoi(&v26);
      }
      else if ( !strncmp(settingNameWithEq, aSuspensiontype, 0xFu) )
      {
        g_SuspensionType = atoi(&v28);
      }
      else if ( !strncmp(settingNameWithEq, aTiretype, 9u) )
      {
        g_UltraCarHeader = (void *)atoi(&v23);
      }
      else if ( !strncmp(settingNameWithEq, aTransmissionty, 0x11u) )
      {
        g_TransmissionType = atoi(v30);
      }
      else if ( !strncmp(settingNameWithEq, aTrackdir, 9u) )
      {
        strcpy(aTracks, &v23);
        g_TrackDir[strlen(aTracks) + 1] = 0;
      }
      else if ( !strncmp(settingNameWithEq, aCardir, 7u) )
      {
        strcpy(aCars, &v21);
        g_CarDir[strlen(aCars) + 1] = 0;
      }
      else if ( !strncmp(settingNameWithEq, aSfxdir, 7u) )
      {
        strcpy(aSfx, &v21);
        *((_BYTE *)&g_SfxDir + strlen(aSfx) + 3) = 0;
      }
      else if ( !strncmp(settingNameWithEq, aInterpolate, 0xCu) )
      {
        g_Interpolate = atoi(&String);
      }
      else if ( !strncmp(settingNameWithEq, aSpeedsensitive, 0xFu) )
      {
        g_SpeedSensitive = atoi(&v28);
      }
      else if ( !strncmp(settingNameWithEq, aD3ddrawcarshad, 0x11u) )
      {
        g_D3ddrawcarshadow = atoi(v30) == 0;
      }
      else if ( !strncmp(settingNameWithEq, aRunbenchmark, 0xDu) )
      {
        g_Runbenchmark = atoi(&v26);
      }
      else if ( !strncmp(settingNameWithEq, aPlaymusic, 0xAu) )
      {
        g_Playmusic = atoi(v24);
      }
      else if ( !strncmp(settingNameWithEq, aPlaysfx, 8u) )
      {
        g_Playsfx = atoi(&v22);
      }
      else if ( !strncmp(settingNameWithEq, aD3dalphacompar, 0x10u) )
      {
        g_D3dalphacompar = atoi(&v29);
      }
      else if ( !strncmp(settingNameWithEq, aD3dalwayssquar, 0x18u) )
      {
        g_D3dalwayssquar = atoi(v31);
      }
      else if ( !strncmp(settingNameWithEq, aD3dclearzbuffe, 0x10u) )
      {
        g_D3Dclearzbuffer = atoi(&v29);
      }
      else if ( !strncmp(settingNameWithEq, aD3dwaitcanflip, 0xFu) )
      {
        g_D3dwaitcanflip = atoi(&v28);
      }
      else if ( !strncmp(settingNameWithEq, aD3dwaitflipdon, 0x10u) )
      {
        g_D3dwaitflipdon = atoi(&v29);
      }
      else if ( !strncmp(settingNameWithEq, aD3dinvsrcalpha, 0xFu) )
      {
        g_D3dinvsrcalpha = atoi(&v28) != 0 ? 6 : 2;
      }
    }
    CHK_FClose(chkfpBossRallyINI);
  }
  if ( Str && strlen(Str) )
  {
    v2 = strstr(Str, SubStr);
    if ( v2 )
      g_NetworkPlay = atoi(&v2[strlen(SubStr)]);
    v3 = strstr(Str, aSzplayername);
    if ( v3 )
    {
      strcpy(dplay4aShortName, &v3[strlen(aSzplayername)]);
      v4 = strchr(dplay4aShortName, 32);
      if ( v4 )
        *v4 = 0;
      v5 = strchr(dplay4aShortName, 10);
      if ( v5 )
        *v5 = 0;
    }
    v6 = strstr(Str, aChosentrack);
    if ( v6 )
      g_chosenTrack = atoi(&v6[strlen(aChosentrack)]);
    v7 = strstr(Str, aChosencar);
    if ( v7 )
      g_chosenCar = atoi(&v7[strlen(aChosencar)]);
    v8 = strstr(Str, aChosenweather);
    if ( v8 )
      g_ChosenWeather = atoi(&v8[strlen(aChosenweather)]);
    v9 = strstr(Str, aGamemode);
    if ( v9 )
      g_GameMode = atoi(&v9[strlen(aGamemode)]);
    v10 = strstr(Str, aReadjoystick);
    if ( v10 )
    {
      g_ReadJoystick = atoi(&v10[strlen(aReadjoystick)]);
      switch ( g_ReadJoystick )
      {
        case 1:
          dword_10B4E1D4 = (WORD *)&unk_10B4DFD8;
          break;
        case 2:
          dword_10B4E1D4 = (WORD *)&unk_10B4E080;
          break;
        case 3:
          dword_10B4E1D4 = (WORD *)&unk_10B4E128;
          break;
        default:
          dword_10B4E1D4 = g_Config;
          break;
      }
    }
    v11 = strstr(Str, aHandlingtype);
    if ( v11 )
      g_HandlingType = atoi(&v11[strlen(aHandlingtype)]);
    v12 = strstr(Str, aSuspensiontype);
    if ( v12 )
      g_SuspensionType = atoi(&v12[strlen(aSuspensiontype)]);
    v13 = strstr(Str, aTiretype);
    if ( v13 )
      g_UltraCarHeader = (void *)atoi(&v13[strlen(aTiretype)]);
    v14 = strstr(Str, aTransmissionty);
    if ( v14 )
      g_TransmissionType = atoi(&v14[strlen(aTransmissionty)]);
    v15 = strstr(Str, aCplayers);
    if ( v15 )
      g_cPlayers = atoi(&v15[strlen(aCplayers)]);
    v16 = strstr(Str, aBcar);
    if ( v16 )
      g_bcar = atoi(&v16[strlen(aBcar)]);
    v17 = strstr(Str, aBtire);
    if ( v17 )
      g_btire = atoi(&v17[strlen(aBtire)]);
    v18 = strstr(Str, aBsuspension);
    if ( v18 )
      g_bsuspension = atoi(&v18[strlen(aBsuspension)]);
  }
}
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
// 10B4E1D0: using guessed type int g_ReadJoystick;
// 118ABDC4: using guessed type int g_Runbenchmark;
