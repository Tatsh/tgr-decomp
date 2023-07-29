//----- (1001E4B0) --------------------------------------------------------
int __cdecl sub_1001E4B0(int a1, int a2)
{
  int result; // eax

  result = a2;
  *(float *)(a1 + 36) = *(float *)(a2 + 16) * flt_118AA08C;
  *(float *)(a1 + 40) = *(float *)(a2 + 20) * flt_118AA090;
  return result;
}
// 118AA08C: using guessed type float flt_118AA08C;
// 118AA090: using guessed type float flt_118AA090;
