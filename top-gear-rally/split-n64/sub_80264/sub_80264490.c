#include "../../types-n64.h"
//----- (80264490) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_80264490(int a1)
{
  int v1; // $v0

  v1 = sub_80268540();
  if ( (a1 & 1) != 0 )
    dword_802A61FC = 8;
  if ( (a1 & 2) != 0 )
    dword_802A61FC = 0;
  if ( (a1 & 4) != 0 )
    dword_802A61FC = 4;
  if ( (a1 & 8) != 0 )
    dword_802A61FC = 0;
  if ( (a1 & 0x10) != 0 )
    dword_802A61FC = 16;
  if ( (a1 & 0x20) != 0 )
    dword_802A61FC = 0;
  if ( (a1 & 0x40) != 0 )
    dword_802A61FC = 0;
  if ( (a1 & 0x80) != 0 )
    dword_802A61FC = MEMORY[4] & 0x300;
  word_802A61F0 = 8;
  sub_80268560(v1);
}
// 802644C8: write access to const memory at 802A61FC has been detected
// 802644F0: write access to const memory at 802A61FC has been detected
// 80264514: write access to const memory at 802A61FC has been detected
// 8026453C: write access to const memory at 802A61FC has been detected
// 80264560: write access to const memory at 802A61FC has been detected
// 80264588: write access to const memory at 802A61FC has been detected
// 802645B4: write access to const memory at 802A61FC has been detected
// 802645C8: write access to const memory at 802A61FC has been detected
// 802645F8: write access to const memory at 802A61FC has been detected
// 80264614: write access to const memory at 802A61FC has been detected
// 80264630: write access to const memory at 802A61F0 has been detected
// 802A61F0: using guessed type __int16 word_802A61F0;
// 802A61F8: using guessed type int dword_802A61F8;
// 802A61FC: using guessed type int dword_802A61FC;
// 802A6224: using guessed type __int16 *off_802A6224;
