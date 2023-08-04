#include "../../types-win32.h"
//----- (1003E510) --------------------------------------------------------
int sub_1003E510()
{
  int v0; // esi
  int v1; // eax
  int v2; // edx
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int result; // eax
  int v7; // eax
  int v8; // edx

  sub_1003E3A0();
  g_HandlingType = dword_100AC65C;
  if ( g_GameMode == 6 )
    sub_10044540();
  v0 = dword_100AC654;
  if ( sub_1003F320(dword_100AC654) )
  {
LABEL_8:
    v1 = dword_100AC654;
  }
  else
  {
    while ( 1 )
    {
      v1 = ++dword_100AC654;
      if ( dword_100AC654 > 31 )
      {
        v1 = 0;
        dword_100AC654 = 0;
      }
      if ( v1 == v0 )
        break;
      if ( sub_1003F320(v1) )
        goto LABEL_8;
    }
  }
  g_chosenCar = dword_100AC420[v1];
  v2 = dword_100AC4B0[dword_100AC650];
  g_UltraCarHeader = (void *)dword_100AC4A0[dword_100AC64C];
  g_SuspensionType = v2;
  g_TransmissionType = dword_100AC518[dword_10AA2A08];
  if ( g_GameMode )
  {
    v3 = dword_100AC648;
    if ( !sub_1003F2B0(dword_100AC648) )
    {
      do
      {
        v4 = dword_100AC648 + 1;
        dword_100AC648 = v4;
        if ( v4 <= (dword_10AA28FC != 0 ? 14 : 11) )
        {
          if ( v4 == v3 )
            goto LABEL_16;
        }
        else
        {
          v4 = 0;
          dword_100AC648 = 0;
        }
      }
      while ( !sub_1003F2B0(v4) );
    }
    v4 = dword_100AC648;
LABEL_16:
    g_chosenTrack = dword_100AC4D8[v4];
    v5 = dword_100AC4C0[dword_10AA2A00];
    dword_100BD3E0 = dword_100AC658;
    g_ChosenWeather = v5;
    result = sub_1005FCF0();
  }
  else
  {
    v7 = 2 * (BYTE1(dword_10AA26F4[0]) + 12 * LOBYTE(dword_10AA26F4[0]));
    v8 = (unsigned __int8)byte_100B3821[v7];
    g_chosenTrack = (unsigned __int8)byte_100B3820[v7];
    g_ChosenWeather = v8;
    result = sub_1005FCF0();
  }
  return result;
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
// 1022B34C: using guessed type int g_chosenCar;
// 1022B350: using guessed type int g_ChosenWeather;
// 10AA26F4: using guessed type int dword_10AA26F4[];
// 10AA28FC: using guessed type int dword_10AA28FC;
// 10AA2A00: using guessed type int dword_10AA2A00;
// 10AA2A08: using guessed type int dword_10AA2A08;
