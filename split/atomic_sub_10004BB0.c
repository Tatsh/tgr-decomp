//----- (10004BB0) --------------------------------------------------------
int atomic_sub_10004BB0()
{
  WaitForSingleObject(hMutex_4, 0xFFFFFFFF);
  dword_1022AAA8 = 1;
  ReleaseMutex(hMutex_4);
  return 1;
}
// 1022AAA8: using guessed type int dword_1022AAA8;
