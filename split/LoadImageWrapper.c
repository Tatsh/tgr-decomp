//----- (100611A0) --------------------------------------------------------
HANDLE __cdecl LoadImageWrapper(LPCSTR name)
{
  HANDLE result; // eax
  HANDLE v2; // esi
  _BYTE *v3; // edi
  char pv[18]; // [esp+8h] [ebp-18h] BYREF
  __int16 v5; // [esp+1Ah] [ebp-6h]

  result = LoadImageA(0, name, 0, 0, 0, 0x2010u);
  v2 = result;
  if ( result )
  {
    GetObjectA(result, 24, pv);
    if ( v5 == 24 )
    {
      v3 = sub_10060EA0((int)pv);
      DeleteObject(v2);
      result = v3;
    }
    else
    {
      result = 0;
    }
  }
  return result;
}
