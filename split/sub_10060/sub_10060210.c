//----- (10060210) --------------------------------------------------------
int __stdcall sub_10060210(int a1)
{
  dword_10AA33B8 = g_Width;
  *(_DWORD *)dword_10AA2E80 = g_Width / 2;
  dword_10AA33B4 = g_Height;
  *((_DWORD *)dword_10AA2E80 + 1) = g_Height / 2;
  memset(&dword_10AA3398, 0, 0x1Cu);
  return 1;
}
// 100A81C0: using guessed type int g_Width;
// 100A81C4: using guessed type int g_Height;
// 10AA3398: using guessed type int dword_10AA3398;
// 10AA33B4: using guessed type int dword_10AA33B4;
// 10AA33B8: using guessed type int dword_10AA33B8;
