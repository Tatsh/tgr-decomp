#include "../../types-n64.h"
//----- (80217734) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80217734(int a1, int a2)
{
  int v2; // $s0
  int result; // $v0
  int v4; // [sp+A4h] [-14h] BYREF
  int v5; // [sp+A8h] [-10h] BYREF
  int v6; // [sp+ACh] [-Ch] BYREF
  int v7; // [sp+B0h] [-8h] BYREF

  v2 = 36 * a1 + a2;
  sub_80217614(*(unsigned __int16 *)(v2 + 12), &v7, &v5);
  sub_80217614(*(unsigned __int16 *)(v2 + 14), &v6, &v4);
  dword_8028A858 = 8;
  MEMORY[4] = 0;
  MEMORY[0] = -436207616;
  if ( (*(_BYTE *)(v2 + 32) & 0xF) == 1 )
  {
    dword_8028A858 = 8;
    MEMORY[4] = 0x8000;
    MEMORY[0] = -1174401534;
  }
  else
  {
    if ( (*(_BYTE *)(v2 + 32) & 0xF) == 4 )
      sub_80264420(0);
    dword_8028A858 = 8;
    MEMORY[4] = 0;
    MEMORY[0] = -1174401534;
  }
  result = 0;
  dword_8028A858 = 8;
  MEMORY[0] = -1157627903;
  MEMORY[4] = (v7 << 16) | v6 & 0xFFFF;
  return result;
}
// 80217A1C: write access to const memory at 8028A858 has been detected
// 80217B1C: write access to const memory at 8028A858 has been detected
// 80217BDC: write access to const memory at 8028A858 has been detected
// 80217C54: write access to const memory at 8028A858 has been detected
// 80217900: write access to const memory at 8028A858 has been detected
// 80217920: write access to const memory at 8028A858 has been detected
// 80217948: write access to const memory at 8028A858 has been detected
// 80217960: write access to const memory at 8028A858 has been detected
// 8021797C: write access to const memory at 8028A858 has been detected
// 80217998: write access to const memory at 8028A858 has been detected
// 802179B4: write access to const memory at 8028A858 has been detected
// 802179D0: write access to const memory at 8028A858 has been detected
// 802178A4: write access to const memory at 8028A858 has been detected
// 80217A78: write access to const memory at 8028A858 has been detected
// 80217B00: write access to const memory at 8028A858 has been detected
// 80217AB0: write access to const memory at 8028A858 has been detected
// 802177F4: write access to const memory at 8028A858 has been detected
// 80217810: write access to const memory at 8028A858 has been detected
// 8021782C: write access to const memory at 8028A858 has been detected
// 80217878: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
