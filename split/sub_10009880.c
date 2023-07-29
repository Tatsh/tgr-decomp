//----- (10009880) --------------------------------------------------------
int __cdecl sub_10009880(unsigned int a1)
{
  unsigned int v1; // ecx
  int result; // eax

  v1 = a1;
  for ( result = 0; v1; ++result )
    v1 >>= 1;
  return result;
}
