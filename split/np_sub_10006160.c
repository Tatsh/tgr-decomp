//----- (10006160) --------------------------------------------------------
BOOL np_sub_10006160()
{
  WaitForSingleObject(g_hMutex_8, 0xFFFFFFFF);
  if ( sub_10003460() >= dword_1022AF00 )
    g_usingGameMode4 = 1;
  return ReleaseMutex(g_hMutex_8);
}
// 1022AF00: using guessed type int dword_1022AF00;
// 1022AF14: using guessed type int g_usingGameMode4;
