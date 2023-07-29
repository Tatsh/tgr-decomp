//----- (10027C00) --------------------------------------------------------
int __cdecl sub_10027C00(int a1)
{
  int result; // eax

  if ( a1 <= 1 )
    return 0;
  if ( a1 <= 2 )
    return 1;
  if ( a1 <= 4 )
    return 2;
  if ( a1 <= 8 )
    return 3;
  if ( a1 <= 16 )
    return 4;
  if ( a1 <= 32 )
    return 5;
  if ( a1 <= 64 )
    return 6;
  result = 7;
  if ( a1 > 128 )
    result = 8;
  return result;
}
