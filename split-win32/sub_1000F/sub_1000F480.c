#include "../../types-win32.h"
//----- (1000F480) --------------------------------------------------------
void __cdecl sub_1000F480(int a1, int a2, int a3, _WORD *a4, _WORD *a5)
{
  int v5; // edi
  _DWORD *v6; // eax
  __int16 v7; // di
  int v8; // ecx
  int v9; // esi
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st6
  double v14; // st3
  double v15; // st7
  __int64 v16; // rax
  double v17; // st7
  float v18; // [esp+Ch] [ebp-14h]
  float v19; // [esp+10h] [ebp-10h] BYREF
  float v20; // [esp+14h] [ebp-Ch]
  float v21; // [esp+1Ch] [ebp-4h]
  int v22; // [esp+24h] [ebp+4h]
  float v23; // [esp+24h] [ebp+4h]

  v5 = *(_DWORD *)(a1 + 88 * dword_106C5708);
  v6 = (_DWORD *)(a1 + 88 * dword_106C5708);
  v22 = (int)v6[2] >> 1;
  v7 = v22 + v5;
  v8 = v6[3];
  v23 = (float)v22;
  v9 = (v8 >> 1) + v6[1];
  v18 = (float)(v8 >> 1);
  sub_1003B2A0(&v19, (float *)a2, &flt_106C29A8);
  if ( v21 > 0.001 || v21 < -0.001 )
  {
    v10 = 1.0 / v21;
    v11 = v10 * v19;
    if ( dword_106C1174 != dword_106C3364 )
      v11 = -v11;
    v19 = v11;
    v12 = v10 * v20;
    v13 = (double)a3 * v10;
    v14 = (v19 - v13) * v23;
    v19 = v13 + v19;
    v20 = v13 + v12;
    *a4 = v7 + (__int64)v14;
    v15 = v23 * v19;
    a4[1] = v9 - (__int64)((v12 - v13) * v18);
    v16 = (__int64)v15;
    v17 = v18 * v20;
    *a5 = v7 + v16;
    a5[1] = v9 - (__int64)v17;
  }
}
// 106C1174: using guessed type int dword_106C1174;
// 106C29A8: using guessed type float flt_106C29A8;
// 106C3364: using guessed type int dword_106C3364;
// 106C5708: using guessed type int dword_106C5708;
