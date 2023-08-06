#include "../../types-n64.h"
//----- (80200050) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80200050(int a1)
{
  dword_8028AA84 = 0;
  dword_8028AA8C = 0;
  dword_8028AA80 = 0;
  switch ( a1 )
  {
    case 0:
      dword_8028AA78 = 0;
      break;
    case 1:
      dword_8028AA78 = 1;
      break;
    case 2:
      dword_8028AA78 = 1;
      dword_8028AA8C = 0;
      break;
    case 3:
      dword_8028AA78 = 1;
      dword_8028AA84 = 0;
      break;
    case 4:
      dword_8028AA78 = 1;
      dword_8028AA80 = 0;
      break;
    default:
      return sub_8021B97C();
  }
  return sub_8021B97C();
}
// 802000A4: write access to const memory at 8028AA78 has been detected
// 802000B4: write access to const memory at 8028AA78 has been detected
// 802000BC: write access to const memory at 8028AA78 has been detected
// 802000D0: write access to const memory at 8028AA78 has been detected
// 802000E4: write access to const memory at 8028AA78 has been detected
// 80200074: write access to const memory at 8028AA84 has been detected
// 80200078: write access to const memory at 8028AA8C has been detected
// 80200080: write access to const memory at 8028AA80 has been detected
// 802000C8: write access to const memory at 8028AA8C has been detected
// 802000DC: write access to const memory at 8028AA84 has been detected
// 802000EC: write access to const memory at 8028AA80 has been detected
// 8028AA78: using guessed type int dword_8028AA78;
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AA8C: using guessed type int dword_8028AA8C;
