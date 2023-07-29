//----- (10004BE0) --------------------------------------------------------
int atomic_sub_10004BE0()
{
  WaitForSingleObject(hMutex_5, 0xFFFFFFFF);
  if ( !dword_1022AAF4 )
    dword_1022AAF4 = 1;
  ReleaseMutex(hMutex_5);
  return 1;
}
// 1022AAF4: using guessed type int dword_1022AAF4;
