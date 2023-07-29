//----- (10060EA0) --------------------------------------------------------
_BYTE *__cdecl sub_10060EA0(int a1)
{
  _BYTE *v2; // edi

  if ( *(_WORD *)(a1 + 18) != 24 )
    return 0;
  v2 = malloc(4 * *(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 8));
  if ( v2 )
  {
    sub_10060F00(v2, *(_DWORD *)(a1 + 20), *(_DWORD *)(a1 + 4), *(_BYTE **)(a1 + 8), *(_DWORD *)(a1 + 12));
    dword_10AA3464 = *(_DWORD *)(a1 + 4);
    dword_10AA3468 = *(_DWORD *)(a1 + 8);
  }
  return v2;
}
// 10AA3464: using guessed type int dword_10AA3464;
// 10AA3468: using guessed type int dword_10AA3468;
