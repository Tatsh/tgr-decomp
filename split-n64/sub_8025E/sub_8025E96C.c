#include "../../types-n64.h"
//----- (8025E96C) --------------------------------------------------------
void __fastcall sub_8025E96C(int a1, int a2)
{
  float v3; // $f30
  float v4; // $f10
  int v5; // $s0
  int v6; // $v0
  int v7; // $s3
  int *v8; // $s0
  int v9; // $s2
  double v10; // $f2
  float v11; // $f18
  float v12; // $f14
  float v13; // $f2
  float v14; // $f0
  float v15; // $f20
  float v16[5]; // [sp+98h] [-58h] BYREF
  float v17; // [sp+ACh] [-44h] BYREF
  float v18; // [sp+B0h] [-40h]
  float v19; // [sp+B4h] [-3Ch]
  float v20; // [sp+D8h] [-18h] BYREF
  float v21; // [sp+DCh] [-14h]
  float v22; // [sp+E0h] [-10h]
  float v23; // [sp+E4h] [-Ch] BYREF
  float v24; // [sp+E8h] [-8h]
  float v25; // [sp+ECh] [-4h]

  v16[0] = 0.0;
  v16[1] = 0.0;
  v16[2] = -1.0;
  v3 = 100.0;
  v23 = *(float *)(a2 + 120);
  v4 = *(float *)(a2 + 124);
  v5 = a1 + 188;
  v25 = 0.0;
  v24 = v4;
  sub_802587E8(&v20, (float *)(a1 + 188), &v23);
  sub_80258758(&v17, v5, v16);
  *(_DWORD *)(a2 + 412) = 0;
  v6 = sub_8025F18C(v20, v21);
  v7 = *(unsigned __int16 *)(2 * v6 - 2143819128);
  v8 = &dword_80379F80[1200 * v6];
  v9 = 0;
  if ( *(_WORD *)(2 * v6 - 2143819128) )
  {
    do
    {
      v10 = sub_8025B704((float *)v8, *((float *)v8 + 3), &v20);
      if ( v10 > -2.0 )
      {
        if ( v10 < 2.0 )
        {
          v11 = *((float *)v8 + 1);
          v12 = *((float *)v8 + 2);
          v13 = (float)(v19 * v12) + (float)((float)(*(float *)v8 * v17) + (float)(v11 * v18));
          if ( v13 < 0.0 )
            v14 = -v13;
          else
            v14 = v13;
          if ( v14 > 0.001 )
          {
            v15 = (float)-(float)(*((float *)v8 + 3)
                                + (float)((float)(v22 * v12) + (float)((float)(*(float *)v8 * v20) + (float)(v11 * v21))))
                / v13;
            v23 = v20 + (float)(v17 * v15);
            v24 = v21 + (float)(v18 * v15);
            v25 = v22 + (float)(v19 * v15);
            if ( v15 <= -2.0 )
              goto LABEL_21;
            if ( v15 < 2.0 )
            {
              if ( v15 < v3 )
              {
                if ( *((float *)v8 + 2) > 0.2 )
                {
                  if ( sub_8025B3B0((int)v8, (int)&v23) )
                  {
                    *(_DWORD *)(a2 + 412) = v8;
                    v3 = v15;
                    *(_BYTE *)(a2 + 416) = *((_BYTE *)v8 + 30);
                    *(_DWORD *)(a2 + 420) = *v8;
                    *(_DWORD *)(a2 + 424) = v8[1];
                    *(_DWORD *)(a2 + 428) = v8[2];
                    *(_DWORD *)(a2 + 432) = v8[3];
LABEL_21:
                    ++v9;
                    goto LABEL_22;
                  }
                  ++v9;
                }
                else
                {
                  ++v9;
                }
              }
              else
              {
                ++v9;
              }
            }
            else
            {
              ++v9;
            }
          }
          else
          {
            ++v9;
          }
        }
        else
        {
          ++v9;
        }
      }
      else
      {
        ++v9;
      }
LABEL_22:
      v8 += 8;
    }
    while ( v9 != v7 );
  }
}
// 80379F80: using guessed type int dword_80379F80[512];
