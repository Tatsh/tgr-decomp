//----- (1001A570) --------------------------------------------------------
unk0 *__cdecl sub_1001A570(_DWORD *a1, int a2, int a3, int a4, unk0 *a5, IID *a6)
{
  unk0 *result; // eax

  if ( !a1 )
    return 0;
  if ( a6 )
    result = sub_1001B880((unk0 *)a1, a2, a3, a4, (int)a5, (int)a6, &a5, 0);
  else
    result = (unk0 *)sub_1001B490(a2, a3, a4, a5, &a5, 0);
  if ( !result )
    result = a5;
  return result;
}
// 1001B490: using guessed type _DWORD __stdcall sub_1001B490(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
