#include "../../types-win32.h"
//----- (10061720) --------------------------------------------------------
void __thiscall sub_10061720(int this)
{
  int v2; // edx
  int v3; // eax
  float *v4; // ecx
  int v5; // edx
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // st6
  double v10; // rt1
  double v11; // st6
  double v12; // st7
  void *v13; // ecx
  int v14; // [esp-10h] [ebp-20h]

  debugPrint((void *)this);
  v2 = *(_DWORD *)(this + 360);
  *(_DWORD *)(this + 380) = this + 2976;
  *(_DWORD *)(v2 + 24) = this + 3360;
  *(_DWORD *)(*(_DWORD *)(this + 364) + 24) = this + 3424;
  *(_DWORD *)(*(_DWORD *)(this + 368) + 24) = this + 3392;
  *(_DWORD *)(*(_DWORD *)(this + 372) + 24) = this + 3456;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 360) + 24) + 8) = 0;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 360) + 24) + 12) = 0;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 360) + 24) + 16) = 0;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 364) + 24) + 8) = 0;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 364) + 24) + 12) = 0;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 364) + 24) + 16) = 0;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 368) + 24) + 8) = 0;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 368) + 24) + 12) = 0;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 368) + 24) + 16) = 0;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 372) + 24) + 8) = 0;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 372) + 24) + 12) = 0;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 372) + 24) + 16) = 0;
  sub_1006F540(this + 356);
  if ( !*(_DWORD *)(this + 3716) )
  {
    *(_DWORD *)(this + 3708) = 0;
    v14 = *(_DWORD *)(this + 360);
    *(_DWORD *)(this + 3700) = 0;
    *(_BYTE *)(this + 3712) = 0;
    sub_1006C1F0(this + 356, v14, this + 3708, this + 3712, 0.033333335);
    sub_1006C1F0(this + 356, *(_DWORD *)(this + 364), this + 3708, this + 3712, 0.033333335);
    sub_1006C1F0(this + 356, *(_DWORD *)(this + 368), this + 3700, this + 3704, 0.033333335);
    sub_1006C1F0(this + 356, *(_DWORD *)(this + 372), this + 3700, this + 3704, 0.033333335);
  }
  *(_DWORD *)(this + 3716) = 0;
  *(_DWORD *)(this + 608) = 0;
  *(_DWORD *)(this + 612) = 0;
  *(_DWORD *)(this + 616) = 0;
  *(_DWORD *)(this + 620) = 0;
  *(_DWORD *)(this + 624) = 0;
  *(_DWORD *)(this + 628) = 0;
  sub_1006B260(this + 356);
  sub_100743A0(this + 476, this + 356, 0.033333335);
  sub_1006B5F0(this + 356, 0.033333335, this + 3708, this + 3700, this + 3712, this + 3704);
  sub_100742D0((float *)(this + 476));
  v3 = *(_DWORD *)(this + 360);
  *(_DWORD *)(this + 380) = this + 3104;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 368) + 24) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 364) + 24) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 372) + 24) = 0;
  sub_1006EF80(this + 356, (float *)(this + 3328));
  sub_1006F650(this + 356);
  *(_DWORD *)(this + 608) = 0;
  *(_DWORD *)(this + 612) = 0;
  *(_DWORD *)(this + 616) = 0;
  *(_DWORD *)(this + 620) = 0;
  *(_DWORD *)(this + 624) = 0;
  *(_DWORD *)(this + 628) = 0;
  sub_1006B260(this + 356);
  qmemcpy((void *)(this + 700), (const void *)(this + 476), 0x44u);
  sub_100743A0(this + 700, this + 356, 0.033333335);
  v4 = (float *)(this + 516);
  v5 = 3;
  do
  {
    if ( *v4 == 0.0 )
    {
      v6 = 0.0;
    }
    else if ( *v4 <= 0.0 )
    {
      v6 = -1.0;
    }
    else
    {
      v6 = 1.0;
    }
    if ( v4[56] == 0.0 )
    {
      v7 = 0.0;
    }
    else if ( v4[56] <= 0.0 )
    {
      v7 = -1.0;
    }
    else
    {
      v7 = 1.0;
    }
    if ( v6 == v7 )
      *v4 = v4[56];
    else
      *v4 = 0.0;
    if ( *(v4 - 7) == 0.0 )
    {
      v8 = 0.0;
    }
    else if ( *(v4 - 7) <= 0.0 )
    {
      v8 = -1.0;
    }
    else
    {
      v8 = 1.0;
    }
    if ( v4[49] == 0.0 )
    {
      v9 = 0.0;
    }
    else if ( v4[49] <= 0.0 )
    {
      v9 = -1.0;
    }
    else
    {
      v9 = 1.0;
    }
    v10 = v9;
    v11 = v8;
    v12 = v10;
    if ( v11 == v10 )
      *(v4 - 7) = v4[49];
    else
      *(v4 - 7) = 0.0;
    ++v4;
    --v5;
  }
  while ( v5 );
  qmemcpy((void *)(this + 632), (const void *)(this + 476), 0x44u);
  sub_100742D0((float *)(this + 632));
  sub_100742D0((float *)(this + 632));
  sub_1006EC80(this, this + 356);
  qmemcpy((void *)(this + 476), (const void *)(this + 700), 0x44u);
  sub_1006F4A0(v12, (_DWORD *)(this + 356));
  sub_10074450((float *)(*(_DWORD *)(this + 360) + 188), (float *)(*(_DWORD *)(this + 360) + 120));
  sub_10074450((float *)(*(_DWORD *)(this + 364) + 188), (float *)(*(_DWORD *)(this + 364) + 120));
  sub_10074450((float *)(*(_DWORD *)(this + 368) + 188), (float *)(*(_DWORD *)(this + 368) + 120));
  sub_10074450((float *)(*(_DWORD *)(this + 372) + 188), (float *)(*(_DWORD *)(this + 372) + 120));
  debugPrint(v13);
}
// 10061BC9: variable 'v13' is possibly undefined
