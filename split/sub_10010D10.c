//----- (10010D10) --------------------------------------------------------
float *__cdecl sub_10010D10(float *a1)
{
  float *result; // eax
  double v2; // st7
  float v3; // [esp+0h] [ebp-4h]
  float v4; // [esp+8h] [ebp+4h]

  result = a1;
  v2 = a1[1];
  v3 = *a1;
  v4 = a1[2];
  result[3] = v4 * flt_106C0880 + v3 * flt_106C0860 + v2 * flt_106C0870 + flt_106C0890;
  result[4] = v4 * flt_106C0884 + v3 * flt_106C0864 + v2 * flt_106C0874 + flt_106C0894;
  return result;
}
// 106C0860: using guessed type float flt_106C0860;
// 106C0864: using guessed type float flt_106C0864;
// 106C0870: using guessed type float flt_106C0870;
// 106C0874: using guessed type float flt_106C0874;
// 106C0880: using guessed type float flt_106C0880;
// 106C0884: using guessed type float flt_106C0884;
// 106C0890: using guessed type float flt_106C0890;
// 106C0894: using guessed type float flt_106C0894;
