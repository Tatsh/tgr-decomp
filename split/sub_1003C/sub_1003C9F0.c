//----- (1003C9F0) --------------------------------------------------------
int __cdecl sub_1003C9F0(int a1)
{
  char v1; // bl
  int v2; // edx
  int result; // eax

  v1 = -1;
  v2 = 0;
  result = (int)dword_10AA2538;
  do
  {
    if ( *(_DWORD *)result == a1 )
    {
      result = 3 * v2;
      dword_10AA2540[3 * v2] = 1;
      return result;
    }
    if ( *(_DWORD *)result == -1 && v1 < 0 )
      v1 = v2;
    result += 12;
    ++v2;
  }
  while ( result < (int)&dword_10AA2598 );
  if ( v1 >= 0 )
  {
    result = 12 * v1;
    *(int *)((char *)dword_10AA2538 + result) = a1;
    if ( a1 == 1 )
    {
      dword_10AA253C[3 * v1] = 1;
      dword_10AA2540[3 * v1] = 1;
    }
    else
    {
      dword_10AA253C[3 * v1] = 0;
      dword_10AA2540[3 * v1] = 1;
    }
  }
  return result;
}
// 10AA2538: using guessed type int dword_10AA2538[];
// 10AA253C: using guessed type int dword_10AA253C[];
// 10AA2598: using guessed type int dword_10AA2598;
