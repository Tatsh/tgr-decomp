#include "../../types-n64.h"
//----- (8025E820) --------------------------------------------------------
void __fastcall sub_8025E820(int a1, float *a2)
{
  float v2; // $f4
  float v3; // $f18
  float v4; // [sp+20h] [-18h]
  float v5; // [sp+24h] [-14h]
  int v6; // [sp+28h] [-10h]
  int v7; // [sp+2Ch] [-Ch]
  int v8; // [sp+30h] [-8h]
  int v9; // [sp+34h] [-4h]

  a2[2] = *(float *)(a1 + 132) * -110.0;
  a2[3] = *(float *)(a1 + 136) * -110.0;
  a2[4] = *(float *)(a1 + 140) * -110.0;
  v9 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 416);
  v8 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 8) + 416);
  v7 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 416);
  v6 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 16) + 416);
  if ( sub_80261140(
         (float)(*(float *)(a1 + 140) * *(float *)(a1 + 140))
       + (float)((float)(*(float *)(a1 + 132) * *(float *)(a1 + 132))
               + (float)(*(float *)(a1 + 136) * *(float *)(a1 + 136)))) > 4.0
    && (v9 == 4 || v8 == 4 || v7 == 4 || v6 == 4) )
  {
    v4 = *(float *)(a1 + 136) * -220.0;
    v5 = *(float *)(a1 + 140) * -220.0;
    v2 = a2[3];
    v3 = a2[4];
    a2[2] = a2[2] + (float)(*(float *)(a1 + 132) * -220.0);
    a2[3] = v2 + v4;
    a2[4] = v3 + v5;
  }
}
// 8028C800: using guessed type int dword_8028C800;
