#include "../../types-n64.h"
//----- (80208A58) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80208A58(int a1)
{
  int result; // $v0
  int v2; // $s0
  int *v3; // $a3

  result = 0;
  if ( a1 < 10 )
  {
    sub_8022F5D0(10);
    sub_8022F4F8();
    sub_8022F504();
    v2 = *(_DWORD *)(28 * MEMORY[0xC74C1D3C] - 2144814768)
       - *(unsigned __int16 *)(2 * MEMORY[0xC74C1D3C] - 951313096 + 30);
    if ( v2 > 0 )
    {
      formatter("%wwFirst=9, Second=6, Third=5, Fourth=3, Fifth=2, Sixth=1", 160, 100);
      if ( v2 == 1 )
        v3 = &dword_802A7784;
      else
        v3 = &dword_802A7788;
      sub_80260DD4((char *)dword_80315EE8, "%%ww%d point%s needed to advance to next season", v2, (const char *)v3);
    }
    else
    {
      sub_80260DD4((char *)dword_80315EE8, "%%wwYou have enough points to advance to next season");
    }
    result = formatter((const char *)dword_80315EE8, 160, 90);
  }
  return result;
}
// 80208C74: write access to const memory at 80315EE0 has been detected
// 80208CB0: write access to const memory at 8028B940 has been detected
// 80208CD4: write access to const memory at 8036A8E0 has been detected
// 80208CD8: write access to const memory at 8036A8F8 has been detected
// 8026FF18: using guessed type int dword_8026FF18;
// 8028B940: using guessed type int dword_8028B940;
// 802A7784: using guessed type int dword_802A7784;
// 802A7788: using guessed type int dword_802A7788;
// 80315EE0: using guessed type int dword_80315EE0;
// 80315EE8: using guessed type int dword_80315EE8[20];
// 8036A8E0: using guessed type int dword_8036A8E0[];
// 8036A8F8: using guessed type float flt_8036A8F8;
