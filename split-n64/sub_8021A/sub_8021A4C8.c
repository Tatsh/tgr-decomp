#include "../../types-n64.h"
//----- (8021A4C8) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_8021A4C8()
{
  dword_8028A884 = 1;
  osViBlack(1);
  sub_80219A3C();
  sub_80217FB8();
  sub_8021AA08();
  osViBlack(1);
  sub_80219A3C();
  sub_80217FB8();
  sub_8021AA08();
  dword_8028A884 = 0;
}
// 8021A4D4: write access to const memory at 8028A884 has been detected
// 8021A530: write access to const memory at 8028A884 has been detected
// 8028A884: using guessed type int dword_8028A884;
