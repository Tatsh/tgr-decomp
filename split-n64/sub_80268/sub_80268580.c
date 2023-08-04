#include "../../types-n64.h"
//----- (80268580) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80268580()
{
  sub_8026BBA0((int)byte_802A61C0, 96);
  off_802A6220 = (char (*)[2])byte_802A61C0;
  off_802A6224 = &word_802A61F0;
  word_802A61F2 = 1;
  word_802A61C2 = 1;
  dword_802A61F4 = 0x80000000;
  dword_802A61C4 = 0x80000000;
  if ( MEMORY[0x80000300] )
  {
    if ( MEMORY[0x80000300] == 2 )
      dword_802A61F8 = (int)MEMORY[0x802A6340];
    else
      dword_802A61F8 = (int)MEMORY[0x802A6390];
  }
  else
  {
    dword_802A61F8 = (int)MEMORY[0x802A62F0];
  }
  word_802A61F0 = 32;
  dword_802A61FC = MEMORY[4];
  while ( MEMORY[0xA4400010] >= 0xBu )
    ;
  MEMORY[0xA4400000] = 0;
  return sub_8026C070();
}
// 802685A0: write access to const memory at 802A6220 has been detected
// 802685B0: write access to const memory at 802A6224 has been detected
// 802685B8: write access to const memory at 802A61F2 has been detected
// 802685CC: write access to const memory at 802A61C2 has been detected
// 802685DC: write access to const memory at 802A61F4 has been detected
// 802685EC: write access to const memory at 802A61C4 has been detected
// 80268610: write access to const memory at 802A61F8 has been detected
// 8026863C: write access to const memory at 802A61F8 has been detected
// 80268650: write access to const memory at 802A61F8 has been detected
// 80268664: write access to const memory at 802A61F0 has been detected
// 80268678: write access to const memory at 802A61FC has been detected
// 802A61C2: using guessed type __int16 word_802A61C2;
// 802A61C4: using guessed type int dword_802A61C4;
// 802A61F0: using guessed type __int16 word_802A61F0;
// 802A61F2: using guessed type __int16 word_802A61F2;
// 802A61F4: using guessed type int dword_802A61F4;
// 802A61F8: using guessed type int dword_802A61F8;
// 802A61FC: using guessed type int dword_802A61FC;
// 802A6220: using guessed type char (*off_802A6220)[2];
// 802A6224: using guessed type __int16 *off_802A6224;
// 802A62F0: using guessed type int dword_802A62F0[10];
// 802A6340: using guessed type int dword_802A6340[10];
// 802A6390: using guessed type int dword_802A6390[6];
