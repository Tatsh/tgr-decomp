//----- (100790B0) --------------------------------------------------------
int __cdecl sub_100790B0(int a1)
{
  int result; // eax

  dword_118ABD0C = a1;
  dword_118ABD10 = a1;
  result = dword_118ABDEC;
  if ( dword_118ABDEC )
    result = (*(int (__stdcall **)(int, int *, int))(*(_DWORD *)dword_118ABDEC + 24))(
               dword_118ABDEC,
               &dword_118AB880,
               256);
  return result;
}
// 118AB880: using guessed type int dword_118AB880;
// 118ABD0C: using guessed type int dword_118ABD0C;
// 118ABD10: using guessed type int dword_118ABD10;
// 118ABDEC: using guessed type int dword_118ABDEC;
