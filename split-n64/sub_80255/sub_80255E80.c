#include "../../types-n64.h"
//----- (80255E80) --------------------------------------------------------
void __fastcall sub_80255E80(unsigned int a1, unsigned int a2, unsigned int a3, int (__fastcall *a4)(unsigned int, unsigned int))
{
  int v4; // $ra
  void (__fastcall *v7)(unsigned int, unsigned int, int); // $s6
  int v8; // $s7
  unsigned int v9; // $s2
  unsigned int v10; // $s5
  unsigned int v11; // $v0
  unsigned int v12; // $s0
  unsigned int i; // $s1
  int v14; // $v0
  _BYTE v15[16]; // [sp+0h] [-168h] BYREF
  int v16; // [sp+44h] [-124h]
  unsigned int v17; // [sp+4Ch] [-11Ch]

  v16 = v4;
  if ( (a3 & 3) != 0 )
  {
    if ( (a3 & 1) != 0 )
      v7 = (void (__fastcall *)(unsigned int, unsigned int, int))sub_802561A8;
    else
      v7 = (void (__fastcall *)(unsigned int, unsigned int, int))sub_802561E4;
  }
  else
  {
    v7 = (void (__fastcall *)(unsigned int, unsigned int, int))sub_80256228;
  }
  if ( a2 >= 2 && a3 )
  {
    v8 = 0;
    v9 = a1;
    v10 = a1 + a3 * (a2 - 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = (v10 - v9) / a3 + 1;
        if ( !a3 )
          __break(7u, 0);
        if ( v11 < 9 )
        {
          sub_802560DC(v9, v10, a3, a4, v7);
          --v8;
          goto LABEL_34;
        }
        v17 = v9 + a3;
        v7((v11 >> 1) * a3 + v9, v9, a3);
        v12 = v10 + a3;
        for ( i = v9 + a3; ; i += a3 )
        {
          while ( v10 >= i && a4(i, v9) <= 0 )
            i += a3;
          for ( v12 -= a3; v9 < v12 && a4(v12, v9) >= 0; v12 -= a3 )
            ;
          if ( v12 < i )
            break;
          v7(i, v12, a3);
        }
        v7(v9, v12, a3);
        if ( (int)(v12 - v9 - 1) >= (int)(v10 - i) )
          break;
        if ( i < v10 )
        {
          *(_DWORD *)&v15[4 * v8 + 216] = i;
          *(_DWORD *)&v15[4 * v8++ + 96] = v10;
        }
        if ( v17 < v12 )
        {
          v10 = v12 - a3;
        }
        else
        {
          --v8;
LABEL_34:
          v14 = 4 * v8;
          if ( v8 < 0 )
            return;
          v9 = *(_DWORD *)&v15[v14 + 216];
          v10 = *(_DWORD *)&v15[v14 + 96];
        }
      }
      if ( v17 < v12 )
      {
        *(_DWORD *)&v15[4 * v8 + 216] = v9;
        *(_DWORD *)&v15[4 * v8++ + 96] = v12 - a3;
      }
      if ( i >= v10 )
      {
        --v8;
        goto LABEL_34;
      }
      v9 = i;
    }
  }
}
// 80255E98: variable 'v4' is possibly undefined
// 802561E4: using guessed type int sub_802561E4();
// 80256228: using guessed type int sub_80256228();
