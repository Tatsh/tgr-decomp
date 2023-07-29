//----- (1003B0A0) --------------------------------------------------------
double __cdecl sub_1003B0A0(float *a1, float *a2)
{
  double v2; // st6
  double v3; // st7
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+8h] [ebp+4h]

  v2 = *a1 - *a2;
  v3 = a1[1] - a2[1];
  v6 = v2;
  v5 = v2 * v6 + v3 * v3;
  return sqrt_(v5);
}
