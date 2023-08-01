//----- (100451E0) --------------------------------------------------------
int sub_100451E0()
{
  _DWORD *v0; // eax
  int result; // eax

  sub_100419D0((int)asc_100AD300);
  if ( dword_10AA2918 )
  {
    dword_10AA2904 = (void *)dword_10AA2918;
    result = 1;
  }
  else
  {
    v0 = (_DWORD *)operator new(0xC8u);
    if ( v0 )
      result = (int)sub_10048710(v0);
    else
      result = 0;
    dword_10AA2918 = result;
    dword_10AA2904 = (void *)result;
    if ( result )
    {
      *(_DWORD *)(result + 4) = sub_1004BDC0;
      (*(void (__cdecl **)(int))(dword_10AA2918 + 4))(dword_10AA2918);
      *((_DWORD *)dword_10AA2904 + 3) = 1;
      result = 1;
      *((_DWORD *)dword_10AA2904 + 26) = 1;
    }
  }
  return result;
}
// 1004BDC0: using guessed type int __cdecl sub_1004BDC0(int);
// 10AA2918: using guessed type int dword_10AA2918;
