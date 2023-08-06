#include "../../types-win32.h"
//----- (100446D0) --------------------------------------------------------
int __thiscall meth_100446D0(void *this)
{
  _DWORD *v1; // eax
  int result; // eax

  if ( dword_10AA2954 )
  {
    dword_10AA2904 = (void *)dword_10AA2954;
LABEL_8:
    g_GameMode = 6;
    if ( dword_10AA2884 )
    {
      if ( !dword_10AA2888 )
      {
        if ( dword_10AA287C == 2 || dword_10AA287C == 3 )
          sub_1003C230();
        sub_1003C150();
        dword_10AA2888 = 1;
        goto LABEL_15;
      }
      if ( dword_10AA2884 )
      {
LABEL_15:
        sub_1003CDA0();
        return 1;
      }
    }
    return 1;
  }
  v1 = (_DWORD *)malloc(0xC8u);
  if ( v1 )
    result = (int)meth_10048710(v1);
  else
    result = 0;
  dword_10AA2954 = result;
  dword_10AA2904 = (void *)result;
  if ( result )
  {
    *(_DWORD *)(result + 4) = sub_10058750;
    (*(void (__cdecl **)(int))(dword_10AA2954 + 4))(dword_10AA2954);
    *((_DWORD *)dword_10AA2904 + 3) = 1;
    *((_DWORD *)dword_10AA2904 + 26) = 1;
    goto LABEL_8;
  }
  return result;
}
// 10058750: using guessed type int __cdecl sub_10058750(int);
// 100AA010: using guessed type int g_GameMode;
// 10AA287C: using guessed type int dword_10AA287C;
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA2888: using guessed type int dword_10AA2888;
// 10AA2954: using guessed type int dword_10AA2954;
