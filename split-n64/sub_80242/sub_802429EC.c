#include "../../types-n64.h"
//----- (802429EC) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_802429EC()
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
  osViBlack(1);
  sub_80219A3C();
  sub_8021AA08();
  dword_8028A884 = 0;
}
// 802429F8: write access to const memory at 8028A884 has been detected
// 80242A6C: write access to const memory at 8028A884 has been detected
// 8028A884: using guessed type int dword_8028A884;
