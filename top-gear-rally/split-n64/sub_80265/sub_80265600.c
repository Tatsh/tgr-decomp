#include "../../types-n64.h"
//----- (80265600) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_80265600(OSMesgQueue *a1, int a2, __int16 a3)
{
  int v3; // $v0

  v3 = sub_80268540();
  dword_802A6200 = (int)a1;
  dword_802A6204 = a2;
  word_802A61F2 = a3;
  sub_80268560(v3);
}
// 80265630: write access to const memory at 802A6200 has been detected
// 80265644: write access to const memory at 802A6204 has been detected
// 80265654: write access to const memory at 802A61F2 has been detected
// 802A61F2: using guessed type __int16 word_802A61F2;
// 802A6200: using guessed type int dword_802A6200;
// 802A6204: using guessed type int dword_802A6204;
// 802A6224: using guessed type __int16 *off_802A6224;
