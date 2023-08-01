//----- (10073020) --------------------------------------------------------
BOOL __cdecl sub_10073020(int a1)
{
  BOOL result; // eax
  int v2; // [esp+8h] [ebp-4h] BYREF

  v2 = 0;
  if ( (*(int (__stdcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 156) + 36))(*(_DWORD *)(a1 + 156), &v2) )
    result = 0;
  else
    result = (v2 & 1) == 1;
  return result;
}
