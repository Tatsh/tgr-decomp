//----- (10020DC0) --------------------------------------------------------
int *__cdecl sub_10020DC0(int *a1)
{
  int v1; // eax
  float *v2; // esi
  bool v3; // zf
  int v4; // eax
  char *v5; // edi
  float *v6; // eax
  int v7; // eax
  float *v8; // eax
  float v10[16]; // [esp+10h] [ebp-40h] BYREF

  v1 = *a1;
  v2 = (float *)a1[1];
  if ( (*a1 & 0x10000) != 0 )
  {
    if ( (v1 & 0x20000) != 0 )
      qmemcpy(flt_104BBEC0, v2, 0x40u);
    else
      sub_100306C0(v2, flt_104BBEC0, flt_104BBEC0);
  }
  else
  {
    if ( (v1 & 0x20000) != 0 )
    {
      v3 = (v1 & 0x40000) == 0;
      v4 = dword_100A79DC;
      if ( v3 )
      {
        v5 = (char *)&unk_104BBED0 + 64 * dword_100A79DC;
      }
      else
      {
        if ( dword_100A79DC == 10 )
          v4 = 0;
        dword_100A79DC = v4 + 1;
        v5 = (char *)&unk_104BBED0 + 64 * v4 + 64;
      }
    }
    else
    {
      if ( dword_100A79DC )
        v6 = (float *)((char *)&unk_104BBED0 + 64 * dword_100A79DC);
      else
        v6 = 0;
      sub_100306C0(v2, v6, v10);
      if ( (*a1 & 0x40000) != 0 )
      {
        v7 = dword_100A79DC;
        if ( dword_100A79DC == 10 )
          v7 = 0;
        dword_100A79DC = v7 + 1;
        v5 = (char *)&unk_104BBED0 + 64 * v7 + 64;
      }
      else
      {
        v5 = (char *)&unk_104BBED0 + 64 * dword_100A79DC;
      }
      v2 = v10;
    }
    qmemcpy(v5, v2, 0x40u);
    dword_104C5180 = 0;
  }
  if ( dword_100A79DC )
    v8 = (float *)((char *)&unk_104BBED0 + 64 * dword_100A79DC);
  else
    v8 = 0;
  sub_100306C0(v8, flt_104BBEC0, &flt_104C4D10);
  return a1 + 2;
}
// 100A79DC: using guessed type int dword_100A79DC;
// 104C4D10: using guessed type float flt_104C4D10;
// 104C5180: using guessed type int dword_104C5180;
