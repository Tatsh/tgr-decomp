#include "../../types-n64.h"
//----- (8025EC7C) --------------------------------------------------------
void __fastcall sub_8025EC7C(_DWORD *a1)
{
  int v2; // $s0
  int v3; // $s1
  float v4; // $f0
  float v5; // $f12
  double v6; // $f6
  int v7; // [sp+5Ch] [-14h]

  v2 = 0;
  v3 = v7;
  do
  {
    if ( v2 )
    {
      switch ( v2 )
      {
        case 1:
          v3 = a1[2];
          break;
        case 2:
          v3 = a1[3];
          break;
        case 3:
          v3 = a1[4];
          break;
      }
    }
    else
    {
      v3 = a1[1];
    }
    sub_8025E96C((int)a1, v3);
    v5 = -v4;
    ++v2;
    *(float *)(v3 + 472) = -v4;
    if ( (float)-v4 > 0.0 )
    {
      v5 = 0.0;
      v6 = 0.0;
    }
    else
    {
      v6 = v5;
    }
    if ( v6 < -0.4 )
      *(float *)(v3 + 128) = -0.40000001;
    else
      *(float *)(v3 + 128) = v5;
  }
  while ( v2 != 4 );
}
// 8025ECD4: variable 'v7' is possibly undefined
// 8025ED34: variable 'v4' is possibly undefined
