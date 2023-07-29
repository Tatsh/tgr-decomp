//----- (1006C9D0) --------------------------------------------------------
int __cdecl sub_1006C9D0(int a1, float *a2, int a3, int a4)
{
  double v5; // st7
  double v7; // st5
  double v8; // st4
  double v9; // st6
  double v10; // st2
  double v11; // st3
  double v12; // st1
  double v13; // st6
  double v14; // rt2
  double v15; // rt1
  unsigned __int8 v16; // al
  double v17; // st7
  double v18; // st3
  double v19; // st4
  double v20; // st5
  double v21; // st4
  __int64 v22; // rax
  double v23; // st7
  double v24; // st6
  float v25; // edx
  float v26; // eax
  double v27; // st6
  double v28; // st6
  double v29; // st7
  double v30; // st4
  double v31; // st5
  double v32; // rt2
  double v33; // st4
  double v34; // st6
  double v35; // rt2
  double v36; // st3
  double v37; // st6
  double v38; // st7
  int v39; // edx
  int v40; // ecx
  int v41; // eax
  float v42; // [esp+8h] [ebp-58h] BYREF
  float v43; // [esp+Ch] [ebp-54h]
  float v44; // [esp+10h] [ebp-50h]
  float v45; // [esp+14h] [ebp-4Ch] BYREF
  float v46; // [esp+18h] [ebp-48h]
  float v47; // [esp+1Ch] [ebp-44h]
  int v48[4]; // [esp+20h] [ebp-40h] BYREF
  float v49; // [esp+30h] [ebp-30h]
  float v50; // [esp+34h] [ebp-2Ch]
  float v51; // [esp+38h] [ebp-28h]
  float v52; // [esp+40h] [ebp-20h]
  float v53; // [esp+44h] [ebp-1Ch]
  float v54; // [esp+48h] [ebp-18h]
  float v55; // [esp+68h] [ebp+8h]

  v5 = *a2 * *(float *)(a1 + 356) + a2[2] * *(float *)(a1 + 364) + a2[1] * *(float *)(a1 + 360);
  v55 = v5;
  if ( v5 >= 0.0 )
    return 0;
  v7 = *(float *)(a1 + 356);
  v8 = *(float *)(a1 + 360);
  v9 = v55 * 1.05;
  v10 = *a2 * v9;
  v11 = *(float *)(a1 + 364);
  v12 = v9;
  v13 = v9 * a2[1];
  v14 = v12 * a2[2];
  v42 = v10;
  v43 = v13;
  v15 = v11;
  v44 = v14;
  v16 = *(_BYTE *)(a1 + 512);
  v17 = v7 - v42;
  v18 = v8 - v43;
  v19 = v15 - v44;
  *(float *)(a1 + 356) = v17;
  *(float *)(a1 + 360) = v18;
  *(float *)(a1 + 364) = v19;
  v20 = v19;
  if ( v16 >= 0xAu )
  {
    v21 = -v55;
    if ( v21 > 27.0 )
      v21 = 27.0;
    *(_BYTE *)(a1 + 508) = (__int64)v21;
    *(float *)(a1 + 492) = *(float *)&dword_11755490;
    *(float *)(a1 + 496) = *(float *)&dword_11755494;
    *(_DWORD *)(a1 + 500) = dword_11755498;
    v22 = (__int64)(128.0 - v21 * -4.7037039);
    if ( (unsigned __int8)v22 <= *(_BYTE *)(a1 + 511) )
      LOBYTE(v22) = *(_BYTE *)(a1 + 511);
    *(float *)(a1 + 356) = v17 * 0.89999998;
    *(float *)(a1 + 360) = v18 * 0.89999998;
    *(_BYTE *)(a1 + 511) = v22;
    *(float *)(a1 + 364) = v20 * 0.89999998;
  }
  if ( a3 )
  {
    v23 = *(float *)(a1 + 360) * 0.89999998;
    v24 = *(float *)(a1 + 364) * 0.89999998;
    *(float *)(a1 + 356) = *(float *)(a1 + 356) * 0.89999998;
    *(float *)(a1 + 360) = v23;
    *(float *)(a1 + 364) = v24;
  }
  if ( a4 )
  {
    v25 = a2[2];
    v42 = a2[1];
    v26 = *a2;
    v27 = v42 * a2[2];
    v43 = v25;
    v44 = v26;
    v28 = v27 - v26 * *a2;
    v29 = v25 * *a2;
    v30 = v26 * a2[1] - v25 * a2[2];
    v31 = v42 * a2[1];
    v49 = v30;
    v32 = v30;
    v33 = v28;
    v34 = v32 * a2[2];
    v50 = v33;
    v35 = v33 * a2[2];
    v36 = v29 - v31;
    v51 = v36;
    v37 = v34 - v51 * *a2;
    v38 = v50 * *a2 - v49 * a2[1];
    v52 = v36 * a2[1] - v35;
    v39 = *((_DWORD *)a2 + 1);
    v40 = LODWORD(v26);
    v53 = v37;
    v41 = *((_DWORD *)a2 + 2);
    v48[0] = v40;
    v54 = v38;
    v48[1] = v39;
    v48[2] = v41;
    sub_10074770(&v42, (int)v48, a2);
    sub_10074770(&v45, (int)v48, (float *)(a1 + 384));
    v45 = v45 * v42;
    v46 = v46 * v43;
    v47 = v47 * v44;
    sub_10074720((float *)(a1 + 384), (float *)v48, &v45);
  }
  return 1;
}
// 11755490: using guessed type int dword_11755490;
// 11755494: using guessed type int dword_11755494;
// 11755498: using guessed type int dword_11755498;
