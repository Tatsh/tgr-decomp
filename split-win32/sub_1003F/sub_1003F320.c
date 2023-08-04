#include "../../types-win32.h"
//----- (1003F320) --------------------------------------------------------
int __cdecl sub_1003F320(int a1)
{
  int v1; // ecx
  int result; // eax

  v1 = a1;
  if ( dword_10AA28F4 && a1 > 15 )
    v1 = a1 - 16;
  if ( dword_10AA289C && v1 > 15 && (dword_10AA27E0 & 0x8000) != 0 )
    v1 -= 16;
  if ( g_GameMode )
  {
    if ( g_GameMode == 6 )
    {
      if ( v1 == 15 )
        v1 = 7;
      if ( dword_10AA28F0 && v1 <= 15 )
        result = 1;
      else
        result = dword_100AB3E8 & (1 << v1);
    }
    else if ( g_GameMode == 2 && v1 == dword_10AD0984 )
    {
      result = 1;
    }
    else
    {
      if ( v1 == 15 )
        v1 = 11;
      if ( dword_10AA28F0 && v1 <= 15 )
        result = 1;
      else
        result = word_100AB3E4 & (1 << v1);
    }
  }
  else if ( dword_10AA289C )
  {
    if ( v1 == 15 )
      v1 = 11;
    if ( dword_10AA28F0 && v1 <= 15 )
      result = 1;
    else
      result = (unsigned __int16)dword_10AA27E0 & (1 << v1);
  }
  else
  {
    if ( v1 == 15 )
      v1 = 11;
    if ( dword_10AA28F0 && v1 <= 15 )
      result = 1;
    else
      result = dword_10AA2598 & (1 << v1);
  }
  return result;
}
// 100AA010: using guessed type int g_GameMode;
// 100AB3E4: using guessed type __int16 word_100AB3E4;
// 100AB3E8: using guessed type int dword_100AB3E8;
// 10AA2598: using guessed type int dword_10AA2598;
// 10AA27E0: using guessed type int dword_10AA27E0;
// 10AA289C: using guessed type int dword_10AA289C;
// 10AA28F0: using guessed type int dword_10AA28F0;
// 10AA28F4: using guessed type int dword_10AA28F4;
// 10AD0984: using guessed type int dword_10AD0984;
