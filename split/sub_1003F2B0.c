//----- (1003F2B0) --------------------------------------------------------
int __cdecl sub_1003F2B0(int a1)
{
  int result; // eax

  if ( a1 == 12 )
    return 0;
  if ( dword_10AA28F8 )
    return 1;
  if ( g_GameMode )
  {
    if ( dword_10AA28FC && (a1 == 14 || a1 == 13) )
      result = 1;
    else
      result = dword_100AB3EC & (1 << a1);
  }
  else if ( dword_10AA289C )
  {
    result = (unsigned __int16)(HIWORD(dword_10AA27E0) & (1 << a1));
  }
  else
  {
    result = dword_10A9D010 & (1 << a1);
  }
  return result;
}
// 100AA010: using guessed type int g_GameMode;
// 100AB3EC: using guessed type int dword_100AB3EC;
// 10A9D010: using guessed type int dword_10A9D010;
// 10AA27E0: using guessed type int dword_10AA27E0;
// 10AA289C: using guessed type int dword_10AA289C;
// 10AA28F8: using guessed type int dword_10AA28F8;
// 10AA28FC: using guessed type int dword_10AA28FC;
