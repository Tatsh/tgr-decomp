#include "../../types-win32.h"
//----- (10045AF0) --------------------------------------------------------
int sub_10045AF0()
{
  _DWORD *v0; // eax
  int result; // eax

  if ( dword_10AA2924 )
  {
    dword_10AA2904 = (void *)dword_10AA2924;
    result = 1;
  }
  else
  {
    v0 = (_DWORD *)malloc(0xC8u);
    if ( v0 )
      result = (int)sub_10048710(v0);
    else
      result = 0;
    dword_10AA2924 = result;
    dword_10AA2904 = (void *)result;
    if ( result )
    {
      *(_DWORD *)(result + 4) = sub_1004F700;
      (*(void (__cdecl **)(int))(dword_10AA2924 + 4))(dword_10AA2924);
      *((_DWORD *)dword_10AA2904 + 3) = 1;
      result = 1;
      *((_DWORD *)dword_10AA2904 + 26) = 1;
    }
  }
  return result;
}
// 1004F700: using guessed type int __cdecl sub_1004F700(int);
// 10AA2924: using guessed type int dword_10AA2924;
