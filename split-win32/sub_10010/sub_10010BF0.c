#include "../../types-win32.h"
//----- (10010BF0) --------------------------------------------------------
void __cdecl sub_10010BF0(int a1, int a2, int a3, int a4, int a5, float a6, float a7, int a8)
{
  double v9; // st6
  double v10; // st5
  double v11; // st4
  double v12; // st7
  int v13; // esi
  double v14; // st7
  float v15; // [esp+18h] [ebp+10h]
  float v16; // [esp+20h] [ebp+18h]
  float v17; // [esp+24h] [ebp+1Ch]

  v9 = *(float *)(a5 + 16) - a7;
  v10 = *(float *)(32 * a4 + a2 + 12) - a6;
  v11 = *(float *)(a5 + 12) - a6;
  v12 = *(float *)(32 * a4 + a2 + 16) - a7;
  v16 = v11;
  v13 = 32 * a4 + a2;
  v17 = v9;
  v15 = v10;
  if ( v10 * v15 + v12 * v12 > v11 * v16 + v9 * v17 )
  {
    v14 = *(float *)(a1 + 40) * *(float *)(a5 + 8)
        + *(float *)(a1 + 24) * *(float *)(a5 + 4)
        + *(float *)(a1 + 8) * *(float *)a5
        + *(float *)(a1 + 56);
    if ( *(float *)(a8 + 56) - -1.0 >= v14 )
    {
      *(float *)v13 = *(float *)(a1 + 32) * *(float *)(a5 + 8)
                    + *(float *)(a1 + 16) * *(float *)(a5 + 4)
                    + *(float *)a5 * *(float *)a1
                    + *(float *)(a1 + 48);
      *(float *)(v13 + 4) = *(float *)(a1 + 36) * *(float *)(a5 + 8)
                          + *(float *)(a1 + 20) * *(float *)(a5 + 4)
                          + *(float *)(a1 + 4) * *(float *)a5
                          + *(float *)(a1 + 52);
      *(float *)(v13 + 8) = v14;
      *(_DWORD *)(v13 + 12) = *(_DWORD *)(a5 + 12);
      *(_DWORD *)(v13 + 16) = *(_DWORD *)(a5 + 16);
      *(_DWORD *)(a3 + 4 * a4) = 1;
    }
  }
}
