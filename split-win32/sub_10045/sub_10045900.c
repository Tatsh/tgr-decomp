#include "../../types-win32.h"
//----- (10045900) --------------------------------------------------------
int __thiscall sub_10045900(void *this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // eax
  int result; // eax
  LPCSTR v4; // eax

  if ( sub_10045A00() )
  {
    sub_100419D0((int)asc_100AD300);
    if ( dword_10AA291C )
    {
      dword_10AA2904 = (void *)dword_10AA291C;
      return 1;
    }
    v1 = (_DWORD *)malloc(0xC8u);
    if ( v1 )
      v2 = sub_10048710(v1);
    else
      v2 = 0;
    dword_10AA291C = (int)v2;
    dword_10AA2904 = v2;
    if ( v2 )
    {
      v2[1] = sub_1004F2B0;
      (*(void (__cdecl **)(int))(dword_10AA291C + 4))(dword_10AA291C);
      *((_DWORD *)dword_10AA2904 + 3) = 1;
      result = 1;
      *((_DWORD *)dword_10AA2904 + 26) = 1;
      return result;
    }
  }
  else
  {
    v4 = getCaptionString(0xDu);
    sub_100419D0((int)v4);
  }
  return 0;
}
// 1004F2B0: using guessed type int __cdecl sub_1004F2B0(int);
// 10AA291C: using guessed type int dword_10AA291C;
