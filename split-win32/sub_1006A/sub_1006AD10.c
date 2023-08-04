#include "../../types-win32.h"
//----- (1006AD10) --------------------------------------------------------
int sub_1006AD10()
{
  int v0; // esi
  int v1; // eax
  int result; // eax
  int v3; // ecx
  int v4; // edx

  v0 = 0;
  if ( (dword_118ABAD0 & 0x200000) != 0 )
  {
    v1 = 3;
    v0 = 1;
    dword_106909E0 = 3;
  }
  else if ( (dword_118ABAD0 & 0x400000) != 0 )
  {
    v1 = 3;
    v0 = -1;
    dword_106909E0 = 3;
  }
  else
  {
    v1 = dword_106909E0;
  }
  if ( (dword_118ABAD0 & 0x800000) != 0 )
  {
    v1 = 3;
    v0 = 10;
    dword_106909E0 = 3;
  }
  else if ( (dword_118ABAD0 & 0x1000000) != 0 )
  {
    v1 = 3;
    v0 = -10;
    dword_106909E0 = 3;
  }
  if ( (dword_118ABAD0 & 0x100000) != 0 )
  {
    v1 = 1;
    dword_106909E0 = 1;
  }
  if ( v1 == 1 )
  {
    v0 = 1;
  }
  else if ( v1 == 3 && !v0 )
  {
    dword_106909E0 = 2;
  }
  for ( result = 0; result < 8; ++result )
  {
    v3 = v0 + dword_11750310[result];
    dword_11750310[result] = v3;
    if ( v3 >= 0 )
    {
      v4 = dword_10B502E8[result] - 1;
      if ( v3 > v4 )
        dword_11750310[result] = v4;
    }
    else
    {
      dword_11750310[result] = 0;
    }
  }
  return result * 4;
}
// 106909E0: using guessed type int dword_106909E0;
// 10B502E8: using guessed type int dword_10B502E8[];
// 11750310: using guessed type int dword_11750310[];
// 118ABAD0: using guessed type int dword_118ABAD0;
