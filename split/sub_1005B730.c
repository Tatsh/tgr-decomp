//----- (1005B730) --------------------------------------------------------
int __thiscall sub_1005B730(_BYTE *this, __int16 a2, float a3, float a4, int a5)
{
  char v5; // al
  signed __int16 v6; // dx

  v5 = this[8];
  v6 = 0;
  if ( v5 )
  {
    switch ( v5 )
    {
      case 1:
        v6 = 3;
        break;
      case 2:
        v6 = 4;
        break;
      case 4:
        v6 = 52;
        break;
    }
  }
  else
  {
    v6 = 2;
  }
  sub_1005F5A0((__int64)a3, (__int64)a4, v6, (int *)&unk_10A9D180 + 4 * a2, dword_100AB57C[6 * v6]);
  return 1;
}
