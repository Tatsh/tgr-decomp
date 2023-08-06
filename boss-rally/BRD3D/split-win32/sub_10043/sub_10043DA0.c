#include "../../types-win32.h"
//----- (10043DA0) --------------------------------------------------------
int sub_10043DA0()
{
  _DWORD *v0; // eax
  int result; // eax

  if ( dword_10AA298C )
  {
    dword_10AA2904 = (void *)dword_10AA298C;
    result = 1;
  }
  else
  {
    v0 = (_DWORD *)malloc(0xC8u);
    if ( v0 )
      result = (int)meth_10048710(v0);
    else
      result = 0;
    dword_10AA298C = result;
    dword_10AA2904 = (void *)result;
    if ( result )
    {
      *(_DWORD *)(result + 4) = sub_10056A10;
      (*(void (__cdecl **)(int))(dword_10AA298C + 4))(dword_10AA298C);
      *((_DWORD *)dword_10AA2904 + 3) = 1;
      result = 1;
      *((_DWORD *)dword_10AA2904 + 26) = 1;
    }
  }
  return result;
}
// 10056A10: using guessed type int __cdecl sub_10056A10(int);
// 10AA298C: using guessed type int dword_10AA298C;
