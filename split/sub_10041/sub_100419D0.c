//----- (100419D0) --------------------------------------------------------
void *__cdecl sub_100419D0(int a1)
{
  void *result; // eax
  int v2; // ecx

  result = dword_10AA2904;
  v2 = *(_DWORD *)(*((_DWORD *)dword_10AA2904 + 5) + 4 * dword_10A9DBD0 + 24);
  if ( v2 )
    result = (void *)(*(int (__thiscall **)(int, int, int, int, void *))(*(_DWORD *)v2 + 52))(
                       v2,
                       a1,
                       1,
                       1,
                       &unk_100AB558);
  return result;
}
// 10A9DBD0: using guessed type int dword_10A9DBD0;
