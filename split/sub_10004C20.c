//----- (10004C20) --------------------------------------------------------
int sub_10004C20()
{
  WaitForSingleObject(hMutex_6, 0xFFFFFFFF);
  if ( !dword_10221314 )
    dword_10221314 = 1;
  ReleaseMutex(hMutex_6);
  return 1;
}
// 10221314: using guessed type int dword_10221314;
