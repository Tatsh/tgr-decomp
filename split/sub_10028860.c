//----- (10028860) --------------------------------------------------------
unsigned __int8 *__cdecl sub_10028860(struct_a1 *a1)
{
  int v1; // edx
  unsigned __int8 *result; // eax
  unsigned __int8 *v3; // edi
  int v4; // eax
  int v5; // eax

  v1 = a1->dword264;
  if ( (v1 & 0x40) != 0 )
  {
    dword_105553F8 = a1->dword2A0;
    result = a1->punsigned___int84C;
  }
  else
  {
    v3 = byte_11829870;
    if ( a1->dword26C )
    {
      result = *(unsigned __int8 **)&a1->gap27C[4 * a1->dword278 + 4];
      if ( !result )
        result = a1->punsigned___int8280;
      dword_105553F8 = a1->dword290;
    }
    else
    {
      if ( (v1 & 0x10) == 0 )
        sub_10025AB0(
          byte_11829870,
          a1->dword2A0,
          *(_DWORD *)&a1->gap64[64 * a1->dword5C + 4],
          (int)a1->punsigned___int84C,
          a1->dword50,
          *(_DWORD *)&a1->gap64[64 * a1->dword5C],
          a1->dword54,
          a1->dword58,
          a1->dword5C,
          a1->dword60,
          a1->gap64,
          v1,
          a1->dword268,
          a1->byte294,
          a1->byte295,
          a1->byte296,
          a1->byte297,
          a1->byte298,
          a1->byte299,
          a1->byte29A,
          a1->byte29B,
          a1->dword29C);
      dword_105553F8 = a1->dword2A0;
      v4 = a1->dword264;
      if ( (v4 & 2) != 0 && (v4 & 0x80u) != 0 )
      {
        a1->dword18 = a1->dword1C;
        sub_10028A10((int)a1, (int *)byte_11829870);
      }
      if ( a1->dword2A4 != a1->dword8 || a1->dword2A8 != a1->dwordC )
      {
        v5 = sub_10028B20((int)&unk_104D51D0, COERCE_FLOAT(byte_11829870), (int)a1);
        a1->dword40 = v5;
        dword_105553F8 = v5;
        v3 = (unsigned __int8 *)&unk_104D51D0;
      }
      if ( a1->dword3C )
        dword_105553F8 = (int)sub_10009660(v3, v3, a1->dword40, a1->dword10, &a1->dword3C);
      else
        dword_105553F8 = (int)sub_100098A0(v3, v3, a1->dword40, a1->dword10);
      result = v3;
    }
  }
  return result;
}
// 105553F8: using guessed type int dword_105553F8;
