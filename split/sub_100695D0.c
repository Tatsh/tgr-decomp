//----- (100695D0) --------------------------------------------------------
int __cdecl sub_100695D0(int a1, int a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st4
  double v6; // st3
  int result; // eax
  double v8; // st7
  double v9; // st6
  double v10; // st4
  double v11; // st5
  double v12; // st3
  double v13; // st5
  double v14; // st5
  double v15; // st7
  float v16; // [esp+Ch] [ebp+8h]
  float v17; // [esp+Ch] [ebp+8h]
  float v18; // [esp+Ch] [ebp+8h]
  float v19; // [esp+Ch] [ebp+8h]
  float v20; // [esp+Ch] [ebp+8h]

  v3 = *(float *)(a2 + 12) * *(float *)(a2 + 12);
  v4 = *(float *)(a2 + 8) * *(float *)(a2 + 8);
  v5 = *(float *)(a2 + 4) * *(float *)(a2 + 4);
  v6 = *(float *)a2 * *(float *)a2 + v3 + v4 + v5;
  if ( v6 == 0.0 )
    v16 = 0.0;
  else
    v16 = 2.0 / v6;
  result = a1;
  *(float *)a1 = 1.0 - v16 * (v3 + v4);
  *(float *)(a1 + 20) = 1.0 - (v3 + v5) * v16;
  *(float *)(a1 + 40) = 1.0 - (v4 + v5) * v16;
  v8 = *(float *)(a2 + 4) * v16;
  v9 = *(float *)(a2 + 8) * v16;
  v10 = *(float *)(a2 + 8) * v8;
  v11 = *(float *)(a2 + 12) * v16 * *(float *)a2;
  v17 = v10;
  v12 = v11;
  v13 = v17;
  v18 = v12;
  *(float *)(a1 + 16) = v10 - v18;
  *(float *)(a1 + 4) = v13 + v18;
  v19 = *(float *)a2 * v9;
  v14 = *(float *)(a2 + 12) * v8 - v19;
  *(float *)(a1 + 32) = *(float *)(a2 + 12) * v8 + v19;
  *(float *)(a1 + 8) = v14;
  v20 = *(float *)a2 * v8;
  v15 = *(float *)(a2 + 12) * v9 + v20;
  *(float *)(a1 + 36) = *(float *)(a2 + 12) * v9 - v20;
  *(float *)(a1 + 24) = v15;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  return result;
}
