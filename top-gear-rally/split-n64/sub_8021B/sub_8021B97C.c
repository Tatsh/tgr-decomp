#include "../../types-n64.h"
//----- (8021B97C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8021B97C()
{
  int v0; // $fp
  int v1; // $s0
  int i; // $t7
  int *v3; // $s2
  int v4; // $s1
  int j; // $t5
  int v6; // $s0
  int v7; // $s0
  int k; // $t6
  int v9; // $s0
  int l; // $t0
  int result; // $v0
  int m; // $t4
  int v13; // $s0
  int n; // $t8
  int v15; // [sp+44h] [-Ch]

  v0 = 0;
  v1 = 0;
  if ( MEMORY[0x80025C64] > 0 )
  {
    for ( i = MEMORY[0x80025C60]; ; i = MEMORY[0x80025C60] )
    {
      if ( (*(_WORD *)(i + v1 + 76) & 4) == 0 )
        dword_8028ADE8 = 0;
      if ( sub_8021B72C(*(int **)(i + v1 + 68), dword_8028ABA8) )
        *(_WORD *)(MEMORY[0x80025C60] + v1 + 76) |= 8u;
      ++v0;
      v1 += 84;
      if ( v0 >= MEMORY[0x80025C64] )
        break;
    }
  }
  v15 = 0;
  v3 = dword_8031B760;
  do
  {
    v4 = 0;
    for ( j = *((unsigned __int8 *)v3 + 8291); ; j = *((unsigned __int8 *)v3 + 8291) )
    {
      v6 = 0;
      if ( j == 2 )
      {
        v7 = 0;
        for ( k = v3[2078]; ; k = v3[2078] )
        {
          sub_8021B72C(*(int **)(k + 40 * v4 + v7 + 24), dword_8028AC68);
          v7 += 4;
          if ( v7 >= 40 )
            break;
        }
        v9 = 0;
        for ( l = v3[2078]; ; l = v3[2078] )
        {
          result = sub_8021B72C(*(int **)(l + 12 * v4 + v9 + 188), dword_8028AD28);
          v9 += 4;
          if ( v9 == 12 )
            break;
        }
        ++v4;
      }
      else
      {
        for ( m = v3[2078]; ; m = v3[2078] )
        {
          sub_8021B72C(*(int **)(m + 40 * v4 + v6 + 24), dword_8028ABA8);
          v6 += 4;
          if ( v6 >= 40 )
            break;
        }
        v13 = 0;
        for ( n = v3[2078]; ; n = v3[2078] )
        {
          result = sub_8021B72C(*(int **)(n + 12 * v4 + v13 + 188), dword_8028ABA8);
          v13 += 4;
          if ( v13 == 12 )
            break;
        }
        ++v4;
      }
      if ( v4 == 3 )
        break;
    }
    ++v15;
    v3 += 2084;
  }
  while ( v15 < 2 );
  return result;
}
// 8021BA08: write access to const memory at 8028ADE8 has been detected
// 8028ABA8: using guessed type int dword_8028ABA8[48];
// 8028AC68: using guessed type int dword_8028AC68[48];
// 8028AD28: using guessed type int dword_8028AD28[48];
// 8028ADE8: using guessed type int dword_8028ADE8;
// 8028B7F4: using guessed type int dword_8028B7F4;
// 8028B940: using guessed type int dword_8028B940;
// 8031B760: using guessed type int dword_8031B760[512];
