#include "../../types-win32.h"
//----- (10072E60) --------------------------------------------------------
int sub_10072E60()
{
  int v0; // esi
  int *v1; // ebx
  int v2; // edi
  int v3; // eax
  int v4; // eax
  __int64 v6; // [esp-8h] [ebp-18h]
  __int64 v7; // [esp-8h] [ebp-18h]
  __int64 v8; // [esp-8h] [ebp-18h]

  v0 = 0;
  v1 = dword_100B64F8;
  v2 = 0;
  do
  {
    if ( dword_118290F4 )
    {
      v3 = dword_100B5DF0[v0];
      if ( v3 && v3 == dword_11828F08[v0] )
      {
        sub_100725C0(25, v0);
        sub_10072640(v0, 1);
        HIDWORD(v6) = dword_118AC72C[v2];
        LODWORD(v6) = dword_118AC728[v2];
        sub_10072680(v0, v6);
        sub_100727C0(v0, dword_118AC734[v2]);
        sub_10072910(25, v0, 1);
      }
    }
    else if ( *v1 && *v1 == dword_11828F08[v0] )
    {
      sub_100725C0(0, v0);
      sub_10072640(v0, 1);
      HIDWORD(v7) = dword_118AC72C[v2];
      LODWORD(v7) = dword_118AC728[v2];
      sub_10072680(v0, v7);
      sub_100727C0(v0, dword_118AC734[v2]);
      sub_10072910(0, v0, 1);
    }
    v4 = dword_118AC720[v2];
    if ( dword_11828D20[v2] != v4 )
      dword_11828D20[v2] = v4;
    if ( dword_11828D28[v2] != dword_118AC728[v2] || dword_11828D2C[v2] != dword_118AC72C[v2] )
    {
      HIDWORD(v8) = dword_118AC72C[v2];
      LODWORD(v8) = dword_118AC728[v2];
      sub_10072680(v0, v8);
    }
    if ( dword_11828D34[v2] != dword_118AC734[v2] )
      sub_100727C0(v0, dword_118AC734[v2]);
    if ( dword_118AC72C[v2] | dword_118AC728[v2] && !pm_sub_10072FE0(v0) )
    {
      dword_118AC728[v2] = 0;
      dword_11828D28[v2] = 0;
      dword_118AC72C[v2] = 0;
      dword_11828D2C[v2] = 0;
    }
    ++v1;
    ++v0;
    v2 += 6;
  }
  while ( (int)v1 < (int)&unk_100B6534 );
  return 1;
}
// 11828D20: using guessed type int dword_11828D20[];
// 11828D28: using guessed type int dword_11828D28[];
// 11828D2C: using guessed type int dword_11828D2C[];
// 118290F4: using guessed type int dword_118290F4;
// 118AC720: using guessed type int dword_118AC720[];
// 118AC728: using guessed type int dword_118AC728[];
// 118AC72C: using guessed type int dword_118AC72C[];
// 118AC734: using guessed type int dword_118AC734[];
