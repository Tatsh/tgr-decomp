//----- (10074450) --------------------------------------------------------
void __cdecl sub_10074450(float *a1, float *a2)
{
  double v3; // st6
  double v4; // st1
  double v5; // st3
  double v6; // rt2
  double v7; // rt0
  double v8; // st5
  double v9; // rt1
  double v10; // st2
  double v11; // st0
  double v12; // st6
  double v13; // rt2
  double v14; // st1
  double v15; // st0
  double v16; // rt0
  double v17; // st0
  double v18; // st3
  float v19; // [esp+0h] [ebp-1Ch]
  float v20; // [esp+0h] [ebp-1Ch]
  float v21; // [esp+0h] [ebp-1Ch]
  float v22; // [esp+4h] [ebp-18h]
  float v23; // [esp+4h] [ebp-18h]
  float v24; // [esp+8h] [ebp-14h]
  float v25; // [esp+Ch] [ebp-10h]
  float v26; // [esp+10h] [ebp-Ch]
  float v27; // [esp+14h] [ebp-8h]
  float v28; // [esp+18h] [ebp-4h]
  float v29; // [esp+24h] [ebp+8h]

  v22 = a2[6] * a2[6];
  v3 = a2[8] * a2[7];
  v19 = a2[7] * a2[7];
  v4 = a2[9];
  v5 = v4 * a2[6];
  v6 = a2[8] * a2[6];
  v7 = v4 * a2[8];
  v29 = a2[8] * a2[8];
  v8 = v4 * a2[7];
  v9 = v5 + v5;
  v28 = v22 - v19;
  v10 = v19 + v22 - v29;
  v11 = v3 + v3;
  v12 = v6 + v6;
  v23 = v11;
  v13 = a2[7] * a2[6];
  v14 = v7 + v7;
  v20 = v9;
  v15 = v8 + v8;
  v25 = v15;
  v16 = v15;
  v24 = v12;
  v26 = v14;
  v17 = v13 + v13;
  v27 = v17;
  v18 = v23 - v20;
  v21 = a2[9] * a2[9];
  a1[1] = v9 + v23;
  *a1 = v10 - v21;
  a1[2] = v16 - v24;
  a1[3] = 0.0;
  a1[7] = 0.0;
  a1[4] = v18;
  a1[5] = v29 + v28 - v21;
  a1[6] = v17 + v26;
  a1[8] = v24 + v25;
  a1[11] = 0.0;
  a1[9] = v26 - v27;
  a1[10] = v28 - v29 + v21;
  a1[12] = *a2;
  a1[13] = a2[1];
  a1[14] = a2[2];
  a1[15] = 1.0;
  debugPrint(a1);
}
