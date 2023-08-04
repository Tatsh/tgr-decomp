#include "../../types-win32.h"
//----- (10043BF0) --------------------------------------------------------
int sub_10043BF0()
{
  _DWORD *v0; // eax
  int result; // eax

  sub_100419D0((int)asc_100AD300);
  sub_1003E510();
  if ( dword_10AA2958 )
  {
    dword_10AA2904 = (void *)dword_10AA2958;
    result = 1;
  }
  else
  {
    v0 = (_DWORD *)malloc(0xC8u);
    if ( v0 )
      result = (int)sub_10048710(v0);
    else
      result = 0;
    dword_10AA2958 = result;
    dword_10AA2904 = (void *)result;
    if ( result )
    {
      *(_DWORD *)(result + 4) = sub_100563E0;
      (*(void (__cdecl **)(int))(dword_10AA2958 + 4))(dword_10AA2958);
      *((_DWORD *)dword_10AA2904 + 3) = 1;
      result = 1;
      *((_DWORD *)dword_10AA2904 + 26) = 1;
    }
  }
  return result;
}
// 100563E0: using guessed type int __cdecl sub_100563E0(int);
// 10AA2958: using guessed type int dword_10AA2958;
