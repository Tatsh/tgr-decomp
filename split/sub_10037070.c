//----- (10037070) --------------------------------------------------------
int __cdecl sub_10037070(int a1)
{
  int v1; // edx
  int v2; // edi
  int v3; // ecx

  v1 = 0;
  v2 = *(_DWORD *)(dword_106C7C3C + 32788);
  while ( 1 )
  {
    v3 = *(_DWORD *)(v2 + 36 * *(unsigned __int8 *)(v1 + dword_106C7C3C + 33040) + 4);
    if ( v3 )
    {
      if ( (*(_DWORD *)(v2 + 36 * *(unsigned __int8 *)(v1 + dword_106C7C3C + 33040) + 32) & 0xF000000) == 0x1000000
        && v3 == a1 )
      {
        break;
      }
    }
    if ( ++v1 >= 12 )
      return 0;
  }
  return 1;
}
// 106C7C3C: using guessed type int dword_106C7C3C;
