//----- (1003E8D0) --------------------------------------------------------
int __cdecl sub_1003E8D0(int a1)
{
  int v1; // ebx

  _itoa(*((char *)&dword_10AA26E8 + dword_10AA28AC), (char *)(a1 + 11109), 10);
  v1 = *(_DWORD *)(a1 + 11100);
  (*(void (__thiscall **)(int))(v1 + 8))(a1 + 11100);
  if ( a1 != -11109 )
    (*(void (__thiscall **)(int))(v1 + 44))(a1 + 11100);
  return 1;
}
// 1003E8D0: using guessed type int __cdecl sub_1003E8D0(int);
// 10AA26E8: using guessed type int dword_10AA26E8;
// 10AA28AC: using guessed type int dword_10AA28AC;
