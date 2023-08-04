#include "../../types-n64.h"
//----- (80264E50) --------------------------------------------------------
void __fastcall sub_80264E50(float *a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10)
{
  float v11; // $f2
  float v12; // $f20
  float v13; // $f22
  float v14; // $f24
  float v15; // $f26
  float v16; // $f28
  float v17; // $f30
  float v18; // $f2
  float v19; // $f26
  float v20; // $f28
  float v21; // $f30
  float v22; // $f2
  float v23; // $f0
  float v27; // [sp+6Ch] [+54h]
  float v28; // [sp+70h] [+58h]
  float v29; // [sp+74h] [+5Ch]

  sub_80260FD0(a1);
  v11 = -1.0
      / sub_80261140(
          (float)((float)((float)(a5 - a2) * (float)(a5 - a2)) + (float)((float)(a6 - a3) * (float)(a6 - a3)))
        + (float)((float)(a7 - a4) * (float)(a7 - a4)));
  v12 = (float)(a5 - a2) * v11;
  v13 = (float)(a6 - a3) * v11;
  v14 = (float)(a7 - a4) * v11;
  v15 = (float)(a9 * v14) - (float)(a10 * v13);
  v16 = (float)(a10 * v12) - (float)(a8 * v14);
  v17 = (float)(a8 * v13) - (float)(a9 * v12);
  v18 = 1.0 / sub_80261140((float)((float)(v15 * v15) + (float)(v16 * v16)) + (float)(v17 * v17));
  v19 = v15 * v18;
  v20 = v16 * v18;
  v21 = v17 * v18;
  v27 = (float)(v13 * v21) - (float)(v14 * v20);
  v28 = (float)(v14 * v19) - (float)(v12 * v21);
  v29 = (float)(v12 * v20) - (float)(v13 * v19);
  v22 = 1.0 / sub_80261140((float)((float)(v27 * v27) + (float)(v28 * v28)) + (float)(v29 * v29));
  *a1 = v19;
  a1[4] = v20;
  a1[8] = v21;
  a1[1] = v27 * v22;
  a1[5] = v28 * v22;
  a1[12] = -(float)((float)((float)(a2 * v19) + (float)(a3 * v20)) + (float)(a4 * v21));
  v23 = v29 * v22;
  a1[9] = v23;
  a1[2] = v12;
  a1[6] = v13;
  a1[10] = v14;
  a1[3] = 0.0;
  a1[7] = 0.0;
  a1[11] = 0.0;
  a1[13] = -(float)((float)((float)(a2 * (float)(v27 * v22)) + (float)(a3 * (float)(v28 * v22))) + (float)(a4 * v23));
  a1[15] = 1.0;
  a1[14] = -(float)((float)((float)(a2 * v12) + (float)(a3 * v13)) + (float)(a4 * v14));
}
