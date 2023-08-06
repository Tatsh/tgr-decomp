#include "../../types-n64.h"
//----- (802170C8) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_802170C8()
{
  int v0; // $v0

  sub_8020C408((int)&off_80272658, &dword_80316440);
  sub_8023DF4C(dword_80272590, sub_8024296C);
  sub_8023DF4C(dword_802725A4, sub_8024296C);
  sub_8023DF4C(dword_802725B8, sub_8024296C);
  sub_8023DF4C(dword_802725CC, sub_8024296C);
  sub_8023DF4C(dword_802725E0, sub_8024296C);
  dword_80271FB0 = (int)dword_8027205C;
  dword_80271FB4 = 22;
  dword_80271FB8 = 9;
  dword_80271FBC = 280;
  dword_80271FC0 = 42;
  dword_80271FC8 = (int)sub_802167E0;
  dword_80316444 = MEMORY[0xFC4AD411];
  dword_80272670 = 1;
  v0 = sub_8020AD5C("Controller 2", 687065644, (int)&off_80272658, &dword_80316444, 0, 8, 0, 0, 160, 128, 32);
  if ( v0 == 1 )
  {
    MEMORY[0xFC4AD411] = -1896658666;
    goto LABEL_5;
  }
  if ( v0 == 2 )
  {
LABEL_5:
    sub_8021C6E4((int)sub_80211A3C);
    dword_80272670 = 0;
  }
}
// 80217154: write access to const memory at 80271FB0 has been detected
// 80217164: write access to const memory at 80271FB4 has been detected
// 80217170: write access to const memory at 80271FB8 has been detected
// 8021717C: write access to const memory at 80271FBC has been detected
// 80217190: write access to const memory at 80271FC0 has been detected
// 802171A4: write access to const memory at 80271FC8 has been detected
// 802171D8: write access to const memory at 80316444 has been detected
// 802171E0: write access to const memory at 80272670 has been detected
// 802172AC: write access to const memory at 80272670 has been detected
// 80211A3C: using guessed type int sub_80211A3C();
// 80271FB0: using guessed type int dword_80271FB0;
// 80271FB4: using guessed type int dword_80271FB4;
// 80271FB8: using guessed type int dword_80271FB8;
// 80271FBC: using guessed type int dword_80271FBC;
// 80271FC0: using guessed type int dword_80271FC0;
// 80271FC8: using guessed type int dword_80271FC8;
// 8027205C: using guessed type int dword_8027205C[3];
// 80272590: using guessed type int dword_80272590[3];
// 802725A4: using guessed type int dword_802725A4[3];
// 802725B8: using guessed type int dword_802725B8[3];
// 802725CC: using guessed type int dword_802725CC[3];
// 802725E0: using guessed type int dword_802725E0[3];
// 80272658: using guessed type char **off_80272658;
// 80272670: using guessed type int dword_80272670;
// 80316440: using guessed type int dword_80316440;
// 80316444: using guessed type int dword_80316444;
