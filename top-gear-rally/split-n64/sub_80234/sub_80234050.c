#include "../../types-n64.h"
//----- (80234050) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80234050(int a1, int a2, int a3)
{
  int v3; // $t0
  int v5; // $s5
  __int16 *v6; // $s3
  int v7; // $t4
  int v8; // $fp
  int v9; // $t6
  int v10; // $t9
  int *v11; // $s0
  _DWORD *v12; // $s4
  float v13; // $f16
  float v14; // $f10
  float v15; // $f8
  float v16; // $f10
  float v17; // $f22
  float v18; // $f20
  int v19; // $v0
  float v20; // $f22
  float v21; // $f20
  float v22; // $f10
  float v23; // $f6
  float v24; // $f0
  float v25; // $f0
  int v26; // $a1
  unsigned int v27; // $a0
  int v28; // $v1
  int v29; // $v0
  int v30; // $s1
  int v31; // $s5
  int *v32; // $s4
  char *v33; // $s2
  int v34; // $s0
  bool v35; // dc
  int v36; // $s1
  float v37; // $f0
  float v38; // $f2
  float v39; // $f12
  int v40; // $v0
  BOOL v41; // $at
  char v42; // $v0
  int v43; // $v1
  int result; // $v0
  __int16 *v45; // [sp+E0h] [-F8h]
  char v46[164]; // [sp+F4h] [-E4h] BYREF
  _DWORD *v47; // [sp+198h] [-40h]
  char *v48; // [sp+19Ch] [-3Ch]
  int v49; // [sp+1C0h] [-18h]
  int v50; // [sp+1DCh] [+4h]

  v50 = a2;
  v3 = 84 * a1 + MEMORY[0x80025C60];
  v5 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(v3 + 68);
  if ( !a2 || (*(_WORD *)(v3 + 76) & 0x200) != 0 )
  {
    result = 0;
    dword_8028A858 = 8;
    MEMORY[4] = v7;
    MEMORY[0] = 100663296;
    dword_8028AA10 = *(unsigned __int16 *)(v3 + 80);
    dword_8028AA08 = *(unsigned __int16 *)(v3 + 78);
    dword_8028AA38 = *(unsigned __int16 *)(v3 + 82);
  }
  else
  {
    v48 = (char *)(84 * a1 + MEMORY[0x80025C60]);
    v47 = (_DWORD *)v7;
    sub_8022D7E0(0, 80, 250, 80, 255);
    MEMORY[4] = -16776961;
    dword_8028A858 = 8;
    MEMORY[0] = -1191181539;
    if ( a3 )
      MEMORY[4] = 5262160;
    else
      MEMORY[4] = 5263184;
    dword_8028A858 = 8;
    MEMORY[4] = 0;
    MEMORY[0] = -419430400;
    sub_80219A78(-174233204, 2045259632, -1070825151, -884975911);
    dword_8028A858 = 8;
    MEMORY[4] = 536646648;
    MEMORY[0] = -64577532;
    v8 = 0;
    dword_8028AA10 = 3 * *((unsigned __int16 *)v48 + 40);
    dword_8028AA08 = 3 * *((unsigned __int16 *)v48 + 39);
    v9 = *((unsigned __int16 *)v48 + 41);
    v45 = 0;
    v49 = 0;
    for ( dword_8028AA38 = 3 * v9; v50; v49 = v10 + 1 )
    {
      if ( (v50 & 1) != 0 )
      {
        *(_DWORD *)v5 = -419430400;
        *(_DWORD *)(v5 + 4) = 0;
        *(_DWORD *)(v5 + 8) = -83886080;
        v11 = &dword_8031B760[2084 * v49];
        v12 = v47;
        *(_DWORD *)(v5 + 12) = (unsigned __int8)sub_802562E0(*((float *)v11 + 1913) * 255.0);
        v13 = *((float *)v11 + 2);
        v14 = *((float *)v11 + 1);
        LODWORD(flt_8035D1C0) = *v11;
        flt_8035D1C8 = v13;
        flt_8035D1C4 = v14;
        if ( 0.0 == -2.9250119e19 && 0.0 == -0.013029441 )
        {
          v15 = *((float *)v11 + 9);
          v16 = *((float *)v11 + 10);
          flt_8035D1C0 = *((float *)v11 + 8);
          flt_8035D1C4 = v15;
          flt_8035D1C8 = v16;
        }
        flt_8035D1C8 = 0.0;
        v17 = sub_80224B48(&flt_8035D1C0);
        if ( v17 < 0.5 )
          v17 = 0.5;
        v18 = sub_80224B48((float *)v11 + 4);
        if ( v18 < 0.5 )
          v18 = 0.5;
        v19 = v11[2078];
        v20 = (float)(235.52 / *(float *)(v19 + 224)) / v17;
        v21 = (float)(161.28 / *(float *)(v19 + 228)) / v18;
        sub_80224760(&flt_8035D1C0);
        sub_80260B20(flt_8031AB10, v48, 64);
        v22 = *((float *)v11 + 13);
        v23 = -1.9682243e20 - *((float *)v11 + 12);
        flt_8031AB50 = -2.9250119e19 * v20;
        flt_8031AB40 = v23;
        flt_8031AB54 = (float)--0.013029441 * v21;
        flt_8031AB44 = -7.0171898e34 - v22;
        flt_8031AB60 = -(float)((float)--0.013029441 * v20);
        flt_8031AB64 = -2.9250119e19 * v21;
        flt_8031AB70 = 0.0;
        flt_8031AB74 = 0.0;
        flt_8031AB58 = 0.0;
        flt_8031AB68 = 0.0;
        flt_8031AB88 = 0.0;
        flt_8031AB5C = 0.0;
        flt_8031AB6C = 0.0;
        flt_8031AB7C = 0.0;
        flt_8031AB78 = 1.0;
        flt_8031AB8C = 1.0;
        flt_8031AB80 = 512.0;
        flt_8031AB84 = 512.0;
        sub_80225180((int)flt_8031AB10, (float *)flt_8031AB10, &flt_8031AB50);
        v24 = (float)((float)(-1.6479489 + -4287456000.0) + -5.5338939e19) + 0.000000026755732;
        if ( v24 == 0.0 )
          v25 = 1.0;
        else
          v25 = 1.0 / v24;
        *(float *)flt_8031AB10 = -1.9477599e-20 * v25;
        flt_8031AB20 = 8.6653242e23 * v25;
        flt_8031AB30 = -5.1120632e25 * v25;
        flt_8031AB40 = -1.9682243e20 * v25;
        flt_8031AB14 = -6304.7139 * v25;
        flt_8031AB24 = -3.8104398e36 * v25;
        flt_8031AB34 = 0.001477947 * v25;
        flt_8031AB44 = -7.0171898e34 * v25;
        dword_8028A858 = v5 + 16;
        sub_80219A78(
          *((__int16 *)v11 + 4136),
          *((__int16 *)v11 + 4139),
          *((__int16 *)v11 + 4138) - *((__int16 *)v11 + 4136),
          *((__int16 *)v11 + 4137) - *((__int16 *)v11 + 4139));
        v5 = 0;
        dword_8028A858 = 0;
        v26 = 0;
        while ( v26 < 969 )
        {
          while ( 1 )
          {
            v27 = *v12;
            v28 = HIBYTE(*v12);
            v29 = *v12 >> 10;
            if ( v28 != 4 )
              break;
            if ( v5 == v8 )
            {
              v6 = v45;
              v5 -= 8;
            }
            *(_DWORD *)v5 = v27;
            v30 = v29 & 0x3F;
            v31 = v5 + 4;
            v32 = v12 + 1;
            if ( (int)&v6[8 * v30] >> 4 >= 1001 )
            {
              v5 = v31 - 4;
              goto LABEL_57;
            }
            v33 = v46;
            v45 = v6;
            if ( v30 >= 33 )
              sub_8021E1F4("BAD VTX DL");
            v34 = *v32;
            v5 = v31 + 4;
            v12 = v32 + 1;
            *(_DWORD *)(v5 - 4) = v6;
            v8 = v5;
            v35 = v30 == 0;
            v36 = v30 - 1;
            if ( !v35 )
            {
              do
              {
                sub_80256270((int)v6, v34);
                v37 = (float)*v6;
                v34 += 16;
                v38 = (float)v6[1];
                v39 = (float)v6[2];
                v6[4] = (int)(float)((float)((float)((float)(v37 * -1.9477599e-20) + (float)(v38 * 8.6653242e23))
                                           + (float)(v39 * -5.1120632e25))
                                   + -1.9682243e20);
                v40 = v6[4];
                v41 = v40 < 1024;
                v6[5] = (int)(float)((float)((float)((float)(v37 * -6304.7139) + (float)(v38 * -3.8104398e36))
                                           + (float)(v39 * 0.001477947))
                                   + -7.0171898e34);
                if ( v40 >= 0 )
                {
                  v42 = 0;
                  if ( !v41 )
                    v42 = 2;
                }
                else
                {
                  v42 = 1;
                }
                v43 = v6[5];
                v6 += 8;
                if ( v43 >= 0 )
                {
                  if ( v43 >= 4096 )
                    v42 |= 8u;
                }
                else
                {
                  v42 |= 4u;
                }
                *v33++ = v42;
                v35 = v36-- != 0;
              }
              while ( v35 );
            }
            v26 = v5 >> 2;
            if ( v5 >> 2 >= 969 )
              goto LABEL_54;
          }
          switch ( v28 )
          {
            case 177:
              if ( ((unsigned __int8)(v46[(v27 >> 1) & 0x1F] & v46[(v27 >> 9) & 0x1F]) & (unsigned __int8)v46[(v27 >> 17) & 0x1F]) != 0 )
              {
                if ( ((unsigned __int8)(v46[(v12[1] >> 1) & 0x1F] & v46[(v12[1] >> 9) & 0x1F]) & (unsigned __int8)v46[(v12[1] >> 17) & 0x1F]) != 0 )
                {
                  v12 += 2;
                }
                else
                {
                  *(_DWORD *)v5 = -1090519040;
                  *(_DWORD *)(v5 + 4) = v12[1] & 0xFFFFFF;
                  v5 += 8;
                  v12 += 2;
                  v26 = v5 >> 2;
                }
              }
              else
              {
                if ( ((unsigned __int8)(v46[(v12[1] >> 1) & 0x1F] & v46[(v12[1] >> 9) & 0x1F]) & (unsigned __int8)v46[(v12[1] >> 17) & 0x1F]) != 0 )
                {
                  *(_DWORD *)v5 = -1090519040;
                  *(_DWORD *)(v5 + 4) = *v12 & 0xFFFFFF;
                  v5 += 8;
                }
                else
                {
                  *(_DWORD *)v5 = v27;
                  v5 += 8;
                  *(_DWORD *)(v5 - 4) = v12[1];
                }
                v12 += 2;
                v26 = v5 >> 2;
              }
              break;
            case 184:
              goto LABEL_54;
            case 191:
              if ( ((unsigned __int8)(v46[(v12[1] >> 1) & 0x1F] & v46[(v12[1] >> 9) & 0x1F]) & (unsigned __int8)v46[(v12[1] >> 17) & 0x1F]) != 0 )
              {
                v12 += 2;
              }
              else
              {
                *(_DWORD *)v5 = v27;
                v5 += 8;
                *(_DWORD *)(v5 - 4) = v12[1];
                v12 += 2;
                v26 = v5 >> 2;
              }
              break;
            default:
              v12 += 2;
              break;
          }
        }
LABEL_54:
        if ( v5 == v8 )
        {
          v6 = v45;
          v5 -= 8;
LABEL_57:
          v10 = v49;
        }
        else
        {
          v10 = v49;
        }
      }
      else
      {
        v10 = v49;
      }
      v50 >>= 1;
    }
    *(_DWORD *)v5 = -1207959552;
    *(_DWORD *)(v5 + 4) = 0;
    v5 += 8;
    result = sub_8022D7E0(0, 255, 128, 128, 255);
  }
  dword_8028C764 = (int)v6;
  dword_8028C75C = v5;
  return result;
}
// 802349C4: write access to const memory at 8028A858 has been detected
// 80234ED4: write access to const memory at 8028A858 has been detected
// 80234EFC: write access to const memory at 8028A858 has been detected
// 80234F68: write access to const memory at 8028C764 has been detected
// 80234F74: write access to const memory at 8028C75C has been detected
// 80234138: write access to const memory at 8028A858 has been detected
// 80234158: write access to const memory at 8028A858 has been detected
// 80234174: write access to const memory at 8028A858 has been detected
// 80234194: write access to const memory at 8028A858 has been detected
// 802341BC: write access to const memory at 8028A858 has been detected
// 802341D8: write access to const memory at 8028A858 has been detected
// 802341F4: write access to const memory at 8028A858 has been detected
// 80234210: write access to const memory at 8028A858 has been detected
// 80234230: write access to const memory at 8028A858 has been detected
// 8023424C: write access to const memory at 8028A858 has been detected
// 80234268: write access to const memory at 8028A858 has been detected
// 8023428C: write access to const memory at 8028A858 has been detected
// 802342AC: write access to const memory at 8028A858 has been detected
// 802342C8: write access to const memory at 8028A858 has been detected
// 802342E4: write access to const memory at 8028A858 has been detected
// 80234478: write access to const memory at 8028A858 has been detected
// 802344A0: write access to const memory at 8028A858 has been detected
// 802345F4: write access to const memory at 8028AA10 has been detected
// 8023460C: write access to const memory at 8028AA08 has been detected
// 80234630: write access to const memory at 8028AA38 has been detected
// 8023472C: write access to const memory at 8035D1C0 has been detected
// 80234734: write access to const memory at 8035D1C8 has been detected
// 80234744: write access to const memory at 8035D1C4 has been detected
// 80234788: write access to const memory at 8035D1C8 has been detected
// 80234874: write access to const memory at 8031AB50 has been detected
// 80234880: write access to const memory at 8031AB54 has been detected
// 8023488C: write access to const memory at 8031AB60 has been detected
// 80234890: write access to const memory at 8031AB64 has been detected
// 8023489C: write access to const memory at 8031AB70 has been detected
// 802348A0: write access to const memory at 8031AB74 has been detected
// 802348A4: write access to const memory at 8031AB58 has been detected
// 802348A8: write access to const memory at 8031AB68 has been detected
// 802348AC: write access to const memory at 8031AB88 has been detected
// 802348B0: write access to const memory at 8031AB5C has been detected
// 802348B4: write access to const memory at 8031AB6C has been detected
// 802348B8: write access to const memory at 8031AB7C has been detected
// 802348BC: write access to const memory at 8031AB78 has been detected
// 802348C0: write access to const memory at 8031AB8C has been detected
// 802348C4: write access to const memory at 8031AB80 has been detected
// 802348CC: write access to const memory at 8031AB84 has been detected
// 80234F1C: write access to const memory at 8028A858 has been detected
// 80234F3C: write access to const memory at 8028AA10 has been detected
// 80234F54: write access to const memory at 8028AA08 has been detected
// 80234F64: write access to const memory at 8028AA38 has been detected
// 8023499C: write access to const memory at 8028A858 has been detected
// 80234948: write access to const memory at 8031AB10 has been detected
// 80234954: write access to const memory at 8031AB20 has been detected
// 80234960: write access to const memory at 8031AB30 has been detected
// 8023496C: write access to const memory at 8031AB40 has been detected
// 80234974: write access to const memory at 8031AB14 has been detected
// 8023497C: write access to const memory at 8031AB24 has been detected
// 80234980: write access to const memory at 8031AB34 has been detected
// 80234984: write access to const memory at 8031AB44 has been detected
// 8023487C: write access to const memory at 8031AB40 has been detected
// 80234888: write access to const memory at 8031AB44 has been detected
// 80234770: write access to const memory at 8035D1C0 has been detected
// 80234774: write access to const memory at 8035D1C4 has been detected
// 80234778: write access to const memory at 8035D1C8 has been detected
// 80234540: write access to const memory at 8028A858 has been detected
// 8023455C: write access to const memory at 8028A858 has been detected
// 80234578: write access to const memory at 8028A858 has been detected
// 802345B0: write access to const memory at 8028A858 has been detected
// 80234508: write access to const memory at 8028A858 has been detected
// 802344EC: write access to const memory at 8028A858 has been detected
// 80234368: write access to const memory at 8028A858 has been detected
// 80234388: write access to const memory at 8028A858 has been detected
// 802343A4: write access to const memory at 8028A858 has been detected
// 802343C4: write access to const memory at 8028A858 has been detected
// 802343E4: write access to const memory at 8028A858 has been detected
// 80234400: write access to const memory at 8028A858 has been detected
// 80234418: write access to const memory at 8028A858 has been detected
// 80234328: write access to const memory at 8028A858 has been detected
// 80234348: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
// 8028A8A0: using guessed type int dword_8028A8A0;
// 8028AA08: using guessed type int dword_8028AA08;
// 8028AA10: using guessed type int dword_8028AA10;
// 8028AA38: using guessed type int dword_8028AA38;
// 8028AA78: using guessed type int dword_8028AA78;
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AA8C: using guessed type int dword_8028AA8C;
// 8028AAEC: using guessed type int dword_8028AAEC;
// 8028AAF0: using guessed type int dword_8028AAF0;
// 8028AAF4: using guessed type int dword_8028AAF4;
// 8028AB20: using guessed type char byte_8028AB20;
// 8028AB24: using guessed type char byte_8028AB24;
// 8028AB28: using guessed type char byte_8028AB28;
// 8028C74C: using guessed type int dword_8028C74C;
// 8028C750: using guessed type int dword_8028C750;
// 8028C75C: using guessed type int dword_8028C75C;
// 8028C760: using guessed type int dword_8028C760;
// 8028C764: using guessed type int dword_8028C764;
// 8028C768: using guessed type int dword_8028C768;
// 8031AB14: using guessed type float flt_8031AB14;
// 8031AB20: using guessed type float flt_8031AB20;
// 8031AB24: using guessed type float flt_8031AB24;
// 8031AB30: using guessed type float flt_8031AB30;
// 8031AB34: using guessed type float flt_8031AB34;
// 8031AB40: using guessed type float flt_8031AB40;
// 8031AB44: using guessed type float flt_8031AB44;
// 8031AB50: using guessed type float flt_8031AB50;
// 8031AB54: using guessed type float flt_8031AB54;
// 8031AB58: using guessed type float flt_8031AB58;
// 8031AB5C: using guessed type float flt_8031AB5C;
// 8031AB60: using guessed type float flt_8031AB60;
// 8031AB64: using guessed type float flt_8031AB64;
// 8031AB68: using guessed type float flt_8031AB68;
// 8031AB6C: using guessed type float flt_8031AB6C;
// 8031AB70: using guessed type float flt_8031AB70;
// 8031AB74: using guessed type float flt_8031AB74;
// 8031AB78: using guessed type float flt_8031AB78;
// 8031AB7C: using guessed type float flt_8031AB7C;
// 8031AB80: using guessed type float flt_8031AB80;
// 8031AB84: using guessed type float flt_8031AB84;
// 8031AB88: using guessed type float flt_8031AB88;
// 8031AB8C: using guessed type float flt_8031AB8C;
// 8031B2C8: using guessed type int dword_8031B2C8[];
// 8031B2CC: using guessed type int dword_8031B2CC;
// 8031B2D0: using guessed type int dword_8031B2D0;
// 8031B2D4: using guessed type int dword_8031B2D4;
// 8031B760: using guessed type int dword_8031B760[512];
// 8035D1C0: using guessed type float flt_8035D1C0;
// 8035D1C4: using guessed type float flt_8035D1C4;
// 8035D1C8: using guessed type float flt_8035D1C8;
