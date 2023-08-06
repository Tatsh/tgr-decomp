#include "../../types-n64.h"
//----- (80229700) --------------------------------------------------------
// sub_10066650 on PC
void __fastcall sub_80229700(int a1)
{
  int v1; // $ra
  double v2; // $f20
  double v3; // $f22
  double v4; // $f24
  double v5; // $f26
  double v6; // $f28
  double v7; // $f30
  int v8; // $s7
  float v9; // $f22
  int *v10; // $s1
  float *v11; // $s5
  int v12; // $s0
  float *v13; // $a1
  int v14; // $t2
  float *v15; // $a0
  float v16; // $f2
  int v17; // $t3
  int v18; // $s6
  int v19; // $s7
  int v20; // $s4
  int v21; // $s3
  float *v22; // $s5
  int *v23; // $s1
  int v24; // $v0
  int v25; // $v0
  _DWORD *v26; // $s0
  int *v27; // $s2
  double v28; // $f0
  int v29; // $t3
  int v30; // $t5
  int v31; // $s7
  float *v32; // $s5
  int v33; // $s3
  float j; // $v0
  int *v35; // $s1
  int v36; // $t4
  int v37; // $s0
  int v38; // $t5
  int v39; // $t4
  int v40; // $a0
  float v41; // $f8
  float v42; // $f16
  double v43; // [sp+10h] [-1A8h]
  double v44; // [sp+20h] [-198h]
  double v45; // [sp+28h] [-190h]
  double v46; // [sp+30h] [-188h]
  double v47; // [sp+38h] [-180h]
  double v48; // [sp+40h] [-178h]
  double v49; // [sp+48h] [-170h]
  int v50; // [sp+74h] [-144h]
  float v51[3]; // [sp+ACh] [-10Ch] BYREF
  float v52[9]; // [sp+B8h] [-100h] BYREF
  int i; // [sp+DCh] [-DCh]
  _DWORD v54[12]; // [sp+E8h] [-D0h] BYREF
  float v55[2]; // [sp+118h] [-A0h] BYREF

  v50 = v1;
  v49 = v7;
  v48 = v6;
  v47 = v5;
  v46 = v4;
  v45 = v3;
  v44 = v2;
  v8 = 0;
  v9 = *(float *)(MEMORY[0x80025C70] + 100);
  v10 = dword_803239A0;
  v11 = v55;
  do
  {
    v12 = v10[24];
    if ( v12 )
    {
      if ( v12 != a1 && *(int *)(v12 + 320) < 1 )
      {
        *v11 = 1.0e10;
        goto LABEL_30;
      }
      v13 = (float *)(v12 + 48);
      if ( *(int *)(v12 + 320) >= 1 )
      {
        if ( (*(_DWORD *)(*(_DWORD *)(v12 + 3792) + 104) & 2) != 0 )
        {
          if ( *(_BYTE *)(v12 + 8291) == 2 )
          {
            if ( 0.0 == *(float *)(v12 + 8292) )
            {
              *v11 = 1000000000.0;
              goto LABEL_30;
            }
            v14 = *(_DWORD *)(v12 + 3964);
          }
          else
          {
            v14 = *(_DWORD *)(v12 + 3964);
          }
        }
        else
        {
          v14 = *(_DWORD *)(v12 + 3964);
        }
      }
      else
      {
        v14 = *(_DWORD *)(v12 + 3964);
      }
      v15 = (float *)(a1 + 48);
      v16 = (float)(*(float *)(a1 + 4008) - *(float *)(v12 + 4008))
          + (float)((float)(v14 - *(_DWORD *)(a1 + 3964)) * v9);
      if ( (float)(v9 * 0.5) >= v16 )
      {
        if ( v16 < (float)(v9 * -0.5) )
          v16 = v16 + v9;
      }
      else
      {
        v16 = v16 - v9;
      }
    }
    else
    {
      v13 = (float *)v10;
      if ( v10[25] >= 1 )
      {
        if ( (v10[26] & 2) != 0 )
        {
          *v11 = 1000000000.0;
          goto LABEL_30;
        }
        v17 = v10[17];
      }
      else
      {
        v17 = v10[17];
      }
      v15 = (float *)(a1 + 48);
      v16 = (float)((float)(v17 - *(_DWORD *)(a1 + 3964)) * v9) + (float)(*(float *)(a1 + 4008) - *((float *)v10 + 20));
      if ( (float)(v9 * 0.5) >= v16 )
      {
        if ( v16 < (float)(v9 * -0.5) )
          v16 = v16 + v9;
      }
      else
      {
        v16 = v16 - v9;
      }
    }
    *(float *)&v54[7] = v16;
    *v11 = sub_80224A78(v15, v13) + (float)(v16 * v16);
LABEL_30:
    *((_DWORD *)v11 + 1) = v8++;
    v10 += 30;
    v11 += 2;
  }
  while ( v8 < 1 );
  for ( i = 0; i != 2; ++i )
  {
    v18 = 1;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = v55;
    do
    {
      v23 = &dword_803239A0[30 * *((_DWORD *)v22 + 1)];
      if ( i != v23[29] )
      {
        ++v19;
        goto LABEL_54;
      }
      if ( v23[25] < 1 )
      {
        ++v19;
        goto LABEL_54;
      }
      if ( v21 <= 0 )
      {
        v25 = v23[24];
        ++v21;
        if ( !v25 )
        {
          ++v19;
          goto LABEL_54;
        }
        v18 = 0;
        if ( (v23[26] & 2) == 0 )
        {
          ++v19;
          goto LABEL_54;
        }
        if ( *(_BYTE *)(v25 + 8291) != 2 )
        {
          ++v19;
          goto LABEL_54;
        }
        v26 = (_DWORD *)v23[24];
        if ( 0.0 != *(float *)(v25 + 8292) )
        {
          ++v19;
          goto LABEL_54;
        }
        v27 = &v54[v20];
        v28 = *v22;
LABEL_52:
        v43 = v28;
        debugPrint("enemy %d loses slot %d (dist=%f)\n");
        *v23 = v26[12];
        v23[1] = v26[13];
        v23[2] = v26[14];
        v23[6] = v26[1014];
        v23[7] = v26[1015];
        v23[8] = v26[1016];
        v23[9] = v26[1017];
        v23[10] = v26[983];
        v23[11] = v26[984];
        v23[12] = v26[992];
        v23[13] = v26[998];
        v23[14] = v26[1000];
        v23[15] = v26[1001];
        v23[16] = v26[990];
        v23[17] = v26[991];
        v23[18] = v26[988];
        v29 = v26[989];
        v23[19] = v29;
        HIDWORD(v43) = v29;
        debugPrint("saving lap (%d/%d) and gate (%d/%d)\n");
        v30 = v23[24];
        v23[20] = v26[1002];
        ++v20;
        v23[21] = v26[1003];
        *v27 = v30;
        v23[24] = 0;
        v26[948] = 0;
        v26[949] = 60;
        goto LABEL_53;
      }
      v24 = v23[24];
      v26 = (_DWORD *)v23[24];
      if ( v24 )
      {
        v18 = 0;
        if ( *(_DWORD *)(v24 + 3796) )
        {
          ++v19;
          goto LABEL_54;
        }
        v28 = *v22;
        v27 = &v54[v20];
        if ( v28 > 80000.0 )
          goto LABEL_52;
      }
LABEL_53:
      ++v19;
LABEL_54:
      v22 += 2;
    }
    while ( v19 < 1 );
    v31 = 0;
    if ( v18 )
    {
      debugPrint("init slot %d to being open\n");
      v54[v20++] = &dword_8031B760[2084 * i + 2084];
    }
    if ( v20 )
    {
      v32 = v55;
      v33 = a1;
      for ( j = v55[1]; ; j = v32[1] )
      {
        v35 = &dword_803239A0[30 * LODWORD(j)];
        if ( i == v35[29] )
        {
          if ( v35[25] >= 1 )
          {
            if ( (v35[26] & 2) != 0 )
            {
              v36 = 16 * LODWORD(j);
            }
            else if ( v35[24] )
            {
              v36 = 16 * LODWORD(j);
            }
            else
            {
              v37 = v54[--v20];
              v35[24] = v37;
              debugPrint("enemy %d acquires slot %d\n");
              *(_DWORD *)(v37 + 4068) = v35[9];
              *(_DWORD *)(v37 + 3932) = v35[10];
              *(_DWORD *)(v37 + 3936) = v35[11];
              *(_DWORD *)(v37 + 3968) = v35[12];
              *(_DWORD *)(v37 + 3992) = v35[13];
              *(_DWORD *)(v37 + 4000) = v35[14];
              *(_DWORD *)(v37 + 4004) = v35[15];
              *(_DWORD *)(v37 + 3960) = v35[16];
              *(_DWORD *)(v37 + 3964) = v35[17];
              *(_DWORD *)(v37 + 3952) = v35[18];
              v38 = v35[19];
              *(_DWORD *)(v37 + 3956) = v38;
              HIDWORD(v43) = v38;
              debugPrint("restoring lap (%d/%d) and gate (%d/%d)\n");
              *(_DWORD *)(v37 + 4008) = v35[20];
              v39 = v35[21];
              *(_DWORD *)(v37 + 3792) = v35;
              *(_BYTE *)(v37 + 8291) = 0;
              *(float *)(v37 + 8292) = 1.0;
              *(_DWORD *)(v37 + 3912) = 1;
              *(_DWORD *)(v37 + 4012) = v39;
              sub_80222D54(v37);
              sub_802288D4(v37);
              *(_DWORD *)(v37 + 3920) = v35[3];
              *(_DWORD *)(v37 + 3924) = v35[4];
              *(_DWORD *)(v37 + 3928) = v35[5];
              sub_8021FE04(v37, *v35, v35[1], COERCE_INT(*((float *)v35 + 2) + 0.1));
              *(_BYTE *)(v37 + 8291) = 0;
              *(float *)(v37 + 8292) = 1.0;
              v40 = *(_DWORD *)(v37 + 8312);
              *(_BYTE *)(v37 + 8288) = *((_BYTE *)v35 + 92);
              *(_BYTE *)(v37 + 8289) = *((_BYTE *)v35 + 93);
              *(_BYTE *)(v37 + 8290) = *((_BYTE *)v35 + 94);
              sub_8021D140(
                v40,
                (int)*((unsigned __int8 *)v35 + 92) >> 3,
                (int)*((unsigned __int8 *)v35 + 93) >> 3,
                (int)*((unsigned __int8 *)v35 + 94) >> 3);
              sub_80224808(
                v52,
                (float *)(*(_DWORD *)(v37 + 3932) + 40 * *(_DWORD *)(v37 + 3936) + 64),
                (float *)(*(_DWORD *)(v37 + 3932) + 40 * *(_DWORD *)(v37 + 3936) + 76));
              sub_80224808(
                v51,
                (float *)(*(_DWORD *)(v37 + 3932) + 40 * *(_DWORD *)(v37 + 3936) + 104),
                (float *)(*(_DWORD *)(v37 + 3932) + 40 * *(_DWORD *)(v37 + 3936) + 116));
              sub_802245F0(
                v37,
                (float *)(*(_DWORD *)(v37 + 3932) + 40 * *(_DWORD *)(v37 + 3936) + 76),
                (float *)(*(_DWORD *)(v37 + 3932) + 40 * *(_DWORD *)(v37 + 3936) + 116));
              sub_802249D4((float *)(v37 + 16), v52, v51);
              sub_8022439C((float *)(v37 + 32), (float *)v37, (float *)(v37 + 16));
              sub_80224760((float *)(v37 + 32));
              sub_8022439C((float *)(v37 + 16), (float *)(v37 + 32), (float *)v37);
              sub_80224760((float *)(v37 + 16));
              v41 = *(float *)(v37 + 4);
              v42 = *(float *)(v37 + 8);
              *(_DWORD *)(v37 + 3940) = *(_DWORD *)v37;
              *(float *)(v37 + 3944) = v41;
              *(float *)(v37 + 3948) = v42;
              sub_80220150((float *)v37, (char *)v37);
              if ( (*(_DWORD *)(*(_DWORD *)(v37 + 3792) + 104) & 1) != 0 )
                sub_802201C8((_DWORD *)v37, COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0));
              else
                sub_802201C8(
                  (_DWORD *)v37,
                  COERCE_INT(*(float *)v37 * 50.0),
                  COERCE_INT(*(float *)(v37 + 4) * 50.0),
                  COERCE_INT(*(float *)(v37 + 8) * 50.0));
              *(_DWORD *)(*(_DWORD *)(v37 + 332) + 412) = 0;
              *(_DWORD *)(*(_DWORD *)(v37 + 332) + 436) = 0;
              *(_BYTE *)(*(_DWORD *)(v37 + 332) + 416) = 2;
              *(_DWORD *)(*(_DWORD *)(v37 + 336) + 412) = 0;
              *(_DWORD *)(*(_DWORD *)(v37 + 336) + 436) = 0;
              *(_BYTE *)(*(_DWORD *)(v37 + 336) + 416) = 2;
              *(_DWORD *)(*(_DWORD *)(v37 + 344) + 412) = 0;
              *(_DWORD *)(*(_DWORD *)(v37 + 344) + 436) = 0;
              *(_BYTE *)(*(_DWORD *)(v37 + 344) + 416) = 2;
              *(_DWORD *)(*(_DWORD *)(v37 + 340) + 412) = 0;
              *(_DWORD *)(*(_DWORD *)(v37 + 340) + 436) = 0;
              *(_BYTE *)(*(_DWORD *)(v37 + 340) + 416) = 2;
              *(_DWORD *)(v37 + 3696) = 0;
              *(_DWORD *)(v37 + 3700) = 0;
              *(_DWORD *)(v37 + 3704) = 0;
              *(_DWORD *)(v37 + 3708) = -180;
              *(_DWORD *)(v37 + 832) = 40;
              *(float *)(v37 + 3568) = 0.0;
              j = v32[1];
              v36 = 16 * LODWORD(j);
            }
          }
          else
          {
            v36 = 16 * LODWORD(j);
          }
        }
        else
        {
          v36 = 16 * LODWORD(j);
        }
        ++v31;
        v32 += 2;
        v33 += 4;
        *(_DWORD *)(v33 + 3708) = &dword_803239A0[2 * (v36 - LODWORD(j))];
        if ( !v20 || v31 >= 1 )
          break;
      }
    }
  }
}
// 802297E4: conditional instruction was optimized away because of '$t2.4==0'
// 802298D8: conditional instruction was optimized away because of '$t5.4==0'
// 80229714: variable 'v1' is possibly undefined
// 8022973C: variable 'v7' is possibly undefined
// 80229740: variable 'v6' is possibly undefined
// 80229744: variable 'v5' is possibly undefined
// 80229748: variable 'v4' is possibly undefined
// 8022974C: variable 'v3' is possibly undefined
// 80229750: variable 'v2' is possibly undefined
// 8026FF08: using guessed type int dword_8026FF08;
// 8026FF18: using guessed type int dword_8026FF18;
// 8031B760: using guessed type int dword_8031B760[512];
// 803239A0: using guessed type int dword_803239A0[24];
