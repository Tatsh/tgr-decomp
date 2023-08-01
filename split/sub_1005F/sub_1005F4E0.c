//----- (1005F4E0) --------------------------------------------------------
int sub_1005F4E0()
{
  int v0; // edi
  int *v1; // esi

  v0 = 0;
  if ( (_WORD)dword_10AA28D4 )
  {
    v1 = dword_10A9E360;
    do
    {
      if ( !(*(int (__stdcall **)(int))(*(_DWORD *)*v1 + 108))(*v1) )
        sub_1000B790(*v1, (LPCSTR)v1[28]);
      ++v0;
      v1 += 29;
    }
    while ( v0 < (unsigned __int16)dword_10AA28D4 );
  }
  return 1;
}
// 10A9E360: using guessed type int dword_10A9E360[];
// 10AA28D4: using guessed type int dword_10AA28D4;
