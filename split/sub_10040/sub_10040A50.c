//----- (10040A50) --------------------------------------------------------
int __cdecl sub_10040A50(int a1)
{
  int v1; // edi

  sprintf(byte_10AA2518, "%d", dword_10AA28A0 + 1);
  strcpy((char *)(a1 + 11109), byte_10AA2518);
  v1 = *(_DWORD *)(a1 + 11100);
  (*(void (__thiscall **)(int))(v1 + 8))(a1 + 11100);
  if ( a1 != -11109 )
    (*(void (__thiscall **)(int))(v1 + 44))(a1 + 11100);
  return 1;
}
// 10AA28A0: using guessed type int dword_10AA28A0;
