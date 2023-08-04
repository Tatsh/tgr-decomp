#include "../../types-win32.h"
//----- (10045390) --------------------------------------------------------
int sub_10045390()
{
  _DWORD *v0; // eax
  int result; // eax

  if ( dword_10AA2980 )
  {
    dword_10AA2904 = (void *)dword_10AA2980;
    result = 1;
  }
  else
  {
    v0 = (_DWORD *)malloc(0xC8u);
    if ( v0 )
      result = (int)meth_10048710(v0);
    else
      result = 0;
    dword_10AA2980 = result;
    dword_10AA2904 = (void *)result;
    if ( result )
    {
      *(_DWORD *)(result + 4) = sub_1004D1F0;
      (*(void (__cdecl **)(int))(dword_10AA2980 + 4))(dword_10AA2980);
      *((_DWORD *)dword_10AA2904 + 3) = 1;
      result = 1;
      *((_DWORD *)dword_10AA2904 + 26) = 1;
    }
  }
  return result;
}
// 1004D1F0: using guessed type int __cdecl sub_1004D1F0(int);
// 10AA2980: using guessed type int dword_10AA2980;
