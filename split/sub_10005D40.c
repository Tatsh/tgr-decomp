//----- (10005D40) --------------------------------------------------------
int sub_10005D40()
{
  int v0; // esi
  int result; // eax

  WaitForSingleObject(hMutex_1, 0xFFFFFFFF);
  if ( dword_10220DD4 < 0 )
  {
    ReleaseMutex(hMutex_1);
    result = -1;
  }
  else
  {
    v0 = dword_10220D90[dword_10220DD4--];
    ReleaseMutex(hMutex_1);
    result = v0;
  }
  return result;
}
// 10220DD4: using guessed type int dword_10220DD4;
