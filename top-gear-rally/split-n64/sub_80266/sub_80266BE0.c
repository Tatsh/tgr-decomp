#include "../../types-n64.h"
//----- (80266BE0) --------------------------------------------------------
int __fastcall sub_80266BE0(float *a1, int a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, int a15, int a16, float a17, float a18, int a19, int a20)
{
  float v24; // $f2
  float v25; // $f28
  float v26; // $f30
  float v27; // $f8
  float v28; // $f22
  float v29; // $f24
  float v30; // $f26
  float v31; // $f2
  float v32; // $f22
  float v33; // $f24
  float v34; // $f26
  float v35; // $f2
  float v36; // $f2
  double v37; // $f2
  float v38; // $f12
  float v39; // $f2
  double v40; // $f2
  float v41; // $f12
  int result; // $v0
  double v43; // $f12
  double v44; // $f0
  double v45; // $f12
  double v46; // $f0
  double v47; // $f12
  double v48; // $f0
  double v49; // $f12
  double v50; // $f0
  double v51; // $f12
  double v52; // $f0
  double v53; // $f12
  double v54; // $f0
  float v55; // [sp+54h] [-44h]
  float v56; // [sp+54h] [-44h]
  float v57; // [sp+58h] [-40h]
  float v58; // [sp+58h] [-40h]
  float v59; // [sp+5Ch] [-3Ch]
  float v60; // [sp+5Ch] [-3Ch]
  float v61; // [sp+88h] [-10h]
  float v62; // [sp+88h] [-10h]
  float v65; // [sp+BCh] [+24h]
  float v66; // [sp+BCh] [+24h]
  float v67; // [sp+C0h] [+28h]
  float v68; // [sp+C0h] [+28h]
  float v69; // [sp+C4h] [+2Ch]
  float v70; // [sp+C4h] [+2Ch]

  sub_80260FD0(a1);
  v61 = a9 - a6;
  v24 = -1.0
      / sub_80261140(
          (float)((float)((float)(a7 - a4) * (float)(a7 - a4)) + (float)((float)(a8 - a5) * (float)(a8 - a5)))
        + (float)(v61 * v61));
  v25 = (float)(a7 - a4) * v24;
  v26 = (float)(a8 - a5) * v24;
  v27 = a11 * (float)(v61 * v24);
  v62 = v61 * v24;
  v28 = v27 - (float)(a12 * v26);
  v29 = (float)(a12 * v25) - (float)(a10 * v62);
  v30 = (float)(a10 * v26) - (float)(a11 * v25);
  v31 = 1.0 / sub_80261140((float)((float)(v28 * v28) + (float)(v29 * v29)) + (float)(v30 * v30));
  v32 = v28 * v31;
  v33 = v29 * v31;
  v34 = v30 * v31;
  v65 = (float)(v26 * v34) - (float)(v62 * v33);
  v67 = (float)(v62 * v32) - (float)(v25 * v34);
  v69 = (float)(v25 * v33) - (float)(v26 * v32);
  v35 = 1.0 / sub_80261140((float)((float)(v65 * v65) + (float)(v67 * v67)) + (float)(v69 * v69));
  v66 = v65 * v35;
  v68 = v67 * v35;
  v70 = v69 * v35;
  v36 = 1.0 / sub_80261140((float)((float)(a13 * a13) + (float)(a14 * a14)) + (float)(*(float *)&a15 * *(float *)&a15));
  v59 = (float)(a13 * v36) + v25;
  v57 = (float)(a14 * v36) + v26;
  v55 = (float)(*(float *)&a15 * v36) + v62;
  v37 = sub_80261140((float)((float)(v59 * v59) + (float)(v57 * v57)) + (float)(v55 * v55));
  if ( v37 > 0.1 )
  {
    v38 = 1.0 / v37;
    *(_DWORD *)LODWORD(a3) = (int)(float)((float)(4 * a19)
                                        + (float)((float)((float)((float)((float)((float)(v59 * v38) * v32)
                                                                        + (float)((float)(v57 * v38) * v33))
                                                                + (float)((float)(v55 * v38) * v34))
                                                        * (float)a19)
                                                * 2.0));
    *(_DWORD *)(LODWORD(a3) + 4) = (int)(float)((float)(4 * a20)
                                              + (float)((float)((float)((float)((float)((float)(v59 * v38) * v66)
                                                                              + (float)((float)(v57 * v38) * v68))
                                                                      + (float)((float)(v55 * v38) * v70))
                                                              * (float)a20)
                                                      * 2.0));
  }
  else
  {
    *(_DWORD *)LODWORD(a3) = 2 * a19;
    *(_DWORD *)(LODWORD(a3) + 4) = 2 * a20;
  }
  v39 = 1.0 / sub_80261140((float)((float)(*(float *)&a16 * *(float *)&a16) + (float)(a17 * a17)) + (float)(a18 * a18));
  v60 = (float)(*(float *)&a16 * v39) + v25;
  v58 = (float)(a17 * v39) + v26;
  v56 = (float)(a18 * v39) + v62;
  v40 = sub_80261140((float)((float)(v60 * v60) + (float)(v58 * v58)) + (float)(v56 * v56));
  if ( v40 <= 0.1 )
  {
    *(_DWORD *)(LODWORD(a3) + 8) = 2 * a19;
    *(_DWORD *)(LODWORD(a3) + 12) = 2 * a20;
  }
  else
  {
    v41 = 1.0 / v40;
    *(_DWORD *)(LODWORD(a3) + 8) = (int)(float)((float)(4 * a19)
                                              + (float)((float)((float)((float)((float)((float)(v60 * v41) * v32)
                                                                              + (float)((float)(v58 * v41) * v33))
                                                                      + (float)((float)(v56 * v41) * v34))
                                                              * (float)a19)
                                                      * 2.0));
    *(_DWORD *)(LODWORD(a3) + 12) = (int)(float)((float)(4 * a20)
                                               + (float)((float)((float)((float)((float)((float)(v60 * v41) * v66)
                                                                               + (float)((float)(v58 * v41) * v68))
                                                                       + (float)((float)(v56 * v41) * v70))
                                                               * (float)a20)
                                                       * 2.0));
  }
  result = 128;
  v43 = v32 * 128.0;
  if ( v43 < 127.0 )
    v44 = v43;
  else
    v44 = 127.0;
  v45 = v33 * 128.0;
  *(_BYTE *)(a2 + 8) = (int)v44;
  if ( v45 < 127.0 )
    v46 = v45;
  else
    v46 = 127.0;
  v47 = v34 * 128.0;
  *(_BYTE *)(a2 + 9) = (int)v46;
  if ( v47 < 127.0 )
    v48 = v47;
  else
    v48 = 127.0;
  *(_BYTE *)(a2 + 10) = (int)v48;
  v49 = v66 * 128.0;
  if ( v49 < 127.0 )
    v50 = v49;
  else
    v50 = 127.0;
  *(_BYTE *)(a2 + 24) = (int)v50;
  v51 = v68 * 128.0;
  if ( v51 < 127.0 )
    v52 = v51;
  else
    v52 = 127.0;
  *(_BYTE *)(a2 + 25) = (int)v52;
  v53 = v70 * 128.0;
  if ( v53 < 127.0 )
    v54 = v53;
  else
    v54 = 127.0;
  *(_BYTE *)a2 = 0;
  *(_BYTE *)(a2 + 1) = 0;
  *(_BYTE *)(a2 + 2) = 0;
  *(_BYTE *)(a2 + 3) = 0;
  *(_BYTE *)(a2 + 4) = 0;
  *(_BYTE *)(a2 + 5) = 0;
  *(_BYTE *)(a2 + 6) = 0;
  *(_BYTE *)(a2 + 7) = 0;
  *(_WORD *)(a2 + 16) = 128;
  *(_BYTE *)(a2 + 18) = 0;
  *(_BYTE *)(a2 + 19) = 0;
  *(_WORD *)(a2 + 20) = 128;
  *(_BYTE *)(a2 + 22) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  *(_BYTE *)(a2 + 26) = (int)v54;
  *a1 = v32;
  a1[4] = v33;
  a1[8] = v34;
  a1[1] = v66;
  a1[5] = v68;
  a1[9] = v70;
  a1[12] = -(float)((float)((float)(a4 * v32) + (float)(a5 * v33)) + (float)(a6 * v34));
  a1[13] = -(float)((float)((float)(a4 * v66) + (float)(a5 * v68)) + (float)(a6 * v70));
  a1[2] = v25;
  a1[6] = v26;
  a1[3] = 0.0;
  a1[7] = 0.0;
  a1[11] = 0.0;
  a1[10] = v62;
  a1[15] = 1.0;
  a1[14] = -(float)((float)((float)(a4 * v25) + (float)(a5 * v26)) + (float)(a6 * v62));
  return result;
}
