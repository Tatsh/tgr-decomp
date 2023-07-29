//----- (10072BF0) --------------------------------------------------------
int __cdecl sub_10072BF0(int a1)
{
  int *v1; // esi
  int v2; // eax

  v1 = (int *)(a1 + 424);
  v2 = *(_DWORD *)(a1 + 424);
  if ( v2 )
  {
    do
    {
      sub_10072550(v2);
      v1 = (int *)(*v1 + 424);
      v2 = *v1;
    }
    while ( *v1 );
  }
  return 0;
}
