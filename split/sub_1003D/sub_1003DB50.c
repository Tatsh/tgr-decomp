//----- (1003DB50) --------------------------------------------------------
int __cdecl sub_1003DB50(_DWORD *a1, int a2, int a3)
{
  int v3; // eax
  int v5[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( !a1 || !*a1 )
    return 0;
  v5[1] = a2;
  v3 = a1[3];
  v5[0] = 1610612744;
  v5[2] = a3;
  if ( v3 )
    np_sub_10003580((int)a1, (int)v5, 12, a1[2]);
  return sub_1000C4D0(*a1, a1[2], 0, 1, v5, 12);
}
// 1000C4D0: using guessed type _DWORD __cdecl sub_1000C4D0(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
