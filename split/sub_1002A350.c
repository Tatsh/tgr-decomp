//----- (1002A350) --------------------------------------------------------
int __cdecl sub_1002A350(int a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // eax
  int result; // eax
  struct_a1 v5; // [esp+8h] [ebp-2ACh] BYREF

  dword_118AA09C = 1;
  qmemcpy(&v5, (char *)dword_1057543C + 696 * a1 + 4, sizeof(v5));
  v5.punsigned___int84C = a2;
  v5.dword50 = a3;
  if ( v5.dword26C )
  {
    v5.dword40 /= 4;
    v5.dword8 /= 2;
    v5.dwordC /= 2;
    pow2ExponentToAdd(&v5.dword1C, v5.dword8, v5.dwordC);
    v5.dword18 = v5.dword1C;
    v5.dword26C = 0;
  }
  v3 = sub_10028860(&v5);
  result = TIDFromTexture(&v5, (int)v3);
  dword_118AA09C = 0;
  return result;
}
// 118AA09C: using guessed type int dword_118AA09C;
