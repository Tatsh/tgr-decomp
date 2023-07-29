//----- (1003BC90) --------------------------------------------------------
int __cdecl sub_1003BC90(float *a1, float *a2, float *a3, float *a4)
{
  double v5; // st5
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v10; // st6
  char v11; // c3
  int result; // eax
  float v13; // [esp+4h] [ebp+4h]
  float v14; // [esp+8h] [ebp+8h]

  v5 = a2[1] - a1[1];
  v6 = *a3 - *a1;
  v7 = a3[1] - a1[1];
  v13 = *a2 - *a1;
  v14 = v5;
  v8 = v6 * v14 - v7 * v13;
  v10 = (*a4 - *a1) * v14 - (a4[1] - a1[1]) * v13;
  if ( !v11 && v10 != 0.0 && v10 * v8 > 0.0 )
    return 0;
  result = 2;
  if ( v8 - v10 != 0.0 )
    result = 1;
  return result;
}
// 1003BCFB: variable 'v11' is possibly undefined
