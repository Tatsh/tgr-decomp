#include "../../types-win32.h"
//----- (10044E20) --------------------------------------------------------
int sub_10044E20()
{
  _DWORD *v0; // eax
  int result; // eax

  dword_10AA28CC = dword_10ACEE8C;
  dword_10AA28C8 = LODWORD(flt_10ACEE94);
  if ( dword_10AA2968 )
  {
    dword_10AA2904 = (void *)dword_10AA2968;
    result = 1;
  }
  else
  {
    v0 = (_DWORD *)malloc(0xC8u);
    if ( v0 )
      result = (int)sub_10048710(v0);
    else
      result = 0;
    dword_10AA2968 = result;
    dword_10AA2904 = (void *)result;
    if ( result )
    {
      *(_DWORD *)(result + 4) = sub_1005A6E0;
      (*(void (__cdecl **)(int))(dword_10AA2968 + 4))(dword_10AA2968);
      *((_DWORD *)dword_10AA2904 + 3) = 1;
      *((_DWORD *)dword_10AA2904 + 26) = 1;
      result = 1;
    }
  }
  return result;
}
// 1005A6E0: using guessed type int __cdecl sub_1005A6E0(int);
// 10AA28C8: using guessed type int dword_10AA28C8;
// 10AA28CC: using guessed type int dword_10AA28CC;
// 10AA2968: using guessed type int dword_10AA2968;
// 10ACEE8C: using guessed type int dword_10ACEE8C;
