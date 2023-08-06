#include "../../types-n64.h"
//----- (80228A6C) --------------------------------------------------------
int __fastcall sub_80228A6C(int a1)
{
  float v2; // $f0
  float v3; // $f0
  float v4; // $f2
  float v5; // $f12
  int v6; // $t2
  int v7; // $v0
  int result; // $v0
  float v9; // [sp+2Ch] [-14h]
  float v10; // [sp+30h] [-10h]
  float v11; // [sp+34h] [-Ch]

  sub_80220620(a1);
  sub_802203F0(a1, *(_DWORD *)(a1 + 320));
  v11 = sub_802617D0(MEMORY[0x80025C4C]);
  v10 = sub_80261610(MEMORY[0x80025C4C]);
  v9 = sub_802617D0(MEMORY[0x80025C4C] + 1.5707964);
  v2 = sub_80261610(MEMORY[0x80025C4C] + 1.5707964);
  sub_8021FE04(
    a1,
    COERCE_INT(
      (float)(MEMORY[0x80025C40] - (float)((float)(v9 * 3.0) * (float)(0.5 - 0.5)))
    - (float)((float)(v11 * 8.0) * (float)(0.0 + 1.0))),
    COERCE_INT(
      (float)(MEMORY[0x80025C44] - (float)((float)(v2 * 3.0) * (float)(0.5 - 0.5)))
    - (float)((float)(v10 * 8.0) * (float)(0.0 + 1.0))),
    COERCE_INT(MEMORY[0x80025C48] + 0.1));
  *(float *)(a1 + 4008) = (float)(0.0 + 0.5) * -8.0;
  sub_8021FE80((float *)a1, MEMORY[0x80025C4C]);
  v3 = *(float *)(a1 + 48);
  v4 = *(float *)(a1 + 52);
  v5 = *(float *)(a1 + 56);
  *(float *)(a1 + 3920) = v3;
  *(float *)(a1 + 3884) = v3;
  *(float *)(a1 + 3924) = v4;
  *(float *)(a1 + 3888) = v4;
  *(float *)(a1 + 3928) = v5;
  *(float *)(a1 + 3892) = v5;
  sub_80221864(a1);
  *(_DWORD *)(a1 + 3696) = 0;
  *(_DWORD *)(a1 + 3700) = 0;
  *(_DWORD *)(a1 + 3704) = 0;
  *(_DWORD *)(a1 + 3708) = -180;
  sub_802201C8((_DWORD *)a1, COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0));
  if ( MEMORY[0x80025C70] )
  {
    *(float *)(a1 + 3968) = 0.0;
    *(float *)(a1 + 4000) = 0.0;
    *(float *)(a1 + 3992) = 0.0;
    *(_DWORD *)(a1 + 4004) = dword_802709DC[21 * *(_DWORD *)(a1 + 3636) + 109];
    v6 = MEMORY[0x80025C70];
    *(_DWORD *)(a1 + 3936) = 0;
    *(_DWORD *)(a1 + 3932) = v6;
    sub_802245F0(a1 + 3940, (float *)(MEMORY[0x80025C70] + 76), (float *)(MEMORY[0x80025C70] + 116));
  }
  else
  {
    *(float *)(a1 + 3944) = 0.0;
    *(float *)(a1 + 3948) = 0.0;
    *(_DWORD *)(a1 + 3940) = 1065353216;
  }
  v7 = *(_DWORD *)(a1 + 320);
  *(_DWORD *)(a1 + 3960) = 0;
  *(_DWORD *)(a1 + 3996) = 0;
  *(_DWORD *)(a1 + 4012) = -v7;
  *(_DWORD *)(a1 + 3952) = 0;
  if ( v7 >= 1 )
  {
    *(_DWORD *)(a1 + 3964) = 0;
    *(_DWORD *)(a1 + 3956) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 3964) = -1;
    *(_DWORD *)(a1 + 3956) = -1;
  }
  *(_DWORD *)(a1 + 0x2000) = 0;
  *(_DWORD *)(a1 + 8260) = 0;
  *(float *)(a1 + 7628) = 0.0;
  *(float *)(a1 + 4072) = 0.0;
  *(float *)(a1 + 4068) = 0.0;
  *(float *)(a1 + 4076) = 0.0;
  *(float *)(a1 + 4080) = 0.0;
  *(float *)(a1 + 4084) = 0.0;
  *(float *)(a1 + 4088) = 0.0;
  *(float *)(a1 + 4092) = 0.0;
  *(float *)(a1 + 4096) = 0.0;
  *(float *)(a1 + 4100) = 0.0;
  *(float *)(a1 + 4104) = 0.0;
  *(float *)(a1 + 4108) = 0.0;
  *(_DWORD *)(a1 + 4052) = 0;
  *(_DWORD *)(a1 + 3796) = 0;
  sub_802288D4(a1);
  result = sub_80228A3C((_WORD *)a1);
  *(_DWORD *)(a1 + 3912) = 0;
  *(_DWORD *)(a1 + 3896) = 0;
  *(_DWORD *)(a1 + 3900) = 0;
  *(_DWORD *)(a1 + 3904) = 0;
  *(float *)(a1 + 3908) = 1.0;
  return result;
}
// 8026FF08: using guessed type int dword_8026FF08;
// 8026FF18: using guessed type int dword_8026FF18;
// 802709DC: using guessed type int dword_802709DC[95];
// 8028B940: using guessed type int dword_8028B940;
// 8028C800: using guessed type int dword_8028C800;
