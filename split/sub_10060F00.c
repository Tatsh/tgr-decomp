//----- (10060F00) --------------------------------------------------------
_BYTE *__cdecl sub_10060F00(_BYTE *a1, int a2, int a3, _BYTE *a4, int a5)
{
  _BYTE *result; // eax
  int v6; // edi
  char *v7; // ecx
  int v8; // esi
  char v9; // dl
  char *v10; // ecx
  char v11; // bl
  _BYTE *v12; // eax
  _BYTE *v13; // [esp+Ch] [ebp+8h]
  char v14; // [esp+14h] [ebp+10h]

  result = a4;
  v6 = a5 * (_DWORD)(a4 - 1) + a2;
  if ( a4 )
  {
    v13 = a4;
    result = a1;
    do
    {
      v7 = (char *)v6;
      if ( a3 )
      {
        v8 = a3;
        do
        {
          v9 = *v7;
          v14 = v7[1];
          v10 = v7 + 2;
          v11 = *v10;
          v7 = v10 + 1;
          *result = v11;
          v12 = result + 1;
          *v12++ = v14;
          *v12++ = v9;
          *v12 = -1;
          result = v12 + 1;
          --v8;
        }
        while ( v8 );
      }
      v6 -= a5;
      --v13;
    }
    while ( v13 );
  }
  return result;
}
