#include "../../types-n64.h"
//----- (802533F4) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_802533F4()
{
  int result; // $v0

  dword_8028DAC4 = 0;
  dword_8028DAC8 = 0;
  dword_8028DACC = 4;
  dword_8028DAD0 = 4;
  result = 2;
  byte_8028DB6C = 2;
  byte_8028DB70 = 0;
  byte_8028DB74 = 0;
  return result;
}
// 80253440: write access to const memory at 8028DB6C has been detected
// 80253444: write access to const memory at 8028DB70 has been detected
// 80253454: write access to const memory at 8028DB74 has been detected
// 80253418: write access to const memory at 8028DAC4 has been detected
// 80253424: write access to const memory at 8028DAC8 has been detected
// 8025342C: write access to const memory at 8028DACC has been detected
// 80253438: write access to const memory at 8028DAD0 has been detected
// 8028D4B8: using guessed type int[4];
// 8028DAC0: using guessed type char byte_8028DAC0;
// 8028DAC4: using guessed type int dword_8028DAC4;
// 8028DAC8: using guessed type int dword_8028DAC8;
// 8028DACC: using guessed type int dword_8028DACC;
// 8028DAD0: using guessed type int dword_8028DAD0;
// 8028DB68: using guessed type char byte_8028DB68;
// 8028DB6C: using guessed type char byte_8028DB6C;
// 8028DB70: using guessed type char byte_8028DB70;
// 8028DB74: using guessed type char byte_8028DB74;
