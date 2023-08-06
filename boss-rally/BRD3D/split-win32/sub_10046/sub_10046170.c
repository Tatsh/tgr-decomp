#include "../../types-win32.h"
//----- (10046170) --------------------------------------------------------
int sub_10046170()
{
  _DWORD *v0; // eax
  int result; // eax

  sub_100419D0((int)asc_100AD300);
  sub_10072AF0(3, 0x200020u);
  dword_10AA2854 = 3;
  if ( dword_10AA2910 )
  {
    dword_10AA2904 = (void *)dword_10AA2910;
    result = 1;
  }
  else
  {
    v0 = (_DWORD *)malloc(0xC8u);
    if ( v0 )
      result = (int)meth_10048710(v0);
    else
      result = 0;
    dword_10AA2910 = result;
    dword_10AA2904 = (void *)result;
    if ( result )
    {
      *(_DWORD *)(result + 4) = sub_10049C20;
      (*(void (__cdecl **)(int))(dword_10AA2910 + 4))(dword_10AA2910);
      *((_DWORD *)dword_10AA2904 + 3) = 1;
      result = 1;
      *((_DWORD *)dword_10AA2904 + 26) = 1;
    }
  }
  return result;
}
// 10049C20: using guessed type int __cdecl sub_10049C20(int);
// 10AA2854: using guessed type int dword_10AA2854;
// 10AA2910: using guessed type int dword_10AA2910;
