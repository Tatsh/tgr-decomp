//----- (1006F950) --------------------------------------------------------
int __cdecl sub_1006F950(float *a1, float *a2, float *a3, float *a4)
{
  double v5; // st7
  char v6; // c0
  double v8; // st7
  char v9; // c0
  double v11; // st7
  char v12; // c0
  double v14; // st7
  char v15; // c0
  double v17; // st7
  char v18; // c0
  double v20; // st7
  char v21; // c0
  double v23; // st6
  char v24; // c0
  double v26; // st5
  char v27; // c0
  double v29; // st4
  char v30; // c0
  bool v31; // si
  double v32; // st4
  bool v33; // al
  double v35; // st4
  bool v36; // si
  char v37; // c0
  bool v38; // al
  double v40; // st4
  bool v41; // si
  char v42; // c0
  bool v43; // si
  double v44; // st4
  bool v45; // si
  double v46; // st4
  bool v47; // si
  double v48; // st4
  bool v49; // si
  double v50; // st4
  bool v51; // si
  double v52; // st4
  bool v53; // si
  double v54; // st4
  bool v55; // si
  double v56; // st4
  char v57; // si
  double v58; // st4
  char v59; // si
  double v60; // st4
  char v61; // si
  double v62; // st4
  char v63; // si
  double v64; // st5
  int result; // eax
  float v66; // [esp+Ch] [ebp-24h]
  float v67; // [esp+10h] [ebp-20h]
  float v68; // [esp+14h] [ebp-1Ch]
  float v69; // [esp+18h] [ebp-18h]
  float v70; // [esp+1Ch] [ebp-14h]
  float v71; // [esp+20h] [ebp-10h]

  if ( *a1 >= 0.0 )
    v66 = *a1;
  else
    v66 = -*a1;
  v5 = a1[1];
  if ( v6 )
    v5 = -v5;
  v67 = v5;
  v8 = a1[2];
  if ( v9 )
    v8 = -v8;
  v68 = v8;
  v11 = a1[3];
  if ( v12 )
    v11 = -v11;
  v69 = v11;
  v14 = a1[4];
  if ( v15 )
    v14 = -v14;
  v70 = v14;
  v17 = a1[5];
  if ( v18 )
    v17 = -v17;
  v71 = v17;
  v20 = a1[6];
  if ( v21 )
    v20 = -v20;
  v23 = a1[7];
  if ( v24 )
    v23 = -v23;
  v26 = a1[8];
  if ( v27 )
    v26 = -v26;
  v29 = *a2;
  if ( v30 )
    v29 = -v29;
  v31 = v29 <= v68 * a4[2] + v67 * a4[1] + *a4 * v66 + *a3;
  v32 = a1[6] * a2[2] + *a2 * *a1 + a2[1] * a1[3];
  if ( v32 < 0.0 )
    v32 = -v32;
  v33 = v32 <= v69 * a3[1] + v20 * a3[2] + *a3 * v66 + *a4;
  v35 = a2[1];
  v36 = v33 && v31;
  if ( v37 )
    v35 = -v35;
  v38 = v35 <= v71 * a4[2] + v70 * a4[1] + *a4 * v69 + a3[1];
  v40 = a2[2];
  v41 = v38 && v36;
  if ( v42 )
    v40 = -v40;
  v43 = v40 <= v26 * a4[2] + v23 * a4[1] + *a4 * v20 + a3[2] && v41;
  v44 = *a2 * a1[1] + a1[7] * a2[2] + a2[1] * a1[4];
  if ( v44 < 0.0 )
    v44 = -v44;
  v45 = v44 <= v70 * a3[1] + v23 * a3[2] + *a3 * v67 + a4[1] && v43;
  v46 = *a2 * a1[2] + a1[8] * a2[2] + a2[1] * a1[5];
  if ( v46 < 0.0 )
    v46 = -v46;
  v47 = v46 <= v71 * a3[1] + v26 * a3[2] + *a3 * v68 + a4[2] && v45;
  v48 = a2[2] * a1[3] - a1[6] * a2[1];
  if ( v48 < 0.0 )
    v48 = -v48;
  v49 = v48 <= v20 * a3[1] + v69 * a3[2] + v67 * a4[2] + v68 * a4[1] && v47;
  v50 = a2[2] * a1[4] - a1[7] * a2[1];
  if ( v50 < 0.0 )
    v50 = -v50;
  v51 = v50 <= v23 * a3[1] + v70 * a3[2] + v66 * a4[2] + *a4 * v68 && v49;
  v52 = a2[2] * a1[5] - a1[8] * a2[1];
  if ( v52 < 0.0 )
    v52 = -v52;
  v53 = v52 <= v26 * a3[1] + v71 * a3[2] + v66 * a4[1] + *a4 * v67 && v51;
  v54 = *a2 * a1[6] - *a1 * a2[2];
  if ( v54 < 0.0 )
    v54 = -v54;
  v55 = v54 <= v66 * a3[2] + v70 * a4[2] + v71 * a4[1] + *a3 * v20 && v53;
  v56 = *a2 * a1[7] - a2[2] * a1[1];
  if ( v56 < 0.0 )
    v56 = -v56;
  v57 = (v56 <= v67 * a3[2] + v69 * a4[2] + *a4 * v71 + *a3 * v23) & v55;
  v58 = *a2 * a1[8] - a2[2] * a1[2];
  if ( v58 < 0.0 )
    v58 = -v58;
  v59 = (v58 <= v68 * a3[2] + v69 * a4[1] + *a4 * v70 + *a3 * v26) & v57;
  v60 = *a1 * a2[1] - *a2 * a1[3];
  if ( v60 < 0.0 )
    v60 = -v60;
  v61 = (v60 <= v66 * a3[1] + v23 * a4[2] + v26 * a4[1] + *a3 * v69) & v59;
  v62 = a2[1] * a1[1] - *a2 * a1[4];
  if ( v62 < 0.0 )
    v62 = -v62;
  v63 = (v62 <= v67 * a3[1] + v20 * a4[2] + *a4 * v26 + *a3 * v70) & v61;
  v64 = a2[1] * a1[2] - *a2 * a1[5];
  if ( v64 < 0.0 )
    v64 = -v64;
  if ( v64 > v68 * a3[1] + v20 * a4[1] + *a4 * v23 + *a3 * v71 )
    result = 0;
  else
    result = v63 & 1;
  return result;
}
// 1006F950: too many cbuild loops
// 1006F98A: variable 'v6' is possibly undefined
// 1006F9A3: variable 'v9' is possibly undefined
// 1006F9BC: variable 'v12' is possibly undefined
// 1006F9D5: variable 'v15' is possibly undefined
// 1006F9EE: variable 'v18' is possibly undefined
// 1006FA07: variable 'v21' is possibly undefined
// 1006FA1C: variable 'v24' is possibly undefined
// 1006FA31: variable 'v27' is possibly undefined
// 1006FA48: variable 'v30' is possibly undefined
// 1006FB01: variable 'v37' is possibly undefined
// 1006FB4F: variable 'v42' is possibly undefined
