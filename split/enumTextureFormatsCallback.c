//----- (1001AB00) --------------------------------------------------------
int __stdcall enumTextureFormatsCallback(_DWORD *a1, int a2)
{
  _DWORD *v3; // edx

  if ( a2 && *(_DWORD *)(a2 + 8) )
  {
    if ( !a1 )
      return 0;
    if ( *a1 != 108 )
      return 0;
    v3 = (_DWORD *)operator new(0x74u);
    if ( v3 )
    {
      memset(v3, 0, 0x6Cu);
      *v3 = 108;
      v3[27] = 0;
      v3[28] = 0;
    }
    else
    {
      v3 = 0;
    }
    if ( v3 )
    {
      qmemcpy(v3, a1, 0x6Cu);
      if ( (int)sub_1001B030(v3) >= 0 )
        ++*(_DWORD *)(a2 + 4);
    }
  }
  return 1;
}
// 1001B030: using guessed type _DWORD __stdcall sub_1001B030(_DWORD);
