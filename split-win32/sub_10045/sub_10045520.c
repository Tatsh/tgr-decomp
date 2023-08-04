#include "../../types-win32.h"
//----- (10045520) --------------------------------------------------------
int sub_10045520()
{
  _DWORD *v0; // eax
  int result; // eax

  if ( dword_10AA2994 )
  {
    dword_10AA2904 = (void *)dword_10AA2994;
    goto LABEL_8;
  }
  v0 = (_DWORD *)malloc(0xC8u);
  if ( v0 )
    result = (int)meth_10048710(v0);
  else
    result = 0;
  dword_10AA2994 = result;
  dword_10AA2904 = (void *)result;
  if ( result )
  {
    *(_DWORD *)(result + 4) = sub_1004DB00;
    (*(void (__cdecl **)(int))(dword_10AA2994 + 4))(dword_10AA2994);
    *((_DWORD *)dword_10AA2904 + 3) = 1;
    *((_DWORD *)dword_10AA2904 + 26) = 1;
LABEL_8:
    sub_1007AC00();
    result = 1;
  }
  return result;
}
// 1004DB00: using guessed type int __cdecl sub_1004DB00(int);
// 10AA2994: using guessed type int dword_10AA2994;
