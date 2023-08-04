#include "../../types-win32.h"
//----- (1003CB10) --------------------------------------------------------
int __cdecl sub_1003CB10(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int *v5; // eax
  int v6; // eax

  v4 = -2147467259;
  if ( dword_10AA29E4 )
    sub_1003C9B0();
  v5 = dword_10AA2540;
  do
  {
    *v5 = 0;
    v5 += 3;
  }
  while ( (int)v5 < (int)flt_10AA25A0 );
  if ( unk )
    v4 = (*(int (__stdcall **)(SIZE_T, int, int, int, int))(*(_DWORD *)unk + 48))(unk, a1, a2, a3, a4);
  sub_1003CA70();
  v6 = sub_100586D0(*(_DWORD *)(dword_10A9D008 + 8));
  sub_1003D950(dword_10A9D008, v6);
  return v4;
}
// 1003C9B0: using guessed type int sub_1003C9B0(void);
// 1003CA70: using guessed type int sub_1003CA70(void);
// 1003D950: using guessed type _DWORD __cdecl sub_1003D950(_DWORD, _DWORD);
// 100586D0: using guessed type _DWORD __cdecl sub_100586D0(_DWORD);
// 10AA29E4: using guessed type int dword_10AA29E4;
