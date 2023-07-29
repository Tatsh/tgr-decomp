//----- (10005BE0) --------------------------------------------------------
BOOL np_sub_10005BE0()
{
  BOOL v0; // ebp
  HANDLE *v1; // esi

  if ( g_NetworkPlay > 1 )
    sub_10072270();
  v0 = sub_1000C510((HANDLE *)&dwBytes) == 0;
  if ( hMutex_8 )
  {
    CloseHandle(hMutex_8);
    hMutex_8 = 0;
  }
  if ( hMutex_7 )
  {
    CloseHandle(hMutex_7);
    hMutex_7 = 0;
  }
  if ( hMutex_5 )
  {
    CloseHandle(hMutex_5);
    hMutex_5 = 0;
  }
  if ( hMutex_6 )
  {
    CloseHandle(hMutex_6);
    hMutex_6 = 0;
  }
  if ( hMutex_4 )
  {
    CloseHandle(hMutex_4);
    hMutex_4 = 0;
  }
  if ( hMutex_3 )
  {
    CloseHandle(hMutex_3);
    hMutex_3 = 0;
  }
  if ( hMutex_1 )
  {
    CloseHandle(hMutex_1);
    hMutex_1 = 0;
  }
  if ( hMutex_2 )
  {
    CloseHandle(hMutex_2);
    hMutex_2 = 0;
  }
  if ( hMutex_0 )
  {
    CloseHandle(hMutex_0);
    hMutex_0 = 0;
  }
  if ( hMutex )
  {
    CloseHandle(hMutex);
    hMutex = 0;
  }
  v1 = &dword_10221328;
  do
  {
    if ( *v1 )
    {
      CloseHandle(*v1);
      *v1 = 0;
    }
    v1 += 606;
  }
  while ( (int)v1 < (int)&dword_1022AAA8 );
  return v0;
}
// 1022AAA8: using guessed type int dword_1022AAA8;
// 1022AF18: using guessed type int g_NetworkPlay;
