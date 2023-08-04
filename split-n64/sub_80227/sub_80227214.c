#include "../../types-n64.h"
//----- (80227214) --------------------------------------------------------
void __fastcall sub_80227214(int a1)
{
  float *v2; // $v0
  int v3; // $v0
  int v4; // $v0
  int i; // $v0
  int v6; // $t0
  unsigned __int16 *v7; // $a3
  int v8; // $t1
  unsigned __int16 *v9; // $v1
  int v10; // $v1
  float v11; // $f6
  float v12; // $f0
  float v13; // $f0
  float v14; // [sp+24h] [-9Ch]
  float *v15; // [sp+28h] [-98h]
  float *v16; // [sp+2Ch] [-94h]
  float *v17; // [sp+30h] [-90h]
  float *v18; // [sp+34h] [-8Ch]
  float v19; // [sp+3Ch] [-84h]
  float v20; // [sp+40h] [-80h]
  float v21; // [sp+44h] [-7Ch]
  float v22; // [sp+48h] [-78h]
  float v23; // [sp+4Ch] [-74h]
  float v24[3]; // [sp+50h] [-70h] BYREF
  float v25[3]; // [sp+5Ch] [-64h] BYREF
  float v26[3]; // [sp+68h] [-58h] BYREF
  float v27[3]; // [sp+74h] [-4Ch] BYREF
  float v28[3]; // [sp+80h] [-40h] BYREF
  int v29; // [sp+8Ch] [-34h]
  int v30; // [sp+94h] [-2Ch]
  float v31[3]; // [sp+9Ch] [-24h] BYREF
  float v32[4]; // [sp+A8h] [-18h] BYREF
  float v33; // [sp+B8h] [-8h]

  v2 = (float *)(*(_DWORD *)(a1 + 3932) + 40 * *(_DWORD *)(a1 + 3936));
  v33 = v2[25] - v2[35];
  sub_80224808(v32, v2 + 16, v2 + 19);
  v3 = *(_DWORD *)(a1 + 3932) + 40 * *(_DWORD *)(a1 + 3936);
  sub_80224808(v31, (float *)(v3 + 104), (float *)(v3 + 116));
  sub_802249D4(v31, v32, v31);
  v32[1] = v31[0];
  v32[0] = -v31[1];
  v32[2] = 0.0;
  v4 = *(_DWORD *)(a1 + 3932) + 40 * *(_DWORD *)(a1 + 3936);
  sub_802249D4(v31, (float *)(v4 + 76), (float *)(v4 + 116));
  sub_80224808(v31, (float *)(a1 + 48), v31);
  if ( sub_80224404(v32, v31) < 0.0 )
  {
    v7 = *(unsigned __int16 **)(a1 + 3932);
    v8 = *(_DWORD *)(a1 + 3936);
    i = (int)v7;
    if ( v8 + 1 == v7[10] )
    {
      i = *(_DWORD *)v7;
      if ( (*(_WORD *)(*(_DWORD *)v7 + 22) & 1) != 0 )
      {
        for ( i = *(_DWORD *)(i + 4); (*(_WORD *)(i + 22) & 1) != 0; i = *(_DWORD *)(i + 4) )
          ;
      }
      v6 = 0;
    }
    else
    {
      v6 = v8 + 1;
    }
  }
  else
  {
    i = *(_DWORD *)(a1 + 3932);
    v6 = *(_DWORD *)(a1 + 3936);
    v7 = (unsigned __int16 *)i;
    v8 = v6 - 1;
  }
  v9 = &v7[20 * v8];
  v17 = (float *)(v9 + 58);
  v18 = (float *)(v9 + 38);
  v30 = i;
  v29 = v6;
  sub_802245F0((int)v32, (float *)v9 + 19, (float *)v9 + 29);
  v10 = v30 + 40 * v29;
  v15 = (float *)(v10 + 116);
  v16 = (float *)(v10 + 76);
  sub_802245F0((int)v31, (float *)(v10 + 76), (float *)(v10 + 116));
  v14 = v33 * 0.5;
  sub_80224528(v32, v14);
  sub_80224528(v31, v14);
  sub_802249D4(v28, v18, v17);
  sub_802249D4(v27, v16, v15);
  v26[0] = *(float *)(a1 + 48);
  v11 = *(float *)(a1 + 52);
  v26[2] = 0.0;
  v26[1] = v11;
  sub_80224808(v25, v26, v28);
  sub_80224808(v24, v26, v27);
  v23 = sub_80224404(v25, v32);
  v22 = -sub_80224404(v24, v31);
  v12 = sub_80224A78(v28, v27);
  v21 = (float)((float)(v12 * v23) / (float)(v23 + v22)) / v12;
  v20 = v21 * v21;
  v19 = v20 * v21;
  sub_802244FC((float *)(a1 + 3816), v28, (float)((float)(v19 + v19) - (float)(3.0 * v20)) + 1.0);
  sub_80224990((float *)(a1 + 3816), v27, (float)(-2.0 * v19) + (float)(3.0 * v20));
  sub_80224990((float *)(a1 + 3816), v32, (float)(v19 - (float)(v20 + v20)) + v21);
  sub_80224990((float *)(a1 + 3816), v31, v19 - v20);
  sub_802248FC((float *)(a1 + 3828), v31, v32, v21);
  sub_80224760((float *)(a1 + 3828));
  sub_8022439C((float *)(a1 + 3840), (float *)(a1 + 3852), (float *)(a1 + 3828));
  sub_80224760((float *)(a1 + 3840));
  sub_8022439C((float *)(a1 + 3852), (float *)(a1 + 3828), (float *)(a1 + 3840));
  sub_80224808((float *)(a1 + 3868), (float *)(a1 + 48), (float *)(a1 + 3816));
  v13 = sub_80224404((float *)(a1 + 3840), (float *)(a1 + 3868));
  *(float *)(a1 + 3880) = v13;
  if ( v13 < 0.0 )
    *(float *)(a1 + 3864) = -*(float *)(a1 + 3880);
  else
    *(_DWORD *)(a1 + 3864) = *(_DWORD *)(a1 + 3880);
}
