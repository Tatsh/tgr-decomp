//----- (100407E0) --------------------------------------------------------
int __cdecl sub_100407E0(int a1)
{
  int v2; // eax
  int v3; // ecx

  if ( dword_10AA2904 == (void *)dword_10AA2964 && !dword_10AA28E8 )
    return -2;
  if ( g_GameMode )
  {
    v3 = dword_10AA2A00;
  }
  else
  {
    if ( byte_10AA28A8 )
      v2 = dword_10AA28AC + 12 * (char)dword_10AA28B8;
    else
      v2 = dword_10AA28A4 + 12 * (char)dword_10AA28B8;
    v3 = (unsigned __int8)byte_100B3821[2 * v2];
  }
  *(_WORD *)(a1 + 123404) = byte_100AC590[v3];
  return 1;
}
// 100407E0: using guessed type int __cdecl sub_100407E0(int);
// 100AA010: using guessed type int g_GameMode;
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28A8: using guessed type char byte_10AA28A8;
// 10AA28AC: using guessed type int dword_10AA28AC;
// 10AA28B8: using guessed type int dword_10AA28B8;
// 10AA28E8: using guessed type int dword_10AA28E8;
// 10AA2964: using guessed type int dword_10AA2964;
// 10AA2A00: using guessed type int dword_10AA2A00;
