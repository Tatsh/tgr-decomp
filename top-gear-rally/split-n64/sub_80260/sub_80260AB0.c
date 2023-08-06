#include "../../types-n64.h"
//----- (80260AB0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_80260AB0(char a1)
{
  int v1; // $v0

  v1 = sub_80268540();
  if ( a1 )
    word_802A61F0 = 32;
  else
    word_802A61F0 = 0;
  sub_80268560(v1);
}
// 80260AE8: write access to const memory at 802A61F0 has been detected
// 80260B00: write access to const memory at 802A61F0 has been detected
// 802A61F0: using guessed type __int16 word_802A61F0;
