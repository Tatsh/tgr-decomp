//----- (1003D130) --------------------------------------------------------
unsigned int __cdecl sub_1003D130(_DWORD *a1)
{
  unsigned int result; // eax

  result = 0;
  if ( strlen(g_lpSessionDesc_dwUser3) > 1 )
  {
    result = strlen(g_lpSessionDesc_dwUser3) + 1;
    qmemcpy(a1, g_lpSessionDesc_dwUser3, result);
  }
  a1[50] = 0;
  return result;
}
