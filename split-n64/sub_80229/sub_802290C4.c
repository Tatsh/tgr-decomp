#include "../../types-n64.h"
//----- (802290C4) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_802290C4(int i, int a2, float a3, float a4)
{
  int v8; // $v1
  float *v9; // $v0
  float v10; // $f0
  float *v11; // [sp+24h] [-14h]
  float v12; // [sp+34h] [-4h]
  float v13; // [sp+44h] [+Ch]

  while ( 1 )
  {
    if ( i && (*(_WORD *)(i + 22) & 1) != 0 )
    {
      for ( i = *(_DWORD *)(i + 4); i && (*(_WORD *)(i + 22) & 1) != 0; i = *(_DWORD *)(i + 4) )
        ;
    }
    if ( !i )
      break;
    v8 = *(unsigned __int16 *)(i + 20);
    v9 = (float *)(i + 40 * a2);
    if ( a2 < v8 )
    {
      do
      {
        v10 = (float)(v9[25] - v9[35]) * a3;
        if ( v10 >= a4 )
        {
          v11 = v9 + 29;
          v12 = v10;
          v13 = a4;
          sub_802248FC(&flt_8031B750, v9 + 19, v9 + 29, a3);
          sub_802248FC(&flt_8031B750, v11, &flt_8031B750, v13 / v12);
          dword_8028B824 = i;
          dword_8028B828 = a2;
          return;
        }
        a3 = 1.0;
        a4 = a4 - v10;
        ++a2;
        v9 += 10;
      }
      while ( a2 < v8 );
      i = *(_DWORD *)i;
    }
    else
    {
      i = *(_DWORD *)i;
    }
    a2 = 0;
  }
}
// 802291B4: write access to const memory at 8028B824 has been detected
// 802291C4: write access to const memory at 8028B828 has been detected
// 8028B824: using guessed type int dword_8028B824;
// 8028B828: using guessed type int dword_8028B828;
// 8031B750: using guessed type float flt_8031B750;
