//----- (1003F8D0) --------------------------------------------------------
int __cdecl sub_1003F8D0(int a1)
{
  int v1; // ebx

  if ( dword_10AA2850 )
  {
    v1 = a1;
    strcpy((char *)(a1 + 11109), getCaptionString(0xAFu));
    if ( dword_10A9D5C0[dword_10AA2840] )
      *(_BYTE *)(a1 + 11108) = 4;
    else
      *(_BYTE *)(a1 + 11108) = 1;
  }
  else
  {
    v1 = a1;
    strcpy((char *)(a1 + 11109), asc_100AD300);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)(v1 + 11100) + 4))(v1 + 11100);
  sub_1003EE50(v1, 0);
  return 1;
}
// 1003EE50: using guessed type _DWORD __cdecl sub_1003EE50(_DWORD, __int16);
// 10A9D5C0: using guessed type int dword_10A9D5C0[];
// 10AA2840: using guessed type int dword_10AA2840;
// 10AA2850: using guessed type int dword_10AA2850;
