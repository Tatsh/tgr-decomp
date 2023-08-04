#include "../../types-n64.h"
//----- (80242BDC) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_80242BDC()
{
  float v0; // $f0
  float v1; // $f0
  float v2; // $f18

  dword_8028AAF0 = (int)dword_8031B760;
  MEMORY[0x1DE8] = 7868;
  dword_8028AAF4 = 7868;
  MEMORY[0] = 1.0;
  MEMORY[4] = 0.0;
  MEMORY[8] = 0.0;
  sub_80224760(0);
  sub_8022439C((float *)0x10, (float *)0x20, 0);
  sub_80224760((float *)0x10);
  sub_8022439C((float *)0x20, 0, (float *)0x10);
  sub_8022576C(MEMORY[0], MEMORY[4]);
  MEMORY[0x1DCC] = v0;
  sub_8022576C(MEMORY[0], MEMORY[4]);
  MEMORY[0x1DCC] = v1;
  sub_802244FC((float *)0x30, (float *)0x20, -0.64999998);
  v2 = 400.0 * 0.2;
  sub_8021B2F8(0, 0.52359879, v2, 320.0, 200.0);
  sub_80219BF0(0, 114, 156, 117, 1);
  sub_8022D090(0, 0);
  sub_8022FEF0(0);
  dword_8028C334 = 1;
  sub_802303D4(0);
  sub_80230554(0, 0);
}
// 80242C2C: write access to const memory at 8028AAF4 has been detected
// 80243008: write access to const memory at 8028DBB0 has been detected
// 80243014: write access to const memory at 8028DBD0 has been detected
// 80243230: write access to const memory at 8028C334 has been detected
// 80242C18: write access to const memory at 8028AAF0 has been detected
// 80242CAC: write access to const memory at 8028DBB0 has been detected
// 802430AC: variable 'v0' is possibly undefined
// 802430CC: variable 'v1' is possibly undefined
// 8028AAF0: using guessed type int dword_8028AAF0;
// 8028AAF4: using guessed type int dword_8028AAF4;
// 8028C334: using guessed type int dword_8028C334;
// 8028DB68: using guessed type char byte_8028DB68;
// 8028DB6C: using guessed type char byte_8028DB6C;
// 8028DBB0: using guessed type __int16 word_8028DBB0;
// 8028DBD0: using guessed type char byte_8028DBD0;
// 8031B760: using guessed type int dword_8031B760[512];
