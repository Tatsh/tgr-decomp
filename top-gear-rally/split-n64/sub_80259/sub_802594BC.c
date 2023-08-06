#include "../../types-n64.h"
//----- (802594BC) --------------------------------------------------------
void __fastcall sub_802594BC(int a1)
{
  float *v1; // $s1
  int i; // $v0
  int v4; // $v0
  float v5; // $f4
  float v6; // $f18
  float v7; // $f6
  float v8; // $f16
  float v9; // [sp+44h] [-24h]
  float v10; // [sp+48h] [-20h]
  float v11; // [sp+4Ch] [-1Ch] BYREF
  float v12; // [sp+50h] [-18h]
  float v13; // [sp+54h] [-14h]
  float v14; // [sp+58h] [-10h] BYREF
  float v15; // [sp+5Ch] [-Ch]
  float v16; // [sp+60h] [-8h]

  v1 = *(float **)(a1 + 24);
  if ( v1 )
  {
    for ( i = *((_DWORD *)v1 + 1); ; i = *((_DWORD *)v1 + 1) )
    {
      if ( i )
      {
        if ( i == 1 )
          sub_80258758(&v14, a1 + 188, v1 + 2);
        v4 = *(_DWORD *)(a1 + 28);
      }
      else
      {
        v14 = v1[2];
        v15 = v1[3];
        v16 = v1[4];
        v4 = *(_DWORD *)(a1 + 28);
      }
      v5 = *(float *)(a1 + 256);
      v6 = *(float *)(a1 + 260);
      *(float *)(a1 + 252) = v14 + *(float *)(a1 + 252);
      *(float *)(a1 + 256) = v15 + v5;
      *(float *)(a1 + 260) = v16 + v6;
      if ( v4 != 2 )
      {
        sub_80258758(&v11, a1 + 188, v1 + 5);
        v9 = (float)(v13 * v14) - (float)(v16 * v11);
        v10 = (float)(v11 * v15) - (float)(v14 * v12);
        v7 = *(float *)(a1 + 268);
        v8 = *(float *)(a1 + 272);
        *(float *)(a1 + 264) = (float)((float)(v12 * v16) - (float)(v15 * v13)) + *(float *)(a1 + 264);
        *(float *)(a1 + 268) = v9 + v7;
        *(float *)(a1 + 272) = v10 + v8;
      }
      v1 = *(float **)v1;
      if ( !v1 )
        break;
    }
  }
}
