//----- (1003AC30) --------------------------------------------------------
float *__cdecl sub_1003AC30(float *a1, float *a2, float *a3)
{
  double v3; // st6
  double v4; // st7
  double v5; // st5
  float *result; // eax
  float v7; // [esp+8h] [ebp+8h]

  v3 = *a2 * a3[1] - *a3 * a2[1];
  v4 = a3[2] * a2[1];
  v5 = a2[2] * a3[1];
  v7 = *a3 * a2[2] - *a2 * a3[2];
  result = a1;
  a1[1] = v7;
  a1[2] = v3;
  *a1 = v4 - v5;
  return result;
}
