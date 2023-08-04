#include "../../types-win32.h"
//----- (100447D0) --------------------------------------------------------
int sub_100447D0()
{
  int v0; // eax
  _DWORD *v1; // eax
  int result; // eax
  int v3[2]; // [esp+8h] [ebp-14h] BYREF
  int v4; // [esp+18h] [ebp-4h]

  dword_10A9CFFC = 1;
  sub_100586A0();
  if ( dword_10AA2884 )
  {
    v0 = 0;
    v3[0] = 0;
    if ( unk )
    {
      sub_1003D0B0(unk, (LPDWORD)v3);
      v0 = v3[0];
    }
    if ( v0 )
    {
      *(_DWORD *)(v0 + 4) &= 0xFFFFFFDF;
      (*(void (__stdcall **)(SIZE_T, int, _DWORD))(*(_DWORD *)unk + 124))(unk, v3[0], 0);
    }
  }
  sub_10043BF0();
  sub_10043CD0();
  sub_10043E70();
  if ( dword_10AA2884 )
  {
    sub_100440D0();
    sub_100443E0();
  }
  else
  {
    sub_10044280();
  }
  if ( dword_10AA2954 )
  {
    dword_10AA2904 = (void *)dword_10AA2954;
  }
  else
  {
    v1 = (_DWORD *)malloc(0xC8u);
    v3[1] = (int)v1;
    v4 = 0;
    if ( v1 )
      result = (int)sub_10048710(v1);
    else
      result = 0;
    v4 = -1;
    dword_10AA2954 = result;
    dword_10AA2904 = (void *)result;
    if ( !result )
      return result;
    *(_DWORD *)(result + 4) = sub_10058750;
    (*(void (__cdecl **)(int))(dword_10AA2954 + 4))(dword_10AA2954);
    *((_DWORD *)dword_10AA2904 + 3) = 1;
    *((_DWORD *)dword_10AA2904 + 26) = 1;
  }
  g_GameMode = 6;
  if ( dword_10AA2884 )
  {
    if ( dword_10AA2888 )
    {
      if ( dword_10AA2884 )
        sub_1003CDA0();
    }
    else
    {
      sub_1003C150();
      dword_10AA2888 = 1;
    }
  }
  if ( dword_10A9D008 )
  {
    if ( *(_DWORD *)(dword_10A9D008 + 8) )
      sub_1003DB00((int *)dword_10A9D008, *(_DWORD *)(dword_10A9D008 + 8));
  }
  return 1;
}
// 10058750: using guessed type int __cdecl sub_10058750(int);
// 100AA010: using guessed type int g_GameMode;
// 10A9CFFC: using guessed type int dword_10A9CFFC;
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA2888: using guessed type int dword_10AA2888;
// 10AA2954: using guessed type int dword_10AA2954;
