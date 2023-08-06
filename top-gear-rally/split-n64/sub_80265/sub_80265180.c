#include "../../types-n64.h"
//----- (80265180) --------------------------------------------------------
float *__usercall sub_80265180@<$v0>(float a1@<$f12>, float a2@<$f14>, float a3@<$a2>, float a4@<$a3>, _WORD *a5@<$a1>, float *a6@<$a0>, float a7, float a8, float a9)
{
  float v9; // $f14
  float v10; // $f0
  float v11; // $f18
  float *v12; // $v0
  int v13; // $v1
  float v14; // $f16
  float v15; // $f10
  float v16; // $f12
  float v17; // $f14
  float v18; // $f8
  float v19; // $f6
  float v20; // $f4
  float v21; // $f2
  float *result; // $v0
  double v23; // $f0
  double v24; // $f10
  int v28; // $t8
  float v31; // [sp+1Ch] [-14h]
  float v32; // [sp+20h] [-10h]

  sub_80260FD0(a6);
  v9 = a3 * 0.01745329222222222;
  v31 = v9 / 2.0;
  v32 = sub_802617D0(v31);
  v10 = sub_80261610(v31);
  v11 = a7 + a8;
  v12 = a6;
  a6[11] = -1.0;
  a6[5] = v32 / v10;
  a6[10] = (float)(a7 + a8) / (float)(a7 - a8);
  *a6 = (float)(v32 / v10) / a4;
  a6[15] = 0.0;
  a6[14] = (float)((float)(2.0 * a7) * a8) / (float)(a7 - a8);
  v13 = 1;
  v14 = a6[1];
  v15 = *a6 * a9;
  v16 = a6[2];
  v17 = a6[3];
  do
  {
    v18 = v14 * a9;
    v19 = v12[4];
    v14 = v12[5];
    v20 = v16 * a9;
    v16 = v12[6];
    ++v13;
    v21 = v17 * a9;
    v17 = v12[7];
    *v12 = v15;
    v15 = v19 * a9;
    v12[1] = v18;
    v12[2] = v20;
    v12 += 4;
    *(v12 - 1) = v21;
  }
  while ( v13 != 4 );
  result = v12 + 4;
  *(result - 4) = v15;
  *(result - 3) = v14 * a9;
  *(result - 2) = v16 * a9;
  *(result - 1) = v17 * a9;
  if ( a5 )
  {
    v23 = v11;
    if ( v11 <= 2.0 )
    {
      *a5 = -1;
      return result;
    }
    *(float *)&v24 = 8.0;
    *((float *)&v24 + 1) = 0.0;
    _$T8 = 1;
    __asm
    {
      cfc1    $t7, FCSR
      ctc1    $t8, FCSR
      cfc1    $t8, FCSR
    }
    if ( (_$T8 & 0x78) != 0 )
    {
      _$T8 = 1;
      __asm
      {
        ctc1    $t8, FCSR
        cfc1    $t8, FCSR
      }
      if ( (_$T8 & 0x78) == 0 )
      {
        LOWORD(v28) = (int)(v24 / v23 - 2147483600.0);
        goto LABEL_13;
      }
    }
    else
    {
      v28 = (int)(v24 / v23);
      if ( (int)(v24 / v23) >= 0 )
        goto LABEL_13;
    }
    LOWORD(v28) = -1;
LABEL_13:
    __asm { ctc1    $t7, FCSR }
    *a5 = v28;
    if ( !(_WORD)v28 )
      *a5 = 1;
  }
  return result;
}
