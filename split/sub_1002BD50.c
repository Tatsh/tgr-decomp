//----- (1002BD50) --------------------------------------------------------
void __cdecl sub_1002BD50(__int16 **a1, int a2)
{
  __int16 *v2; // esi
  int v3; // ecx
  int *v4; // eax
  __int16 *v5; // esi

  v2 = *a1;
  if ( *a1 && a2 )
  {
    v3 = 0;
    if ( dword_1067B54C <= 0 )
    {
LABEL_8:
      sub_1002BDD0(v2, a2);
      v5 = (__int16 *)sub_1002BE30(*a1, a2);
      sub_1002BF00(*a1, a2, v5);
      *a1 = v5;
    }
    else
    {
      v4 = &dword_1067554C;
      while ( (__int16 *)*(v4 - 1) != v2 || *v4 != a2 )
      {
        ++v3;
        v4 += 3;
        if ( v3 >= dword_1067B54C )
          goto LABEL_8;
      }
      *a1 = (__int16 *)dword_10675550[3 * v3];
    }
  }
}
// 1002BDD0: using guessed type _DWORD __cdecl sub_1002BDD0(_DWORD, _DWORD);
// 1002BF00: using guessed type _DWORD __cdecl sub_1002BF00(_DWORD, _DWORD, _DWORD);
// 1067554C: using guessed type int dword_1067554C;
// 1067B54C: using guessed type int dword_1067B54C;
