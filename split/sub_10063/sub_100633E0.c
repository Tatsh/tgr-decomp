//----- (100633E0) --------------------------------------------------------
void **sub_100633E0()
{
  void **result; // eax
  void **v1; // edx
  void *v2; // ecx

  result = (void **)off_100B3700;
  if ( off_100B3700 )
  {
    result = &off_100B3700;
    v1 = &off_100B3700;
    do
    {
      if ( *result < (char *)v1[1] + (int)*result )
        memset(*result, 0, (unsigned int)v1[1]);
      v2 = v1[2];
      v1 += 2;
      result = v1;
    }
    while ( v2 );
  }
  return result;
}
// 100B3700: using guessed type void *off_100B3700;
