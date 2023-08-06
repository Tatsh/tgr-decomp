#include "../../types-n64.h"
//----- (80261150) --------------------------------------------------------
int __fastcall sub_80261150(__int64 a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10)
{
  float v12; // $f2
  float v13; // $f20
  float v14; // $f22
  float v15; // $f24
  float v16; // $f26
  float v17; // $f28
  float v18; // $f30
  float v19; // $f14
  float v20; // $f26
  float v21; // $f28
  float v22; // $f30
  float v23; // $f0
  int result; // $v0
  float v25; // $f14
  double v26; // $f12
  double v27; // $f0
  double v28; // $f12
  double v29; // $f0
  double v30; // $f12
  double v31; // $f0
  double v32; // $f12
  double v33; // $f0
  double v34; // $f12
  double v35; // $f0
  double v36; // $f12
  double v37; // $f0
  float v41; // [sp+68h] [+24h]
  float v42; // [sp+68h] [+24h]
  float v43; // [sp+6Ch] [+28h]
  float v44; // [sp+6Ch] [+28h]
  float v45; // [sp+70h] [+2Ch]
  float v46; // [sp+70h] [+2Ch]

  sub_80260FD0((float *)HIDWORD(a1));
  v12 = -1.0
      / sub_80261140(
          (float)((float)((float)(a5 - a2) * (float)(a5 - a2)) + (float)((float)(a6 - a3) * (float)(a6 - a3)))
        + (float)((float)(a7 - a4) * (float)(a7 - a4)));
  v13 = (float)(a5 - a2) * v12;
  v14 = (float)(a6 - a3) * v12;
  v15 = (float)(a7 - a4) * v12;
  v16 = (float)(a9 * v15) - (float)(a10 * v14);
  v17 = (float)(a10 * v13) - (float)(a8 * v15);
  v18 = (float)(a8 * v14) - (float)(a9 * v13);
  v19 = 1.0 / sub_80261140((float)((float)(v16 * v16) + (float)(v17 * v17)) + (float)(v18 * v18));
  v20 = v16 * v19;
  v21 = v17 * v19;
  v22 = v18 * v19;
  v41 = (float)(v14 * v22) - (float)(v15 * v21);
  v43 = (float)(v15 * v20) - (float)(v13 * v22);
  v45 = (float)(v13 * v21) - (float)(v14 * v20);
  v23 = sub_80261140((float)((float)(v41 * v41) + (float)(v43 * v43)) + (float)(v45 * v45));
  result = 128;
  v25 = 1.0 / v23;
  v42 = v41 * v25;
  v44 = v43 * v25;
  v26 = v20 * 128.0;
  v46 = v45 * v25;
  if ( v26 < 127.0 )
    v27 = v26;
  else
    v27 = 127.0;
  v28 = v21 * 128.0;
  *(_BYTE *)(a1 + 8) = (int)v27;
  if ( v28 < 127.0 )
    v29 = v28;
  else
    v29 = 127.0;
  v30 = v22 * 128.0;
  *(_BYTE *)(a1 + 9) = (int)v29;
  if ( v30 < 127.0 )
    v31 = v30;
  else
    v31 = 127.0;
  *(_BYTE *)(a1 + 10) = (int)v31;
  v32 = v42 * 128.0;
  if ( v32 < 127.0 )
    v33 = v32;
  else
    v33 = 127.0;
  *(_BYTE *)(a1 + 24) = (int)v33;
  v34 = v44 * 128.0;
  if ( v34 < 127.0 )
    v35 = v34;
  else
    v35 = 127.0;
  *(_BYTE *)(a1 + 25) = (int)v35;
  v36 = v46 * 128.0;
  if ( v36 < 127.0 )
    v37 = v36;
  else
    v37 = 127.0;
  *(_QWORD *)a1 = 0LL;
  *(_WORD *)(a1 + 16) = 128;
  *(_DWORD *)(a1 + 18) = 128;
  *(_WORD *)(a1 + 22) = 0;
  *(_BYTE *)(a1 + 26) = (int)v37;
  *(float *)HIDWORD(a1) = v20;
  *(float *)(HIDWORD(a1) + 16) = v21;
  *(float *)(HIDWORD(a1) + 32) = v22;
  *(float *)(HIDWORD(a1) + 8) = v13;
  *(float *)(HIDWORD(a1) + 24) = v14;
  *(float *)(HIDWORD(a1) + 40) = v15;
  *(float *)(HIDWORD(a1) + 4) = v42;
  *(float *)(HIDWORD(a1) + 20) = v44;
  *(float *)(HIDWORD(a1) + 36) = v46;
  *(float *)(HIDWORD(a1) + 48) = -(float)((float)((float)(a2 * v20) + (float)(a3 * v21)) + (float)(a4 * v22));
  *(float *)(HIDWORD(a1) + 52) = -(float)((float)((float)(a2 * v42) + (float)(a3 * v44)) + (float)(a4 * v46));
  *(float *)(HIDWORD(a1) + 12) = 0.0;
  *(float *)(HIDWORD(a1) + 28) = 0.0;
  *(float *)(HIDWORD(a1) + 44) = 0.0;
  *(float *)(HIDWORD(a1) + 60) = 1.0;
  *(float *)(HIDWORD(a1) + 56) = -(float)((float)((float)(a2 * v13) + (float)(a3 * v14)) + (float)(a4 * v15));
  return result;
}
