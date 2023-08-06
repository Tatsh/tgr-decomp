#include "../../types-n64.h"
//----- (80264AD0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_80264AD0(int a1)
{
  int v1; // [sp+1Ch] [-4h]

  v1 = sub_80268540();
  dword_802A61F4 = a1;
  word_802A61F0 = 16;
  sub_80268560(v1);
}
// 80264AF4: write access to const memory at 802A61F4 has been detected
// 80264B04: write access to const memory at 802A61F0 has been detected
// 802A61F0: using guessed type __int16 word_802A61F0;
// 802A61F4: using guessed type int dword_802A61F4;
// 802A6224: using guessed type __int16 *off_802A6224;
