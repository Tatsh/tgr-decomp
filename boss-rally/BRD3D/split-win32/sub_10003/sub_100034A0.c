#include "../../types-win32.h"
//----- (100034A0) --------------------------------------------------------
int __cdecl sub_100034A0(int a1, int a2, int a3, unsigned int a4)
{
  int *v4; // edi
  unsigned int v5; // esi
  int v6; // eax
  int v7; // eax
  int result; // eax

  if ( a4 <= dword_1022AF3C && a4 )
  {
    v4 = dword_1022AAB0;
    do
    {
      if ( *v4 == a3 )
      {
        v5 = *v4 + a2 + (a4 >> 1) - v4[1];
        sub_10075100();
        v6 = sub_100750F0();
        dword_1022AF3C = a4;
        dword_10220DD8 = v6 - v5;
      }
      v4 += 2;
    }
    while ( (int)v4 < (int)&unk_1022AAF0 );
  }
  v7 = dword_1022AF38;
  dword_1022AAB0[2 * dword_1022AF38] = a1;
  dword_1022AAB4[2 * v7] = a2;
  result = v7 + 1;
  dword_1022AF38 = result;
  if ( result >= 8 )
    dword_1022AF38 = 0;
  return result;
}
// 10220DD8: using guessed type int dword_10220DD8;
// 1022AAB0: using guessed type int dword_1022AAB0[];
// 1022AF38: using guessed type int dword_1022AF38;
// 1022AF3C: using guessed type int dword_1022AF3C;
