//----- (10046260) --------------------------------------------------------
int sub_10046260()
{
  _DWORD *v0; // eax
  int result; // eax
  void *v2; // ecx

  g_GameMode = 2;
  sub_1003E680();
  dword_10ACED34 = 0;
  dword_10AD0984 = 1;
  g_GameMode = 2;
  dword_100AC304 = 1;
  LOBYTE(dword_10680738) = -1;
  if ( dword_10AA290C )
  {
    dword_10AA2904 = (void *)dword_10AA290C;
    result = 1;
  }
  else
  {
    dword_100AC304 = 1;
    v0 = (_DWORD *)operator new(0xC8u);
    if ( v0 )
      result = (int)sub_10048710(v0);
    else
      result = 0;
    dword_10AA290C = result;
    dword_10AA2904 = (void *)result;
    if ( result )
    {
      *(_DWORD *)(result + 4) = sub_1004B430;
      (*(void (__cdecl **)(int))(dword_10AA290C + 4))(dword_10AA290C);
      *((_DWORD *)dword_10AA2904 + 3) = 1;
      v2 = dword_10AA2904;
      *((_DWORD *)dword_10AA2904 + 26) = 1;
      debugPrint(v2);
      sub_1003DFC0();
      sub_1003E510();
      result = 1;
      *(_DWORD *)(dword_10AA29AC + 8) = sub_10044CB0;
    }
  }
  return result;
}
// 1004B430: using guessed type int __cdecl sub_1004B430(int);
// 100AA010: using guessed type int g_GameMode;
// 100AC304: using guessed type int dword_100AC304;
// 10680738: using guessed type int dword_10680738;
// 10AA290C: using guessed type int dword_10AA290C;
// 10AA29AC: using guessed type int dword_10AA29AC;
// 10AD0984: using guessed type int dword_10AD0984;
