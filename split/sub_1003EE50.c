//----- (1003EE50) --------------------------------------------------------
int __cdecl sub_1003EE50(int a1, __int16 a2)
{
  int v2; // esi
  int v3; // ebp
  int result; // eax
  int v5; // eax
  void (__cdecl *v6)(int); // eax

  v2 = a1 + 1080 * a2;
  v3 = *(_DWORD *)(v2 + 11100);
  (*(void (__thiscall **)(int))(v3 + 4))(v2 + 11100);
  if ( *(_DWORD *)(v2 + 12156) )
  {
    if ( (*(char (__thiscall **)(int))(v3 + 20))(v2 + 11100) <= 0 || (*(_BYTE *)(a1 + 28) & 2) != 0 )
    {
      if ( !dword_10AA285C )
      {
        dword_10AA28D8 = 0;
        *(_DWORD *)(v2 + 12156) = 0;
        v5 = *(_DWORD *)(a1 + 28);
        LOBYTE(v5) = v5 & 0xFD;
        *(_DWORD *)(a1 + 28) = v5;
      }
      unknown_libname_9();
      v6 = *(void (__cdecl **)(int))(a1 + 16);
      if ( v6 )
        v6(a1);
    }
    (*(void (__thiscall **)(int))(v3 + 16))(v2 + 11100);
    result = 1;
  }
  else
  {
    if ( v2 != -11109 )
      (*(void (__thiscall **)(int))(v3 + 16))(v2 + 11100);
    result = 0;
  }
  return result;
}
// 10AA285C: using guessed type int dword_10AA285C;
// 10AA28D8: using guessed type int dword_10AA28D8;
