//----- (10006090) --------------------------------------------------------
BOOL atomic_sub_10006090()
{
  WaitForSingleObject(hMutex_7, 0xFFFFFFFF);
  dword_10220DD0 = 1;
  return ReleaseMutex(hMutex_7);
}
// 10220DD0: using guessed type int dword_10220DD0;
