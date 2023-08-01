//----- (10009640) --------------------------------------------------------
int __cdecl sub_10009640(int a1)
{
  int v1; // ecx
  int result; // eax
  int v3; // edx

  v1 = 1;
  result = 0;
  v3 = 32;
  do
  {
    if ( (v1 & a1) != 0 )
      ++result;
    v1 *= 2;
    --v3;
  }
  while ( v3 );
  return result;
}
