#include "../../types-n64.h"
//----- (8021D140) --------------------------------------------------------
int __fastcall sub_8021D140(int a1, __int16 a2, __int16 a3, __int16 a4)
{
  int result; // $v0
  int v7; // $t0
  int v8; // $a1
  int v9; // $t7
  _WORD *v10; // $a3
  int v11; // $t6
  _WORD *v12; // $v1
  int v13; // $v1
  _WORD *v14; // $a3
  char v15; // $t7
  _WORD *v16; // $v1

  result = 0;
  v7 = a1;
  do
  {
    v8 = *(_DWORD *)(a1 + 20);
    v9 = 36 * *(unsigned __int8 *)(v7 + 272);
    v10 = *(_WORD **)(v9 + v8 + 4);
    if ( v10 )
    {
      v12 = &v10[result];
      if ( (*(_BYTE *)(v9 + v8 + 32) & 0xF) == 1 )
      {
        *v10 = *v12 & 1 | (a2 << 11) | (a3 << 6) | (2 * a4);
        v10[1] = *v12 & 1 | ((a2 & 0x1E) << 10) | (32 * (a3 & 0x1E)) | a4 & 0x1E;
        v8 = *(_DWORD *)(a1 + 20);
      }
      v11 = *(unsigned __int8 *)(v7 + 273);
    }
    else
    {
      v11 = *(unsigned __int8 *)(v7 + 273);
    }
    v13 = 36 * v11 + v8;
    v14 = *(_WORD **)(v13 + 4);
    if ( v14 )
    {
      v15 = *(_BYTE *)(v13 + 32);
      v16 = &v14[result];
      if ( (v15 & 0xF) == 1 )
      {
        *v14 = v16[1] & 1 | (a2 << 11) | (a3 << 6) | (2 * a4);
        v14[1] = v16[1] & 1 | ((a2 & 0x1E) << 10) | (32 * (a3 & 0x1E)) | a4 & 0x1E;
      }
      result += 2;
    }
    else
    {
      result += 2;
    }
    v7 += 2;
  }
  while ( result != 12 );
  return result;
}
