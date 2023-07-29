//----- (1003ACE0) --------------------------------------------------------
int __cdecl sub_1003ACE0(int a1, int a2, float a3)
{
  int result; // eax

  result = a2;
  *(float *)a1 = a3 * *(float *)a2;
  *(float *)(a1 + 4) = *(float *)(a2 + 4) * a3;
  *(float *)(a1 + 8) = *(float *)(a2 + 8) * a3;
  return result;
}
