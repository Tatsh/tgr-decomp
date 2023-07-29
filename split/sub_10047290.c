//----- (10047290) --------------------------------------------------------
int __cdecl sub_10047290(int a1)
{
  int v1; // esi

  sub_1005FBC0(1);
  if ( dword_10AA2934 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2934 + 28))(dword_10AA2934);
    dword_10AA2934 = 0;
  }
  if ( dword_10AA2938 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2938 + 28))(dword_10AA2938);
    dword_10AA2938 = 0;
  }
  if ( dword_10AA28B0 )
  {
    v1 = a1;
    sub_10043260();
    dword_10AA28B0 = 0;
  }
  else
  {
    v1 = a1;
    if ( dword_10AA28B4 )
    {
      sub_10043330();
      dword_10AA28B4 = 0;
    }
    else
    {
      sub_10045C90();
    }
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 10984) + 28))(*(_DWORD *)(v1 + 10984));
  if ( dword_10AA293C )
    (**(void (__thiscall ***)(int, int))dword_10AA293C)(dword_10AA293C, 1);
  dword_10AA293C = 0;
  return 0;
}
// 10AA28B0: using guessed type int dword_10AA28B0;
// 10AA28B4: using guessed type int dword_10AA28B4;
// 10AA2934: using guessed type int dword_10AA2934;
// 10AA2938: using guessed type int dword_10AA2938;
// 10AA293C: using guessed type int dword_10AA293C;
