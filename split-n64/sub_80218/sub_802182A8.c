#include "../../types-n64.h"
//----- (802182A8) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_802182A8()
{
  int result; // $v0

  byte_8028AB20 = 0;
  byte_8028AB24 = 0;
  byte_8028AB28 = 0;
  byte_8028AB2C = -1;
  dword_8028AB30 = 0;
  dword_8028AB34 = 1000;
  __break(7u, 0);
  dword_8028AB3C = -128000;
  dword_8028AB38 = -128000;
  result = 0;
  __break(7u, 0);
  dword_8028A858 = 8;
  MEMORY[0] = -134217728;
  MEMORY[4] = 255;
  return result;
}
// 802182F4: write access to const memory at 8028AB2C has been detected
// 80218390: write access to const memory at 8028AB2C has been detected
// 80218438: write access to const memory at 8028AB2C has been detected
// 80218A7C: write access to const memory at 8028AB2C has been detected
// 80218AFC: write access to const memory at 8028AB2C has been detected
// 80218B70: write access to const memory at 8028AB3C has been detected
// 80218B9C: write access to const memory at 8028AB38 has been detected
// 802182DC: write access to const memory at 8028AB20 has been detected
// 802182E0: write access to const memory at 8028AB28 has been detected
// 802182E4: write access to const memory at 8028AB24 has been detected
// 80218320: write access to const memory at 8028AB30 has been detected
// 80218328: write access to const memory at 8028AB34 has been detected
// 80218340: write access to const memory at 8028AB30 has been detected
// 80218348: write access to const memory at 8028AB34 has been detected
// 80218378: write access to const memory at 8028AB20 has been detected
// 8021837C: write access to const memory at 8028AB24 has been detected
// 80218380: write access to const memory at 8028AB28 has been detected
// 802183BC: write access to const memory at 8028AB30 has been detected
// 802183C4: write access to const memory at 8028AB34 has been detected
// 802183DC: write access to const memory at 8028AB30 has been detected
// 802183E4: write access to const memory at 8028AB34 has been detected
// 80218418: write access to const memory at 8028AB20 has been detected
// 8021841C: write access to const memory at 8028AB24 has been detected
// 80218420: write access to const memory at 8028AB28 has been detected
// 802186FC: write access to const memory at 8028AB30 has been detected
// 80218704: write access to const memory at 8028AB34 has been detected
// 80218720: write access to const memory at 8028AB34 has been detected
// 80218AA8: write access to const memory at 8028AB30 has been detected
// 80218AB0: write access to const memory at 8028AB34 has been detected
// 80218AE0: write access to const memory at 8028AB20 has been detected
// 80218AE4: write access to const memory at 8028AB24 has been detected
// 80218AE8: write access to const memory at 8028AB28 has been detected
// 80218B0C: write access to const memory at 8028AB30 has been detected
// 80218B10: write access to const memory at 8028AB34 has been detected
// 80218C48: write access to const memory at 8028A858 has been detected
// 80218BB4: write access to const memory at 8028A858 has been detected
// 80218B78: conditional instruction was optimized away because of '$v1.4==FFFFFFFF'
// 80218B88: conditional instruction was optimized away because of '$v1.4==FFFFFFFF'
// 80218B90: conditional instruction was optimized away because of '$t9.4==1F400'
// 80218C10: conditional instruction was optimized away because of '$v1.4==FFFFFFFF'
// 8026FF08: using guessed type int dword_8026FF08;
// 8028A858: using guessed type int dword_8028A858;
// 8028AA78: using guessed type int dword_8028AA78;
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AA8C: using guessed type int dword_8028AA8C;
// 8028AAF0: using guessed type int dword_8028AAF0;
// 8028AAF4: using guessed type int dword_8028AAF4;
// 8028AB20: using guessed type char byte_8028AB20;
// 8028AB24: using guessed type char byte_8028AB24;
// 8028AB28: using guessed type char byte_8028AB28;
// 8028AB2C: using guessed type char byte_8028AB2C;
// 8028AB30: using guessed type int dword_8028AB30;
// 8028AB34: using guessed type int dword_8028AB34;
// 8028AB38: using guessed type int dword_8028AB38;
// 8028AB3C: using guessed type int dword_8028AB3C;
// 8028B940: using guessed type int dword_8028B940;
