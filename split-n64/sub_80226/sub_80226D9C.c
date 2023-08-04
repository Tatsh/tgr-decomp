#include "../../types-n64.h"
//----- (80226D9C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80226D9C(int a1, int a2, int a3, int a4)
{
  int v4; // $s3
  int v5; // $s4
  int v7; // $s0
  int *v8; // $v0
  int v9; // $t0
  float *v10; // $s1
  int v11; // $v1
  float v12; // $f8
  float v13; // $f6
  float *v14; // $s0
  int v15; // $v0
  int v16; // $t2
  int v17; // $t8
  int v18; // $f10
  int v19; // $f16
  float v20; // $f18
  float v21; // $f4
  float v22; // $f6
  int v23; // $s3
  int i; // $a0
  int v25; // $v0
  float *v26; // [sp+30h] [-50h]
  int *v27; // [sp+34h] [-4Ch]
  int v28; // [sp+44h] [-3Ch]
  int v29; // [sp+48h] [-38h]
  int v30; // [sp+68h] [-18h]
  float v31[5]; // [sp+6Ch] [-14h] BYREF

  v4 = a4;
  v5 = 0;
  if ( !a4 )
  {
    v4 = MEMORY[0x80025C70];
    a3 = 0;
  }
  if ( a2 )
  {
    if ( a2 >= 9 || (*(_WORD *)(v4 + 22) & 1) != 0 )
      return 0;
    v7 = v4 + 40 * a3;
    v29 = 12 * a2;
    sub_802248FC((float *)&dword_8031B6D0[3 * a2 - 3], (float *)(v7 + 64), (float *)(v7 + 88), 0.2);
    v8 = &dword_8031B610[3 * a2];
    *(v8 - 3) = *(_DWORD *)(v7 + 76);
    *(v8 - 2) = *(_DWORD *)(v7 + 80);
    v26 = (float *)&dword_8031B550[3 * a2 - 3];
    v27 = v8;
    *(v8 - 1) = *(_DWORD *)(v7 + 84);
    sub_802248FC(v26, (float *)(v7 + 88), (float *)(v7 + 64), 0.2);
    sub_802249D4((float *)&dword_8031B5B0[3 * a2 - 3], v26, (float *)v27 - 3);
    sub_802249D4((float *)sub_8031B670 + 3 * a2 - 3, (float *)&dword_8031B6D0[3 * a2 - 3], (float *)v27 - 3);
    v9 = a2 - 1;
    v10 = (float *)dword_8031B6DC;
    v11 = 1;
    v31[0] = (float)(*(float *)(v7 + 88) + *(float *)(v7 + 64)) * 0.5;
    v12 = *(float *)(v7 + 68);
    v13 = *(float *)(v7 + 92);
    v14 = (float *)dword_8031B55C;
    v31[1] = (float)(v13 + v12) * 0.5;
    if ( a2 - 1 < 2 )
    {
LABEL_12:
      if ( a2 <= 0 )
      {
        v16 = a3;
        goto LABEL_21;
      }
      dword_8028B804 = a2;
      dword_8028B814 = v4;
      dword_8028B810 = a3;
      if ( a2 < 3 )
      {
        dword_8028B80C = 0;
        dword_8028B808 = 0;
      }
      else if ( sub_80225B64(
                  (float *)(a1 + 48),
                  (float *)dword_8031B628,
                  (float *)dword_8031B5BC,
                  (float *)dword_8031B55C) )
      {
        dword_8028B80C = 0;
        dword_8028B808 = 1;
      }
      else
      {
        dword_8028B80C = sub_80225B64(
                           (float *)(a1 + 48),
                           (float *)dword_8031B628,
                           (float *)&loc_8031B67C,
                           (float *)dword_8031B6DC) != 0;
        dword_8028B808 = 0;
      }
      v17 = 3 * (a2 >> 1);
      v18 = dword_8031B610[v17 + 1];
      v19 = dword_8031B610[v17 + 2];
      v20 = *((float *)v27 - 3);
      v21 = *((float *)v27 - 2);
      v22 = *((float *)v27 - 1);
      flt_8031B740 = *(float *)&dword_8031B610[v17];
      flt_8031B744 = *(float *)&v18;
      flt_8031B748 = *(float *)&v19;
      flt_8031B730 = v20;
      flt_8031B734 = v21;
      flt_8031B738 = v22;
      sub_80260B20((int)dword_8031B430, (char *)dword_8031B550, v29);
      sub_80260B20((int)dword_8031B490, (char *)dword_8031B610, v29);
      sub_80260B20((int)dword_8031B4F0, (char *)dword_8031B6D0, v29);
      v5 = 1;
      dword_8028B800 = a2;
    }
    else
    {
      while ( 1 )
      {
        v30 = v11;
        v28 = v9;
        v15 = sub_80225B64((float *)(a1 + 48), v31, v14, v10);
        v9 = v28;
        if ( !v15 )
          break;
        v11 = v30 + 1;
        v14 += 3;
        v10 += 3;
        if ( v30 + 1 == v28 )
          goto LABEL_12;
      }
      dword_8028B820 = 1;
    }
  }
  else
  {
    dword_8028B804 = 0;
    dword_8028B818 = 0;
    dword_8028B81C = 0;
    dword_8028B820 = 0;
  }
  v16 = a3;
LABEL_21:
  if ( v16 + 1 != *(unsigned __int16 *)(v4 + 20) )
    return v5 | sub_80226D9C(a1, a2 + 1, v16 + 1, v4);
  v23 = *(_DWORD *)v4;
  if ( !v23 )
    v23 = MEMORY[0x80025C70];
  if ( !v23 )
    return v5;
  for ( i = a1; ; i = a1 )
  {
    v25 = sub_80226D9C(i, a2 + 1, 0, v23);
    v23 = *(_DWORD *)(v23 + 4);
    v5 |= v25;
    if ( !v23 )
      break;
  }
  return v5;
}
// 80226E10: write access to const memory at 8028B820 has been detected
// 80226FBC: write access to const memory at 8028B820 has been detected
// 80226FFC: write access to const memory at 8028B814 has been detected
// 80227000: write access to const memory at 8028B810 has been detected
// 80227044: write access to const memory at 8028B80C has been detected
// 80227058: write access to const memory at 8028B808 has been detected
// 80227080: write access to const memory at 8028B80C has been detected
// 80227090: write access to const memory at 8028B808 has been detected
// 80227094: write access to const memory at 8028B80C has been detected
// 802270A0: write access to const memory at 8028B808 has been detected
// 802270A4: write access to const memory at 8028B80C has been detected
// 802270AC: write access to const memory at 8028B808 has been detected
// 8022716C: write access to const memory at 8028B800 has been detected
// 80226DFC: write access to const memory at 8028B804 has been detected
// 80226E00: write access to const memory at 8028B818 has been detected
// 80227114: write access to const memory at 8031B740 has been detected
// 80227118: write access to const memory at 8031B744 has been detected
// 8022711C: write access to const memory at 8031B748 has been detected
// 80227120: write access to const memory at 8031B730 has been detected
// 80227124: write access to const memory at 8031B734 has been detected
// 8022712C: write access to const memory at 8031B738 has been detected
// 80226E04: write access to const memory at 8028B81C has been detected
// 80226FF0: write access to const memory at 8028B804 has been detected
// 8028B800: using guessed type int dword_8028B800;
// 8028B804: using guessed type int dword_8028B804;
// 8028B808: using guessed type int dword_8028B808;
// 8028B80C: using guessed type int dword_8028B80C;
// 8028B810: using guessed type int dword_8028B810;
// 8028B814: using guessed type int dword_8028B814;
// 8028B818: using guessed type int dword_8028B818;
// 8028B81C: using guessed type int dword_8028B81C;
// 8028B820: using guessed type int dword_8028B820;
// 8031B430: using guessed type int dword_8031B430[24];
// 8031B490: using guessed type int dword_8031B490[3];
// 8031B4F0: using guessed type int dword_8031B4F0[24];
// 8031B550: using guessed type int dword_8031B550[3];
// 8031B55C: using guessed type int dword_8031B55C[21];
// 8031B5B0: using guessed type int dword_8031B5B0[3];
// 8031B5BC: using guessed type int dword_8031B5BC[21];
// 8031B610: using guessed type int dword_8031B610[6];
// 8031B628: using guessed type int dword_8031B628[18];
// 8031B670: using guessed type int sub_8031B670();
// 8031B6D0: using guessed type int dword_8031B6D0[3];
// 8031B6DC: using guessed type int dword_8031B6DC[21];
// 8031B730: using guessed type float flt_8031B730;
// 8031B734: using guessed type float flt_8031B734;
// 8031B738: using guessed type float flt_8031B738;
// 8031B740: using guessed type float flt_8031B740;
// 8031B744: using guessed type float flt_8031B744;
// 8031B748: using guessed type float flt_8031B748;
