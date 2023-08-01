//----- (100613B0) --------------------------------------------------------
void **sub_100613B0()
{
  void **result; // eax
  void **v1; // ebx
  int v2; // ebp
  void **v3; // esi
  int v4; // edi

  result = (void **)&unk_100ADFD0;
  do
  {
    v1 = result;
    v2 = 30;
    do
    {
      v3 = v1;
      v4 = 4;
      do
      {
        if ( *v3 )
        {
          free(*v3);
          *v3 = 0;
        }
        ++v3;
        --v4;
      }
      while ( v4 );
      v1 += 10;
      --v2;
    }
    while ( v2 );
    result = v1;
  }
  while ( (int)v1 < (int)&dword_100B2AD0 );
  return result;
}
// 100B2AD0: using guessed type int dword_100B2AD0;
