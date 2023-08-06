#include "../../types-n64.h"
//----- (80265B08) --------------------------------------------------------
void __fastcall sub_80265B08(_BYTE *a1, int a2[4])
{
  BOOL v2; // $at
  char v3; // [sp+7h] [-11h]
  int v4; // [sp+8h] [-10h]
  int v5; // [sp+10h] [-8h]
  int *v6; // [sp+14h] [-4h]

  v3 = 0;
  v6 = dword_8037F3F0;
  v4 = 0;
  do
  {
    v5 = v6[1];
    *((_BYTE *)a2 + 3) = (BYTE2(*v6) & 0xC0) >> 4;
    if ( !*((_BYTE *)a2 + 3) )
    {
      *(_WORD *)a2 = (BYTE1(v5) << 8) | HIBYTE(v5);
      *((_BYTE *)a2 + 2) = BYTE2(v5);
      v3 |= 1 << v4;
    }
    v2 = v4 + 1 < 136;
    v6 += 2;
    ++v4;
    ++a2;
  }
  while ( v2 );
  *a1 = v3;
}
// 8037F3F0: using guessed type int dword_8037F3F0[15];
// 8037F431: using guessed type char byte_8037F431;
