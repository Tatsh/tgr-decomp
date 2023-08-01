//----- (1003EF90) --------------------------------------------------------
int __cdecl sub_1003EF90(int a1)
{
  const char *v1; // esi

  sub_1003EE50(a1, 0);
  v1 = (const char *)(a1 + 11109);
  if ( strlen((const char *)(a1 + 11109)) )
    *(_DWORD *)(dword_10AA29E8 + 28) &= 0xFFFFFFEF;
  if ( _strcmpi(String1, v1) )
  {
    strcpy(String1, v1);
    strcpy(byte_10B4E1E4, String1);
  }
  return 1;
}
// 10AA29E8: using guessed type int dword_10AA29E8;
