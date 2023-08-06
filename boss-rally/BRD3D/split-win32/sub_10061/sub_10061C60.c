#include "../../types-win32.h"
//----- (10061C60) --------------------------------------------------------
float *__usercall sub_10061C60@<eax>(int a1@<ecx>, double a2@<st0>)
{
  float v3; // eax
  float *result; // eax
  double v5; // st5
  double v6; // st7
  double v7; // st6
  float v8; // [esp+0h] [ebp-D8h]
  float v9; // [esp+0h] [ebp-D8h]
  int v10[16]; // [esp+18h] [ebp-C0h] BYREF
  int v11[16]; // [esp+58h] [ebp-80h] BYREF
  int v12[16]; // [esp+98h] [ebp-40h] BYREF

  if ( dword_106909E0 || g_GameMode == 2 && *(_DWORD *)(a1 + 320) == 1 && *(_DWORD *)(*(_DWORD *)(a1 + 10688) + 68) )
  {
    sub_1006ACF0(a1);
    sub_10061BE0(a2, (_DWORD *)a1);
  }
  else if ( g_GameMode == 4 && !*(_DWORD *)(a1 + 320) && *(_DWORD *)(*(_DWORD *)(a1 + 10688) + 68) )
  {
    sub_1006ABD0(a1, 1);
    sub_10061BE0(a2, (_DWORD *)a1);
  }
  else
  {
    sub_1006AAB0(a1);
  }
  sub_10030EE0((int)v10, *(float *)(a1 + 824), 1.0, 0.0, 0.0);
  sub_100306C0((float *)v10, (float *)(a1 + 544), (float *)a1);
  v3 = *(float *)(a1 + 1348);
  *(float *)(a1 + 1124) = *(float *)(a1 + 1124) - -0.25400001;
  *(float *)(a1 + 1648) = *(float *)(a1 + 1648) - -0.25400001;
  *(float *)(a1 + 2172) = *(float *)(a1 + 2172) - -0.25400001;
  *(float *)(a1 + 2696) = *(float *)(a1 + 2696) - -0.25400001;
  sub_10030EE0((int)v10, v3, 0.0, 1.0, 0.0);
  sub_100306C0((float *)v10, (float *)(a1 + 544), (float *)(a1 + 192));
  sub_100747C0((float *)(a1 + 240), (float *)(a1 + 544), (float *)(a1 + 1116));
  sub_10030EE0((int)v10, *(float *)(a1 + 2396), 0.0, 1.0, 0.0);
  sub_100306C0((float *)v10, (float *)(a1 + 544), (float *)(a1 + 256));
  sub_100747C0((float *)(a1 + 304), (float *)(a1 + 544), (float *)(a1 + 2164));
  sub_10030EE0((int)v12, *(float *)(a1 + 1872), 0.0, 1.0, 0.0);
  v8 = *(float *)(a1 + 1852) * 114.59155;
  sub_10030EE0((int)v11, v8, 0.0, 0.0, 1.0);
  sub_100306C0((float *)v12, (float *)v11, (float *)v10);
  sub_100306C0((float *)v10, (float *)(a1 + 544), (float *)(a1 + 128));
  sub_100747C0((float *)(a1 + 176), (float *)(a1 + 544), (float *)(a1 + 1640));
  sub_10030EE0((int)v12, *(float *)(a1 + 2920), 0.0, 1.0, 0.0);
  v9 = *(float *)(a1 + 2900) * 114.59155;
  sub_10030EE0((int)v11, v9, 0.0, 0.0, 1.0);
  sub_100306C0((float *)v12, (float *)v11, (float *)v10);
  sub_100306C0((float *)v10, (float *)(a1 + 544), (float *)(a1 + 64));
  result = sub_100747C0((float *)(a1 + 112), (float *)(a1 + 544), (float *)(a1 + 2688));
  v5 = *(float *)(a1 + 1648) - 0.25400001;
  v6 = *(float *)(a1 + 2172) - 0.25400001;
  v7 = *(float *)(a1 + 2696) - 0.25400001;
  *(float *)(a1 + 1124) = *(float *)(a1 + 1124) - 0.25400001;
  *(float *)(a1 + 1648) = v5;
  *(float *)(a1 + 2172) = v6;
  *(float *)(a1 + 2696) = v7;
  return result;
}
// 100AA010: using guessed type int g_GameMode;
// 106909E0: using guessed type int dword_106909E0;
